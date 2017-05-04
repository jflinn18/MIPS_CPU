library IEEE; 
use IEEE.STD_LOGIC_1164.all; 
use IEEE.STD_LOGIC_UNSIGNED.all;

entity alu is -- Arithmetic/Logic unit with add/sub, AND, OR, set less than
  port(a, b:       in  STD_LOGIC_VECTOR(31 downto 0);
		 shamt:      in STD_LOGIC_VECTOR(4 downto 0);
       alucontrol: in  STD_LOGIC_VECTOR(3 downto 0);
       result:     inout STD_LOGIC_VECTOR(31 downto 0);
       zero:       out STD_LOGIC);
end;

architecture behave of alu is

  component ShiftLeft
		port( a : in STD_LOGIC_VECTOR(31 downto 0);
			shamt : in STD_LOGIC_VECTOR(4 downto 0);
				c : out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  component ShiftRight
		port( a : in STD_LOGIC_VECTOR(31 downto 0);
			shamt : in STD_LOGIC_VECTOR(4 downto 0);
				c : out STD_LOGIC_VECTOR(31 downto 0));
  end component;

  signal b2, sum, slt, shl_s, shr_s: STD_LOGIC_VECTOR(31 downto 0);
begin
  shLeft: ShiftLeft port map(b, shamt, shl_s);   -- alucontrol = "101"
  shRight: ShiftRight port map(b, shamt, shr_s); -- alucontrol = "110"

  b2 <= not b when alucontrol(3) = '1' else b;
  sum <= a + b2 + alucontrol(3);
  -- slt should be 1 if most significant bit of sum is 1
  slt <= X"00000001" when sum(31) = '1' else X"00000000";
  with alucontrol(2 downto 0) select result <=
    a and b when "000",
    a or b  when "001",
	 a xor b when "100",
    sum     when "010",
	 shl_s   when "101",
	 shr_s   when "110",
	 a nor b when "111",
    slt     when others; -- default for slt is "011"
  zero <= '1' when result = X"00000000" else '0';
end;
