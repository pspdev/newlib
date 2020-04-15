
	.set noreorder
	.set noat

	.global pspDisableInterrupts
	.ent    pspDisableInterrupts

pspDisableInterrupts:
	mfic	$v0, $0
	mtic	$0, $0
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	jr		$ra
	nop

	.end pspDisableInterrupts

	.global pspEnableInterrupts
	.ent    pspEnableInterrupts

pspEnableInterrupts:
	mtic	$a0, $0
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	nop
	jr		$ra
	nop

	.end pspEnableInterrupts
