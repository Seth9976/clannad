// 函数: sub_4cc800
// 地址: 0x4cc800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4

if (*(arg3 + 0x2e) == 0x10)
    result s>>= 1

*(arg3 + 0x3a4) += result
int32_t edi = *(arg3 + 0x388)

if (*(arg3 + 0x3a4) s>= edi)
    while (true)
        int32_t esi_1 = *(arg3 + 0x3a0)
        
        if (esi_1 != 0xffffffff && esi_1 s<= 0)
            *(arg3 + 0x3a4) = edi
            break
        
        int32_t edx_2 = *(arg3 + 0x3a4) - edi + *(arg3 + 0x384)
        *(arg3 + 0x3a4) = edx_2
        
        if (esi_1 s> 0)
            result = esi_1 - 1
            *(arg3 + 0x3a0) = result
        
        if (edx_2 s< edi)
            return result

return result
