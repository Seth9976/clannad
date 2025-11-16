// 函数: sub_6d70c0
// 地址: 0x6d70c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x118) += 1
void* result = *(arg1 + 0x118)

if (result u>= *(arg1 + 0x108))
    if (*(arg1 + 0x14c) != 0)
        bool cond:1_1 = (*(arg1 + 0x7c) & 2) == 0
        *(arg1 + 0x118) = 0
        
        if (cond:1_1)
            while (true)
                *(arg1 + 0x14d) += 1
                result.b = *(arg1 + 0x14d)
                
                if (result.b u>= 7)
                    return sub_6d5730(result, 0, arg1, 0, 4)
                
                uint32_t edi_1 = zx.d(result.b)
                uint32_t esi_1 = zx.d(*(edi_1 + 0xadb6d4))
                uint32_t edi_2 = zx.d(*(edi_1 + 0xadb6a4))
                uint32_t temp0_1 =
                    divu.dp.d(0:(*(arg1 + 0x100) - 1 + esi_1 - zx.d(*(edi_1 + 0xadb6ac))), esi_1)
                *(arg1 + 0x10c) = temp0_1
                result =
                    divu.dp.d(0:(*(arg1 + 0x104) - zx.d(*(edi_1 + 0xadb6bc)) - 1 + edi_2), edi_2)
                *(arg1 + 0x108) = result
                
                if (temp0_1 != 0)
                    if (result != 0)
                        break
        else
            *(arg1 + 0x14d) += 1
        
        result.b = *(arg1 + 0x14d)
    
    if (*(arg1 + 0x14c) == 0 || result.b u>= 7)
        return sub_6d5730(result, 0, arg1, 0, 4)
    
    char* esi_2 = *(arg1 + 0x120)
    
    if (esi_2 != 0)
        int32_t edx_8 = zx.d(*(arg1 + 0x154)) * zx.d(*(arg1 + 0x151))
        
        if (edx_8 s< 8)
            return _memset(esi_2, 0, ((edx_8 * *(arg1 + 0x100) + 7) u>> 3) + 1)
        
        return _memset(esi_2, 0, (edx_8 u>> 3) * *(arg1 + 0x100) + 1)

return result
