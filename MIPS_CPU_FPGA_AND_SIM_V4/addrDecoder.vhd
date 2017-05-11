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
  process(memwrite) begin
    if (memwrite = '0') then vga_write <= '0';
    end if;
    if (memwrite = '0') then data_write <= '0';
    end if;
  end process;
  
  process(address) begin
    case address is
		when "11111111111111111111111111100000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[0]
			end if;
		when "11111111111111111111111111100100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[1] 
			end if;
		when "11111111111111111111111111101000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[2]
			end if;
		when "11111111111111111111111111101100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[3]
			end if;
		when "11111111111111111111111111110000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[4]
			end if;
		when "11111111111111111111111111110100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[5]
			end if;
		when "11111111111111111111111111111000" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[6]
			end if;
		when "11111111111111111111111111111100" => 
			if memwrite = '1' then vga_write <= '1'; -- vga[7]
			end if;
	 
		--when "11111111111111111111111111110100" => 
		--	if memwrite = '1' then vga_write <= '1';  -- x
		--when "11111111111111111111111111111000" => 
		--	if memwrite = '1' then vga_write <= '1';  -- y
	 
		
      when others => 
			if memwrite = '1' then data_write <= '1';
			end if;
			
    end case;
  end process;

end Behavioral;

