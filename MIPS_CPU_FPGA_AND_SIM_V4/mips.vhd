------------------------------------------------------------
-- mips.vhd
-- David_Harris@hmc.edu and Sarah_Harris@hmc.edu 30 May 2006
-- Single Cycle MIPS processor
------------------------------------------------------------

------------------------------------------------------------
-- Entity Declarations
------------------------------------------------------------

library IEEE; use IEEE.STD_LOGIC_1164.all;
entity mips is -- single cycle MIPS processor
  port(clk, reset:        in  STD_LOGIC;
       pc:                inout STD_LOGIC_VECTOR(31 downto 0);
       instr:             in  STD_LOGIC_VECTOR(31 downto 0);
       memwrite:          out STD_LOGIC;
       aluout, writedata: inout STD_LOGIC_VECTOR(31 downto 0);
       readdata:          in  STD_LOGIC_VECTOR(31 downto 0));
end;

---------------------------------------------------------
-- Architecture Definitions
---------------------------------------------------------

architecture struct of mips is
  component controller
    port(op, funct:          in  STD_LOGIC_VECTOR(5 downto 0);
         zero:               in  STD_LOGIC;
         memtoreg:           out STD_LOGIC;
			memwrite:           out STD_LOGIC;
         pcsrc, alusrc:      out STD_LOGIC;
         regdst, regwrite:   out STD_LOGIC;
         jump:               out STD_LOGIC;
         alucontrol:         out STD_LOGIC_VECTOR(3 downto 0));
  end component;
  component datapath
    port(clk, reset:        in  STD_LOGIC;
         memtoreg:          in  STD_LOGIC;
			pcsrc:             in  STD_LOGIC;
         alusrc, regdst:    in  STD_LOGIC;
         regwrite, jump:    in  STD_LOGIC;
         alucontrol:        in  STD_LOGIC_VECTOR(3 downto 0);
         zero:              out STD_LOGIC;
         pc:                inout STD_LOGIC_VECTOR(31 downto 0);
         instr:             in STD_LOGIC_VECTOR(31 downto 0);
         aluout, writedata: inout STD_LOGIC_VECTOR(31 downto 0);
         readdata:          in  STD_LOGIC_VECTOR(31 downto 0);
			shamt:             in STD_LOGIC_VECTOR(4 downto 0));
  end component;
  signal memtoreg: STD_LOGIC;
  signal alusrc, regdst, regwrite, jump, pcsrc: STD_LOGIC;
  signal zero: STD_LOGIC;
  signal alucontrol: STD_LOGIC_VECTOR(3 downto 0);
begin
  cont: controller port map(instr(31 downto 26), instr(5 downto 0),
                            zero, memtoreg, memwrite, pcsrc, alusrc,
									 regdst, regwrite, jump, alucontrol);
  dp: datapath port map(clk, reset, memtoreg, pcsrc, alusrc, regdst,
                        regwrite, jump, alucontrol, zero, pc, instr,
								aluout, writedata, readdata, instr(10 downto 6));
end;
