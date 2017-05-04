library IEEE; 
use IEEE.STD_LOGIC_1164.all; 
use IEEE.NUMERIC_STD.all;

entity datapath is  -- MIPS datapath
  port(clk, reset:        in  STD_LOGIC;
       memtoreg:          in STD_LOGIC_VECTOR(1 downto 0);
		 pcsrc:             in  STD_LOGIC;
       alusrc, regdst:    in  STD_LOGIC;
       regwrite, jump:    in  STD_LOGIC;
       alucontrol:        in  STD_LOGIC_VECTOR(3 downto 0);
       zero:              out STD_LOGIC;
       pc:                inout STD_LOGIC_VECTOR(31 downto 0);
       instr:             in  STD_LOGIC_VECTOR(31 downto 0);
       aluout, writedata: inout STD_LOGIC_VECTOR(31 downto 0);
       readdata:          in  STD_LOGIC_VECTOR(31 downto 0);
		 shamt:             in STD_LOGIC_VECTOR(4 downto 0));
end;

architecture struct of datapath is
  component alu
    port(a, b:       in  STD_LOGIC_VECTOR(31 downto 0);
			shamt:      in STD_LOGIC_VECTOR(4 downto 0);
         alucontrol: in  STD_LOGIC_VECTOR(3 downto 0);
         result:     inout STD_LOGIC_VECTOR(31 downto 0);
	      zero:       out STD_LOGIC);
  end component;
  component regfile
    port(clk:           in  STD_LOGIC;
         we3:           in  STD_LOGIC;
         ra1, ra2, wa3: in  STD_LOGIC_VECTOR(4 downto 0);
         wd3:           in  STD_LOGIC_VECTOR(31 downto 0);
         rd1, rd2:      out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  component zerodetect
    port(a: in  STD_LOGIC_VECTOR(31 downto 0);
         y: out STD_LOGIC);
  end component;
  component adder
    port(a, b: in  STD_LOGIC_VECTOR(31 downto 0);
         y:    out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  component sl2
    port(a: in  STD_LOGIC_VECTOR(31 downto 0);
         y: out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  component signext
    port(a: in  STD_LOGIC_VECTOR(15 downto 0);
         y: out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  component flopr generic(width: integer);
    port(clk, reset: in  STD_LOGIC;
         d:          in  STD_LOGIC_VECTOR(width-1 downto 0);
         q:          out STD_LOGIC_VECTOR(width-1 downto 0));
  end component;
  component mux2 generic(width: integer);
    port(d0, d1: in  STD_LOGIC_VECTOR(width-1 downto 0);
         s:      in  STD_LOGIC;
         y:      out STD_LOGIC_VECTOR(width-1 downto 0));
  end component;
  component mux4 generic(width: integer);
  port(d0, d1: in  STD_LOGIC_VECTOR(width-1 downto 0);
         s:      in  STD_LOGIC;
         y:      out STD_LOGIC_VECTOR(width-1 downto 0));
  end component;
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
  component test_kbd
  generic(
    FREQ     :     natural := 100_000   -- frequency of main clock (KHz)
    );
  port(
    clk           : in  std_logic;           -- main clock
    ps2_clk       : in  std_logic;           -- keyboard clock
    ps2_data      : in  std_logic;           -- keyboard data
    s             : out std_logic_vector(31 downto 0);  -- 32 bit output for Joseph
	 scancode_bus  : out std_logic_vector(7 downto 0)   -- scancode from keyboard module
    );
  end component;
  signal writereg: STD_LOGIC_VECTOR(4 downto 0);
  signal pcjump, pcnext, pcnextbr, pcplus4, pcbranch: STD_LOGIC_VECTOR(31 downto 0);
  signal signimm, signimmsh: STD_LOGIC_VECTOR(31 downto 0);
  signal srca, srcb, result: STD_LOGIC_VECTOR(31 downto 0);
  
  signal temp: STD_LOGIC_VECTOR(31 downto 0);
begin
  temp <= "00000000000000000000000000000000";
  -- next PC logic
  pcjump <= pcplus4(31 downto 28) & instr(25 downto 0) & "00";
  pcreg: flopr generic map(32) port map(clk, reset, pcnext, pc);
  pcadd1: adder port map(pc, X"00000004", pcplus4);
  immsh: sl2 port map(signimm, signimmsh);
  pcadd2: adder port map(pcplus4, signimmsh, pcbranch);
  pcbrmux: mux2 generic map(32) port map(pcplus4, pcbranch, pcsrc, pcnextbr);
  pcmux: mux2 generic map(32) port map(pcnextbr, pcjump, jump, pcnext);

  -- register file logic
  rf: regfile port map(clk, regwrite, instr(25 downto 21), instr(20 downto 16),
              writereg, result, srca, writedata);
  wrmux: mux2 generic map(5) port map(instr(20 downto 16), instr(15 downto 11),
                                      regdst, writereg);
  resmux: mux4 generic map(32) port map(aluout, readdata, , temp, memtoreg, result);
  se: signext port map(instr(15 downto 0), signimm);

  -- ALU logic
  srcbmux: mux2 generic map(32) port map(writedata, signimm, alusrc, srcb);
  mainalu:  alu port map(srca, srcb, instr(10 downto 6), alucontrol, aluout, zero);
  
  
  --test_kdb_object: test_kdb port map(clk, ps2_clk, );
end;


