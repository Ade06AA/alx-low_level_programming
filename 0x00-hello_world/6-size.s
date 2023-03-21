	.file	"6-size.c"
	.section	.rodata
.LC0:
	.string	"Size of a char: %d byte(s)\n"
.LC1:
	.string	"Size of an int: %d byte(s)\n"
	.align 8
.LC2:
	.string	"Size of a long int: %d byte(s)\n"
	.align 8
.LC3:
	.string	"Size of a long long int: %d byte(s)\n"
.LC4:
	.string	"Size of a float: %d byte(s)\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$1, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	movl	$4, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$8, %esi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	movl	$8, %esi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	movl	$4, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
