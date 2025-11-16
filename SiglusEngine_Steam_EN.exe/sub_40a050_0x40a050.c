// 函数: sub_40a050
// 地址: 0x40a050
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi)
int32_t i_4 = (eax_1 + (edx & 3)) s>> 2
void* eax_4 = _malloc(i_4 << 2)
void* eax_5 = _malloc((i_4 + edi) << 2)
long double x87_r7 = float.t(arg2)
arg2 = fconvert.s(x87_r7)
int32_t var_28
var_28.q = fconvert.d(
    __fyl2x(x87_r7, fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11)) /
    __fyl2x(fconvert.t(2.0), fconvert.t(0.69314718048553914) + fconvert.t(7.4406171098029793e-11))
    + fconvert.t(0.5))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
long double st0
st0, x87control_1 = sub_5f2080(mxcsr, x87control, var_28)
int32_t eax_6 = __ftol(x87control_1, st0)
char var_4 = eax_6.b
arg1[1] = eax_6
*arg1 = edi
arg1[2] = eax_5
arg1[3] = eax_4

if (i_4 s> 0)
    int32_t var_10_1 = 0
    void* eax_8 = eax_5
    void* ecx_3 = eax_5 + (edi s>> 1 << 2)
    int32_t var_c_2 = 1
    int32_t i
    
    do
        eax_8 += 8
        long double x87_r5_2 = float.t(var_10_1) * fconvert.t(3.14159274f) / fconvert.t(arg2)
        ecx_3 += 8
        i = i_4
        i_4 -= 1
        var_10_1 += 4
        long double st0_1
        bool c2_1
        st0_1, c2_1 = __fcos(x87_r5_2)
        *(eax_8 - 8) = fconvert.s(st0_1)
        long double st0_2
        bool c2_2
        st0_2, c2_2 = __fsin(x87_r5_2)
        *(eax_8 - 4) = fconvert.s(fneg(st0_2))
        long double x87_r5_5 = float.t(var_c_2)
        var_c_2 += 2
        long double x87_r5_6 = x87_r5_5 * fconvert.t(3.14159274f) / float.t(edi * 2)
        long double st0_3
        bool c2_3
        st0_3, c2_3 = __fcos(x87_r5_6)
        *(ecx_3 - 8) = fconvert.s(st0_3)
        long double st0_4
        bool c2_4
        st0_4, c2_4 = __fsin(x87_r5_6)
        *(ecx_3 - 4) = fconvert.s(st0_4)
    while (i != 1)

int32_t eax_10
int32_t edx_5
edx_5:eax_10 = sx.q(edi)
int32_t i_7 = ((edx_5 & 7) + eax_10) s>> 3
int32_t i_8 = i_7

if (i_7 s> 0)
    int32_t var_c_3 = 2
    void* edi_1 = eax_5 + (edi << 2)
    int32_t i_3 = i_7
    int32_t i_1
    
    do
        edi_1 += 8
        i_1 = i_3
        i_3 -= 1
        long double x87_r6_7 = float.t(var_c_3) * fconvert.t(3.14159274f) / fconvert.t(arg2)
        var_c_3 += 4
        long double st0_5
        bool c2_5
        st0_5, c2_5 = __fcos(x87_r6_7)
        *(edi_1 - 8) = fconvert.s(st0_5 * fconvert.t(0.5))
        long double st0_6
        bool c2_6
        st0_6, c2_6 = __fsin(x87_r6_7)
        *(edi_1 - 4) = fconvert.s(st0_6 * fconvert.t(-0.5))
    while (i_1 != 1)

int32_t ebx_6 = 0
int32_t i_5 = 1 << (var_4 - 2)

if (i_7 s> 0)
    void* ebp_1 = eax_4
    int32_t i_6 = i_5
    
    do
        int32_t edi_2 = 0
        int32_t ecx_6 = 0
        
        if (i_5 != 0)
            int32_t i_2 = i_5
            
            do
                if ((ebx_6 & i_2) != 0)
                    edi_2 |= 1 << ecx_6.b
                
                ecx_6 += 1
                i_2 = i_5 s>> ecx_6.b
            while (i_2 != 0)
            
            i_7 = i_8
        
        ebp_1 += 8
        ebx_6 += 1
        *(ebp_1 - 8) = (not.d(edi_2) & ((1 << (var_4 - 1)) - 1)) - 1
        *(ebp_1 - 4) = edi_2
    while (ebx_6 s< i_7)

arg1[4] = fconvert.s(fconvert.t(4f) / fconvert.t(arg2))
