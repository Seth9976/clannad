// 函数: sub_4066f0
// 地址: 0x4066f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = fconvert.t(arg1)
long double temp0 = fconvert.t(0.0)
x87_r7 - temp0
long double x87_r7_1 = fconvert.t(arg2)
long double temp1 = fconvert.t(0.0)
x87_r7_1 - temp1
int16_t eax = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp1 ? 1 : 0) << 0xe

if ((((x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
    if ((eax:1.b & 0x41) != 0)
        long double x87_r7_7 = fneg(fconvert.t(arg2))
        long double temp3 = fconvert.t(arg1)
        x87_r7_7 - temp3
        
        if ((((x87_r7_7 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_7, temp3) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp3 ? 1 : 0) << 0xe):1.b & 1) == 0)
            return fneg(sqrt(fconvert.t(arg2) * fconvert.t(arg2)
                - fconvert.t(arg1) * fconvert.t(arg1)))
        
        return sqrt(fconvert.t(arg1) * fconvert.t(arg1) - fconvert.t(arg2) * fconvert.t(arg2))
    
    return sqrt(fconvert.t(arg1) * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2))

long double x87_r7_17 = fconvert.t(arg1)

if ((eax:1.b & 1) != 0)
    return fneg(sqrt(x87_r7_17 * fconvert.t(arg1) + fconvert.t(arg2) * fconvert.t(arg2)))

long double x87_r7_22 = fneg(x87_r7_17)
long double temp2 = fconvert.t(arg2)
x87_r7_22 - temp2

if ((((x87_r7_22 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_22, temp2) ? 1 : 0) << 0xa
        | (x87_r7_22 == temp2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
    return sqrt(fconvert.t(arg2) * fconvert.t(arg2) - fconvert.t(arg1) * fconvert.t(arg1))

return fneg(sqrt(fconvert.t(arg1) * fconvert.t(arg1) - fconvert.t(arg2) * fconvert.t(arg2)))
