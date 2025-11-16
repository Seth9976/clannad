// 函数: sub_435c2a
// 地址: 0x435c2a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
int32_t edi
int32_t var_c = edi

if (arg4 != 0)
    if (arg3 == 0)
        return 0x8876086c
    
    int32_t eax_1 = sub_433f9c(arg1, arg2, 1)
    void* ecx_5
    int32_t edx_1
    
    if (eax_1 != 0)
        ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
        edx_1 = *(ecx_5 + 4)
    
    if (eax_1 == 0 || edx_1 s< 0 || edx_1 s> 3)
        return 0x8876086c
    
    int32_t esi_2 = *(ecx_5 + 0x10)
    
    if (esi_2 == 0 || *(eax_1 + 0x10) != 0xffffffff)
        esi_2 = 1
    
    int32_t edx_4 = *(ecx_5 + 0x18) * *(ecx_5 + 0x14) * esi_2
    
    if (arg4 u>= edx_4)
        arg4 = edx_4
    
    void* edi_1 = *(eax_1 + 0x1c)
    int32_t esi_3 = 0
    
    if (arg4 u> 0)
        while (true)
            if (edi_1 == 0)
                return result
            
            void* eax_2 = *(edi_1 + 8)
            int32_t ecx_6 = *(eax_2 + 0x10)
            
            if (ecx_6 == 0)
                int32_t ecx_11
                ecx_11.b = *(eax_2 + 0x18) != 0
                *(arg3 + (esi_3 << 2)) = ecx_11
            else
                int32_t eax_3
                
                if (ecx_6 == 1 || ecx_6 == 2)
                    eax_3 = *(eax_2 + 0x18)
                else
                    if (ecx_6 != 3)
                        return 0x8876086c
                    
                    int16_t x87control
                    eax_3, x87control = __ftol(x87control, fconvert.t(*(eax_2 + 0x18)))
                
                *(arg3 + (esi_3 << 2)) = eax_3
            
            edi_1 = *(edi_1 + 0xc)
            esi_3 += 1
            
            if (esi_3 u>= arg4)
                return result

return result
