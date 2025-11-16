// 函数: sub_5e0b10
// 地址: 0x5e0b10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
int32_t ebx = *(arg1 + 0x80)

for (void* i = *(arg1 + 0x7c); i != ebx; i += 0x8c)
    sub_563780(i)

int32_t result = *(arg1 + 0x7c)
*(arg1 + 0x80) = result
*(arg1 + 0x74) = 0
*(arg1 + 0x78) = 0
return result
