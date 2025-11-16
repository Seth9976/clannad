// 函数: sub_49e800
// 地址: 0x49e800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0_1

if (arg2 != 0)
    if (arg1 u<= 0x3f && *(arg1 * 0x3c0 + &data_20af854) != 0
            && *(arg1 * 0x3c0 + &data_20af850) != 1 && *(arg1 * 0x3c0 + 0x20af880) != 0)
        cond:0_1 = *(arg1 * 0x3c0 + 0x20af96c) != 0
    label_49e856:
        
        if (not(cond:0_1))
            return 1
else if (data_641b5c != arg2 && arg1 u<= 0x3f && (&data_208cd58)[arg1 * 0x60] != arg2
        && *(arg1 * 0x180 + 0x208cd90) != arg2)
    cond:0_1 = *(arg1 * 0x180 + 0x208ce7c) != arg2
    goto label_49e856
return 0
