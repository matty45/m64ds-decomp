#include "constants/scrcmd.h"
#include "fielddata/script/scr_seq/event_T10R0601.h"
	.rodata
	.option alignment off

	.byte 1
	.word scr_seq_T10R0601_map_scripts_2-.-4
	.byte 2
	.short _EV_scr_seq_T10R0601_002 + 1, 0
	.byte 0

scr_seq_T10R0601_map_scripts_2:
	.short VAR_UNK_40C8, 0, _EV_scr_seq_T10R0601_001 + 1
	.short 0

	.balign 4, 0
