// 函数: sub_4c2808
// 地址: 0x4c2808
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** result = sub_4d2dcd(arg1)

if (result s>= 0)
    int32_t edi
    int32_t var_c_1 = edi
    sub_4c8264(arg1)
    int32_t ebx_1 = arg1[3]
    int32_t edi_1 = 0
    
    if (ebx_1 u> 0)
        do
            void* eax_1 = *(arg1[6] + (edi_1 << 2))
            arg1[0x40] = eax_1
            arg1[0x3f] = edi_1
            
            if ((*(eax_1 + 2) & 0xfff0) != 0)
                result = sub_4c1a30(arg1)
                
                if (result s< 0)
                    return result
            
            edi_1 += 1
        while (edi_1 u< ebx_1)
    
    result = sub_4a4f2f(arg1)
    
    if (result s>= 0)
        result = sub_4a6590(arg1)
        
        if (result s>= 0)
            result = sub_49ff18(arg1)
            
            if (result s>= 0)
                sub_4c8264(arg1)
                result = nullptr

return result
