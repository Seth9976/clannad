// 函数: sub_9a0c50
// 地址: 0x9a0c50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* i_5
int32_t edx
i_5, edx = __chkstk(0x7f50)
int32_t ebx
int32_t var_8 = ebx
int32_t esi
int32_t var_c = esi
void* i_6 = i_5
int32_t eax_1 = edx << 2
int64_t* i_7
int64_t* i_3 = i_7
int32_t xmm1
int32_t var_1c = xmm1
i_3 = i_5
__alloca_probe_16(eax_1)
int32_t* var_18 = &i_3
int32_t result = _malloc(0x44)
int32_t var_18_1 = 0x7700
float var_1c_1 = 0f
char var_7f50[0xdc]
_memset(&var_7f50, var_1c_1.b, var_18_1)
char (* edx_1)[0xdc] = &var_7f50
int32_t var_20_1 = 0xaded00
void* const i = &data_ae4644
int32_t var_14_1 = 0
void* ecx = 2 - i_6
char (* var_24)[0xdc] = &var_7f50
void* const i_2 = &data_ae4644
void* var_3c = ecx

do
    void* ecx_1 = ecx + i_6
    void var_150
    void* edi = &var_150
    void* const i_4 = i
    int32_t j_8 = 0x38
    int32_t j
    
    do
        int32_t xmm0_1 = 0x4479c000
        
        if (ecx_1 - 2 s>= 0x58)
            xmm0_1 = -0x3e100000
        else
            int32_t xmm1_1 = *(i_4 - 4)
            
            if (not(999f f<= xmm1_1))
                xmm0_1 = xmm1_1
        
        if (ecx_1 - 1 s< 0x58)
            int32_t xmm1_2 = *i_4
            
            if (not(xmm0_1 f<= xmm1_2))
                xmm0_1 = xmm1_2
        else if (not(xmm0_1 f<= -30f))
            xmm0_1 = -0x3e100000
        
        if (ecx_1 s< 0x58)
            int32_t xmm1_3 = *(i_4 + 4)
            
            if (not(xmm0_1 f<= xmm1_3))
                xmm0_1 = xmm1_3
        else if (not(xmm0_1 f<= -30f))
            xmm0_1 = -0x3e100000
        
        ecx_1 += 1
        
        if (ecx_1 s< 0x58)
            int32_t xmm1_4 = *(i_4 + 8)
            
            if (not(xmm0_1 f<= xmm1_4))
                xmm0_1 = xmm1_4
        else if (not(xmm0_1 f<= -30f))
            xmm0_1 = -0x3e100000
        
        *edi = xmm0_1
        i_4 += 4
        edi += 4
        j = j_8
        j_8 -= 1
    while (j != 1)
    __builtin_memcpy(&(*edx_1)[0x1c0], var_20_1, 0x540)
    __builtin_memcpy(edx_1, var_20_1, 0xe0)
    char* var_28_1 = &(*edx_1)[0xe0]
    __builtin_memcpy(&(*edx_1)[0xe0], var_20_1, 0xe0)
    char (* esi_4)[0xdc] = var_24
    int32_t j_10 = j_8 + 8
    int32_t j_1
    
    do
        for (int32_t k = 0x10; k s> 0xffffffd8; )
            int32_t eax_6
            int32_t edx_2
            edx_2:eax_6 = sx.q(k)
            float xmm0_5 = _mm_cvtepi32_ps(zx.o((eax_6 ^ edx_2) - edx_2)) * arg2 + arg1
            
            if (not(0 f<= xmm0_5) && arg1 f> 0)
                xmm0_5 = (zx.o(0)).d
            else if (not(xmm0_5 f<= 0) && not(0 f<= arg1))
                xmm0_5 = (zx.o(0)).d
            
            k -= 1
            *esi_4 = xmm0_5 f+ *esi_4
            esi_4 = &(*esi_4)[4]
        
        var_24 = esi_4
        j_1 = j_10
        j_10 -= 1
    while (j_1 != 1)
    int32_t j_2 = 0
    double xmm4_3 = _mm_cvtps_pd(*i_3) + 100.0
    void var_850
    int32_t k_12
    
    do
        uint32_t xmm3[0x4] = _mm_shuffle_epi32(zx.o(j_2), 0)
        int32_t j_7 = j_2
        
        if (j_2 s< 2)
            j_7 = 2
        
        void* eax_13 = &var_7f50[(var_14_1 + j_2) * 0xe0]
        int32_t k_11 = 7
        void* var_c_1 = eax_13
        float xmm1_9[0x4] = fconvert.s(xmm4_3 - _mm_cvtepi32_pd(zx.q(j_7)) * 10.0 - 30.0)
        float xmm1_10[0x4] = _mm_shuffle_ps(xmm1_9, xmm1_9, 0)
        int32_t k_1
        
        do
            *eax_13 = _mm_add_ps(*eax_13, xmm1_10)
            *(eax_13 + 0x10) = _mm_add_ps(*(eax_13 + 0x10), xmm1_10)
            eax_13 += 0x20
            k_1 = k_11
            k_11 -= 1
        while (k_1 != 1)
        double xmm1_11[0x2] = data_b0db90
        int32_t k_14 = 0xe
        void* eax_15 = j_2 * 0xe0 + &var_850
        double xmm0_17[0x2] = _mm_cvtps_pd(__mulps_xmmps_memps(_mm_cvtepi32_ps(xmm3), data_b0dba0))
        __builtin_memcpy(eax_15, &var_150, 0xe0)
        void* ecx_2 = eax_15
        float xmm1_14[0x4] =
            _mm_cvtpd_ps(__subpd_xmmpd_mempd(_mm_sub_pd(xmm1_11, xmm0_17), data_b0db80))
        int32_t k_2
        
        do
            *ecx_2 = _mm_add_ps(zx.o(*ecx_2), xmm1_14)
            *(ecx_2 + 8) = _mm_add_ps(zx.o(*(ecx_2 + 8)), xmm1_14)
            ecx_2 += 0x10
            k_2 = k_14
            k_14 -= 1
        while (k_2 != 1)
        k_12 = 0x38
        void* edx_4 = var_c_1 - eax_15
        int32_t k_3
        
        do
            int32_t xmm0_22 = *(edx_4 + eax_15)
            
            if (not(xmm0_22 f<= *eax_15))
                *eax_15 = xmm0_22
            
            eax_15 += 4
            k_3 = k_12
            k_12 -= 1
        while (k_3 != 1)
        j_2 += 1
    while (j_2 s< 8)
    
    void* edx_5 = &var_850
    int32_t j_9 = k_12 + 7
    int32_t j_3
    
    do
        int32_t k_15 = 0xe
        void* ecx_3 = edx_5 + 0xc
        void* eax_16 = edx_5 + 0xe4
        int32_t k_4
        
        do
            int32_t xmm1_15 = *(ecx_3 - 0xc)
            
            if (not(*(eax_16 - 4) f<= xmm1_15))
                *(eax_16 - 4) = xmm1_15
            
            int32_t xmm1_16 = *(0 - 0xe0 + eax_16)
            
            if (not(*eax_16 f<= xmm1_16))
                *eax_16 = xmm1_16
            
            int32_t xmm1_17 = *(ecx_3 - 4)
            
            if (not(*(eax_16 + 4) f<= xmm1_17))
                *(eax_16 + 4) = xmm1_17
            
            int32_t xmm1_18 = *ecx_3
            
            if (not(*(eax_16 + 8) f<= xmm1_18))
                *(eax_16 + 8) = xmm1_18
            
            eax_16 += 0x10
            ecx_3 += 0x10
            k_4 = k_15
            k_15 -= 1
        while (k_4 != 1)
        char* eax_17 = var_28_1
        int32_t k_13 = 0x38
        int32_t k_5
        
        do
            int32_t xmm1_19 = *(edx_5 + 0xe0 - var_28_1 + eax_17)
            
            if (not(*eax_17 f<= xmm1_19))
                *eax_17 = xmm1_19
            
            eax_17 = &eax_17[4]
            k_5 = k_13
            k_13 -= 1
        while (k_5 != 1)
        edx_5 += 0xe0
        var_28_1 = &var_28_1[0xe0]
        j_3 = j_9
        j_9 -= 1
    while (j_3 != 1)
    i = i_2 + 0x10
    var_20_1 += 0x540
    i_6 = i_3 + 4
    var_14_1 += 8
    edx_1 = var_24
    ecx = var_3c
    i_2 = i
    i_3 = i_6
while (i s< 0xae4754)

void* i_1 = nullptr
void var_7850
void* var_28_2 = &var_7850
i_3 = nullptr

do
    int32_t eax_19 = _malloc(0x20)
    double xmm0_29 = _mm_cvtepi32_pd(zx.q(i_1))
    *(result + (i_1 << 2)) = eax_19
    double xmm0_30 = xmm0_29 * 0.5
    int32_t ecx_6
    int32_t mxcsr
    int16_t x87control
    int16_t x87control_1
    double xmm0_33
    ecx_6, x87control_1, xmm0_33 = __libm_sse2_exp_precise(mxcsr, x87control, 
        (xmm0_30 + 5.9657840728759766) * 0.69314700365066528)
    int32_t var_18_2 = ecx_6
    var_18_2.q = fconvert.d(fconvert.t(xmm0_33 / _mm_cvtps_pd(var_1c_1)))
    int16_t x87control_2
    long double st0_1
    st0_1, x87control_2 = sub_74c3d0(mxcsr, x87control_1, var_18_2)
    int32_t esi_8 = int.d(fconvert.t(fconvert.d(st0_1)))
    int16_t x87control_3
    double xmm0_40
    x87control_3, xmm0_40 = __libm_sse2_log_precise(mxcsr, x87control_2, 
        _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(esi_8)) * var_1c_1 + 1f))
    var_18_2.q = fconvert.d(fconvert.t((xmm0_40 * 1.4426950216293335 - 5.9657840728759766) * 2.0))
    int16_t x87control_4
    long double st0_2
    st0_2, x87control_4 = sub_762040(mxcsr, x87control_3, var_18_2)
    int64_t* i_8 = int.d(fconvert.t(fconvert.d(st0_2)))
    int16_t x87control_5
    double xmm0_48
    x87control_5, xmm0_48 = __libm_sse2_log_precise(mxcsr, x87control_4, 
        _mm_cvtps_pd(_mm_cvtepi32_ps(zx.o(esi_8 + 1)) * var_1c_1))
    var_18_2.q = fconvert.d(fconvert.t((xmm0_48 * 1.4426950216293335 - 5.9657840728759766) * 2.0))
    long double st0_3
    st0_3, x87control = sub_74c3d0(mxcsr, x87control_5, var_18_2)
    int32_t eax_21 = int.d(fconvert.t(fconvert.d(st0_3)))
    
    if (i_8 s> i_3)
        i_8 = i_3
    
    if (i_8 s< 0)
        i_8 = nullptr
    
    if (eax_21 s>= 0x11)
        eax_21 = 0x10
    
    uint32_t j_4 = 0
    int32_t var_20_2 = 0
    int32_t var_14_3 = 0
    int32_t edi_6 = 0
    
    do
        uint32_t j_5 = 0xe8
        int32_t eax_22 = _malloc(j_5)
        double var_38_6
        var_38_6:4.d = eax_22
        *(eax_19 + (edi_6 << 2)) = eax_22
        
        if (edx s> 0)
            int32_t ecx_10
            int32_t edi_8
            edi_8, ecx_10 = __memfill_u32(var_18_1, 0x4479c000, eax_1 u>> 2)
            edi_6 = var_20_2
        
        int64_t* i_9 = i_8
        int64_t* i_10 = i_9
        
        if (i_8 s<= eax_21)
            void* esi_9 = &var_7f50[i_8 * 0x700]
            void* var_18_3 = esi_9
            int32_t __saved_ebp
            void* var_48_1 = &(&__saved_ebp)[(edi_6 + (i_8 << 3)) * 0x38 - 0x1f9c]
            
            do
                int32_t k_6 = 0
                int32_t edi_9 = 0
                int32_t k_9 = 0
                void* var_24_1 = j_5 + esi_9
                double xmm1_24 = _mm_cvtepi32_pd(zx.q(i_9)) * 0.5
                double var_60_1 = xmm1_24
                
                do
                    double xmm0_55 = _mm_cvtepi32_pd(zx.q(k_6)) * 0.125 + xmm1_24
                    int16_t x87control_6
                    double xmm0_59
                    x87control_6, xmm0_59 = __libm_sse2_exp_precise(mxcsr, x87control, 
                        (xmm0_55 - 2.0625 + 5.9657840728759766) * 0.69314700365066528)
                    int32_t esi_10 = int.d(xmm0_59 / _mm_cvtps_pd(var_1c_1))
                    double xmm0_65
                    x87control, xmm0_65 = __libm_sse2_exp_precise(mxcsr, x87control_6, 
                        (xmm0_55 - 1.9375 + 5.9657840728759766) * 0.69314700365066528)
                    double xmm1_28 = _mm_cvtps_pd(var_1c_1)
                    
                    if (esi_10 s< 0)
                        esi_10 = 0
                    
                    if (esi_10 s> edx)
                        esi_10 = edx
                    
                    if (esi_10 s< edi_9)
                        edi_9 = esi_10
                    
                    int32_t eax_29 = int.d(xmm0_65 / xmm1_28 + 1.0)
                    
                    if (eax_29 s< 0)
                        eax_29 = 0
                    
                    if (eax_29 s> edx)
                        eax_29 = edx
                    
                    if (edi_9 s< eax_29)
                        while (edi_9 s< edx)
                            int32_t xmm1_29 = *var_24_1
                            
                            if (not(*(var_18_1 + (edi_9 << 2)) f<= xmm1_29))
                                *(var_18_1 + (edi_9 << 2)) = xmm1_29
                            
                            edi_9 += 1
                            
                            if (edi_9 s>= eax_29)
                                break
                    
                    var_24_1 += 4
                    k_6 = k_9 + 1
                    xmm1_24 = var_60_1
                    k_9 = k_6
                while (k_6 s< 0x38)
                
                if (edi_9 s< edx)
                    int32_t xmm1_30 = *var_48_1
                    
                    do
                        if (not(*(var_18_1 + (edi_9 << 2)) f<= xmm1_30))
                            *(var_18_1 + (edi_9 << 2)) = xmm1_30
                        
                        edi_9 += 1
                    while (edi_9 s< edx)
                
                var_18_3 += 0x700
                i_9 = i_10 + 1
                var_48_1 += 0x700
                esi_9 = var_18_3
                i_10 = i_9
            while (i_9 s<= eax_21)
            
            j_4 = j_5
        
        if (i_3 + 1 s< 0x11)
            int32_t k_7 = 0
            int32_t edi_10 = 0
            int32_t k_10 = 0
            void* var_18_4 = var_28_2 + j_4
            
            do
                double xmm0_73 = _mm_cvtepi32_pd(zx.q(k_7)) * 0.125 + xmm0_30
                int16_t x87control_7
                double xmm0_77
                x87control_7, xmm0_77 = __libm_sse2_exp_precise(mxcsr, x87control, 
                    (xmm0_73 - 2.0625 + 5.9657840728759766) * 0.69314700365066528)
                int32_t esi_13 = int.d(xmm0_77 / _mm_cvtps_pd(var_1c_1))
                double xmm0_83
                x87control, xmm0_83 = __libm_sse2_exp_precise(mxcsr, x87control_7, 
                    (xmm0_73 - 1.9375 + 5.9657840728759766) * 0.69314700365066528)
                double xmm1_34 = _mm_cvtps_pd(var_1c_1)
                
                if (esi_13 s< 0)
                    esi_13 = 0
                
                if (esi_13 s> edx)
                    esi_13 = edx
                
                if (esi_13 s< edi_10)
                    edi_10 = esi_13
                
                int32_t eax_34 = int.d(xmm0_83 / xmm1_34 + 1.0)
                
                if (eax_34 s< 0)
                    eax_34 = 0
                
                if (eax_34 s> edx)
                    eax_34 = edx
                
                if (edi_10 s< eax_34)
                    while (edi_10 s< edx)
                        int32_t xmm1_35 = *var_18_4
                        
                        if (not(*(var_18_1 + (edi_10 << 2)) f<= xmm1_35))
                            *(var_18_1 + (edi_10 << 2)) = xmm1_35
                        
                        edi_10 += 1
                        
                        if (edi_10 s>= eax_34)
                            break
                
                var_18_4 += 4
                k_7 = k_10 + 1
                k_10 = k_7
            while (k_7 s< 0x38)
            
            if (edi_10 s< edx)
                void var_7e74
                int32_t xmm1_36 = *(&var_7e74 + (i_3 + 1) * 0x700 + j_5)
                
                do
                    if (not(*(var_18_1 + (edi_10 << 2)) f<= xmm1_36))
                        *(var_18_1 + (edi_10 << 2)) = xmm1_36
                    
                    edi_10 += 1
                while (edi_10 s< edx)
        
        int32_t k_8 = 0
        int32_t* esi_15 = *(eax_19 + (var_20_2 << 2)) + 8
        int32_t* var_c_2 = esi_15
        
        do
            double xmm0_95
            x87control, xmm0_95 = __libm_sse2_exp_precise(mxcsr, x87control, 
                (_mm_cvtepi32_pd(zx.q(k_8)) * 0.125 + xmm0_30 - 2.0 + 5.9657840728759766)
                    * 0.69314700365066528)
            int32_t eax_40 = int.d(xmm0_95 / _mm_cvtps_pd(var_1c_1))
            
            if (eax_40 s< 0)
                *esi_15 = 0xc479c000
            else if (eax_40 s< edx)
                *esi_15 = *(var_18_1 + (eax_40 << 2))
            else
                *esi_15 = 0xc479c000
            
            k_8 += 1
            esi_15 = &esi_15[1]
        while (k_8 s< 0x38)
        
        int32_t eax_42 = 0
        int32_t* ecx_15 = var_c_2
        
        while (not(*ecx_15 f> -200f))
            eax_42 += 1
            ecx_15 = &ecx_15[1]
            
            if (eax_42 s>= 0x10)
                break
        
        int32_t* edx_14 = var_38_6:4.d
        int32_t eax_43 = 0x37
        int32_t xmm0_99 = _mm_cvtepi32_ps(zx.o(eax_42))
        int32_t* ecx_17 = *(eax_19 + (var_20_2 << 2)) + 0xe4
        *edx_14 = xmm0_99
        
        while (not(*ecx_17 f> -200f))
            eax_43 -= 1
            ecx_17 -= 4
            
            if (eax_43 s<= 0x11)
                break
        
        edi_6 = var_20_2 + 1
        j_4 = j_5 + 0xe0
        var_20_2 = edi_6
        uint32_t j_6 = j_4
        edx_14[1] = _mm_cvtepi32_ps(zx.o(eax_43))
    while (j_4 s< 0x700)
    
    var_28_2 += 0x700
    i_1 = i_3 + 1
    i_3 = i_1
while (i_1 s< 0x11)

return result
