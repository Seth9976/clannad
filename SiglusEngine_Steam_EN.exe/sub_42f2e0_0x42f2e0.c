// 函数: sub_42f2e0
// 地址: 0x42f2e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*(arg2 + 0xc) += 1
int32_t result = *(arg2 + 0xc)
*(arg2 + 0x14) = 0
void* edx_2 = result * 0x30 + *(arg2 + 0x170)

if (*(edx_2 + 0x1c) == 1)
    result = sub_42ed00(arg2, edx_2)
    *(arg2 + 0xc) = result

*(arg2 + 0x14c) += 1
return result
