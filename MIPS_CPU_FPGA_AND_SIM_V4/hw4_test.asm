# xori, slti, sll, srl

main: 

addi $t0, $0, 0x0001
xori $t1, $t0, 0x1010    # Should be 0x1011
slti $t2, $t0, 0x1010      # Should be 1
slti $t3, $t1, 0x0001      # Should be 0
sll $t0, $t0, 4               # Should be 0x0010
srl $t1, $t1, 4               # Should be 0x0101