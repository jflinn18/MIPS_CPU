addi $t0, $0, 0x0003  #will be for time in loop
addi $t1, $0, 0x0000  #loop counter
addi $t2, $0, 0x0004  #variable modified in first loop
addi $t3, $0, 0x0000  #variable modified in second loop

L1:
	beq $t0, $t1, Meh
	add $t2, $t2, $t2    #doubles the value of t2
	addi $t4, $0, 0x0000
	or $t4, $t2, $t4     #gives t4 the value in t2
	xori $t4, 0xffff     #flips all bits
	addi $t4, 0x0001     #adds 1 to $t4
	xor $t4, $t2, $t4    #it does it
	addi $t5, $0, 0xffff
	bne $t4, $t5, Meh     #we goofed if this happens
	addi $t1, $0, 0x0001 #t1++
	j L1
Meh:
	slti $t2, $t3, 0x0000 #should be false I think
	slti $t2, $t3, 0xffff #should always be true
	slt $t2, $t3, $t2     #should be true I think
	slt $t2, $t5, $t3     #should always be false
	andi $t3, $t3, 0x0000 #zeros out t3
	ori $t3, $t3, 0xaaaa  #alternating 1010 pattern in t3
	sub $t5, $t5, $t3     #should be alternating 0101 pattern in t5
	and $t3, $t3, $t5     #should be all zeros
	nor $t5, $t3, $t5     #should be alternating 1010 pattern in t5