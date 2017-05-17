----------------------------------------------------------------------------------
-- General Box Color
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.numeric_std.all;


entity boxColor is
  port(number:     in STD_LOGIC_VECTOR(31 downto 0);
       green_out:  out STD_LOGIC_VECTOR(2 downto 0);
		 red_out:    out STD_LOGIC_VECTOR(2 downto 0);
		 blue_out:   out STD_LOGIC_VECTOR(2 downto 0)
  );
end boxColor;

architecture behavioral of boxColor is
  signal lowerFour: STD_LOGIC_VECTOR(3 downto 0);

begin
  lowerFour <= number(3 downto 0);

  process(lowerFour) begin
    case lowerFour is
	 --need to change logic in when statements
		when "0000" =>         -- 0
		  green_out <= "111";
		  red_out   <= "111";
		  blue_out  <= "111";
		  
		when "0001" =>         -- 1
		  green_out <= "011";
		  red_out   <= "000";
		  blue_out  <= "111";
		  
		when "0010" =>         -- 2
		  green_out <= "000";
		  red_out   <= "100";
		  blue_out  <= "111";
		  
		when "0011" =>         -- 3
		  green_out <= "101";
		  red_out   <= "111";
		  blue_out  <= "111";
		  
		when "0100" =>         -- 4
		  green_out <= "001";
		  red_out   <= "110";
		  blue_out  <= "001";
		  
		when "0101" =>         -- 5
		  green_out <= "100";
		  red_out   <= "111";
		  blue_out  <= "001";

		when "0110" =>         -- 6
		  green_out <= "110";
		  red_out   <= "111";
		  blue_out  <= "000";
		  
		when "0111" =>         -- 7
		  green_out <= "111";
		  red_out   <= "110";
		  blue_out  <= "000";
		  
		when "1000" =>         -- 8
		  green_out <= "101";
		  red_out   <= "001";
		  blue_out  <= "010";
		  
		when "1001" =>         -- 9
		  green_out <= "111";
		  red_out   <= "000";
		  blue_out  <= "111";
		  
		  
		  
		when others =>         -- illegal
		  green_out <= "000";
		  red_out   <= "000";
		  blue_out  <= "000";
	 end case;
  end process;

end behavioral;