// 函数: sub_46ed70
// 地址: 0x46ed70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg5

if (arg2 s> esi)
    int32_t eax = arg2
    arg2 = esi
    esi = eax

int32_t result_3 = arg4
int32_t result_1 = arg6

if (result_3 s> result_1)
    int32_t result_2 = result_3
    result_3 = result_1
    result_1 = result_2

int32_t result = *(arg3 + 0x78)

if (result != 0xffffffff || *(arg3 + 0x7c) != result || *(arg3 + 0x80) != result
        || *(arg3 + 0x84) != result)
    if (result s> arg2)
        arg2 = result
    
    int32_t eax_1 = *(arg3 + 0x80)
    
    if (eax_1 s< esi)
        esi = eax_1
    
    result = *(arg3 + 0x84)
    
    if (*(arg3 + 0x7c) s> result_3)
        result_3 = *(arg3 + 0x7c)
    
    if (result s< result_1)
        result_1 = result

if (arg2 s<= esi && result_3 s<= result_1)
    *(arg3 + 0x64) = arg2
    *(arg3 + 0x68) = result_3
    *(arg3 + 0x6c) = esi
    *(arg3 + 0x70) = result_1

return result
