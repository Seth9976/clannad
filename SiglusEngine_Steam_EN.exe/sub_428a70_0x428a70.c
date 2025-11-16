// 函数: sub_428a70
// 地址: 0x428a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0

if (arg3 u<= 0x1ff)
    int32_t ecx = *(arg3 * 0x6c + 0x1382fc4)
    
    if (ecx != 0 && arg2 s>= 0 && arg2 s< *(arg3 * 0x6c + 0x1382fc8))
        *arg4 = (arg2 << 4) + ecx
        return 1

return 0
