// 函数: sub_720940
// 地址: 0x720940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9d31f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_114 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
uint64_t xmm3 = zx.q(arg1[0x21])
double xmm5_1 = _mm_cvtepi32_pd(zx.q(arg1[0x20]))
int32_t eax_3 = 0xe10 - arg1[0x22]
int32_t edx_1 = arg1[0x12] - arg1[0xd]
int32_t ecx_1 = arg1[0x10] - arg1[0xd]
double xmm3_1 = _mm_cvtepi32_pd(xmm3)
int32_t esi_1 = arg1[0x11] - arg1[0xe]
int32_t var_dc = edx_1
double xmm5_2 = xmm5_1 / 1000.0
int32_t edx_3 = arg1[0x13] - arg1[0xe]
int32_t var_30 = edx_3
int32_t edx_4 = arg1[0x22]
int32_t var_f4 = ecx_1
int32_t var_44[0x2]
var_44[0] = ecx_1
var_44[1] = esi_1
int32_t var_3c = edx_1
int32_t var_38 = esi_1
int32_t var_34 = edx_1
int32_t var_2c = ecx_1
double xmm3_2 = xmm3_1 / 1000.0
double xmm6[0x2] = xmm5_2
double xmm6_1[0x2] = _mm_unpacklo_pd(xmm6, xmm6)
double xmm7[0x2] = xmm3_2
double xmm7_1[0x2] = _mm_unpacklo_pd(xmm7, xmm7)
double var_60[0x2]
var_40
double var_80
double var_68

if (edx_4 == 0)
    uint64_t xmm4_2 = zx.q(arg1[0x1b])
    double xmm1_15 = _mm_cvtepi32_pd(zx.q(ecx_1)) * xmm5_2
    double xmm2_4 = _mm_cvtepi32_pd(zx.q(esi_1))
    double xmm4_3 = _mm_cvtepi32_pd(xmm4_2)
    double xmm3_6 = _mm_cvtepi32_pd(zx.q(arg1[0x1c]))
    var_80 = xmm4_3 + xmm1_15
    double xmm1_18 = _mm_cvtepi32_pd(zx.q(edx_1)) * xmm5_2
    double xmm2_7 = _mm_cvtepi32_pd(zx.q(esi_1))
    double var_a0 = xmm3_6 + xmm2_4 * xmm3_2
    double var_78_1 = xmm4_3 + xmm1_18
    double var_98_1 = xmm3_6 + xmm2_7 * xmm3_2
    double var_70_1 = xmm4_3 + _mm_cvtepi32_pd(zx.q(edx_1)) * xmm5_2
    double var_90_1 = xmm3_6 + _mm_cvtepi32_pd(zx.q(edx_3)) * xmm3_2
    double xmm3_7 = xmm3_6 + _mm_cvtepi32_pd(zx.q(edx_3)) * xmm3_2
    int32_t i = 0
    double xmm0_34 = _mm_cvtepi32_pd(zx.q(ecx_1))
    double var_88 = xmm3_7
    var_68 = xmm4_3 + xmm0_34 * xmm5_2
    
    if (arg1[0x21] s< 0)
        void* edx_5 = &var_40
        
        do
            edx_5 += 8
            *(edx_5 - 0xc) = int.d(fconvert.t(*(&var_68 + i)))
            int32_t eax_12 = int.d(fconvert.t(*(&var_88 + i)))
            i -= 8
            *(edx_5 - 8) = eax_12
        while (i s> 0xffffffe0)
    else
        do
            *(&var_44 + i) = int.d(fconvert.t(*(&var_80 + i)))
            *(&var_40 + i) = int.d(fconvert.t(*(&var_a0 + i)))
            i += 8
        while (i s< 0x20)
else
    double xmm0_2[0x2] = _mm_cvtepi32_pd(_mm_shuffle_epi32(zx.o(arg1[0x1b]), 0))
    uint128_t xmm4 = zx.o(*((edx_4 << 3) + &data_4e2f580))
    uint128_t xmm5_3 = zx.o(*((edx_4 << 3) + &data_4e36600))
    int32_t i_1 = 0
    var_60 = xmm0_2
    double xmm0_5[0x2] = _mm_cvtepi32_pd(_mm_shuffle_epi32(zx.o(arg1[0x1c]), 0))
    double xmm4_1[0x2] = _mm_unpacklo_pd(xmm4, xmm4)
    double xmm5_4[0x2] = _mm_unpacklo_pd(xmm5_3, xmm5_3)
    int64_t var_90
    var_90.o = xmm0_5
    void var_c0
    
    do
        int32_t xmm1_2[0x2] = _mm_unpacklo_epi32(zx.o(*(&var_44 + i_1)), zx.q(*(&var_3c + i_1)))
        uint64_t xmm0_7 = zx.q(*(&var_38 + i_1))
        double xmm3_3[0x2] = _mm_cvtepi32_pd(xmm1_2)
        double xmm2_1[0x2] = _mm_cvtepi32_pd(_mm_unpacklo_epi32(zx.o(*(&var_40 + i_1)), xmm0_7))
        double xmm3_4[0x2] = _mm_mul_pd(xmm3_3, xmm6_1)
        double xmm2_2[0x2] = _mm_mul_pd(xmm2_1, xmm7_1)
        double xmm0_9[0x2] = _mm_mul_pd(xmm5_4, xmm2_2)
        double xmm0_11[0x2] =
            _mm_cvtepi32_pd(_mm_cvttpd_epi32(_mm_sub_pd(_mm_mul_pd(xmm4_1, xmm3_4), xmm0_9)))
        double xmm1_9[0x2] = _mm_mul_pd(xmm4_1, xmm2_2)
        *(&var_c0 + i_1) = xmm0_11
        *(&var_80 + i_1) =
            _mm_cvtepi32_pd(_mm_cvttpd_epi32(_mm_add_pd(xmm1_9, _mm_mul_pd(xmm5_4, xmm3_4))))
        *(&var_c0 + i_1) = __addpd_xmmpd_mempd(*(&var_c0 + i_1), var_60)
        *(&var_80 + i_1) = __addpd_xmmpd_mempd(*(&var_80 + i_1), var_90.o)
        i_1 += 0x10
    while (i_1 s< 0x20)
    
    double xmm0_20 = var_80
    int32_t ecx_2 = 0
    double var_78
    
    if (not(xmm0_20 <= var_78))
        xmm0_20 = var_78
        ecx_2 = 1
    
    double var_70
    
    if (not(xmm0_20 <= var_70))
        xmm0_20 = var_70
        ecx_2 = 2
    
    if (xmm0_20 > var_68)
        ecx_2 = 3
    
    for (int32_t i_2 = 0; i_2 s< 4; i_2 += 1)
        (&var_44)[i_2][0] = int.d(fconvert.t(*(&var_c0 + (ecx_2 << 3))))
        int32_t eax_7 = int.d(fconvert.t((&var_80)[ecx_2]))
        ecx_2 = (ecx_2 + 1) & 3
        *(&var_40 + (i_2 << 3)) = eax_7
int32_t eax_13 = var_44[1]
int32_t edx_6 = eax_13
char* result_3 = var_44[0]
int32_t edi_1 = edx_6
int32_t var_e4 = eax_13
char* result_2 = result_3
int32_t i_3 = 1
char* result_5 = result_3
int32_t i_6 = 1

do
    char* result_4 = (&var_44)[i_3][0]
    char* result_6 = result_5
    
    if (result_6 s> result_4)
        result_6 = result_4
    
    result_5 = result_6
    int32_t eax_15 = *(&var_40 + (i_6 << 3))
    
    if (edi_1 s> eax_15)
        edi_1 = eax_15
    
    if (result_2 s< result_4)
        result_2 = result_4
    
    if (edx_6 s< eax_15)
        edx_6 = eax_15
    
    i_3 = i_6 + 1
    i_6 = i_3
while (i_3 s< 4)

char* result_7 = result_5
int32_t* edi_2 = arg1
int32_t ecx_4 = edi_1

if (result_7 s< edi_2[6])
    result_7 = edi_2[6]

if (ecx_4 s< edi_2[7])
    ecx_4 = edi_2[7]

char* result = edi_2[8]
int32_t ecx_5 = edi_2[9]

if (result_2 s> result)
    result_2 = result

if (edx_6 s> ecx_5)
    edx_6 = ecx_5

if (result_7 s<= result && ecx_4 s<= edi_2[9] && result_2 s>= edi_2[6] && edx_6 s>= edi_2[7])
    result = edi_2[0x32]
    
    if (result != 0 && edi_2[0x33] != 0)
        *result = 1
        *edi_2[0x33] = result_7
        edi_2 = arg1
        *(edi_2[0x33] + 4) = ecx_4
        *(edi_2[0x33] + 8) = result_2
        *(edi_2[0x33] + 0xc) = edx_6
    
    if (*(edi_2 + 0xc5) != 0)
        if (edi_2[0x22] == 0)
            int32_t ecx_20 = var_44[0]
            int32_t var_d8_2
            int32_t edx_16
            
            if (edi_2[0x20] s< 0)
                edx_16 = var_3c
                var_d8_2 = edx_16
            else
                edx_16 = ecx_20
                var_d8_2 = ecx_20
                ecx_20 = var_3c
            
            if (edx_16 s<= edi_2[8])
                int32_t esi_8 = edi_2[6]
                
                if (ecx_20 s>= esi_8)
                    edi_2[0x74] = ecx_20 - edx_16 + 1
                    int32_t eax_60 = edx_16
                    
                    if (edx_16 s< esi_8)
                        eax_60 = esi_8
                    
                    if (ecx_20 s> edi_2[8])
                        ecx_20 = edi_2[8]
                    
                    int32_t eax_62
                    
                    if (edi_2[0x20] s< 0)
                        edi_2[0x6b] = edi_2[0x12]
                        eax_62 = edi_2[0x10]
                    else
                        edi_2[0x6b] = edi_2[0x10]
                        eax_62 = edi_2[0x12]
                    
                    bool cond:7_1 = edi_2[0x21] s< 0
                    edi_2[0x6d] = eax_62
                    int32_t eax_64
                    
                    if (cond:7_1)
                        eax_64 = edi_2[0x13]
                    else
                        eax_64 = edi_2[0x11]
                    
                    int32_t ecx_21 = var_44[1]
                    int32_t esi_11 = edi_2[0x13] - edi_2[0x11] + 1
                    edi_2[0x6e] = eax_64
                    edi_2[0x6c] = eax_64
                    result = edx_3 - ecx_21 + 1
                    void* esi_12 = nullptr
                    char* result_1 = result
                    
                    if (result s> 0)
                        int32_t edx_17 = var_d8_2
                        char* var_dc_4 = result
                        char* i_4
                        
                        do
                            if (ecx_21 s>= edi_2[7] && ecx_21 s<= edi_2[9])
                                edi_2[0x6f] = edx_17
                                int32_t edx_19 = edi_2[1] * ecx_21
                                edi_2[0x70] = ecx_21
                                int32_t ecx_22 = *edi_2
                                edi_2[0x71] = ecx_22 + ((var_d8_2 + edx_19) << 2)
                                edi_2[0x72] = ecx_22 + ((eax_60 + edx_19) << 2)
                                edi_2[0x73] = ecx_22 + ((ecx_20 + edx_19) << 2)
                                sub_721360(edi_2, arg2)
                                result = result_1
                                ecx_21 = var_e4
                            
                            esi_12 += esi_11
                            int32_t ecx_24
                            int32_t edx_20
                            
                            if (edi_2[0x21] s< 0)
                                if (esi_12 s>= result)
                                    ecx_24 = edi_2[0x6c]
                                    edx_20 = edi_2[0x6e]
                                    
                                    do
                                        esi_12 -= result
                                        ecx_24 -= 1
                                        edx_20 -= 1
                                    while (esi_12 s>= result)
                                    
                                label_721308:
                                    edi_2[0x6c] = ecx_24
                                    ecx_21 = var_e4
                                    edi_2[0x6e] = edx_20
                            else if (esi_12 s>= result)
                                ecx_24 = edi_2[0x6c]
                                edx_20 = edi_2[0x6e]
                                
                                do
                                    esi_12 -= result
                                    ecx_24 += 1
                                    edx_20 += 1
                                while (esi_12 s>= result)
                                
                                goto label_721308
                            edx_17 = var_d8_2
                            ecx_21 += 1
                            i_4 = var_dc_4
                            var_dc_4 -= 1
                            var_e4 = ecx_21
                        while (i_4 != 1)
        else
            int32_t (__fastcall* var_118_1)(int32_t* arg1) = sub_538150
            int32_t* var_d0
            sub_74675f(&var_d0, 0xc, 4, PDBStream::PDBStream)
            int32_t* ecx_7 = &var_d0
            int32_t var_14_1 = 0
            int32_t i_5 = 0
            int32_t* var_d4_2 = &var_d0
            
            do
                int32_t esi_2 = *(&var_40 + (i_5 << 3))
                int32_t eax_21 = (i_5 + 1) & 3
                int32_t edx_7 = *(&var_40 + (eax_21 << 3))
                int32_t var_118_3
                int32_t esi_3
                
                if (esi_2 s> edx_7)
                    esi_3 = esi_2 - edx_7 + 1
                    *(&var_60 + (i_5 << 2)) = esi_3
                    sub_55c6f0(ecx_7, esi_3 * 2)
                    var_118_3 = 0
                else
                    esi_3 = edx_7 - esi_2 + 1
                    *(&var_60 + (i_5 << 2)) = esi_3
                    sub_55c6f0(ecx_7, esi_3 * 2)
                    var_118_3 = 1
                
                sub_721fc0(*var_d4_2, esi_3, (&var_44)[i_5][0], *(&var_40 + (i_5 << 3)), 
                    (&var_44)[eax_21][0], edx_7, var_118_3)
                i_5 += 1
                ecx_7 = &var_d4_2[3]
                var_d4_2 = ecx_7
            while (i_5 s< 4)
            
            int32_t ecx_9 = var_60[1]:4.d
            int32_t edx_8 = var_60[0].d
            int32_t* var_e4_2 = var_d0
            int32_t var_f4_1 = 0
            int32_t var_dc_3 = 0
            int32_t var_ac
            int32_t* esi_6 = var_ac + ((ecx_9 - 1) << 3)
            
            while (true)
                int32_t var_d4_3 = ecx_9
                int32_t var_f0_1 = edx_8
                
                if (edx_8 == 0)
                    if (var_f4_1 != edx_8)
                        break
                    
                    int32_t edx_9 = var_60[0]:4.d
                    var_f4_1 = 1
                    var_f0_1 = edx_9 - 1
                    
                    if (edx_9 == 1)
                        break
                    
                    void* var_c4
                    var_e4_2 = var_c4 + 8
                
                if (ecx_9 == 0)
                    if (var_dc_3 != ecx_9)
                        break
                    
                    int32_t ecx_10 = var_60[1].d
                    var_dc_3 = 1
                    ecx_9 = ecx_10 - 1
                    int32_t var_b8
                    esi_6 = var_b8 + ((ecx_10 - 2) << 3)
                    var_d4_3 = ecx_9
                    
                    if (ecx_10 == 1)
                        break
                
                int32_t edi_4 = var_e4_2[1]
                
                if (edi_4 != esi_6[1])
                    break
                
                int32_t edx_12 = var_f0_1
                
                if (edi_4 s>= arg1[7])
                    ecx_9 = var_d4_3
                    
                    if (edi_4 s<= arg1[9])
                        int32_t ecx_12 = *var_e4_2
                        int32_t edx_13 = *esi_6
                        int32_t var_d8_1 = ecx_12
                        int32_t var_e0_1 = edx_13
                        
                        if (ecx_12 s> edx_13)
                            int32_t eax_35 = ecx_12
                            var_d8_1 = edx_13
                            ecx_12 = edx_13
                            var_e0_1 = eax_35
                            edx_13 = eax_35
                        
                        if (ecx_12 s<= arg1[8] && edx_13 s>= arg1[6])
                            int32_t eax_37 = ecx_12 - arg1[0x1b]
                            double xmm3_9 = _mm_cvtepi32_pd(zx.q(arg1[0xd]))
                            int32_t ecx_14 = var_e0_1 - arg1[0x1b]
                            int32_t edx_14 = arg1[1]
                            int32_t eax_39 = edi_4 - arg1[0x1c]
                            double xmm6_4 = _mm_cvtepi32_pd(zx.q(eax_37))
                            double xmm1_26 = _mm_cvtepi32_pd(zx.q(eax_39))
                            double xmm5_5 = *((eax_3 << 3) + &data_4e2f580)
                            double xmm7_2 = *((eax_3 << 3) + &data_4e36600)
                            double xmm4_6 = xmm7_2 * xmm1_26
                            double xmm2_13 = xmm5_5 * xmm1_26
                            double xmm1_28 = _mm_cvtepi32_pd(zx.q(arg1[0xe]))
                            arg1[0x6b] = int.d((xmm5_5 * xmm6_4 - xmm4_6) / xmm5_2 + xmm3_9)
                            double xmm0_47 = _mm_cvtepi32_pd(zx.q(ecx_14))
                            arg1[0x6c] = int.d((xmm7_2 * xmm6_4 + xmm2_13) / xmm3_2 + xmm1_28)
                            arg1[0x70] = edi_4
                            int32_t edx_15 = edx_14 * edi_4
                            int32_t ecx_16 = *arg1
                            arg1[0x6d] = int.d((xmm5_5 * xmm0_47 - xmm4_6) / xmm5_2 + xmm3_9)
                            arg1[0x6e] = int.d((xmm7_2 * xmm0_47 + xmm2_13) / xmm3_2 + xmm1_28)
                            arg1[0x6f] = var_d8_1
                            int32_t ecx_17 = var_e0_1
                            arg1[0x71] = ecx_16 + ((var_d8_1 + edx_15) << 2)
                            arg1[0x74] = var_e0_1 - var_d8_1 + 1
                            int32_t eax_51 = var_d8_1
                            
                            if (eax_51 s< arg1[6])
                                eax_51 = arg1[6]
                            
                            if (ecx_17 s> arg1[8])
                                ecx_17 = arg1[8]
                            
                            int32_t ecx_18 = *arg1
                            arg1[0x72] = ecx_18 + ((eax_51 + edx_15) << 2)
                            arg1[0x73] = ecx_18 + ((ecx_17 + edx_15) << 2)
                            sub_721360(arg1, arg2)
                        
                        ecx_9 = var_d4_3
                        edx_12 = var_f0_1
                
                var_e4_2 = &var_e4_2[2]
                esi_6 -= 8
                edx_8 = edx_12 - 1
                ecx_9 -= 1
            
            int32_t var_14_2 = 0xffffffff
            `eh vector vbase constructor iterator'(&var_d0, 0xc, 4, sub_538150)
    
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
