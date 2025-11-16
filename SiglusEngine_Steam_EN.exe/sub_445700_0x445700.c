// 函数: sub_445700
// 地址: 0x445700
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (sub_49e690(0x976380, data_63e16c) != 0 && data_1393180 != 0)
    void* ecx_1 = data_1393190
    
    if (ecx_1 != 0)
        uint32_t temp0 = divu.dp.d(0:(data_1392ccc - data_1393194), data_1393198)
        int32_t eax_5
        int32_t edx_1
        edx_1:eax_5 = sx.q(temp0)
        int32_t edx_4 = ((edx_1 & 7) + eax_5) s>> 3
        
        if (edx_4 s< 0 || edx_4 s>= *(ecx_1 + 4))
            data_1393190 = 0
            return 2
        
        int32_t esi_1 = temp0 & 0x80000007
        
        if (esi_1 s< 0)
            esi_1 = ((esi_1 - 1) | 0xfffffff8) + 1
        
        eax_5.b = *((esi_1 << 2) + &data_611440)
        int32_t result
        result.b = (*(edx_4 + *(ecx_1 + 8)) & eax_5.b) != 0
        return result

return 2
