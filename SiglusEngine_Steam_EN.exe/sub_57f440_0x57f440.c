// 函数: sub_57f440
// 地址: 0x57f440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t* eax = sub_45e020(arg1, arg4, arg3 + 0x20, arg5, arg6, arg9, arg10)
void* edx_2

if (eax[8].b == 0)
    edx_2 = nullptr
else
    edx_2 = eax[7] + &eax[0x19]

sub_4c7f10(arg7, edx_2, &eax[0x19], eax[1], eax[2], arg2, 0, 0, arg7, arg8, arg7, arg8, 1)
int32_t result = *eax
*(arg3 + 0x24) += result
*(arg3 + 0x30) += 1
return result
