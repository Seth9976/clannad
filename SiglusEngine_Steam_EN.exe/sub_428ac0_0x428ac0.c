// 函数: sub_428ac0
// 地址: 0x428ac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 != 1)
    return 

int32_t ecx = arg12

if (ecx s< 0 || ecx s>= 8)
    ecx = 0xffffffff

int32_t eax = arg13

if (arg6[0x19] == 0xffffffff)
    eax = 0

int32_t edi_1

if (arg4 u<= 0x1ff)
    edi_1 = *(arg4 * 0x6c + 0x1382fc4)

int32_t edi_2

if (arg4 u> 0x1ff || edi_1 == 0 || arg9 s< 0 || arg9 s>= *(arg4 * 0x6c + 0x1382fc8))
    edi_2 = 0
else
    edi_2 = *(edi_1 + arg9 * 0x10 + 0xc)

if (arg11 != 0)
    int32_t eax_6 = *arg6
    
    if (eax_6 == 4 || eax_6 == 5 || eax_6 == 6 || eax_6 == 7 || eax_6 == 8)
        int32_t edx = arg10
        
        if (edx s< 0 || edx s>= edi_2)
            edx = 0
        
        *arg6 = 4
        arg6[0x14] = arg8
        arg6[0x15] = arg9
        arg6[0x16] = edx
        arg6[0x17] = ecx
        return 

int32_t edx_1 = arg10

if (edx_1 == 0xffffffff)
    edx_1 = arg6[0x12]

if (edx_1 s< 0 || edx_1 s>= edi_2)
    edx_1 = 0

*arg6 = arg8
arg6[1] = 1
arg6[2] = 0
arg6[3] = 0
arg6[9] = 0xffffffff
arg6[4] = 0
arg6[5] = 0
arg6[0xa] = 0xffffffff
arg6[0xb] = 0
arg6[0xc] = 0
arg6[0x14] = 0xffffffff
arg7[0x36] = 0
arg7[0x37] = 0
arg7[0x38].b = 0xff
arg7[0x39] = 0
arg6[0x11] = arg9
arg6[0x12] = edx_1
arg6[0x13] = ecx
arg6[0x18] = eax
sub_428c70(arg4, arg5, arg6, arg7)

if (*arg6 - 9 u<= 1)
    sub_428f50(arg4, arg5, arg6, arg7)
