library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity vga is
  port(clk:          in STD_LOGIC;
       ra:           out STD_LOGIC_VECTOR(31 downto 0);
		 rd:           out STD_LOGIC_VECTOR(31 downto 0));
end;

architecture Behavioral of vga is
	component vgaMem
     port(clk, we:  in STD_LOGIC;
       a, wa:    in STD_LOGIC_VECTOR(31 downto 0);
		 wd:       in STD_LOGIC_VECTOR(31 downto 0);
       rd:       out STD_LOGIC_VECTOR(31 downto 0));
   end component;
	
	signal vgaReadAdr: STD_LOGIC_VECTOR(31 downto 0);
begin

  -- This is where we just continuously read from VGA???
  for i in 0 to 7 loop
    vgaReadAdr <= "111111111111111111111111" & std_logic_vector(to_unsigned(i)) & "00";
  end loop;

end Behavioral;

