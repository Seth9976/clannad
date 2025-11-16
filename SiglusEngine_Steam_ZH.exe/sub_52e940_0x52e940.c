// 函数: sub_52e940
// 地址: 0x52e940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = arg1[5] u< 8
arg1[4] = arg2

if (cond:0)
    *(arg1 + (arg2 << 1)) = 0
    return 0

int32_t result = *arg1
*(result + (arg2 << 1)) = 0
return result
