main:   addi $t0, $0, 0x0005
	addi $t1, $0, 0x0003
	bne $t0, $t1, main
	sub $t0, $t0, $t1
	beq $t0, $t0, main
	add $t0, $t0, $t1