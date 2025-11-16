// 函数: sub_5f1920
// 地址: 0x5f1920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1

if (eax == arg1[1])
    eax = 0

int128_t* edx_1 = arg1[3] + eax
*arg2 = *edx_1
arg2[1] = edx_1[1]
arg2[2] = edx_1[2]
arg2[3] = edx_1[3]
arg2[4] = edx_1[4]
arg2[5].q = edx_1[5].q
arg1[3] += 0x58
return arg2
