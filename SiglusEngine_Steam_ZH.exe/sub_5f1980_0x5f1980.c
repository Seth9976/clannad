// 函数: sub_5f1980
// 地址: 0x5f1980
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1

if (eax == arg1[1])
    eax = 0

int128_t* edx_1 = arg1[3] + eax
*arg2 = *edx_1
arg2[1] = edx_1[1]
arg2[2].q = edx_1[2].q
int32_t result = *(edx_1 + 0x28)
*(arg2 + 0x28) = result
arg1[3] += 0x2c
return result
