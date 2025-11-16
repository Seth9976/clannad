// 函数: sub_401150
// 地址: 0x401150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg1

if (esi == 0)
    arg1 = 0xffffffff
else
    arg1 = arg6(esi, 0, 0, 1)

__builtin_memset(arg2, 0, 0x2d0)
int32_t edx = arg7
*arg2 = esi
arg2[0xb0] = arg5
arg2[0xb1] = arg6
arg2[0xb2] = edx
arg2[0xb3] = arg8
int32_t eax_3
int32_t ecx_2
eax_3, ecx_2 = sub_410220(&arg2[6])

if (arg3 != 0)
    int32_t esi_3
    int32_t edi_3
    edi_3, esi_3 = __builtin_memcpy(sub_410270(&arg2[6], arg4), arg3, arg4 u>> 2 << 2)
    __builtin_memcpy(edi_3, esi_3, arg4 & 3)
    eax_3, ecx_2, edx = sub_4102f0(&arg2[6], arg4)

if (arg1 != 0xffffffff)
    arg2[1] = 1

arg2[0xd] = 1
int32_t eax_6
int32_t edx_2
eax_6, edx_2 = sub_5f1ac0(eax_3, edx, ecx_2, 1, 0x20)
int32_t ecx_7 = arg2[0xd]
arg2[0x12] = eax_6
arg2[0x13] = sub_5f1ac0(eax_6, edx_2, ecx_7, ecx_7, 0x10)
sub_410030(&arg2[0x1e], 0xffffffff)
int32_t result = sub_401270(arg2, arg2[0x12], arg2[0x13], &arg2[0x17], nullptr)

if (result s>= 0)
    arg2[0x16] = 1
    return result

*arg2 = 0
sub_401000(arg2)
return result
