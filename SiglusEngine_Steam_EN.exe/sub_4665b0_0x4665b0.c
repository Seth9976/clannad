// 函数: sub_4665b0
// 地址: 0x4665b0
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
*(arg3 + 0x14) = arg5
*(arg3 + 0x18) = arg6
*(arg3 + 0x1c) = arg7
*(arg3 + 0x20) = arg8
arg1 = arg9
*(arg3 + 4) = arg2
*(arg3 + 0xc) = esi_1
*arg3 = 1

if (arg1 s<= 0)
    arg1 = 0

arg3[0x10] = 1
*(arg3 + 0x24) = arg1.w
