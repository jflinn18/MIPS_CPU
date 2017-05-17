----------------------------------------------------------------------------------
-- All Eight of the Boxes
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity vgaBoxes is port(
  clk50_in :  in std_logic;
  red_out :   out std_logic_vector(2 downto 0);
  green_out : out std_logic_vector(2 downto 0);
  blue_out :  out std_logic_vector(2 downto 0);
  hs_out :    out std_logic;
  vs_out :    out std_logic
);
end vgaBoxes;


architecture Behavioral of vgaBoxes is
  component boxColor
    port(number:     in STD_LOGIC_VECTOR(31 downto 0);
         green_out:  out STD_LOGIC_VECTOR(2 downto 0);
		   red_out:    out STD_LOGIC_VECTOR(2 downto 0);
		   blue_out:   out STD_LOGIC_VECTOR(2 downto 0)
	 );
  end component;
  
  
  signal green_out1: STD_LOGIC_VECTOR(2 downto 0);
  signal green_out2: STD_LOGIC_VECTOR(2 downto 0);
  signal green_out3: STD_LOGIC_VECTOR(2 downto 0);
  signal green_out4: STD_LOGIC_VECTOR(2 downto 0);
  --signal green_out5: STD_LOGIC_VECTOR(2 downto 0);
  --signal green_out6: STD_LOGIC_VECTOR(2 downto 0);
  --signal green_out7: STD_LOGIC_VECTOR(2 downto 0);
  --signal green_out8: STD_LOGIC_VECTOR(2 downto 0);

  signal red_out1: STD_LOGIC_VECTOR(2 downto 0);
  signal red_out2: STD_LOGIC_VECTOR(2 downto 0);
  signal red_out3: STD_LOGIC_VECTOR(2 downto 0);
  signal red_out4: STD_LOGIC_VECTOR(2 downto 0);
  --signal red_out5: STD_LOGIC_VECTOR(2 downto 0);
  --signal red_out6: STD_LOGIC_VECTOR(2 downto 0);
  --signal red_out7: STD_LOGIC_VECTOR(2 downto 0);
  --signal red_out8: STD_LOGIC_VECTOR(2 downto 0);

  signal blue_out1: STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out2: STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out3: STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out4: STD_LOGIC_VECTOR(2 downto 0);
  --signal blue_out5: STD_LOGIC_VECTOR(2 downto 0);
  --signal blue_out6: STD_LOGIC_VECTOR(2 downto 0);
  --signal blue_out7: STD_LOGIC_VECTOR(2 downto 0);
  --signal blue_out8: STD_LOGIC_VECTOR(2 downto 0);
  
  
  signal clk25  	 : std_logic;
  signal hcounter  : integer range 0 to 800;
  signal vcounter  : integer range 0 to 521;
  signal color: std_logic_vector(8 downto 0);

begin
  

-- We need to connect to vgamem in the MIPS cpu
-- This will be with some sort of clock that
-- is significantly slower than the MIPS clock (clk25)





--box1: boxColor port map(vgamem(0), green_out1, red_out1, blue_out1);
--box2: boxColor port map(vgamem(1), green_out2, red_out2, blue_out2);
--box3: boxColor port map(vgamem(2), green_out3, red_out3, blue_out3);
--box4: boxColor port map(vgamem(3), green_out4, red_out4, blue_out4);
--box5: boxColor port map(vgamem(4), green_out5, red_out5, blue_out5);
--box6: boxColor port map(vgamem(5), green_out6, red_out6, blue_out6);
--box7: boxColor port map(vgamem(6), green_out7, red_out7, blue_out7);
--box8: boxColor port map(vgamem(7), green_out8, red_out8, blue_out8);


tempBox1: boxColor port map(x"00000001", green_out1, red_out1, blue_out1);
tempBox2: boxColor port map(x"00000002", green_out2, red_out2, blue_out2);
tempBox3: boxColor port map(x"00000003", green_out3, red_out3, blue_out3);
tempBox4: boxColor port map(x"00000004", green_out4, red_out4, blue_out4);

-- generate a 25Mhz clock
process (clk50_in)
  begin
  
    if clk50_in'event and clk50_in='1' then
      clk25 <= not clk25;
    end if;
  end process;


p2: process(clk25, hcounter, vcounter)

	variable x: integer range 0 to 639;
	variable y: integer range 0 to 479;
	
	begin
	x := hcounter - 144;
	y := vcounter - 31;
  	if clk25'event and clk25 = '1' then
	
	   --Box 1
		if ( (( x > 50) and (x < 150)) and ((y > 200) and (y < 300)) ) then
		   red_out <= red_out1;
		   green_out <= green_out1;
		   blue_out <= blue_out1;
	   --Box 2
		elsif ( (( x > 200) and (x < 300)) and ((y > 200) and (y < 300)) ) then
		   red_out <= red_out2;
		   green_out <= green_out2;
		   blue_out <= blue_out2;
	   --Box 3
		elsif ( (( x > 350) and (x < 450)) and ((y > 200) and (y < 300)) ) then
		   red_out <= red_out3;
		   green_out <= green_out3;
		   blue_out <= blue_out3;
	   --Box 4
		elsif ( (( x > 500) and (x < 600)) and ((y > 200) and (y < 300)) ) then
		   red_out <= red_out4;
		   green_out <= green_out4;
		   blue_out <= blue_out4;
    	else
			-- if not traced, set it to "black" color
			red_out <= "000";
			green_out <= "000";
			blue_out <= "000";
    	end if;
	




	if hcounter > 0 and hcounter < 97 then
      	hs_out <= '0';
    	else
      	hs_out <= '1';
    	end if;
		-- Here is the timing for vertical synchronization.
		-- (Refer to p. 24, Xilinx, Spartan-3 Starter Kit Board User Guide)
	 	-- Pulse width: Tpw = 1600 cycles (2 lines) @ 25 MHz
	 	-- Back porch: Tbp = 23200 cycles (29 lines)
		-- Display time: Tdisp = 38400 cycles (480 lines)
	 	-- Front porch: Tfp = 8000 cycles (10 lines)
		-- Sync pulse time (total cycles) Ts = 416800 cycles (521 lines)
    	if vcounter > 0 and vcounter < 3 then
      	vs_out <= '0';
    	else
      	vs_out <= '1';
    	end if;
	 	-- horizontal counts from 0 to 799
    	hcounter <= hcounter+1;
    	if hcounter = 800 then
      	vcounter <= vcounter+1;
      	hcounter <= 0;
    	end if;
	 	-- vertical counts from 0 to 519
    	if vcounter = 521 then		    
      	vcounter <= 0;
    	end if;
  end if;
end process;




-- We need to display the boxes on the screen. Derek will do this

end Behavioral;
