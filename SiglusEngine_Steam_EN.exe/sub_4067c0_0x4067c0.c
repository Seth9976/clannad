// 函数: sub_4067c0
// 地址: 0x4067c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = fconvert.t(arg1)
long double temp0 = fconvert.t(0.0)
x87_r7 - temp0
long double x87_r7_1 = fconvert.t(arg2)
long double temp1 = fconvert.t(0.0)
x87_r7_1 - temp1
int16_t eax = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp1 ? 1 : 0) << 0xe
long double x87_r7_6

if ((((x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
    long double x87_r7_9 = fconvert.t(arg1)
    
    if ((eax:1.b & 1) != 0)
        return fneg(sqrt(x87_r7_9 * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2)))
    
    long double x87_r7_10 = fneg(x87_r7_9)
    long double temp2_1 = fconvert.t(arg2)
    x87_r7_10 - temp2_1
    
    if ((((x87_r7_10 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_10, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp2_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
        return fneg(sqrt(fconvert.t(arg1) * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2)))
    
    x87_r7_6 = fconvert.t(arg1) * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2)
else if ((eax:1.b & 0x41) == 0)
    x87_r7_6 = fconvert.t(arg1) * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2)
else
    long double x87_r7_3 = fneg(fconvert.t(arg2))
    long double temp3_1 = fconvert.t(arg1)
    x87_r7_3 - temp3_1
    bool c1_1 = unimplemented  {fmul st0, dword [esp+0x8]}
    x87_r7_6 = fconvert.t(arg1) * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2)
    
    if ((((x87_r7_3 < temp3_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
            | (is_unordered.t(x87_r7_3, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp3_1 ? 1 : 0) << 0xe | 0x3000):1.b & 1) == 0)
        return fneg(sqrt(x87_r7_6))

return sqrt(x87_r7_6)
