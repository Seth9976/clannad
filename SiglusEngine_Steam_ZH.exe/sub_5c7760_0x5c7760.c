// 函数: sub_5c7760
// 地址: 0x5c7760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

*arg2 = 0
int32_t* edx = *(arg1 + 0x34)

if (edx != 0)
    int32_t result = (*(*edx + 0x4c))(edx, arg2)
    
    if (result s>= 0 && *arg2 != 0)
        return result
    
    return 0x80004002

*arg2 = *(arg1 + 0x30)
int32_t* ecx_1 = *(arg1 + 0x30)

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(ecx_1)

return 0
