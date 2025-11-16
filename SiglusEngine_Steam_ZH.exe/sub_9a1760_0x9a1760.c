// 函数: sub_9a1760
// 地址: 0x9a1760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3
int32_t var_68 = 0
int32_t* var_24 = ebx
int32_t var_18 = 0xffffff9d
_memset(ebx, 0, 0x34)
int32_t* edi = arg4
ebx[9] = *edi
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_4
x87control_1, xmm0_4 =
    __libm_sse2_log_precise(mxcsr, x87control, _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(*edi)) * 8f))
int16_t x87control_2
double xmm0_6
x87control_2, xmm0_6 = __libm_sse2_log_precise(mxcsr, x87control_1, 0x4000000000000000)
var_68.q = fconvert.d(fconvert.t(xmm0_4 / xmm0_6 + 0.5))
int16_t x87control_3
long double st0
st0, x87control_3 = sub_74c3d0(mxcsr, x87control_2, 0f)
double xmm1_4 = _mm_cvtepi32_pd(zx.q(arg5))
int32_t esi = int.d(fconvert.d(st0) - 1.0)
float xmm0_10 = _mm_cvtepi32_ps(zx.o(arg6))
ebx[8] = esi
int16_t x87control_4
double xmm0_15
x87control_4, xmm0_15 =
    __libm_sse2_log_precise(mxcsr, x87control_3, _mm_cvtps_pd(xmm0_10 * 0.25f) * 0.5 / xmm1_4)
int32_t edi_1 = arg5
int32_t esi_1 = int.d(
    (xmm0_15 * 1.4426950216293335 - 5.9657840728759766) * _mm_cvtepi32_pd(zx.q(1 << (esi.b + 1)))
    - _mm_cvtepi32_pd(zx.q(*edi)))
float xmm0_22 = _mm_cvtepi32_ps(zx.o(edi_1)) + 0.25f
float xmm1_11 = _mm_cvtepi32_ps(zx.o(arg6))
ebx[7] = esi_1
int16_t x87control_5
double xmm0_27
x87control_5, xmm0_27 =
    __libm_sse2_log_precise(mxcsr, x87control_4, _mm_cvtps_pd(xmm0_22 * xmm1_11) * 0.5 / xmm1_4)
int32_t esi_2 = edi_1 << 2
ebx[0xa] = int.d((xmm0_27 * 1.4426950216293335 - 5.9657840728759766)
    * _mm_cvtepi32_pd(zx.q(1 << ((ebx[8]).b + 1))) + 0.5) - esi_1 + 1
ebx[4] = _malloc(esi_2)
ebx[5] = _malloc(esi_2)
ebx[6] = _malloc(esi_2)
ebx[1] = arg2
*ebx = edi_1
ebx[0xb] = arg6
ebx[0xc] = 0x3f800000

if (arg6 s< 0x6590)
    ebx[0xc] = 0
else if (arg6 s< 0x9470)
    ebx[0xc] = 0x3f70a3d7
else if (arg6 s> 0xb3b0)
    ebx[0xc] = 0x3fa33333

int32_t j = 0
int32_t i = 0
arg4 = 0
int32_t ecx_3

do
    int16_t x87control_6
    double xmm0_38
    x87control_6, xmm0_38 = __libm_sse2_exp_precise(mxcsr, x87control_5, 
        (_mm_cvtepi32_pd(zx.q(i + 1)) * 0.125 - 2.0 + 5.9657840728759766) * 0.69314700365066528)
    var_68.q = fconvert.d(fconvert.t(xmm0_38 * 2.0 * xmm1_4 / _mm_cvtepi32_pd(zx.q(arg6)) + 0.5))
    long double st0_1
    st0_1, x87control_5 = sub_74c3d0(mxcsr, x87control_6, 0f)
    ecx_3 = arg4
    int32_t edx = int.d(fconvert.t(fconvert.d(st0_1)))
    float xmm1_16 = *((ecx_3 << 2) + &data_ae4640)
    
    if (j s< edx)
        double xmm4_1 = 100.0
        int32_t eax_13 = edx - j
        float xmm2_3 = (*((ecx_3 << 2) + &data_ae4644) - xmm1_16) / _mm_cvtepi32_ps(zx.o(eax_13))
        
        if (eax_13 s>= 4)
            ecx_3 = j + 2
            
            do
                if (j s>= edi_1)
                    goto label_9a1add
                
                float xmm3_2 = xmm2_3 + xmm1_16
                *(ebx[4] + (j << 2)) = _mm_cvtpd_ps(fconvert.d(xmm1_16) + xmm4_1)
                
                if (ecx_3 - 1 s>= edi_1)
                    j += 1
                    goto label_9a1add
                
                float xmm1_18 = xmm2_3 + xmm3_2
                *(ebx[4] + (j << 2) + 4) = _mm_cvtpd_ps(fconvert.d(xmm3_2) + xmm4_1)
                
                if (ecx_3 s>= edi_1)
                    j += 2
                    goto label_9a1add
                
                float xmm3_4 = xmm2_3 + xmm1_18
                *(ebx[4] + (j << 2) + 8) = _mm_cvtpd_ps(fconvert.d(xmm1_18) + xmm4_1)
                
                if (ecx_3 + 1 s>= edi_1)
                    j += 3
                    goto label_9a1add
                
                ecx_3 += 4
                xmm1_16 = xmm2_3 + xmm3_4
                *(ebx[4] + (j << 2) + 0xc) = _mm_cvtpd_ps(fconvert.d(xmm3_4) + xmm4_1)
                j += 4
            while (j s< edx - 3)
        
        if (j s< edx)
            while (j s< edi_1)
                *(ebx[4] + (j << 2)) = _mm_cvtpd_ps(fconvert.d(xmm1_16) + xmm4_1)
                j += 1
                xmm1_16 = xmm1_16 + xmm2_3
                
                if (j s>= edx)
                    break
    
label_9a1add:
    i += 1
    arg4 = i
while (i s< 0x57)

if (j s< edi_1)
    if (edi_1 - j s>= 4)
        do
            int32_t ecx_4 = ebx[4]
            *(ecx_4 + (j << 2)) = *(ecx_4 + (j << 2) - 4)
            int32_t ecx_5 = ebx[4]
            *(ecx_5 + (j << 2) + 4) = *(ecx_5 + (j << 2))
            int32_t ecx_6 = ebx[4]
            *(ecx_6 + (j << 2) + 8) = *(ecx_6 + (j << 2) + 4)
            ecx_3 = ebx[4]
            *(ecx_3 + (j << 2) + 0xc) = *(ecx_3 + (j << 2) + 8)
            j += 4
        while (j s< edi_1 - 3)
    
    for (; j s< edi_1; j += 1)
        ecx_3 = ebx[4]
        *(ecx_3 + (j << 2)) = *(ecx_3 + (j << 2) - 4)

int32_t var_14 = 0

if (edi_1 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(arg6), edi_1 * 2)
    int32_t ecx_9 = temp0_1 * temp0_1
    int32_t var_1c_1 = 0
    int32_t esi_3 = 1
    ecx_3 = 0
    int32_t var_28_2 = 0
    int32_t edx_3 = 0
    
    do
        int16_t x87control_7
        double xmm0_65
        x87control_7, xmm0_65 = __libm_sse2_atan_precise(mxcsr, x87control_5, 
            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ecx_3 * edx_3)) * 1.84999998e-08f))
        double xmm0_68
        x87control_5, xmm0_68 = __libm_sse2_atan_precise(mxcsr, x87control_7, 
            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(var_1c_1)) * 0.000739999989f))
        int32_t edx_4 = var_18
        int32_t ecx_10 = var_14
        float xmm0_71 = _mm_cvtepi32_ps(zx.o(var_1c_1))
        int32_t eax_38 = *(arg2 + 0x78) + edx_4
        int32_t var_20_1 = eax_38
        float xmm0_74 = _mm_cvtpd_ps(xmm0_65 * 2.2400000095367432 + xmm0_68 * 13.100000381469727
            + _mm_cvtps_pd(xmm0_71 * 9.99999975e-05f))
        double var_38_3
        var_38_3:4.d = xmm0_74
        
        if (eax_38 s< ecx_10)
            float xmm0_75 = xmm0_74 f- *(arg2 + 0x70)
            int32_t ebx_2 = ecx_9 * edx_4
            int32_t edi_4 = temp0_1 * edx_4
            int32_t eax_43
            
            do
                int16_t x87control_8
                double xmm0_80
                x87control_8, xmm0_80 = __libm_sse2_atan_precise(mxcsr, x87control_5, 
                    _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ebx_2 * edx_4)) * 1.84999998e-08f))
                double xmm0_83
                x87control_5, xmm0_83 = __libm_sse2_atan_precise(mxcsr, x87control_8, 
                    _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(edi_4)) * 0.000739999989f))
                ecx_10 = var_14
                double xmm1_31 = xmm0_80 * 2.2400000095367432 + xmm0_83 * 13.100000381469727
                    + _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(edi_4)) * 9.99999975e-05f)
                
                if (_mm_cvtps_pd(xmm0_75) f<= xmm1_31)
                    break
                
                eax_43 = var_20_1 + 1
                ebx_2 += ecx_9
                edx_4 = var_18 + 1
                edi_4 += temp0_1
                var_18 = edx_4
                var_20_1 = eax_43
            while (eax_43 s< ecx_10)
            ebx = var_24
            edi_1 = arg5
        
        if (esi_3 s<= edi_1)
            int32_t edx_6 = ecx_9
            int32_t ebx_4 = temp0_1 * esi_3
            int32_t eax_46 = *(arg2 + 0x7c) + ecx_10
            int32_t ecx_11 = temp0_1
            int32_t eax_48 = ecx_9 * esi_3
            int32_t var_20_2 = eax_48
            
            do
                if (esi_3 s>= eax_46)
                    int16_t x87control_9
                    double xmm0_95
                    x87control_9, xmm0_95 = __libm_sse2_atan_precise(mxcsr, x87control_5, 
                        _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(eax_48 * esi_3)) * 1.84999998e-08f))
                    double xmm0_98
                    x87control_5, xmm0_98 = __libm_sse2_atan_precise(mxcsr, x87control_9, 
                        _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ebx_4)) * 0.000739999989f))
                    double xmm1_37 = xmm0_95 * 2.2400000095367432 + xmm0_98 * 13.100000381469727
                        + _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(ebx_4)) * 9.99999975e-05f)
                    
                    if (_mm_cvtps_pd(*(arg2 + 0x74) f+ var_38_3:4.d) f<= xmm1_37)
                        break
                    
                    eax_48 = var_20_2
                    ecx_11 = temp0_1
                    edx_6 = ecx_9
                
                esi_3 += 1
                eax_48 += edx_6
                ebx_4 += ecx_11
                var_20_2 = eax_48
            while (esi_3 s<= edi_1)
            
            ebx = var_24
        
        *(ebx[6] + (var_14 << 2)) = (var_18 << 0x10) - 0x10001 + esi_3
        edx_3 = var_14 + 1
        ecx_3 = var_28_2 + ecx_9
        var_14 = edx_3
        var_28_2 = ecx_3
        var_1c_1 += temp0_1
    while (edx_3 s< edi_1)

double xmm1_38 = 0.5
int32_t esi_4 = 0

if (edi_1 s> 0)
    do
        double xmm0_114
        x87control_5, xmm0_114 = __libm_sse2_log_precise(mxcsr, x87control_5, 
            _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(esi_4)) + 0.25f) * xmm1_38
                * _mm_cvtepi32_pd(zx.q(arg6)) / xmm1_4)
        int32_t eax_55 = ebx[5]
        xmm1_38 = 0.5
        ecx_3 = int.d((xmm0_114 * 1.4426950216293335 - 5.9657840728759766)
            * _mm_cvtepi32_pd(zx.q(1 << ((ebx[8]).b + 1))) + xmm1_38)
        *(eax_55 + (esi_4 << 2)) = ecx_3
        esi_4 += 1
    while (esi_4 s< edi_1)

int32_t var_64_2 = ecx_3
float xmm0_119 = *(arg2 + 0x1c)
double xmm0_121 = _mm_cvtepi32_pd(zx.q(arg6))
float xmm3_5 = *(arg2 + 0x18)
_mm_cvtpd_ps(xmm0_121 * xmm1_38 / xmm1_4)
int32_t eax_57
int16_t x87control_10
eax_57, x87control_10 = sub_9a0c50(xmm3_5, xmm0_119)
ebx[2] = eax_57
ebx[3] = _malloc(0xc)
int32_t result

for (int32_t* i_1 = nullptr; i_1 s< 0xc; i_1 = &i_1[1])
    result = _malloc(esi_2)
    *(i_1 + ebx[3]) = result

int32_t esi_5 = 0

if (arg5 s> 0)
    double xmm1_45 = xmm1_4 * 2.0
    double var_48_4 = xmm1_45
    
    do
        double xmm0_129
        x87control_10, xmm0_129 = __libm_sse2_log_precise(mxcsr, x87control_10, 
            (_mm_cvtepi32_pd(zx.q(esi_5)) + 0.5) * _mm_cvtepi32_pd(zx.q(arg6)) / xmm1_45)
        float xmm3_6 = fconvert.s((xmm0_129 * 1.4426950216293335 - 5.9657840728759766) * 2.0)
        int32_t xmm0_133 = (zx.o(0)).d
        
        if (not(0 f> xmm3_6))
            xmm0_133 = 0x41800000
        
        if (0 f> xmm3_6 || not(xmm3_6 < 16f))
            xmm3_6 = xmm0_133
        
        int32_t ecx_21 = int.d(xmm3_6)
        int32_t eax_59 = ebx[1]
        float xmm3_7[0x2] = xmm3_6 - _mm_cvtepi32_ps(zx.o(ecx_21))
        double xmm2_7 = 1.0 - _mm_cvtps_pd(xmm3_7)
        *(*ebx[3] + (esi_5 << 2)) = _mm_cvtpd_ps(
            _mm_cvtps_pd(*(eax_59 + (ecx_21 << 2) + 0x88) f* xmm3_7)
            + _mm_cvtps_pd(*(eax_59 + (ecx_21 << 2) + 0x84)) * xmm2_7)
        int32_t eax_62 = ebx[1]
        *(*(ebx[3] + 4) + (esi_5 << 2)) = _mm_cvtpd_ps(
            _mm_cvtps_pd(*(eax_62 + (ecx_21 << 2) + 0xcc) f* xmm3_7)
            + _mm_cvtps_pd(*(eax_62 + (ecx_21 << 2) + 0xc8)) * xmm2_7)
        int32_t eax_65 = ebx[1]
        double xmm1_50 = _mm_cvtps_pd(*(eax_65 + (ecx_21 << 2) + 0x110) f* xmm3_7)
        void* eax_66 = ebx[3]
        double xmm0_152 = _mm_cvtps_pd(*(eax_65 + (ecx_21 << 2) + 0x10c))
        result = *(eax_66 + 8)
        xmm1_45 = var_48_4
        *(result + (esi_5 << 2)) = _mm_cvtpd_ps(xmm1_50 + xmm0_152 * xmm2_7)
        esi_5 += 1
    while (esi_5 s< arg5)

return result
