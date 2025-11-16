// 函数: sub_5b26b0
// 地址: 0x5b26b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* eax = data_bac4c0
int32_t ecx_1 = arg2
void* edx = *eax
int32_t eax_4 = ((eax[1] - edx) s>> 2) - 1

if (ecx_1 s< 0)
    *arg1 = *edx
    return arg1

if (ecx_1 s> eax_4)
    ecx_1 = eax_4

*arg1 = *(edx + (ecx_1 << 2))
return arg1
