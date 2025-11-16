// 函数: sub_407140
// 地址: 0x407140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fabs(fconvert.t(*arg3))
long double x87_r6_1 = fabs(fconvert.t(*arg4))
x87_r7_1 - x87_r6_1
int32_t esi

if ((((x87_r7_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) != 0)
    esi = 0
else
    esi = 1

x87_r7_1 - x87_r6_1
int32_t result

if ((((x87_r7_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800):1.b & 1) == 0)
    result = 0
else
    result = 1

int32_t esi_1 = esi - result

if (esi == result)
    long double x87_r7_4 = fabs(fconvert.t(arg1))
    long double x87_r6_4 = fabs(fconvert.t(arg2))
    x87_r6_4 - x87_r7_4
    result.w = (x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe
    
    if ((result:1.b & 1) == 0)
        result = 0
    else
        result = 1
    
    esi_1 = result * 2 - 1

if (esi_1 != 1)
    long double x87_r7_10 = fconvert.t(*arg4)
    long double x87_r6_5 = fconvert.t(*arg4)
    long double temp2_1 = fconvert.t(0f)
    x87_r6_5 - temp2_1
    result.w = (x87_r6_5 < temp2_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, temp2_1) ? 1 : 0) << 0xa | (x87_r6_5 == temp2_1 ? 1 : 0) << 0xe
        | 0x3800
    long double x87_r6_7
    
    if ((result:1.b & 0x41) != 0)
        x87_r6_7 = fconvert.t(*arg4) - fconvert.t(*arg3)
    else
        x87_r6_7 = fconvert.t(*arg3) - fconvert.t(*arg4)
    
    *arg4 = fconvert.s(x87_r6_7)
    *arg3 = fconvert.s(x87_r7_10)
else
    long double x87_r7_5 = fconvert.t(*arg3)
    long double temp3_1 = fconvert.t(0f)
    x87_r7_5 - temp3_1
    result.w = (x87_r7_5 < temp3_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_5, temp3_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe
    
    if ((result:1.b & 0x41) != 0)
        *arg4 = fconvert.s(fconvert.t(*arg4) - fconvert.t(*arg3))
    else
        *arg4 = fconvert.s(fconvert.t(*arg3) - fconvert.t(*arg4))

long double x87_r7_12 = fabs(fconvert.t(*arg3))
long double x87_r6_9 = fconvert.t(*arg4)
long double x87_r5_2 = x87_r7_12 * fconvert.t(1.9998999834060669)
x87_r5_2 - x87_r6_9
result.w = (x87_r5_2 < x87_r6_9 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_2, x87_r6_9) ? 1 : 0) << 0xa
    | (x87_r5_2 == x87_r6_9 ? 1 : 0) << 0xe | 0x3800

if ((result:1.b & 1) == 0)
    return result

*arg4 = fconvert.s(x87_r7_12 * fconvert.t(-2.0))
*arg3 = fconvert.s(fneg(fconvert.t(*arg3)))
return result
