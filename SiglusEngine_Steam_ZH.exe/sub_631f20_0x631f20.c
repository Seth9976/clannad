// 函数: sub_631f20
// 地址: 0x631f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = &arg1[1]
*(eax + 0x80) = 0x55b
void arg_18
__builtin_memcpy(eax, &arg_18, 0x80)

if (eax + 0x84 != arg2)
    sub_52e3c0(eax + 0x84, arg2, 0, 0xffffffff)
    eax = &arg1[1]

*(eax + 0x9c) = 0
arg1[0x2c] = arg3
arg1[0x2d].b = 0
sub_6324f0(&arg1[0x29], arg3)
return (**arg1)(0, arg3)
