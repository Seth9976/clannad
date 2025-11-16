// 函数: sub_4663e0
// 地址: 0x4663e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*(arg3 + 4) = 0

if (arg2 s<= 0)
    return 

int32_t eax = arg4
int32_t esi_1 = 0

if (eax s< 0)
    esi_1 = neg.d(eax)
    eax = 0

*(arg3 + 8) = eax
eax.w = arg5
*(arg3 + 0x12) = eax.w
eax.w = arg6
*(arg3 + 0x14) = eax.w
eax.w = arg7
*(arg3 + 0x16) = eax.w
int32_t eax_1 = arg8
*(arg3 + 4) = arg2
*(arg3 + 0xc) = esi_1
*arg3 = 1

if (eax_1 s<= 0)
    eax_1 = 0

arg3[0x10] = 1
*(arg3 + 0x18) = eax_1.w
arg1 = arg9
arg3[0x21] = 0x63

if (arg1 s< 0)
    arg1 = 0

*(arg3 + 0x1c) = arg1
arg1.b = arg10
arg3[0x20] = arg1.b
