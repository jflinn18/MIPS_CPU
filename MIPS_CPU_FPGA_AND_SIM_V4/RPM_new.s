# should do russian peasant multiplication probably, but hasn't been tested yet...

addi $t0, $0, 0x0000 # answer
addi $t1, $0, 0x0021 # value1 
addi $t2, $0, 0x0003 # value2
addi $t5, $0, 0x0001 # the value 1

top:

andi $t3, $t1, 0x0001 # t3 to either 1 or 0 and rest of bits to zero
beq $t3, $t5, adder
j divide

adder:
	add $t0, $t0, $t2 # adds val2 to the answer when val1 is odd
	
beq $t1, $t5, finish
	
divide:
	srl $t1, $t1, 1     # divide by 2
	sll $t2, $t2, 1      # mult by 2
	j top
	
finish:
	#addi $t0, $t0, 0x0000  #Shows answer in waveform
	addi $t8, $t0, 0x0000   #Shows answer in waveform
	addi $t9, $0, 0x000a
	
	# Solution is in $t8
	
	#--------------------------------------------------------------------------
	# these are the addresses that we want to store the solution into
	
	addi $t4, $0, 0xffff
	sll $t4, $t4, 16
	addi $t4, $t4, 0xffe0
	
	addi $t5, $0, 0xffff
	sll $t5, $t5, 16
	addi $t5, $t5, 0xffe4
	
	addi $t6, $0, 0xffff
	sll $t6, $t6, 16
	addi $t6, $t6, 0xffe8
	
	addi $t7, $0, 0xffff
	sll $t7, $t7, 16
	addi $t7, $t7, 0xffec
	
	#--------------------------------------------------------------------------
	# Zeroing out the target registers
	
	addi $t0, $0, 0x0000
	addi $t1, $0, 0x0000
	addi $t2, $0, 0x0000
	addi $t3, $0, 0x0000
	
	
	#--------------------------------------------------------------------------
	# Spliting it up into single base 16 digits
	
while: 
	beq $t8, $0, done
	addi $t8, $t8, -1
	addi $t0, $t0, 1
	beq $t0, $t9, zerocheck
	j while

zerocheck:
	addi $t1, $t1, 1
	addi $t0, $0, 0x0000
	beq $t1, $t9, onecheck
	j while

onecheck:
	addi $t2, $t2, 1
	addi $t1, $0, 0x0000
	beq $t2, $t9, twocheck
	j while

twocheck:
	addi $t3, $t3, 1
	addi $t2, $0, 0x0000
	beq $t3, $t9, threecheck
	j while

threecheck:
	addi $t3, $0, 0x0000
	j while

	
done:
	
	
	#Stores the base 10 digits in the VGA memory
	sw $t0, 0($t4)
	sw $t1, 0($t5)
	sw $t2, 0($t6)
	sw $t3, 0($t7)
	
