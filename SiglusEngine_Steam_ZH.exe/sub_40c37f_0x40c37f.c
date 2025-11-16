// 函数: sub_40c37f
// 地址: 0x40c37f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi
esi.w = arg2
*(*(arg1 + 0x10) + (*(arg1 + 4) << 1)) = esi.w
*(arg1 + 8) += 1
*(arg1 + 4) += 1
int32_t result = *(arg1 + 4)

if (result == *(arg1 + 0xc))
    *(arg1 + 4) = 0

return result
