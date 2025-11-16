// 函数: sub_52e2c0
// 地址: 0x52e2c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[4] u< arg2)
    sub_7431bf("invalid string position")
    noreturn

bool cond:0 = arg1[5] u< 8
arg1[4] = arg2
int32_t esi

if (cond:0)
    int32_t var_8_1 = esi
    *(arg1 + (arg2 << 1)) = 0
    return arg1

int32_t var_8 = esi
*(*arg1 + (arg2 << 1)) = 0
return arg1
