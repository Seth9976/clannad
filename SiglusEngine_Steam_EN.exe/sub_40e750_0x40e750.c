// 函数: sub_40e750
// 地址: 0x40e750
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp = *arg1
int32_t ecx = 0
int32_t edx = 0
int32_t eax_1 = arg1[arg2 * 8 - 7]
int32_t esi = 0
int32_t edi = 0
int32_t ebx = 0
int32_t var_28_1
__builtin_memset(&var_28_1, 0, 0x14)
int32_t var_c = 0
int32_t var_10 = eax_1
int32_t var_24_1
int32_t var_20_1
int32_t var_1c_1
int32_t var_18_1

if (arg2 s> 0)
    void* eax_3 = &arg1[3]
    bool cond:2_1
    
    do
        int32_t ebp_4 = *(eax_3 - 4)
        eax_3 += 0x20
        edx += ebp_4
        esi += *(eax_3 - 0x20)
        edi += *(eax_3 - 0x1c)
        var_c += *(eax_3 - 0x18)
        ebx += *(eax_3 - 0x14)
        ecx += *(eax_3 - 0x10)
        cond:2_1 = arg2 != 1
        arg2 -= 1
    while (cond:2_1)
    eax_1 = var_10
    var_18_1 = ecx
    var_1c_1 = ebx
    var_20_1 = edi
    var_24_1 = esi
    var_28_1 = edx

int32_t ebp_13 = *arg3

if (ebp_13 s>= 0)
    esi += ebp_13
    edx += ebp
    edi += ebp * ebp
    eax_1 = var_10
    ebx += ebp_13 * ebp
    ecx += 1
    var_28_1 = edx
    var_24_1 = esi
    var_20_1 = edi
    var_1c_1 = ebx
    var_18_1 = ecx

int32_t ebp_19 = *arg4

if (ebp_19 s>= 0)
    var_28_1 = edx + eax_1
    ecx += 1
    var_24_1 = esi + ebp_19
    var_20_1 = edi + eax_1 * eax_1
    var_1c_1 = ebx + ebp_19 * eax_1
    var_18_1 = ecx

if (ecx == 0)
    *arg3 = 0
    *arg4 = 0
    return 

long double x87_r7_1 = float.t(var_28_1)
long double x87_r6_1 = float.t(var_24_1)
var_c.q = fconvert.d(float.t(var_20_1))
long double x87_r5_2 = float.t(var_1c_1)
long double x87_r4_1 = float.t(var_18_1)
long double x87_r3_4 = fconvert.t(1.0) / (x87_r4_1 * fconvert.t(var_c.q) - x87_r7_1 * x87_r7_1)
var_18_1.q = fconvert.d((fconvert.t(var_c.q) * x87_r6_1 - x87_r5_2 * x87_r7_1) * x87_r3_4)
var_c.q = fconvert.d((x87_r4_1 * x87_r5_2 - x87_r6_1 * x87_r7_1) * x87_r3_4)
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0_1
st0_1, x87control_1 = sub_5f2080(mxcsr, x87control, 
    fconvert.d(float.t(ebp) * fconvert.t(var_c.q) + fconvert.t(var_18_1.q) + fconvert.t(0.5)))
int32_t eax_5
int16_t x87control_2
eax_5, x87control_2 = __ftol(x87control_1, st0_1)
*arg3 = eax_5
int16_t x87control_3
long double st0_2
st0_2, x87control_3 = sub_5f2080(mxcsr, x87control_2, 
    fconvert.d(float.t(var_10) * fconvert.t(var_c.q) + fconvert.t(var_18_1.q) + fconvert.t(0.5)))
*arg4 = __ftol(x87control_3, st0_2)

if (*arg3 s> 0x3ff)
    *arg3 = 0x3ff

if (*arg4 s> 0x3ff)
    *arg4 = 0x3ff

if (*arg3 s< 0)
    *arg3 = 0

if (*arg4 s< 0)
    *arg4 = 0
