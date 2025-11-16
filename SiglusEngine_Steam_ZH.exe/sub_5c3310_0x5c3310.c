// 函数: sub_5c3310
// 地址: 0x5c3310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xa4)

if (edx == *(arg1 + 0xa8))
    edx = 0

return _memset(edx + (arg2 << 2), 0, (arg3 - arg2) << 2)
