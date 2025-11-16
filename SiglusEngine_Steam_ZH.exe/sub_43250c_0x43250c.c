// 函数: sub_43250c
// 地址: 0x43250c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *(arg1 + 8)
int32_t eax_1 = *(esi + 0x10)
int32_t edi
int32_t var_c = edi

if (eax_1 == 0)
    long double x87_r7_3 = fconvert.t(arg2)
    long double x87_r6_1 = fconvert.t(0f)
    x87_r6_1 - x87_r7_3
    int32_t eax_2
    eax_2.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t eax_6
    
    eax_6 = not(p_1) ? 0 : 1
    
    *(esi + 0x18) = eax_6
else
    int16_t x87control
    
    if (eax_1 == 1 || eax_1 == 2)
        *(esi + 0x18) = __ftol(x87control, fconvert.t(arg2))
    else
        if (eax_1 != 3)
            return 0x8876086c
        
        *(esi + 0x18) = fconvert.d(fconvert.t(arg2))

return 0
