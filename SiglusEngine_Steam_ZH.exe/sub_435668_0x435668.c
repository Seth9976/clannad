// 函数: sub_435668
// 地址: 0x435668
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0
int32_t eax = sub_433f9c(arg1, arg2, 1)

if (eax != 0)
    void* ecx_4 = *(*(eax + 4) + 0x40) + *(arg1 + 0x344) + *(eax + 0x18)
    
    if (*(ecx_4 + 0x10) == 0 || *(eax + 0x10) != 0xffffffff)
        int32_t edx_1 = *(ecx_4 + 4)
        
        if (edx_1 s>= 0 && edx_1 s<= 3 && *(ecx_4 + 0x14) == 1 && *(ecx_4 + 0x18) == 1)
            void* esi_1 = *(*(eax + 0x1c) + 8)
            int32_t eax_2 = *(esi_1 + 0x10)
            
            if (eax_2 == 0)
                long double x87_r7_3 = fconvert.t(arg3)
                long double x87_r6_1 = fconvert.t(0f)
                x87_r6_1 - x87_r7_3
                int32_t eax_3
                eax_3.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x44}
                int32_t eax_7
                
                eax_7 = not(p_1) ? 0 : 1
                
                *(esi_1 + 0x18) = eax_7
                return result
            
            if (eax_2 == 1 || eax_2 == 2)
                int16_t x87control
                *(esi_1 + 0x18) = __ftol(x87control, fconvert.t(arg3))
                return result
            
            if (eax_2 == 3)
                *(esi_1 + 0x18) = fconvert.d(fconvert.t(arg3))
                return result

return 0x8876086c
