// 函数: sub_631b60
// 地址: 0x631b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = &arg1[1]
*(eax + 0x80) = 0xb
void arg_4
__builtin_memcpy(eax, &arg_4, 0x80)

if (eax + 0x84 != arg2)
    sub_52e3c0(eax + 0x84, arg2, 0, 0xffffffff)
    eax = &arg1[1]

*(eax + 0x9c) = 0
arg1[0x2c] = arg3
arg1[0x2d].b = 0
sub_632070(&arg1[0x29], arg3)
return (**arg1)(0, arg3)
