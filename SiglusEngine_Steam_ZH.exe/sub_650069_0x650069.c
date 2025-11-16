// 函数: sub_650069
// 地址: 0x650069
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[arg1[-5] - 0x24] = 0x37
arg1[-5] += 1
arg1[-0x7b] = 1
arg1[-0x7a] = 0x12
__builtin_memcpy(&arg1[-0x79], &arg1[-0x24], 0x80)
void var_158
sub_54cf80(&var_158, &arg1[-0x7a])
sub_6766e0()
sub_54ae40(&arg1[-0x57])
sub_54aed0(&arg1[-0xf0])
arg1[-1] = 3
arg1[-0xf0] = 0x1a
int32_t entry_ebx
__builtin_memcpy(&arg1[-0xef], entry_ebx, 0x80)
sub_54cf80(&var_158, &arg1[-0xf0])
sub_6766e0()
sub_54aed0(&arg1[-0x7a])
arg1[-1].b = 4
arg1[-0x7a] = 0x19
__builtin_memcpy(&arg1[-0x79], entry_ebx, 0x80)
sub_54cf80(&var_158, &arg1[-0x7a])
sub_6766e0()
sub_54ae40(&arg1[-0x57])
sub_54ae40(&arg1[-0xcd])
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-3]
sub_745f2b(arg1[-4] ^ arg1)
*arg1
return 0
