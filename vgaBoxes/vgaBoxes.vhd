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

entity vgaBoxes is
end vgaBoxes;

architecture Behavioral of vgaBoxes is
  component boxColor
    port(number:     in STD_LOGIC_VECTOR(31 downto 0);
         green_out:  out STD_LOGIC_VECTOR(2 downto 0);
		   red_out:    out STD_LOGIC_VECTOR(2 downto 0);
		   blue_out:   out STD_LOGIC_VECTOR(2 downto 0)
	 );
  end component;

  signal green_out1: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out2: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out3: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out4: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out5: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out6: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out7: out STD_LOGIC_VECTOR(2 downto 0);
  signal green_out8: out STD_LOGIC_VECTOR(2 downto 0);

  signal red_out1: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out2: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out3: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out4: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out5: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out6: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out7: out STD_LOGIC_VECTOR(2 downto 0);
  signal red_out8: out STD_LOGIC_VECTOR(2 downto 0);

  signal blue_out1: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out2: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out3: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out4: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out5: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out6: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out7: out STD_LOGIC_VECTOR(2 downto 0);
  signal blue_out8: out STD_LOGIC_VECTOR(2 downto 0);


begin

-- We need to connect to vgamem in the MIPS cpu
-- This will be with some sort of clock that
-- is significantly slower than the MIPS clock (clk25)

box1: port map(vgamem(0), green_out1, red_out1, blue_out1);
box2: port map(vgamem(1), green_out2, red_out2, blue_out2);
box3: port map(vgamem(2), green_out3, red_out3, blue_out3);
box4: port map(vgamem(3), green_out4, red_out4, blue_out4);
box5: port map(vgamem(4), green_out5, red_out5, blue_out5);
box6: port map(vgamem(5), green_out6, red_out6, blue_out6);
box7: port map(vgamem(6), green_out7, red_out7, blue_out7);
box8: port map(vgamem(7), green_out8, red_out8, blue_out8);


-- We need to display the boxes on the screen. Derek will do this

end Behavioral;
