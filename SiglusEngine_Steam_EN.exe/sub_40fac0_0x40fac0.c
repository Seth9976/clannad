// 函数: sub_40fac0
// 地址: 0x40fac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t ebx = *(arg1 + 0x1c)

if (*(arg3[2] + (ebx << 2)) != 0)
    return 

int32_t eax_3
int32_t edx_2
edx_2:eax_3 = sx.q(*(*(*(*(arg1 + 0x40) + 4) + 0x1c) + (ebx << 2)))
int32_t esi_1 = (eax_3 - edx_2) s>> 1
long double x87_r7_2 = float.t(*(arg2 + 4)) * fconvert.t(0.5f)
void* var_2c_1 = (esi_1 << 2) + 4
float var_c_1 = fconvert.s(float.t(*arg3) / (
    __fpatan(float.t(1), x87_r7_2 * x87_r7_2 * fconvert.t(1.84999998e-08f))
    * fconvert.t(2.2400000095367432)
    + __fpatan(float.t(1), x87_r7_2 * fconvert.t(0.000739999989f)) * fconvert.t(13.100000381469727)
    + x87_r7_2 * fconvert.t(9.99999975e-05f)))
*(arg3[2] + (ebx << 2)) = _malloc()
int32_t ebx_1 = 0
int32_t var_18_1 = 0

if (esi_1 s> 0)
    do
        long double x87_r7_12 = float.t(*(arg2 + 4)) * fconvert.t(0.5f)
            / fconvert.t(fconvert.s(float.t(esi_1))) * float.t(var_18_1)
        int32_t mxcsr
        int16_t x87control
        int16_t x87control_1
        long double st0_1
        st0_1, x87control_1 = sub_5f2080(mxcsr, x87control, 
            fconvert.d((__fpatan(float.t(1), x87_r7_12 * x87_r7_12 * fconvert.t(1.84999998e-08f))
                * fconvert.t(2.2400000095367432)
                + __fpatan(float.t(1), x87_r7_12 * fconvert.t(0.000739999989f))
                * fconvert.t(13.100000381469727) + x87_r7_12 * fconvert.t(9.99999975e-05f))
                * fconvert.t(var_c_1)))
        int32_t eax_7
        eax_7, x87control = __ftol(x87control_1, st0_1)
        int32_t ecx_3 = *arg3
        
        if (eax_7 s>= ecx_3)
            eax_7 = ecx_3 - 1
        
        ebx_1 += 1
        var_18_1 = ebx_1
        *(*(arg3[2] + (ebx << 2)) + (ebx_1 << 2) - 4) = eax_7
    while (ebx_1 s< esi_1)

*(*(arg3[2] + (ebx << 2)) + (ebx_1 << 2)) = 0xffffffff
arg3[ebx + 3] = esi_1
