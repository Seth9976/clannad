// 函数: sub_4db930
// 地址: 0x4db930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x54) != arg2)
    if (arg2 != 0)
        (*(*arg2 + 4))(arg2)
    
    int32_t* eax_2 = *(arg1 + 0x54)
    *(arg1 + 0x54) = arg2
    
    if (eax_2 != 0)
        (*(*eax_2 + 8))(eax_2)

return 0
