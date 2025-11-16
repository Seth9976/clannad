// 函数: sub_468fa6
// 地址: 0x468fa6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = fconvert.t(0f)
long double temp1 = fconvert.t(*arg1)
x87_r7 - temp1
float eax
eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3800
float var_20

if ((eax:1.b & 0x41) != 0)
    long double x87_r6_1 = fconvert.t(*arg1)
    long double temp2_1 = fconvert.t(1f)
    x87_r6_1 - temp2_1
    eax.w = (x87_r6_1 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, temp2_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) != 0)
        var_20 = *arg1
    else
        var_20 = fconvert.s(float.t(1))
else
    var_20 = fconvert.s(float.t(0))

long double temp3 = fconvert.t(arg1[1])
x87_r7 - temp3
eax.w = (x87_r7 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp3) ? 1 : 0) << 0xa
    | (x87_r7 == temp3 ? 1 : 0) << 0xe | 0x3800
float var_1c

if ((eax:1.b & 0x41) != 0)
    long double x87_r6_3 = fconvert.t(arg1[1])
    long double temp4_1 = fconvert.t(1f)
    x87_r6_3 - temp4_1
    eax.w = (x87_r6_3 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, temp4_1) ? 1 : 0) << 0xa
        | (x87_r6_3 == temp4_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax:1.b & 0x41) != 0)
        var_1c = arg1[1]
    else
        var_1c = fconvert.s(float.t(1))
else
    var_1c = fconvert.s(float.t(0))

long double temp5 = fconvert.t(arg1[2])
x87_r7 - temp5
eax.w = (x87_r7 < temp5 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp5) ? 1 : 0) << 0xa
    | (x87_r7 == temp5 ? 1 : 0) << 0xe
float var_18

if ((eax:1.b & 0x41) != 0)
    long double x87_r7_2 = fconvert.t(arg1[2])
    long double temp6_1 = fconvert.t(1f)
    x87_r7_2 - temp6_1
    eax.w = (x87_r7_2 < temp6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_2, temp6_1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp6_1 ? 1 : 0) << 0xe
    
    if ((eax:1.b & 0x41) != 0)
        var_18 = arg1[2]
    else
        var_18 = fconvert.s(float.t(1))
else
    var_18 = fconvert.s(float.t(0))

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(temp0 | 0xc00)
int16_t var_8
var_8.d = int.d(fconvert.t(fconvert.s(fconvert.t(var_20) * fconvert.t(31f) + fconvert.t(0.5f))))
int32_t eax_5 = var_8.d
var_8.d = int.d(fconvert.t(fconvert.s(fconvert.t(var_1c) * fconvert.t(63f) + fconvert.t(0.5f))))
int32_t ecx = var_8.d
var_8.d = int.d(fconvert.t(fconvert.s(fconvert.t(var_18) * fconvert.t(31f) + fconvert.t(0.5f))))
int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16(temp0)
return (eax_5 << 6 | ecx) << 5 | var_8.d
