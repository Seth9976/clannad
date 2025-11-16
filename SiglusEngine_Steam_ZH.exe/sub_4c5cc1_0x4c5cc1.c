// 函数: sub_4c5cc1
// 地址: 0x4c5cc1
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4d19ed(arg1, 2)

if (result s< 0)
    return result

int32_t edx_1 = *(arg1 + 0x10c)
int32_t ecx = *(arg1 + 0x110)
*(edx_1 + (ecx << 2)) = arg2
*(edx_1 + (ecx << 2) + 4) = arg3
*(arg1 + 0x110) += 2
return 0
