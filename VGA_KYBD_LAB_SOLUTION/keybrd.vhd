--
-- This design accepts keystrokes from a PS/2 keyboard and displays a numeral on
-- the 7-segment display of the XSA Board if one of the keys 0-9 is pressed.
-- Otherwise, it displays an E.
--


library IEEE, unisim;
use IEEE.std_logic_1164.all;
use IEEE.NUMERIC_STD.all;
use unisim.vcomponents.all;
use work.ps2_kbd_pckg.all;


entity test_kbd is
  generic(
    FREQ     :     natural := 100_000   -- frequency of main clock (KHz)
    );
  port(
    clk       : in  std_logic;           -- main clock
    ps2_clk   : in  std_logic;           -- keyboard clock
    ps2_data  : in  std_logic;           -- keyboard data
    s         : out std_logic_vector(31 downto 0);  -- 32 bit output for Joseph
	 scancode_bus  : out std_logic_vector(7 downto 0)   -- scancode from keyboard module
    );
end entity;


architecture arch of test_kbd is

  constant YES : std_logic := '1';
  constant NO  : std_logic := '0';

  signal rdy       : std_logic;         -- indicates when scancode is available
  signal s_x       : std_logic_vector(31 downto 0);  -- next state of LED segments
  signal kbd_error : std_logic;         -- error receiving scancode from keyboard
  signal scancode  : std_logic_vector(7 downto 0);


  -- 32 bit codes for Derek to get
  constant DIG_1    : std_logic_vector(31 downto 0) := "00000000000000000000000000110001";
  constant DIG_2    : std_logic_vector(31 downto 0) := "00000000000000000000000000110010";
  constant DIG_3    : std_logic_vector(31 downto 0) := "00000000000000000000000000110011";
  constant DIG_4    : std_logic_vector(31 downto 0) := "00000000000000000000000000110100";
  constant DIG_5    : std_logic_vector(31 downto 0) := "00000000000000000000000000110101";
  constant DIG_6    : std_logic_vector(31 downto 0) := "00000000000000000000000000110110";
  constant DIG_7    : std_logic_vector(31 downto 0) := "00000000000000000000000000110111";
  constant DIG_8    : std_logic_vector(31 downto 0) := "00000000000000000000000000111000";
  constant DIG_9    : std_logic_vector(31 downto 0) := "00000000000000000000000000111001";
  constant DIG_0    : std_logic_vector(31 downto 0) := "00000000000000000000000000110000";
  constant LETTER_E : std_logic_vector(31 downto 0) := "00000000000000000000000001000101";


begin

  u0 : ps2_kbd     -- Make an object of type ps2_kbd
    generic map(
      FREQ     => FREQ
      )
    port map(
      clk      => clk,                  -- clock for the keyboard interface
      rst      => kbd_error,            -- reset the keyboard intfc whenever there is an error receiving a scancode
      ps2_clk  => ps2_clk,              -- clock from the keyboard
      ps2_data => ps2_data,             -- serial data from the keyboard (valid on falling edge of ps2_clk)
      scancode => scancode,             -- the scancode received from the keyboard
      rdy      => rdy,                  -- indicates when a scancode from the keyboard is available
      error    => kbd_error             -- indicates an error in receiving a scancode from the keyboard
      );

  -- this maps the scancode received from the keyboard into a pattern on the 7-segment display
  s_x <= DIG_1 when scancode = "00010110" else
         DIG_2 when scancode = "00011110" else
         DIG_3 when scancode = "00100110" else
         DIG_4 when scancode = "00100101" else
         DIG_5 when scancode = "00101110" else
         DIG_6 when scancode = "00110110" else
         DIG_7 when scancode = "00111101" else
         DIG_8 when scancode = "00111110" else
         DIG_9 when scancode = "01000110" else
         DIG_0 when scancode = "01000101" else
         LETTER_E;

  -- update the LED display
  process(clk)
  begin
    if rising_edge(clk) then
      if rdy = YES then
        s <= s_x;                       -- update the display each time a scancode is received
		  scancode_bus <= scancode;        -- output the scancode to the VGA each time it's recieved
      end if;
    end if;
  end process;

end architecture;
