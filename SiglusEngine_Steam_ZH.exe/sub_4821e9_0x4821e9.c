// 函数: sub_4821e9
// 地址: 0x4821e9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x10) = *arg2
void* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    return sub_482992(ecx_1, arg2, arg3, arg4)

int32_t eax_4 = *(*(arg1 + 4) + 8) + *arg3

if (eax_4 u> arg4)
    return 0x8007000e

*arg3 = eax_4
return 0
