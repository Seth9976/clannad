// 函数: sub_407750
// 地址: 0x407750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg1 + 0x30)

if (result != 0)
    int32_t eax = *(arg1 + 0x20)
    
    if (eax != 0)
        _free(eax)
    
    int32_t eax_1 = *(arg1 + 8)
    
    if (eax_1 != 0)
        _free(eax_1)
    
    int32_t* eax_2 = *(arg1 + 0x24)
    
    if (eax_2 != 0)
        _free(*eax_2)
        _free(*(*(arg1 + 0x24) + 4))
        _free(*(*(arg1 + 0x24) + 8))
        _free(*(*(arg1 + 0x24) + 0xc))
        __builtin_memset(*(arg1 + 0x24), 0, 0x18)
        _free(*(arg1 + 0x24))
    
    int32_t* eax_6 = *(arg1 + 0x28)
    
    if (eax_6 != 0)
        _free(*eax_6)
        _free(*(*(arg1 + 0x28) + 4))
        int32_t* eax_8 = *(arg1 + 0x28)
        *eax_8 = 0
        eax_8[1] = 0
        eax_8[2] = 0
        eax_8[3] = 0
        _free(*(arg1 + 0x28))
    
    result = 0
    __builtin_memset(arg1, 0, 0x34)

return result
