
library IEEE; 
use IEEE.STD_LOGIC_1164.all;

entity maindec is -- main control decoder
  port(op:                 in  STD_LOGIC_VECTOR(5 downto 0);
       memtoreg:           out STD_LOGIC; 
		 memwrite:           out STD_LOGIC;
		 branch:             out STD_LOGIC_VECTOR(1 downto 0);
       alusrc:             out STD_LOGIC;
       regdst, regwrite:   out STD_LOGIC;
       jump:               out STD_LOGIC;
       aluop:              out  STD_LOGIC_VECTOR(2 downto 0));
end;

architecture behave of maindec is
  signal controls: STD_LOGIC_VECTOR(10 downto 0);
begin
  process(op) begin
    case op is
      when "000000" => controls <= "11000000010"; -- Rtype      The funct codes are in the aludec
      when "100011" => controls <= "10100010000"; -- LW
      when "101011" => controls <= "0X1001X0000"; -- SW
      when "000100" => controls <= "0X0010X0001"; -- BEQ
      when "001000" => controls <= "10100000000"; -- ADDI
      when "000010" => controls <= "0XXXX0X1XXX"; -- J 
		when "001101" => controls <= "10100000011"; -- ori    
		when "000101" => controls <= "0X0100X0001"; -- bne
		when "001110" => controls <= "10100000100"; -- xori
		when "001010" => controls <= "10100000101"; -- slti
		when "001100" => controls <= "10100000111"; -- andi
		
      when others   => controls <= "-----------"; -- illegal op
    end case;
  end process;

  regwrite <= controls(10);
  regdst   <= controls(9);
  alusrc   <= controls(8);
  branch   <= controls(7 downto 6);
  memwrite <= controls(5);
  memtoreg <= controls(4);
  jump     <= controls(3);
  aluop    <= controls(2 downto 0);
end;


