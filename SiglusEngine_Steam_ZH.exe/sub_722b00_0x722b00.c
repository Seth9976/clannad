// 函数: sub_722b00
// 地址: 0x722b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

(*(arg1 + 8))[*(arg1 + 0x14)] = (arg2 u>> 8).b
*(arg1 + 0x14) += 1
int32_t result = *(arg1 + 8)
(*(arg1 + 0x14))[result] = arg2.b
*(arg1 + 0x14) += 1
return result
