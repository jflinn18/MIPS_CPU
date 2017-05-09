--------------------------------------------------
-- mipssingletop.vhd
-- David_Harris@hmc.edu 30 May 2006
-- Single Cycle MIPS testbench & mem
-- Modified and updated to standard libraries by Kent Jones
--------------------------------------------------

---------------------------------------------------------
-- Entity Declarations
---------------------------------------------------------

library IEEE; 
use IEEE.STD_LOGIC_1164.all; 
use IEEE.STD_LOGIC_UNSIGNED.all;

library IEEE; 
use IEEE.STD_LOGIC_1164.all; 
use IEEE.STD_LOGIC_UNSIGNED.all;

entity top is -- top-level design for testing
  port(clk, reset:         in     STD_LOGIC;
       writedata, dataadr: inout STD_LOGIC_VECTOR(31 downto 0);
       memwrite:           inout STD_LOGIC;
		 pc:                 inout STD_LOGIC_VECTOR(31 downto 0) );
end;

---------------------------------------------------------
-- Architecture Definitions
---------------------------------------------------------

architecture test of top is

  component imem
    port(a:  in  STD_LOGIC_VECTOR(5 downto 0);
         rd: out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  
  component dmem
    port(clk, we:  in STD_LOGIC;
         a, wd:    in STD_LOGIC_VECTOR(31 downto 0);
         rd:       out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  
  component vgaMem
    port(clk, we:  in STD_LOGIC;
         a, wa:    in STD_LOGIC_VECTOR(31 downto 0);
		   wd:       in STD_LOGIC_VECTOR(31 downto 0);
         rd:       out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  
  component mips 
    port(clk, reset:        in  STD_LOGIC;
         pc:                inout STD_LOGIC_VECTOR(31 downto 0);
         instr:             in  STD_LOGIC_VECTOR(31 downto 0);
         memwrite:          out STD_LOGIC;
         aluout, writedata: inout STD_LOGIC_VECTOR(31 downto 0);
         readdata:          in  STD_LOGIC_VECTOR(31 downto 0));
  end component;
  
  component addrDecoder
    port(address:            in STD_LOGIC_VECTOR(31 downto 0);
         memwrite:           in STD_LOGIC;
		   vga_write:          out STD_LOGIC;
		   data_write:         out STD_LOGIC );
  end component;
  
  component vga
    port(clk:     in STD_LOGIC;
	      rd:      in STD_LOGIC_VECTOR(31 downto 0);
		   ra:      out STD_LOGIC_VECTOR(31 downto 0));
  end component;
  

  signal instr, readdata: STD_LOGIC_VECTOR(31 downto 0);
  
  signal vgaDataadr, vgaReadData: STD_LOGIC_VECTOR(31 downto 0);
  signal vgaMem_write, dataMem_write: STD_LOGIC;
begin
  -- instantiate processor and memories
  addrDecoder1: addrDecoder port map(dataadr, memwrite, vgaMem_write, dataMem_write);
  vga1: vga port map (clk, readdata, dataadr_r);
  
  mips1: mips port map(clk, reset, pc, instr, memwrite, dataadr, writedata, readdata);
  imem1: imem port map(pc(7 downto 2), instr);
  dmem1: dmem port map(clk, dataMem_write, dataadr, writedata, readdata);
  vgaMem1: vgaMem port map(clk, vgaMem_write, vgaDataadr, dataadr, writedata, vgaReadData);

end;


