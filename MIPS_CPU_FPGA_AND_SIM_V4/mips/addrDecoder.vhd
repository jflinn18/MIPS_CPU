----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:40:03 05/02/2017 
-- Design Name: 
-- Module Name:    addrDecoder - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
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

entity addrDecoder is
  port(address:            in STD_LOGIC_VECTOR(31 downto 0);
       memwrite:           in STD_LOGIC;
		 vga_write:          out STD_LOGIC;
		 mem_write:          out STD_LOGIC; );
end addrDecoder;

architecture Behavioral of addrDecoder is
  signal controls: STD_LOGIC_VECTOR(10 downto 0);
  --signal keyboard_write: STD_LOGIC;      -- Don't need to write to the keyboard....(think about it)
begin
  if memwrite = '0' then vga_write <= '0';
  if memwrite = '0' then mem_write <= '0';
  
  process(address, vga_write, mem_write) begin
    case address is
		when "11111111111111111111111111010100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[0]
		when "11111111111111111111111111011000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[1]
		when "11111111111111111111111111011100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[2]
		when "11111111111111111111111111000000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[3]
		when "11111111111111111111111111100100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[4]
		when "11111111111111111111111111101000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[5]
		when "11111111111111111111111111101100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[6]
		when "11111111111111111111111111110000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[7]
	 
		when "11111111111111111111111111110100" => 
			if memwrite = '1' then vga_write <= '1';  -- x
		when "11111111111111111111111111111000" => 
			if memwrite = '1' then vga_write <= '1';  -- y
	 
		
      when others => 
			if memwrite = '1' then mem_write <= '1';
			
    end case;
  end process;

end Behavioral;

