// 函数: sub_43a739
// 地址: 0x43a739
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *arg2
int32_t eax_6

if (eax == 0)
    eax_6.b = arg2[2] != 0
else if (eax == 1 || eax == 2)
    eax_6 = arg2[2]
else
    if (eax != 3)
        return 0x80004005
    
    long double x87_r7_1 = fconvert.t(*(arg2 + 8))
    long double temp5_1 = fconvert.t(0.0)
    x87_r7_1 - temp5_1
    long double x87_r7_2 = fconvert.t(*(arg2 + 8))
    long double x87_r7_3
    
    if ((((x87_r7_1 < temp5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800):1.b & 1) != 0)
        x87_r7_3 = x87_r7_2 - fconvert.t(9.9999999999999995e-07)
    else
        x87_r7_3 = x87_r7_2 + fconvert.t(9.9999999999999995e-07)
    
    int16_t x87control
    eax_6 = __ftol(x87control, x87_r7_3)

*arg1 = eax_6
return 0
