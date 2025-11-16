// 函数: sub_43a798
// 地址: 0x43a798
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg1

if (eax == 0)
    long double x87_r7_5 = fconvert.t(arg2)
    long double x87_r6_1 = fconvert.t(0.0)
    x87_r6_1 - x87_r7_5
    int32_t eax_1
    eax_1.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    int32_t eax_5
    
    eax_5 = not(p_1) ? 0 : 1
    
    arg1[2] = eax_5
else if (eax == 1 || eax == 2)
    long double x87_r7_2 = fconvert.t(arg2)
    long double temp3_1 = fconvert.t(0.0)
    x87_r7_2 - temp3_1
    long double x87_r7_3 = fconvert.t(arg2)
    int32_t eax_2
    eax_2.w = (x87_r7_2 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp3_1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp3_1 ? 1 : 0) << 0xe | 0x3800
    long double x87_r7_4
    
    if ((eax_2:1.b & 1) != 0)
        x87_r7_4 = x87_r7_3 - fconvert.t(9.9999999999999995e-07)
    else
        x87_r7_4 = x87_r7_3 + fconvert.t(9.9999999999999995e-07)
    
    int16_t x87control
    arg1[2] = __ftol(x87control, x87_r7_4)
else
    if (eax != 3)
        return 0x80004005
    
    *(arg1 + 8) = fconvert.d(fconvert.t(arg2))

return 0
