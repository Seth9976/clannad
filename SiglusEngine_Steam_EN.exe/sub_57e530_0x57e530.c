// 函数: sub_57e530
// 地址: 0x57e530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t* eax = sub_45e020(arg1, arg4, arg3 + 0x48, arg5, 6, 0xffffffff, 0)
void* edx_2

if (eax[8].b == 0)
    edx_2 = nullptr
else
    edx_2 = eax[7] + &eax[0x19]

sub_4c7f10(arg6, edx_2, &eax[0x19], eax[1], eax[2], arg2, 0, 0, arg6, arg7, arg6, arg7, 1)
int32_t result = *eax
*(arg3 + 0x4c) += result
*(arg3 + 0x58) += 1
return result
