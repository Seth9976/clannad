// 函数: sub_6b3e90
// 地址: 0x6b3e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18 = 1
int32_t var_c = 0
int32_t var_8 = 0x5c
int32_t eax = sub_55b010(arg2, &var_8, arg1)
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0

if (eax != 0xffffffff)
    *arg1 = 0
    sub_52e3c0(arg1, arg2, 0, eax)
    return arg1

*arg1 = 0
sub_52e3c0(arg1, arg2, 0, 0xffffffff)
return arg1
