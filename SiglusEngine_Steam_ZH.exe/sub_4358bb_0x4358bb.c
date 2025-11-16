// 函数: sub_4358bb
// 地址: 0x4358bb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0
int32_t ebx = arg4

if (ebx != 0)
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
                
                if (ebx u>= edx_4)
                    ebx = edx_4
                
                void* esi_3 = *(eax_1 + 0x1c)
                int32_t ecx_6 = 0
                
                if (ebx u> 0)
                    while (true)
                        if (esi_3 == 0)
                            return result
                        
                        void* eax_2 = *(esi_3 + 8)
                        int32_t edx_5 = *(eax_2 + 0x10)
                        long double x87_r7_1
                        
                        if (edx_5 == 0)
                            int32_t edx_10
                            edx_10.b = *(eax_2 + 0x18) != 0
                            x87_r7_1 = float.t(edx_10)
                        else if (edx_5 == 1)
                            x87_r7_1 = float.t(*(eax_2 + 0x18))
                        else if (edx_5 == 2)
                            int32_t eax_3 = *(eax_2 + 0x18)
                            x87_r7_1 = float.t(eax_3)
                            
                            if (eax_3 s< 0)
                                x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                        else
                            if (edx_5 != 3)
                                break
                            
                            x87_r7_1 = fconvert.t(*(eax_2 + 0x18))
                        
                        *(arg3 + (ecx_6 << 2)) = fconvert.s(x87_r7_1)
                        esi_3 = *(esi_3 + 0xc)
                        ecx_6 += 1
                        
                        if (ecx_6 u>= ebx)
                            return result
                    
                    result = 0x8876086c
    else
        result = 0x8876086c

return result
