// 函数: sub_4357c7
// 地址: 0x4357c7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_10 = edi
int32_t edi_1 = 0
int32_t result = 0

if (arg4 != 0 && arg3 == 0)
    return 0x8876086c

int32_t eax_1 = sub_433f9c(arg1, arg2, 1)

if (eax_1 != 0)
    void* ecx_5 = *(*(eax_1 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_1 + 0x18)
    int32_t edx_1 = *(ecx_5 + 4)
    
    if (edx_1 s>= 0 && edx_1 s<= 3)
        int32_t esi_2 = *(ecx_5 + 0x10)
        
        if (esi_2 == 0 || *(eax_1 + 0x10) != 0xffffffff)
            esi_2 = 1
        
        int32_t edx_4 = *(ecx_5 + 0x18) * *(ecx_5 + 0x14) * esi_2
        
        if (arg4 u>= edx_4)
            arg4 = edx_4
        
        void* ebx_1 = *(eax_1 + 0x1c)
        
        if (arg4 u<= 0)
            return result
        
        while (true)
            if (ebx_1 == 0)
                return result
            
            void* esi_3 = *(ebx_1 + 8)
            int32_t eax_2 = *(esi_3 + 0x10)
            int32_t eax_9
            
            if (eax_2 == 0)
                long double x87_r7_3 = fconvert.t(*(arg3 + (edi_1 << 2)))
                long double x87_r6_1 = fconvert.t(0f)
                x87_r6_1 - x87_r7_3
                int32_t eax_10
                eax_10.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                
                eax_9 = not(p_1) ? 0 : 1
                
                *(esi_3 + 0x18) = eax_9
            else if (eax_2 == 1 || eax_2 == 2)
                int16_t x87control
                eax_9, x87control = __ftol(x87control, fconvert.t(*(arg3 + (edi_1 << 2))))
                *(esi_3 + 0x18) = eax_9
            else
                if (eax_2 != 3)
                    return 0x8876086c
                
                *(esi_3 + 0x18) = fconvert.d(fconvert.t(*(arg3 + (edi_1 << 2))))
            ebx_1 = *(ebx_1 + 0xc)
            edi_1 += 1
            
            if (edi_1 u>= arg4)
                return result

return 0x8876086c
