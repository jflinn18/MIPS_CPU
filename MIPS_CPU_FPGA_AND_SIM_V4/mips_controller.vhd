library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity controller is -- single cycle control decoder
  port(op, funct:          in  STD_LOGIC_VECTOR(5 downto 0);
       zero:               in  STD_LOGIC;
       memtoreg:           out STD_LOGIC_VECTOR(1 downto 0);
		 memwrite:           out STD_LOGIC;
       pcsrc, alusrc:      out STD_LOGIC;
       regdst, regwrite:   out STD_LOGIC;
       jump:               out STD_LOGIC;
       alucontrol:         out STD_LOGIC_VECTOR(3 downto 0));
end;

architecture struct of controller is
  component maindec
    port(op:                 in  STD_LOGIC_VECTOR(5 downto 0);
         memtoreg:           out STD_LOGIC_VECTOR(1 downto 0);
			memwrite:           out STD_LOGIC;
			branch:             out STD_LOGIC_VECTOR(1 downto 0);
         alusrc:             out STD_LOGIC;
         regdst, regwrite:   out STD_LOGIC;
         jump:               out STD_LOGIC;
         aluop:      		  out  STD_LOGIC_VECTOR(2 downto 0));
  end component;
  component aludec
    port(funct:      in  STD_LOGIC_VECTOR(5 downto 0);
         aluop:      in  STD_LOGIC_VECTOR(2 downto 0);
         alucontrol: out STD_LOGIC_VECTOR(3 downto 0));
  end component;
  signal aluop: STD_LOGIC_VECTOR(2 downto 0);
  signal branch: STD_LOGIC_VECTOR(1 downto 0);
  
  
  signal branch_zero: STD_LOGIC_VECTOR(2 downto 0);
begin
  md: maindec port map(op, memtoreg, memwrite, branch,
                       alusrc, regdst, regwrite, jump, aluop);
  ad: aludec port map(funct, aluop, alucontrol);

  --pcsrc <= branch and zero;
 -- pcsrc <= (branch(0) and zero) or (branch(1) and not zero); -- "11" will never be able to work with how we set this up (suuuuper hacky)
  
  branch_zero <= branch & zero; -- append the zero signal to the end of the branch signal
  
  process(branch_zero) begin
	  case branch_zero is
		  when "011" => pcsrc <= '1';	--should be BEQ
		  when "100" => pcsrc <= '1';  -- should do the BNE
		  when others => pcsrc <= '0'; -- no branch
     end case;
  end process;
  
end;


