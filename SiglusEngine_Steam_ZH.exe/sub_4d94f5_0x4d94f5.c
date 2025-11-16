// 函数: sub_4d94f5
// 地址: 0x4d94f5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fabs(fconvert.t(arg1))
long double x87_r6 = fconvert.t(arg1)
long double temp3 = fconvert.t(0f)
x87_r6 - temp3
uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_30 = edi
char var_1d = 1
uint32_t eax
eax.w = (x87_r6 < temp3 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, temp3) ? 1 : 0) << 0xa
    | (x87_r6 == temp3 ? 1 : 0) << 0xe | 0x3800
bool p = unimplemented  {test ah, 0x5}

if (p)
    var_1d = 0

long double temp4 = fconvert.t(0.999999464f)
x87_r7_1 - temp4
eax.w = (x87_r7_1 < temp4 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp4) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp4 ? 1 : 0) << 0xe | 0x3800
bool p_1 = unimplemented  {test ah, 0x5}
void var_1c
void var_c
int16_t x87control

if (not(p_1))
    int32_t eax_1 = __ftol(x87control, x87_r7_1 * fconvert.t(10000000f))
    int32_t ecx_1 = eax_1
    uint32_t temp1_1 = modu.dp.d(0:eax_1, 0xa)
    
    if (temp1_1 u>= 5)
        ecx_1 += 0xa - temp1_1
    
    int32_t var_10
    __builtin_strncpy(&var_10, "0000", 4)
    __builtin_strncpy(&var_c, "0000", 4)
    var_10:1.b = 0x2e
    sub_4d94ba(divu.dp.d(0:ecx_1, 0xa), 0, &var_1c, 0x14)
    goto label_4d957b

long double temp5_1 = fconvert.t(1f)
x87_r7_1 - temp5_1
eax.w = (x87_r7_1 < temp5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp5_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp5_1 ? 1 : 0) << 0xe | 0x3800
bool p_2 = unimplemented  {test ah, 0x41}
void* eax_6

if (not(p_2))
    int32_t var_10_1
    __builtin_strncpy(&var_10_1, "0000", 4)
    __builtin_strncpy(&var_c, "0000", 4)
    var_10_1.b = 0x31
    var_10_1:1.b = 0x2e
label_4d957b:
    eax_6 = 8
    goto label_4d969e

long double temp6_1 = fconvert.t(429.48999f)
x87_r7_1 - temp6_1
eax.w = (x87_r7_1 < temp6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe | 0x3800
bool p_3 = unimplemented  {test ah, 0x5}
int32_t esi_1
int16_t x87control_1

if (not(p_3))
    int32_t eax_7
    eax_7, x87control_1 = __ftol(x87control, fconvert.t(10000000f) * x87_r7_1)
    esi_1 = eax_7
    uint32_t temp1_3 = modu.dp.d(0:eax_7, 0xa)
    
    if (temp1_3 u>= 5)
        esi_1 += 0xa - temp1_3
        long double x87_r7_3 = float.t(esi_1)
        
        if (esi_1 s< 0)
            x87_r7_3 = x87_r7_3 + fconvert.t(4.2949673e+09f)
        
        x87_r7_1 = x87_r7_3 * fconvert.t(1.00000001e-07f)
    
    goto label_4d9635

long double temp7_1 = fconvert.t(4294.8999f)
x87_r7_1 - temp7_1
eax.w = (x87_r7_1 < temp7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp7_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp7_1 ? 1 : 0) << 0xe | 0x3800
bool p_4 = unimplemented  {test ah, 0x5}
int32_t var_3c_1
void* var_38_2
uint32_t eax_15

if (p_4)
    long double temp8_1 = fconvert.t(100000f)
    x87_r7_1 - temp8_1
    eax.w = (x87_r7_1 < temp8_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp8_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp8_1 ? 1 : 0) << 0xe | 0x3800
    bool p_5 = unimplemented  {test ah, 0x5}
    int32_t eax_16
    int16_t x87control_2
    long double x87_r7_5
    
    if (not(p_5))
        int32_t var_34_2 = 0x14
        var_38_2 = &var_1c
        eax_16, x87control_2 = __ftol(x87control, x87_r7_1)
        x87_r7_5 = x87_r7_1 * fconvert.t(10000f)
    label_4d968b:
        var_3c_1 = eax_16
        eax_15 = __ftol(x87control_2, x87_r7_5)
        goto label_4d9692
    
    long double temp9_1 = fconvert.t(10000000f)
    x87_r7_1 - temp9_1
    eax.w = (x87_r7_1 < temp9_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp9_1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp9_1 ? 1 : 0) << 0xe | 0x3800
    bool p_6 = unimplemented  {test ah, 0x5}
    
    if (not(p_6))
        int32_t var_34_3 = 0x14
        var_38_2 = &var_1c
        eax_16, x87control_2 = __ftol(x87control, x87_r7_1)
        x87_r7_5 = x87_r7_1 * fconvert.t(100f)
        goto label_4d968b
    
    int32_t ecx
    int32_t var_34_4 = ecx
    int32_t var_38_3 = ecx
    var_38_3.q = fconvert.d(fconvert.t(arg1))
    sub_749803(arg2, "%f")
else
    int32_t eax_10
    eax_10, x87control_1 = __ftol(x87control, fconvert.t(1000000f) * x87_r7_1)
    esi_1 = eax_10
    uint32_t temp1_4 = modu.dp.d(0:eax_10, 0xa)
    
    if (temp1_4 u>= 5)
        esi_1 += 0xa - temp1_4
        long double x87_r7_4 = float.t(esi_1)
        
        if (esi_1 s< 0)
            x87_r7_4 = x87_r7_4 + fconvert.t(4.2949673e+09f)
        
        x87_r7_1 = x87_r7_4 * fconvert.t(9.99999997e-07f)
    
label_4d9635:
    int32_t var_34_1 = 0x14
    var_38_2 = &var_1c
    var_3c_1 = __ftol(x87control_1, x87_r7_1)
    eax_15 = divu.dp.d(0:esi_1, 0xa)
label_4d9692:
    eax_6 = sub_4d94ba(eax_15, var_3c_1, var_38_2, 0x14)
label_4d969e:
    void* esi_2 = &__security_cookie_1 - eax_6
    uint32_t ecx_3 = eax_6 u>> 2
    void* count
    int32_t esi_3
    int32_t edi_6
    
    if (var_1d == 0)
        edi_6, esi_3 = __builtin_memcpy(arg2, esi_2, ecx_3 << 2)
        count = eax_6 & 3
    else
        *arg2 = 0x2d
        edi_6, esi_3 = __builtin_memcpy(&arg2[1], esi_2, ecx_3 << 2)
        count = eax_6 & 3
        eax_6 += 1
    
    __builtin_memcpy(edi_6, esi_3, count)
    *(arg2 + eax_6) = 0
sub_745f2b(__security_cookie_1)
