// 函数: sub_5e0fc0
// 地址: 0x5e0fc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

for (void* i = *(arg1 + 0x7c); i != *(arg1 + 0x80); i += 0x8c)
    for (void* j = *(i + 0x80); j != *(i + 0x84); j += 0x3b4)
        *(j + 0x20) = 1

int32_t result = (*(arg1 + 0x80) - *(arg1 + 0x7c)) s/ 0x8c
*(arg1 + 0x74) = result
return result
