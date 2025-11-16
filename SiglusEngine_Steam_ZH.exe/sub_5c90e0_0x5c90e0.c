// 函数: sub_5c90e0
// 地址: 0x5c90e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg4 == 0)
    return 0x80004003

*arg4 = 0
int32_t* edx = *(arg1 + 0x9c)

if (edx == 0)
    return 0x80004002

return (*(*edx + 0xc))(edx, arg2, arg3, arg4)
