// 函数: sub_49f2cd
// 地址: 0x49f2cd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax = *(arg1 + 0x20)

if (*(arg1 + 8) == eax)
    int32_t var_8_1
    
    if (eax == 0)
        var_8_1 = 0x400
    else
        var_8_1 = eax * 2
    
    int32_t eax_4 = sub_745f3f(var_8_1 << 2)
    
    if (eax_4 == 0)
        if (arg2 != 0)
            sub_46e265(arg2, 1)
        
        return 0xffffffff
    
    int32_t ecx_3 = *(arg1 + 8) << 2
    int32_t edi
    int32_t var_18_2 = edi
    int32_t esi_2
    int32_t edi_2
    edi_2, esi_2 = __builtin_memcpy(eax_4, *(arg1 + 0x14), ecx_3 u>> 2 << 2)
    __builtin_memcpy(edi_2, esi_2, ecx_3 & 3)
    int32_t edi_3 = *(arg1 + 8)
    int32_t ecx_9 = (var_8_1 - edi_3) << 2
    __builtin_memset(__builtin_memset(eax_4 + (edi_3 << 2), 0, ecx_9 u>> 2 << 2), 0, ecx_9 & 3)
    j__free(*(arg1 + 0x14))
    *(arg1 + 0x14) = eax_4
    *(arg1 + 0x20) = var_8_1

if (arg2 != 0 && (*(*(*(arg1 + 0x10) + (*(arg2 + 4) << 2)) + 5) & 1) != 0
        && *(arg2 + 8) == 0xffffffff)
    long double x87_r7_1 = fconvert.t(0.0)
    *arg2 |= 0x80
    long double x87_r6_1 = fconvert.t(*(arg2 + 0x20))
    x87_r7_1 - x87_r6_1
    void* eax_8
    eax_8.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x44}
    bool p_2
    
    if (p_1)
        long double x87_r6_2 = fconvert.t(*(arg2 + 0x20))
        long double x87_r5_2 = fconvert.t(1.0)
        x87_r5_2 - x87_r6_2
        eax_8.w = (x87_r5_2 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r5_2, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r5_2 == x87_r6_2 ? 1 : 0) << 0xe | 0x3800
        p_2 = unimplemented  {test ah, 0x44}
    
    if (not(p_1) || not(p_2))
        *arg2 |= 1
    
    int16_t x87control
    long double x87_r6_4 = float.t(__ftol(x87control, fconvert.t(*(arg2 + 0x20))))
    long double x87_r6_6 = fabs(fconvert.t(*(arg2 + 0x20)) - x87_r6_4)
    long double temp1_1 = fconvert.t(9.9999999999999995e-07)
    x87_r6_6 - temp1_1
    int32_t eax_9
    eax_9.w = (x87_r6_6 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_6, temp1_1) ? 1 : 0) << 0xa
        | (x87_r6_6 == temp1_1 ? 1 : 0) << 0xe | 0x3800
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (not(p_3))
        *arg2 |= 2
    
    long double temp2_1 = fconvert.t(*(arg2 + 0x20))
    x87_r7_1 - temp2_1
    eax_9.w = (x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800
    bool p_4 = unimplemented  {test ah, 0x41}
    
    if (not(p_4))
        *arg2 |= 4
    
    long double temp3_1 = fconvert.t(*(arg2 + 0x20))
    x87_r7_1 - temp3_1
    eax_9.w = (x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe
    
    if ((eax_9:1.b & 1) == 0)
        *arg2 |= 8
    
    long double x87_r7_3 = fabs(fconvert.t(*(arg2 + 0x20)))
    long double temp4_1 = fconvert.t(1.0)
    x87_r7_3 - temp4_1
    eax_9.w = (x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe
    bool p_5 = unimplemented  {test ah, 0x41}
    
    if (not(p_5))
        *arg2 |= 0x10

*(*(arg1 + 0x14) + (*(arg1 + 8) << 2)) = arg2
int32_t result = *(arg1 + 8)
*(arg1 + 8) = result + 1
return result
