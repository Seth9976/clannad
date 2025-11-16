// 函数: sub_403910
// 地址: 0x403910
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* i_1 = *(arg1 + 0x54)

if (i_1 != 0)
    int32_t* i
    
    do
        i = i_1[1]
        _free(*i_1)
        *i_1 = 0
        i_1[1] = 0
        _free(i_1)
        i_1 = i
    while (i != 0)

int32_t result = *(arg1 + 0x50)

if (result != 0)
    int32_t eax_2 = _realloc(*(arg1 + 0x44), *(arg1 + 0x4c) + result)
    int32_t ecx_3 = *(arg1 + 0x4c)
    *(arg1 + 0x44) = eax_2
    result = *(arg1 + 0x50)
    *(arg1 + 0x50) = 0
    *(arg1 + 0x4c) = ecx_3 + result

*(arg1 + 0x48) = 0
*(arg1 + 0x54) = 0
return result
