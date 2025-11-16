// 函数: sub_6dc940
// 地址: 0x6dc940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x118) += 1
uint32_t result = *(arg1 + 0x118)

if (result u>= *(arg1 + 0x108))
    int32_t ebx
    int32_t var_14_1 = ebx
    
    if (*(arg1 + 0x14c) != 0)
        int32_t eax_1 = *(arg1 + 0x110) + 1
        *(arg1 + 0x118) = 0
        _memset(*(arg1 + 0x120), 0, eax_1)
        
        while (true)
            *(arg1 + 0x14d) += 1
            ebx.b = *(arg1 + 0x14d)
            
            if (ebx.b u>= 7)
                goto label_6dca1e
            
            uint32_t eax_2 = zx.d(ebx.b)
            uint32_t edi_1 = zx.d(*(eax_2 + 0xadb818))
            result = divu.dp.d(0:(edi_1 - 1 + *(arg1 + 0x100) - zx.d(*(eax_2 + 0xadb70c))), edi_1)
            bool cond:1_1 = (*(arg1 + 0x7c) & 2) != 0
            uint32_t result_1 = result
            *(arg1 + 0x114) = result
            
            if (cond:1_1)
                break
            
            uint32_t edi_2 = zx.d(*(eax_2 + 0xadb704))
            result = divu.dp.d(0:(*(arg1 + 0x104) - 1 + edi_2 - zx.d(*(eax_2 + 0xadb71c))), edi_2)
            *(arg1 + 0x108) = result
            
            if (result != 0)
                if (result_1 != 0)
                    break
    
    if (*(arg1 + 0x14c) == 0 || ebx.b u>= 7)
    label_6dca1e:
        result = sub_6dc8d0(arg1)

return result
