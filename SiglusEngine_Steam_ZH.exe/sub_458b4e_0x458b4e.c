// 函数: sub_458b4e
// 地址: 0x458b4e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_458a6d(arg1, arg2)

if (result s< 0)
    return result

int32_t eax = *(arg1 + 0xc)
int32_t ecx_1 = *(arg1 + 8) + eax
*(arg1 + 0x10) = eax
*(arg1 + 0x14) = ecx_1
return 0
