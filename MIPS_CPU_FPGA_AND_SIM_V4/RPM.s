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
	addi $t0, $t0, 0x0000  #Shows answer in waveform

	
	
	
