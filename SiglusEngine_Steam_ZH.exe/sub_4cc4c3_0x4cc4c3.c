// 函数: sub_4cc4c3
// 地址: 0x4cc4c3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t* eax = *(arg1 + 0x100)

if ((*eax & 0xfffff) != 1)
    return 1

void* eax_3 = *(*(arg1 + 0x14) + (*(eax[2] + 4) << 2))
int32_t edi
int32_t var_14_1 = edi
int32_t result

if ((*(*(*(arg1 + 0x10) + (*(eax_3 + 4) << 2)) + 5) & 1) == 0 || *(eax_3 + 8) != 0xffffffff)
    result = 1
else
    long double x87_r7_1 = fconvert.t(0.0)
    long double x87_r6_1 = fconvert.t(*(eax_3 + 0x20))
    x87_r6_1 - x87_r7_1
    eax_3.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        result = 1
    else
        int32_t var_18_1 = 1
        int32_t eax_4 = sub_49f544(arg1, 0, 0, 0, 1.40129846e-45f)
        
        if (eax_4 != 0xffffffff)
            int32_t eax_5 = *(arg1 + 0x14)
            int32_t* ebx_1 = *(eax_5 + (**(*(arg1 + 0x100) + 8) << 2))
            int32_t* edi_2 = *(eax_5 + (eax_4 << 2))
            result = sub_49f070(edi_2, ebx_1)
            
            if (result s>= 0)
                result = sub_49f12c(edi_2, ebx_1)
                
                if (result s>= 0)
                    edi_2[0xf] ^= 0x80000
                    
                    if (edi_2[0xe] == 0xffffffff)
                        edi_2[0xe] = **(*(arg1 + 0x100) + 8)
                    
                    *(*(*(arg1 + 0x100) + 8) + 4) = eax_4
                    result = 0
        else
            result = 0x8007000e

return result
