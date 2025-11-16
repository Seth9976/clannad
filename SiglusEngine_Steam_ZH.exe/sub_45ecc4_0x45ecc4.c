// 函数: sub_45ecc4
// 地址: 0x45ecc4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
long double x87_r7 = fconvert.t(0f)
float* esi = arg1
long double temp1 = fconvert.t(*esi)
x87_r7 - temp1
int32_t edi
int32_t var_14 = edi
long double x87_r6 = fconvert.t(1f)
float* eax
eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe | 0x3000
int16_t x87control

if ((eax:1.b & 0x41) != 0)
    long double temp2_1 = fconvert.t(*esi)
    x87_r6 - temp2_1
    eax.w = (x87_r6 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, temp2_1) ? 1 : 0) << 0xa
        | (x87_r6 == temp2_1 ? 1 : 0) << 0xe | 0x3000
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (p_1)
        eax, x87control = __ftol(x87control, fconvert.t(*esi) * fconvert.t(255f) + fconvert.t(0.5f))
        arg1 = eax
    else
        arg1 = 0xff
else
    arg1 = nullptr

long double x87_r5_4 = fconvert.t(esi[1])
x87_r5_4 - x87_r7
eax.w = (x87_r5_4 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_4, x87_r7) ? 1 : 0) << 0xa
    | (x87_r5_4 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_2 = unimplemented  {test ah, 0x5}
float* var_8_1

if (p_2)
    long double temp3_1 = fconvert.t(esi[1])
    x87_r6 - temp3_1
    eax.w = (x87_r6 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, temp3_1) ? 1 : 0) << 0xa
        | (x87_r6 == temp3_1 ? 1 : 0) << 0xe | 0x3000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        eax, x87control =
            __ftol(x87control, fconvert.t(esi[1]) * fconvert.t(255f) + fconvert.t(0.5f))
        var_8_1 = eax
    else
        var_8_1 = 0xff
else
    var_8_1 = nullptr

long double x87_r5_8 = fconvert.t(esi[2])
x87_r5_8 - x87_r7
eax.w = (x87_r5_8 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_8, x87_r7) ? 1 : 0) << 0xa
    | (x87_r5_8 == x87_r7 ? 1 : 0) << 0xe | 0x3000
bool p_4 = unimplemented  {test ah, 0x5}
float* ebx

if (p_4)
    long double temp4_1 = fconvert.t(esi[2])
    x87_r6 - temp4_1
    eax.w = (x87_r6 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, temp4_1) ? 1 : 0) << 0xa
        | (x87_r6 == temp4_1 ? 1 : 0) << 0xe | 0x3800
    bool p_5 = unimplemented  {test ah, 0x5}
    
    if (p_5)
        eax, x87control =
            __ftol(x87control, fconvert.t(esi[2]) * fconvert.t(255f) + fconvert.t(0.5f))
        ebx = eax
    else
        ebx = 0xff
else
    x87_r7 = x87_r6
    ebx = nullptr

long double temp5 = fconvert.t(esi[3])
x87_r7 - temp5
eax.w = (x87_r7 < temp5 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp5) ? 1 : 0) << 0xa
    | (x87_r7 == temp5 ? 1 : 0) << 0xe
int32_t eax_1

if ((eax:1.b & 0x41) != 0)
    long double x87_r7_1 = fconvert.t(esi[3])
    long double temp6_1 = fconvert.t(1f)
    x87_r7_1 - temp6_1
    eax.w = (x87_r7_1 < temp6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe
    
    if ((eax:1.b & 0x41) != 0)
        eax_1 = __ftol(x87control, fconvert.t(esi[3]) * fconvert.t(255f) + fconvert.t(0.5f))
    else
        eax_1 = 0xff
else
    eax_1 = 0

return ((eax_1 << 8 | arg1) << 8 | var_8_1) << 8 | ebx
