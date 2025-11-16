// 函数: sub_403f4d
// 地址: 0x403f4d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
float* esi = arg2
long double x87_r7 = fconvert.t(esi[3])
long double temp1 = fconvert.t(1f)
x87_r7 - temp1
int32_t eax
eax.w = (x87_r7 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp1) ? 1 : 0) << 0xa
    | (x87_r7 == temp1 ? 1 : 0) << 0xe
bool p = unimplemented  {test ah, 0x5}
float* eax_2

if (p)
    eax_2 = arg1
label_403fb2:
    *eax_2 = fconvert.s(fconvert.t(*esi))
    eax_2[1] = esi[1]
    eax_2[2] = esi[2]
else
    int32_t ecx_1
    int32_t mxcsr
    int16_t x87control
    long double st0_1
    st0_1, ecx_1 = sub_7614c0(mxcsr, x87control, fconvert.t(esi[3]))
    long double st0_2
    bool c2_1
    st0_2, c2_1 = __fsin(st0_1)
    int32_t var_10_1 = ecx_1
    int32_t var_14_1 = ecx_1
    float var_8_1 = fconvert.s(st0_2)
    int32_t eax_1
    int80_t st0_3
    st0_3, eax_1 = sub_401000(fconvert.s(fconvert.t(var_8_1)), fconvert.s(float.t(0)))
    eax_2 = arg1
    
    if (eax_1 != 0)
        goto label_403fb2
    
    long double x87_r7_7 = fconvert.t(fconvert.s(st0_1)) / fconvert.t(var_8_1)
    *eax_2 = fconvert.s(x87_r7_7 * fconvert.t(*esi))
    eax_2[1] = fconvert.s(x87_r7_7 * fconvert.t(esi[1]))
    eax_2[2] = fconvert.s(x87_r7_7 * fconvert.t(esi[2]))

eax_2[3] = fconvert.s(float.t(0))
