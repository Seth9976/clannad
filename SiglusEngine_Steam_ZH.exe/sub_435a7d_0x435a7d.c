// 函数: sub_435a7d
// 地址: 0x435a7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0

if (arg4 != 0)
    int32_t edi
    int32_t var_10_1 = edi
    
    if (arg3 != 0)
        int32_t eax_1 = sub_433f9c(arg1, arg2, 1)
        
        if (eax_1 == 0)
            result = 0x8876086c
        else
            void* ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
            int32_t edx_1 = *(ecx_5 + 4)
            
            if (edx_1 s< 0 || edx_1 s> 3)
                result = 0x8876086c
            else
                int32_t esi_2 = *(ecx_5 + 0x10)
                
                if (esi_2 == 0 || *(eax_1 + 0x10) != 0xffffffff)
                    esi_2 = 1
                
                int32_t edx_4 = *(ecx_5 + 0x18) * *(ecx_5 + 0x14) * esi_2
                
                if (arg4 u>= edx_4)
                    arg4 = edx_4
                
                void* esi_3 = *(eax_1 + 0x1c)
                int32_t ecx_6 = 0
                
                if (arg4 u> 0)
                    while (true)
                        if (esi_3 == 0)
                            return result
                        
                        void* eax_2 = *(esi_3 + 8)
                        int32_t edx_5 = *(eax_2 + 0x10)
                        
                        if (edx_5 == 0 || edx_5 == 1 || edx_5 == 2)
                            int32_t edx_10
                            edx_10.b = *(eax_2 + 0x18) != 0
                            *(arg3 + (ecx_6 << 2)) = edx_10
                        else
                            if (edx_5 != 3)
                                break
                            
                            long double x87_r7_1 = fconvert.t(*(eax_2 + 0x18))
                            long double x87_r6_1 = fconvert.t(0.0)
                            x87_r6_1 - x87_r7_1
                            eax_2.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
                            bool p_1 = unimplemented  {test ah, 0x44}
                            int32_t eax_3
                            
                            eax_3 = not(p_1) ? 0 : 1
                            
                            *(arg3 + (ecx_6 << 2)) = eax_3
                        
                        esi_3 = *(esi_3 + 0xc)
                        ecx_6 += 1
                        
                        if (ecx_6 u>= arg4)
                            return result
                    
                    result = 0x8876086c
    else
        result = 0x8876086c

return result
