----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:08:14 05/17/2017 
-- Design Name: 
-- Module Name:    vgaTest - Behavioral 
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

entity vgaTest is
end vgaTest;

architecture Behavioral of vgaTest is
  component vgaBoxes
    port( clk50_in :  in std_logic;
          red_out :   in std_logic_vector(2 downto 0);
          green_out : in std_logic_vector(2 downto 0);
          blue_out :  in std_logic_vector(2 downto 0);
          hs_out :    out std_logic;
          vs_out :    out std_logic
	 );
  end component;
  
  signal red:   std_logic_vector(2 downto 0);
  signal green: std_logic_vector(2 downto 0);
  signal blue:  std_logic_vector(2 downto 0);
begin

red <= "100";
green <= "010";
blue <= "001";

testBox: vgaBoxes port map(clk50, red, green, blue, hs_out, vs_out);

end Behavioral;

