// 函数: sub_99ee70
// 地址: 0x99ee70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi
int32_t* var_98 = edi
int32_t ecx = *arg4
int32_t* eax_1 = arg4[1]
int32_t var_58

if (eax_1[0x7d] == 0)
    var_58 = 0x10
else
    var_58 = eax_1[0x7f]

int32_t eax_3 = *(arg2 + ((*eax_1 * 0xf + arg3) << 2) + 0x84)
int32_t esi_1 = *(arg2 + (arg3 << 2) + 0x138)
int32_t xmm0_1 = _mm_cvtpd_ps(zx.o(*((*(arg2 + (arg3 << 2) + 0xfc) << 3) + &data_adde88)))
int32_t edi_1 = arg10 << 2
int32_t var_7c = _mm_cvtpd_ps(zx.o(*((esi_1 << 3) + &data_adde88)))
__alloca_probe_16(edi_1)
int32_t* var_40 = &var_98
__alloca_probe_16(edi_1)
int32_t* var_28 = &var_98
__alloca_probe_16(edi_1)
int32_t* var_4c = &var_98
__alloca_probe_16(edi_1)
int32_t* var_3c = &var_98
__alloca_probe_16(edi_1)
int32_t* var_60 = &var_98
__alloca_probe_16((*(arg5 + 0x484) + arg10) << 2)
int32_t* var_70 = &var_98

if (ecx s> 0x3e8)
    var_7c = _mm_cvtpd_ps(zx.o(*((esi_1 << 3) + &data_ade268)))

int32_t esi_4 = (var_58 * arg10) << 2
__alloca_probe_16(esi_4)
*var_40 = &var_98
__alloca_probe_16(esi_4)
*var_28 = &var_98
__alloca_probe_16(esi_4)
var_98 = &var_98
__alloca_probe_16(esi_4)
int32_t*** esi_5 = var_3c
int32_t edx = arg10
*esi_5 = &var_98

if (edx s> 1)
    int32_t edi_3 = var_40 - var_28
    void* edx_1 = &var_28[1]
    int32_t ecx_9 = var_58 << 2
    int32_t i_6 = arg10 - 1
    int32_t var_5c_1 = edi_3
    int32_t i
    
    do
        edx_1 += 4
        *(edi_3 + edx_1 - 4) = *var_40 + ecx_9
        *(edx_1 - 4) = *var_28 + ecx_9
        *(var_4c - var_28 + edx_1 - 4) = *var_4c + ecx_9
        *(esi_5 - var_28 + edx_1 - 4) = *var_3c + ecx_9
        edi_3 = var_5c_1
        ecx_9 += var_58 << 2
        i = i_6
        i_6 -= 1
    while (i != 1)
    edx = arg10

void* edi_38 = arg5
int32_t result = *(edi_38 + 0x484) + edx

if (result s> 0)
    int32_t ecx_10 = 0
    
    do
        var_70[ecx_10] = 0
        ecx_10 += 1
        result = *(edi_38 + 0x484) + edx
    while (ecx_10 s< result)

int32_t result_1 = 0

if (ecx s> 0)
    int32_t edx_2 = var_58
    int32_t ecx_11 = ecx
    int32_t eax_39 = neg.d(edx_2)
    int32_t var_68_1 = ecx_11
    
    do
        int32_t edi_7 = edx_2
        
        if (edx_2 s> ecx_11)
            edi_7 = ecx_11
        
        int32_t esi_9 = 0
        sub_748840(var_60, arg8, edi_1)
        _memset(*var_3c, 0, esi_4)
        
        if (arg10 s> 0)
            int32_t* esi_10 = var_4c
            void* edx_4 = var_60 - arg6
            void* eax_44 = arg6 - var_4c
            void* ecx_13 = arg7 - var_60
            int32_t* eax_46 = var_40 - var_4c
            int32_t* var_14_1 = esi_10
            int32_t* eax_48 = var_28 - var_4c
            void* var_6c_1 = ecx_13
            int32_t* eax_50 = var_3c - var_4c
            void* var_20_1 = edx_4
            int32_t* eax_52 = var_70 - var_4c
            int32_t i_5 = arg10
            int32_t i_1
            
            do
                void* eax_56 = eax_44 + esi_10 + edx_4
                int32_t edi_10 = result_1 << 2
                void* edx_7 = *(eax_56 + ecx_13) + edi_10
                int32_t ecx_14 = 0
                void* var_34_1 = edx_7
                
                if (*eax_56 == 0)
                    if (edi_7 s> 0)
                        do
                            *(*esi_10 + (ecx_14 << 2)) = 0x2edbe6ff
                            *(*(eax_46 + esi_10) + (ecx_14 << 2)) = 0
                            *(*(eax_48 + esi_10) + (ecx_14 << 2)) = 0
                            *(*(eax_50 + esi_10) + (ecx_14 << 2)) = 0
                            *(edx_7 + (ecx_14 << 2)) = 0
                            ecx_14 += 1
                        while (ecx_14 s< edi_7)
                    
                    *(eax_52 + esi_10) = 0
                else
                    int32_t eax_57 = edi_7
                    int32_t var_10_1 = 0
                    
                    if (eax_57 s>= 4)
                        void* eax_58 = *esi_10
                        void* edx_8 = edx_7 + 0xc
                        void* esi_12 = var_34_1 - eax_58
                        void* var_50_2 = esi_12
                        void* ecx_15 = eax_58 + 4
                        int32_t var_30_2 = ((edi_7 - 4) u>> 2) + 1
                        int32_t j_3 = ((edi_7 - 4) u>> 2) + 1
                        var_10_1 = (((edi_7 - 4) u>> 2) + 1) << 2
                        int32_t j
                        
                        do
                            int32_t eax_64 = *(edx_8 - 0xc)
                            ecx_15 += 0x10
                            edx_8 += 0x10
                            *(ecx_15 - 0x14) = *((eax_64 << 2) + &data_ae47a0)
                            *(ecx_15 - 0x10) = *((*(ecx_15 + esi_12 - 0x10) << 2) + &data_ae47a0)
                            *(ecx_15 - 0xc) = *((*(edx_8 - 0x14) << 2) + &data_ae47a0)
                            *(ecx_15 - 8) = *((*(edx_8 - 0x10) << 2) + &data_ae47a0)
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        esi_10 = var_14_1
                        ecx_14 = var_10_1
                        edx_7 = var_34_1
                        eax_57 = edi_7
                    
                    if (ecx_14 s< eax_57)
                        int32_t eax_72 = *esi_10
                        int32_t j_2 = edi_7 - var_10_1
                        int32_t* ecx_16 = eax_72 + (ecx_14 << 2)
                        int32_t j_1
                        
                        do
                            int32_t eax_73 = *(ecx_16 + edx_7 - eax_72)
                            ecx_16 = &ecx_16[1]
                            ecx_16[-1] = *((eax_73 << 2) + &data_ae47a0)
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        esi_10 = var_14_1
                        eax_57 = edi_7
                    
                    sub_99fa50(eax_44, *(eax_44 + esi_10) + edi_10, eax_3, xmm0_1, var_7c, *esi_10, 
                        *(eax_50 + esi_10), result_1, eax_57)
                    int32_t eax_77 = edi_7
                    int32_t ecx_18 = 0
                    
                    if (eax_77 s> 0)
                        int32_t eax_79 = *(eax_44 + esi_10)
                        int32_t edx_14 = *esi_10
                        float* eax_82 = *(eax_46 + esi_10)
                        float* var_10_3 = *(eax_48 + esi_10) - eax_82
                        int32_t esi_14 = eax_79
                        int32_t edi_12 = edi_10
                        
                        do
                            float xmm0_6 = *(edi_12 + esi_14)
                            float xmm0_7 = xmm0_6 * xmm0_6
                            *eax_82 = xmm0_7
                            *(var_10_3 + eax_82) = xmm0_7
                            esi_14 = eax_79
                            
                            if (not(0 f<= *(edi_12 + esi_14)))
                                *eax_82 = *eax_82 * -1f
                            
                            float xmm0_10 = *(edx_14 + (ecx_18 << 2))
                            edi_12 += 4
                            eax_82 = &eax_82[1]
                            *(edx_14 + (ecx_18 << 2)) = xmm0_10 * xmm0_10
                            ecx_18 += 1
                        while (ecx_18 s< edi_7)
                        
                        esi_10 = var_14_1
                        eax_77 = edi_7
                    
                    void* var_9c_3 = var_34_1
                    int32_t var_a8_3 = ecx_18
                    *(eax_52 + esi_10) = sub_99f700(eax_46, eax_3, arg4, *(eax_46 + esi_10), 
                        *(eax_48 + esi_10), *esi_10, 0, *(eax_52 + esi_10), result_1, eax_77)
                
                ecx_13 = var_6c_1
                esi_10 = &esi_10[1]
                i_1 = i_5
                i_5 -= 1
                edx_4 = var_20_1
                var_14_1 = esi_10
            while (i_1 != 1)
            esi_9 = arg10
        
        int32_t i_4 = 0
        
        if (*(arg5 + 0x484) s> 0)
            void* var_5c_3 = &var_70[esi_9]
            void* eax_95 = arg5 + 0x888
            void* var_30_4 = eax_95
            int32_t i_2
            
            do
                int32_t edi_15 = *(eax_95 - 0x400)
                int32_t ecx_21 = *eax_95
                int32_t eax_97 = result_1 << 2
                int32_t edx_17 = *(arg7 + (edi_15 << 2)) + eax_97
                int32_t edx_19 = *(arg7 + (ecx_21 << 2)) + eax_97
                int32_t* esi_17 = var_40[edi_15]
                int32_t eax_99 = var_40[ecx_21]
                int32_t edi_16 = var_28[edi_15]
                int32_t edx_21 = var_28[ecx_21]
                int32_t edx_23 = var_4c[edi_15]
                int32_t edx_24 = var_4c[ecx_21]
                int32_t edx_26 = var_3c[edi_15]
                int32_t edi_20 = var_3c[ecx_21]
                int32_t edi_22 = edi_7
                
                if (var_60[edi_15] != 0 || var_60[ecx_21] != 0)
                    var_60[ecx_21] = 1
                    var_60[edi_15] = 1
                    int32_t ecx_23 = 0
                    int32_t var_24_2 = 0
                    
                    if (edi_22 s> 0)
                        float* eax_100 = eax_99 - esi_17
                        int32_t* var_34_3 = edx_21 - esi_17
                        int32_t* var_1c_2 = edi_16 - esi_17
                        int32_t* var_18_3 = edi_20 - esi_17
                        int32_t* var_2c_3 = edx_26 - esi_17
                        int32_t* var_8_3 = edx_19 - esi_17
                        float* var_54_3 = edx_24 - esi_17
                        int32_t* edi_26 = edx_17 - esi_17
                        float* var_10_4 = eax_100
                        int32_t* var_48_3 = edx_23 - esi_17
                        int32_t* var_20_2 = edi_26
                        
                        do
                            if (ecx_23 s< var_68_1 + arg9 - ecx)
                                if (*(var_2c_3 + esi_17) == 0)
                                    edi_26 = var_20_2
                                
                                if (*(var_2c_3 + esi_17) != 0 || *(var_18_3 + esi_17) != 0)
                                    float xmm1_6[0x2] = *(eax_100 + esi_17)
                                    double xmm0_25[0x2] = _mm_cvtps_pd(*esi_17)
                                    double xmm1_7[0x2] = _mm_cvtps_pd(xmm1_6)
                                    double xmm0_26 = __andpd_xmmxuq_memxuq(xmm0_25, data_b0dbc0)
                                    *esi_17 = _mm_cvtpd_ps(
                                        __andpd_xmmxuq_memxuq(xmm1_7, data_b0dbc0) + xmm0_26)
                                    *(var_1c_2 + esi_17) =
                                        *(var_34_3 + esi_17) f+ *(var_1c_2 + esi_17)
                                    *(var_18_3 + esi_17) = 1
                                    *(var_2c_3 + esi_17) = 1
                                    int32_t eax_107 = *(var_8_3 + esi_17)
                                    int32_t edi_32 = *(edi_26 + esi_17)
                                    int32_t eax_108
                                    int32_t edx_33
                                    edx_33:eax_108 = sx.q(eax_107)
                                    int32_t eax_110
                                    int32_t edx_34
                                    edx_34:eax_110 = sx.q(edi_32)
                                    int32_t* eax_113
                                    int32_t* edi_34
                                    
                                    if ((eax_110 ^ edx_34) - edx_34 s<= (eax_108 ^ edx_33) - edx_33)
                                        int32_t edi_36
                                        
                                        if (eax_107 s<= 0)
                                            edi_36 = eax_107 - edi_32
                                        else
                                            edi_36 = edi_32 - eax_107
                                        
                                        eax_113 = var_8_3
                                        *(eax_113 + esi_17) = edi_36
                                        edi_34 = var_20_2
                                        *(edi_34 + esi_17) = eax_107
                                    else if (edi_32 s<= 0)
                                        eax_113 = var_8_3
                                        *(eax_113 + esi_17) = eax_107 - edi_32
                                        edi_34 = var_20_2
                                    else
                                        eax_113 = var_8_3
                                        *(eax_113 + esi_17) = edi_32 - eax_107
                                        edi_34 = var_20_2
                                    
                                    int32_t ecx_29 = *(eax_113 + esi_17)
                                    int32_t eax_119
                                    int32_t edx_35
                                    edx_35:eax_119 = sx.q(*(edi_34 + esi_17))
                                    
                                    if (ecx_29 s>= ((eax_119 ^ edx_35) - edx_35) * 2)
                                        *(var_8_3 + esi_17) = neg.d(ecx_29)
                                        *(edi_34 + esi_17) = neg.d(*(edi_34 + esi_17))
                                    
                                    eax_100 = var_10_4
                                    ecx_23 = var_24_2
                                else
                                    eax_100 = var_10_4
                                    
                                    if (ecx_23 s>= var_68_1 + eax_3 - ecx)
                                        float xmm1_2[0x2] = *(eax_100 + esi_17)
                                        float xmm2_2[0x2] = *esi_17
                                        float xmm0_20 = xmm1_2[0] f+ xmm2_2
                                        float xmm0_23[0x4] = _mm_cvtpd_ps(
                                            __andpd_xmmxuq_memxuq(_mm_cvtps_pd(xmm1_2), data_b0dbc0)
                                            + __andpd_xmmxuq_memxuq(_mm_cvtps_pd(xmm2_2), 
                                            data_b0dbc0))
                                        
                                        if (0f <= xmm0_20)
                                            *(var_1c_2 + esi_17) = xmm0_23
                                            ecx_23 = var_24_2
                                        else
                                            *(var_1c_2 + esi_17) = xmm0_23
                                            xmm0_23 ^= data_b0dbe0
                                        
                                        *esi_17 = xmm0_23
                                    else
                                        float xmm0_15[0x2] = *esi_17 f+ *(eax_100 + esi_17)
                                        *esi_17 = xmm0_15
                                        *(var_1c_2 + esi_17) = _mm_cvtpd_ps(__andpd_xmmxuq_memxuq(
                                            _mm_cvtps_pd(xmm0_15), data_b0dbc0))
                                    
                                    *(var_34_3 + esi_17) = 0
                                    *(eax_100 + esi_17) = 0
                                    *(var_18_3 + esi_17) = 1
                                    *(var_8_3 + esi_17) = 0
                            
                            ecx_23 += 1
                            var_24_2 = ecx_23
                            float xmm0_31 = *(var_48_3 + esi_17) f+ *(var_54_3 + esi_17)
                            *(var_54_3 + esi_17) = xmm0_31
                            edi_26 = var_20_2
                            *(var_48_3 + esi_17) = xmm0_31
                            esi_17 = &esi_17[1]
                        while (ecx_23 s< edi_7)
                        
                        edi_22 = edi_7
                    
                    int32_t var_9c_4 = edx_17
                    int32_t var_a8_5 = ecx_23
                    *var_5c_3 = sub_99f700(edi_15, eax_3, arg4, var_40[edi_15], var_28[edi_15], 
                        var_4c[edi_15], var_3c[edi_15], *var_5c_3, result_1, edi_22)
                    var_5c_3 += 4
                
                i_2 = i_4 + 1
                eax_95 = var_30_4 + 4
                i_4 = i_2
                var_30_4 = eax_95
            while (i_2 s< *(arg5 + 0x484))
        
        edx_2 = var_58
        result = result_1 + edx_2
        ecx_11 = var_68_1 + eax_39
        result_1 = result
        var_68_1 = ecx_11
    while (result s< ecx)
    
    edi_38 = arg5

int32_t i_3 = 0

if (*(edi_38 + 0x484) s> 0)
    void* ecx_38 = edi_38 + 0x888
    
    do
        int32_t esi_20 = *(ecx_38 - 0x400)
        int32_t* eax_128 = arg8
        
        if (eax_128[esi_20] != 0)
            goto label_99f6d0
        
        result = *ecx_38
        edi_38 = arg5
        
        if (arg8[result] != 0)
            eax_128 = arg8
        label_99f6d0:
            eax_128[esi_20] = 1
            result = *ecx_38
            arg8[result] = 1
        
        i_3 += 1
        ecx_38 += 4
    while (i_3 s< *(edi_38 + 0x484))

return result
