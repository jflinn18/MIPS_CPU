----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:12:50 05/04/2017 
-- Design Name: 
-- Module Name:    vga_module - Behavioral 
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
library work;
use work.commonPak.all;

entity vga_module is
  Port(clk:           in STD_LOGIC);
end vga_module;

architecture Behavioral of vga_module is
  component vga_mem
      port(clk:       in  STD_LOGIC;
        we:           in  STD_LOGIC;
		  wa:           in  STD_LOGIC_VECTOR(31 downto 0);
        wd:           in  STD_LOGIC_VECTOR(31 downto 0);
		  ra:           in  STD_LOGIC_VECTOR(31 downto 0);
		  rd:           out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  
  component Pixel_On_Text
	 port (clk:            in std_logic;
		    displayText:    in string (1 to 8) := (others => NUL);	-- Changed from string to a std_logic_vector
		-- top left corner of the text
		    position:       in point_2d := (0, 0);
		-- current pixel postion
		    horzCoord:      in integer;
		    vertCoord:      in integer;
		
		    pixel:          out std_logic := '0'
	);

  end component;
  
  signal we, pixel_result: STD_LOGIC;
  signal wa, wd, ra, rd: STD_LOGIC_VECTOR(31 downto 0);
  
  signal h: integer;
  signal v: integer;
  signal displayText: string (1 to 8) := (others => NUL);
  
  
begin
  h <= 50; -- this is wrong
  v <= 50; -- this is wrong
  
  
  VGAMem: vga_mem port map(clk, we, wa, wd, ra, rd);
  pixel_out: entity Pixel_On_Text generic map ( textLength => 8)
    port map(clk => clk,
		       displayText => displayText,
				 position => (50, 50),
				 horzCoord => h,
				 vertCoord => v,
				 pixel => pixel_result
	 );

end;

