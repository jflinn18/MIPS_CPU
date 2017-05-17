
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name mips -dir "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips/planAhead_run_2" -part xc3s1000ft256-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips/mips_fpga_interface.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips} }
set_property target_constrs_file "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips_fpga_interface.ucf" [current_fileset -constrset]
add_files [list {C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips_fpga_interface.ucf}] -fileset [get_property constrset [current_run]]
link_design
