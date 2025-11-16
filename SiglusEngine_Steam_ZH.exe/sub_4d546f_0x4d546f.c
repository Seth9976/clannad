// 函数: sub_4d546f
// 地址: 0x4d546f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_4d19ed(arg1, 1)

if (result s< 0)
    return result

*(*(arg1 + 0x10c) + (*(arg1 + 0x110) << 2)) = arg2
*(arg1 + 0x110) += 1
return 0
