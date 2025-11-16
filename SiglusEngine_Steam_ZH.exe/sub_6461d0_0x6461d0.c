// 函数: sub_6461d0
// 地址: 0x6461d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s<= 0 || arg4 s<= 0)
    arg1.b = 0
    return arg1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t eax_3 = arg6
int32_t* var_7c
int32_t var_78
double* var_74
int32_t* var_70
int32_t* var_6c
int32_t var_68_1
int32_t* eax_7
int32_t* ecx
int32_t edx
int32_t* ebx_2
int32_t* esi_1
int32_t* edi

if (eax_3 s< 0 || eax_3 s>= 4)
    eax_3 = 0
label_6462d5:
    int32_t mxcsr
    int16_t x87control
    
    switch (jump_table_6465e4[eax_3])
        case 0x6462dc
            void* esi_2 = nullptr
            int32_t eax_10
            int32_t edx_2
            edx_2:eax_10 = sx.q(arg2)
            
            if (arg8 != 0)
                esi_2 = arg4
            
            edi = (eax_10 - edx_2) s>> 1
            void* ecx_2 = esi_2 + arg4
            void* eax_12 = &edi[0x10]
            
            if (edi s< ecx_2)
                eax_12 = ecx_2 + 0x40
            
            int32_t eax_15 = int.d(__libm_sse2_sqrt_precise(mxcsr, x87control, 
                _mm_cvtepi32_pd(zx.q(eax_12 * eax_12 * 2))))
            esi_1 = neg.d(esi_2)
            ecx = esi_1
            var_78 = edi - 1
            var_70 = esi_1
            var_7c = edi - 1
            ebx_2 = edi + eax_15
            eax_7 = eax_15 + esi_1
            goto label_646256
        case 0x646330
            void* eax_16 = nullptr
            
            if (arg8 != 0)
                eax_16 = arg4
            
            void* ebx_4 = arg4 + eax_16
            int32_t eax_18
            int32_t edx_3
            edx_3:eax_18 = sx.q(arg2)
            int32_t edi_3 = (eax_18 - edx_3) s>> 1
            void* eax_20 = edi_3 + 0x40
            
            if (edi_3 s< ebx_4)
                eax_20 = ebx_4 + 0x40
            
            eax_7 = int.d(__libm_sse2_sqrt_precise(mxcsr, x87control, 
                _mm_cvtepi32_pd(zx.q(eax_20 * eax_20 * 2))))
            esi_1 = ebx_4 - 1
            edi = edi_3 - 1
            var_6c = esi_1
            var_70 = esi_1
            var_78 = edi + 1
            var_7c = edi + 1
            ebx_2 = edi - eax_7
            var_74 = esi_1 - eax_7
            ecx = esi_1
            var_68_1 = ebx_2
        case 0x64638d
            void* edi_4 = nullptr
            int32_t eax_24
            int32_t edx_4
            edx_4:eax_24 = sx.q(arg4)
            
            if (arg8 != 0)
                edi_4 = arg2
            
            int32_t ebx_7 = (eax_24 - edx_4) s>> 1
            void* eax_26 = edi_4 + arg2
            void* eax_27
            
            if (eax_26 s< ebx_7)
                eax_27 = ebx_7 + 0x40
            else
                eax_27 = eax_26 + 0x40
            
            double xmm0_10
            edx, xmm0_10 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                _mm_cvtepi32_pd(zx.q(eax_27 * eax_27 * 2)))
            int32_t eax_30 = int.d(xmm0_10)
            esi_1 = ebx_7 - 1
            edi = neg.d(edi_4)
            var_68_1 = edi
            var_78 = edi
            var_70 = esi_1 + 1
            var_74 = esi_1 + 1
            ebx_2 = edi
            ecx = esi_1 - eax_30
            eax_7 = eax_30 + edi
            var_6c = ecx
            var_7c = eax_7
        case 0x6463f1
            void* ecx_6 = nullptr
            int32_t eax_32
            int32_t edx_5
            edx_5:eax_32 = sx.q(arg4)
            
            if (arg8 != 0)
                ecx_6 = arg2
            
            void* edi_6 = arg2 + ecx_6
            esi_1 = (eax_32 - edx_5) s>> 1
            void* eax_34 = edi_6 + 0x40
            
            if (edi_6 s< esi_1)
                eax_34 = &esi_1[0x10]
            
            double xmm0_13
            edx, xmm0_13 = __libm_sse2_sqrt_precise(mxcsr, x87control, 
                _mm_cvtepi32_pd(zx.q(eax_34 * eax_34 * 2)))
            eax_7 = int.d(xmm0_13)
            edi = edi_6 - 1
            var_70 = esi_1 - 1
            var_74 = esi_1 - 1
            ebx_2 = edi
            var_68_1 = edi
            var_78 = edi
            var_6c = esi_1 + eax_7
            var_7c = edi - eax_7
            ecx = var_6c
else
    if (eax_3 u<= 3)
        goto label_6462d5
    
    edi = arg3
    esi_1 = arg3
    ebx_2 = arg3
    ecx = arg3
    var_78 = arg3
    var_70 = arg3
    var_7c = arg3
    eax_7 = arg3
label_646256:
    var_74 = eax_7
    var_6c = ecx
    var_68_1 = ebx_2

int64_t xmm0_1 = (zx.o(0)).q
int64_t xmm1 = 0x4056800000000000
int64_t var_50 = (zx.o(0)).q
int64_t var_60 = (zx.o(0)).q
int64_t var_48 = xmm1
int64_t var_58 = xmm1
int32_t var_d8
int32_t* var_d0
int64_t* var_c8
double* eax_37
bool edx_6
int32_t* ebx_3
int32_t* esi_4
int32_t edi_7

if (arg7 != 0)
    if (arg8 == 0)
        ebx_3 = arg3
    else
        ebx_3 = arg3
        eax_7, edx = sub_645e20(&var_60, edi, ebx_3, esi_1, ebx_2, ecx, &var_60, &var_58)
        xmm0_1 = var_60
        xmm1 = var_58
        var_50 = xmm0_1
        var_48 = xmm1
    
    edx.b = arg5
    var_c8.q = xmm1
    var_d0.q = xmm0_1
    eax_37 = sub_645430(eax_7, edx.b, ebx_3, edi, esi_1, var_68_1, var_6c, 0, 0xff, var_d0, var_c8)
    esi_4 = var_7c
    edi_7 = var_78
    int64_t xmm0_15
    int64_t xmm1_2
    
    if (arg8 == 0)
        xmm0_15 = var_50
        xmm1_2 = var_48
    else
        eax_37 = sub_645e20(&var_60, edi_7, ebx_3, var_70, esi_4, var_74, &var_60, &var_58)
        xmm0_15 = var_60
        xmm1_2 = var_58
    
    edx_6 = arg5 == 0
    var_c8.q = xmm1_2
    var_d0.q = xmm0_15
    int32_t var_d4_6 = 0xff
    var_d8 = 0
else
    if (arg8 == 0)
        ebx_3 = arg3
    else
        ebx_3 = arg3
        eax_7, edx = sub_645e20(&var_60, edi, ebx_3, esi_1, ebx_2, ecx, &var_60, &var_58)
        xmm0_1 = var_60
        xmm1 = var_58
        var_50 = xmm0_1
        var_48 = xmm1
    
    edx.b = arg5
    var_c8.q = xmm1
    var_d0.q = xmm0_1
    eax_37 = sub_645430(eax_7, edx.b, ebx_3, edi, esi_1, var_68_1, var_6c, 0, 0x7f, var_d0, var_c8)
    esi_4 = var_7c
    edi_7 = var_78
    int64_t xmm0_14
    int64_t xmm1_1
    
    if (arg8 == 0)
        xmm0_14 = var_50
        xmm1_1 = var_48
    else
        eax_37 = sub_645e20(&var_60, edi_7, ebx_3, var_70, esi_4, var_74, &var_60, &var_58)
        xmm0_14 = var_60
        xmm1_1 = var_58
    
    edx_6 = arg5
    var_c8.q = xmm1_1
    var_d0.q = xmm0_14
    int32_t var_d4_3 = 0xff
    var_d8 = 0x80

sub_645430(eax_37, edx_6, ebx_3, edi_7, var_70, esi_4, var_74, var_d8, 0xff, var_d0, var_c8)
double* eax_41
eax_41.b = 1
return eax_41
