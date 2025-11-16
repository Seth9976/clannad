// 函数: sub_444a77
// 地址: 0x444a77
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg1
int32_t edi
int32_t var_c = edi

if (eax_1 == 1)
    int32_t i_5 = arg4 << 4
    float* edx_1 = arg3
    
    if (i_5 != 0)
        int32_t* ecx_7 = arg2 - edx_1
        int32_t i_3 = i_5
        int32_t i
        
        do
            long double x87_r7_2 = fconvert.t(*edx_1)
            long double x87_r6_1 = fconvert.t(0f)
            x87_r6_1 - x87_r7_2
            i_5.w = (x87_r6_1 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_1 = unimplemented  {test ah, 0x44}
            
            i_5 = not(p_1) ? 0 : 1
            
            *(ecx_7 + edx_1) = i_5
            edx_1 = &edx_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
else if (eax_1 == 2)
    int32_t i_4 = arg4 << 4
    int32_t* edi_3 = arg2
    
    if (i_4 != 0)
        float* esi_4 = arg3 - edi_3
        int32_t i_2 = i_4
        int32_t i_1
        
        do
            int32_t eax_8
            int16_t x87control
            eax_8, x87control = __ftol(x87control, fconvert.t(*(esi_4 + edi_3)))
            *edi_3 = eax_8
            edi_3 = &edi_3[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
else
    if (eax_1 != 3)
        return 0x8876086c
    
    int32_t ecx_2 = arg4 << 6
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(arg2, arg3, ecx_2 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_2 & 3)

return 0
