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
		 data_write:         out STD_LOGIC );
end addrDecoder;

architecture Behavioral of addrDecoder is
  signal controls: STD_LOGIC_VECTOR(10 downto 0);
  --signal keyboard_write: STD_LOGIC;      -- Don't need to write to the keyboard....(think about it)
begin
  process(address, memwrite) begin
    if memwrite = '0' then
	   vga_write <= '0';
      data_write <= '0';
	 elsif memwrite = '1' then
      case address is
		  when "00000000000000001111111111100000" =>  -- 0xFFFFFFE0
			 vga_write <= '1'; -- vga[0]
			 data_write <= '0';
		  when "00000000000000001111111111100100" =>  -- 0xFFFFFFE4
			 vga_write <= '1'; -- vga[1] 
			 data_write <= '0';
		  when "00000000000000001111111111101000" =>  -- 0xFFFFFFE8
			 vga_write <= '1'; -- vga[2]
			 data_write <= '0';
		  when "00000000000000001111111111101100" =>  -- 0xFFFFFFEC
			 vga_write <= '1'; -- vga[3]
			 data_write <= '0';
		  when "00000000000000001111111111110000" =>  -- 0xFFFFFFF0
			 vga_write <= '1'; -- vga[4]
			 data_write <= '0';
		  when "00000000000000001111111111110100" =>  -- 0xFFFFFFF4
			 vga_write <= '1'; -- vga[5]
			 data_write <= '0';
		  when "00000000000000001111111111111000" =>  -- 0xFFFFFFF8
			 vga_write <= '1'; -- vga[6]
			 data_write <= '0';
		  when "00000000000000001111111111111100" =>  -- 0xFFFFFFFC
			 vga_write <= '1'; -- vga[7]
			 data_write <= '0';
        when others => 
          data_write <= '1';
			 vga_write <= '0';
			
      end case;	 
	 end if;
  end process;

end Behavioral;

