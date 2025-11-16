// 函数: sub_6ea450
// 地址: 0x6ea450
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x10) = *(arg2 + 0x28) + *arg1
*(arg1 + 0x20) = *(arg2 + 0x48) + *arg1
*(arg1 + 0x14) = *(arg2 + 0x28) + *(arg1 + 4)
*(arg1 + 0x24) = *(arg2 + 0x48) + *(arg1 + 4)
*(arg1 + 0x18) = *(arg2 + 0x28) + *(arg1 + 8)
*(arg1 + 0x28) = *(arg2 + 0x48) + *(arg1 + 8)
*(arg1 + 0x1c) = *(arg2 + 0x28) + *(arg1 + 0xc)
int32_t result = *(arg2 + 0x48) + *(arg1 + 0xc)
*(arg1 + 0x2c) = result
return result
