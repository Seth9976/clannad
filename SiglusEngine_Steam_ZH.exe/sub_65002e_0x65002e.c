// 函数: sub_65002e
// 地址: 0x65002e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg2:1.b ^= arg2.b
void* entry_ebx
*(entry_ebx + 0x54ec81f0) -= 1
*arg1 += arg1
*arg1 += arg1.b
*(entry_ebx + 0x33c) = 0
sub_54aed0(&arg3[-0x7a])
arg3[-1] = 1
__builtin_memcpy(&arg3[-0x24], entry_ebx, 0x80)
arg3[arg3[-5] - 0x24] = 0x37
arg3[-5] += 1
arg3[-0x7b] = 1
arg3[-0x7a] = 0x12
__builtin_memcpy(&arg3[-0x79], &arg3[-0x24], 0x80)
void var_158
sub_54cf80(&var_158, &arg3[-0x7a])
sub_6766e0()
sub_54ae40(&arg3[-0x57])
sub_54aed0(&arg3[-0xf0])
arg3[-1] = 3
arg3[-0xf0] = 0x1a
__builtin_memcpy(&arg3[-0xef], entry_ebx, 0x80)
sub_54cf80(&var_158, &arg3[-0xf0])
sub_6766e0()
sub_54aed0(&arg3[-0x7a])
arg3[-1].b = 4
arg3[-0x7a] = 0x19
__builtin_memcpy(&arg3[-0x79], entry_ebx, 0x80)
sub_54cf80(&var_158, &arg3[-0x7a])
sub_6766e0()
sub_54ae40(&arg3[-0x57])
sub_54ae40(&arg3[-0xcd])
TEB* fsbase
fsbase->NtTib.ExceptionList = arg3[-3]
sub_745f2b(arg3[-4] ^ arg3)
*arg3
return 0
