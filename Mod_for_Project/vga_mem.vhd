----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:55:50 05/04/2017 
-- Design Name: 
-- Module Name:    vga_mem - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity vga_mem is
  port(clk:          in  STD_LOGIC;
       we:           in  STD_LOGIC;
		 wa:           in  STD_LOGIC_VECTOR(31 downto 0);
       wd:           in  STD_LOGIC_VECTOR(31 downto 0);
		 ra:           in  STD_LOGIC_VECTOR(31 downto 0);
		 rd:           out STD_LOGIC_VECTOR(31 downto 0));
  end vga_mem;

architecture Behavioral of vga_mem is
  type ramtype is array(9 downto 0) of STD_LOGIC_VECTOR(31 downto 0);
  signal mem: ramtype;

begin
  process(clk) begin
    if clk'event and clk = '1' then
      if we = '1' then mem(to_integer(unsigned(wa))) <= wd;
	   end if;
    end if;
  end process;
  
  process(ra, mem) begin
    if (to_integer(unsigned(ra)) = 0) then rd <= X"00000000";
	 else rd <= mem(to_integer(unsigned(ra)));
	 end if;
  end process;
  
end Behavioral;

