// 函数: sub_9a22b0
// 地址: 0x9a22b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg3
int32_t var_c = ebx
float xmm1[0x2] = 6.28318548f / _mm_cvtepi32_ps(zx.o(arg2))
int32_t mxcsr
int16_t x87control
int16_t x87control_1
double xmm0_3
x87control_1, xmm0_3 = __libm_sse2_cos_precise(mxcsr, x87control, _mm_cvtps_pd(xmm1))
float xmm0_4 = fconvert.s(xmm0_3)
int32_t edi = arg4
int32_t eax_1 = (arg2 + 1) s>> 1
int32_t edx_1 = ebx * edi
int32_t eax_3 = (ebx - 1) s>> 1
int32_t eax_5 = ebx * arg2
float xmm7 = fconvert.s(__libm_sse2_sin_precise(mxcsr, x87control_1, _mm_cvtps_pd(xmm1)))

if (ebx != 1)
    void* edx_2 = arg5
    int32_t eax_6 = 0
    
    if (edx_2 s>= 4)
        void* edx_3 = arg8 + 0xc
        void* ecx = arg10 + 4
        int32_t i_31 = ((arg5 - 4) u>> 2) + 1
        int32_t eax_8 = i_31 << 2
        int32_t i
        
        do
            ecx += 0x10
            *(ecx - 0x14) = *(edx_3 - 0xc)
            edx_3 += 0x10
            *(ecx - 0x10) = *(arg8 - arg10 + ecx - 0x10)
            *(ecx - 0xc) = *(edx_3 - 0x14)
            *(ecx - 8) = *(edx_3 - 0x10)
            i = i_31
            i_31 -= 1
        while (i != 1)
        eax_6 = eax_8
        edi = arg4
        edx_2 = arg5
    
    if (eax_6 s< edx_2)
        void* i_27 = edx_2 - eax_6
        int32_t* ecx_3 = arg10 + (eax_6 << 2)
        void* i_1
        
        do
            int32_t eax_13 = *(ecx_3 + arg8 - arg10)
            ecx_3 = &ecx_3[1]
            ecx_3[-1] = eax_13
            i_1 = i_27
            i_27 -= 1
        while (i_1 != 1)
    
    int32_t ecx_9 = arg2
    int32_t eax_14 = 0
    
    if (ecx_9 s> 1)
        int32_t i_28 = ecx_9 - 1
        int32_t i_39 = i_28
        int32_t i_2
        
        do
            int32_t eax_15 = eax_14 + edx_1
            int32_t ecx_4 = eax_15
            int32_t eax_16 = 0
            
            if (edi s>= 4)
                int32_t j_20 = ((edi - 4) u>> 2) + 1
                int32_t eax_17 = j_20 << 2
                int32_t j
                
                do
                    arg9[ecx_4] = arg7[ecx_4]
                    int32_t ecx_5 = ecx_4 + ebx
                    arg9[ecx_5] = arg7[ecx_5]
                    int32_t ecx_6 = ecx_5 + ebx
                    arg9[ecx_6] = arg7[ecx_6]
                    int32_t ecx_7 = ecx_6 + ebx
                    arg9[ecx_7] = arg7[ecx_7]
                    ecx_4 = ecx_7 + ebx
                    j = j_20
                    j_20 -= 1
                while (j != 1)
                eax_16 = eax_17
                i_28 = i_39
                edi = arg4
            
            if (eax_16 s< edi)
                int32_t* ecx_8 = &arg9[ecx_4]
                int32_t j_21 = arg4 - eax_16
                int32_t j_1
                
                do
                    *ecx_8 = *(arg7 - arg9 + ecx_8)
                    ecx_8 = &ecx_8[ebx]
                    j_1 = j_21
                    j_21 -= 1
                while (j_1 != 1)
                i_28 = i_39
                edi = arg4
            
            eax_14 = eax_15
            i_2 = i_28
            i_28 -= 1
            i_39 = i_28
        while (i_2 != 1)
        ecx_9 = arg2
    
    int32_t esi_11 = neg.d(ebx)
    int32_t var_20_1 = esi_11
    
    if (eax_3 s<= edi)
        if (ecx_9 s> 1)
            float* edx_12 = arg9
            float* eax_34 = arg11 + (esi_11 << 2) - 4
            void* esi_16 = &arg7[-1]
            int32_t i_24 = arg2 - 1
            float* edi_9 = edx_12
            int32_t ecx_13 = ebx << 2
            int32_t i_3
            
            do
                edx_12 = &edx_12[edx_1]
                eax_34 += ecx_13
                esi_16 += edx_1 << 2
                float* var_40_2 = edx_12
                void* var_38_1 = esi_16
                
                if (ebx s> 2)
                    float* ecx_14 = eax_34
                    int32_t j_16 = ((ebx - 3) u>> 1) + 1
                    int32_t j_32 = j_16
                    int32_t j_2
                    
                    do
                        ebx = var_c
                        ecx_14 = &ecx_14[2]
                        edx_12 = &edx_12[2]
                        esi_16 += 8
                        float* var_48_4 = edx_12
                        
                        if (arg4 s> 0)
                            int32_t* eax_37 = esi_16
                            int32_t k_11 = arg4
                            int32_t k
                            
                            do
                                *(eax_37 + edi_9 - arg7) =
                                    eax_37[1] f* *ecx_14 + ecx_14[-1] f* *eax_37
                                float xmm0_14 = *eax_37
                                float xmm1_11 = ecx_14[-1] f* eax_37[1]
                                eax_37 = &eax_37[ebx]
                                *edx_12 = xmm1_11 - xmm0_14 * *ecx_14
                                edx_12 = &edx_12[ebx]
                                k = k_11
                                k_11 -= 1
                            while (k != 1)
                            j_16 = j_32
                            edx_12 = var_48_4
                            edi_9 = arg9
                        
                        j_2 = j_16
                        j_16 -= 1
                        j_32 = j_16
                    while (j_2 != 1)
                    edx_12 = var_40_2
                    ecx_13 = ebx << 2
                    esi_16 = var_38_1
                
                i_3 = i_24
                i_24 -= 1
            while (i_3 != 1)
            edi = arg4
    else if (ecx_9 s> 1)
        int32_t ecx_10 = ebx << 2
        float* edx_9 = arg7 - ecx_10 - 4
        void* eax_27 = arg11 + (esi_11 << 2) - 4
        float* esi_13 = arg9 - ecx_10
        int32_t i_23 = arg2 - 1
        ebx = var_c
        int32_t i_4
        
        do
            esi_13 = &esi_13[edx_1]
            eax_27 += ecx_10
            edx_9 = &edx_9[edx_1]
            float* edi_5 = arg9
            float* var_40_1 = edx_9
            
            if (arg4 s> 0)
                float* eax_28 = esi_13
                int32_t j_23 = arg4
                int32_t j_31 = j_23
                int32_t j_3
                
                do
                    eax_28 += ecx_10
                    edx_9 += ecx_10
                    
                    if (ebx s> 2)
                        float* esi_14 = eax_28
                        void* ecx_11 = eax_27
                        float* eax_29 = edx_9
                        int32_t k_9 = ((ebx - 3) u>> 1) + 1
                        int32_t k_1
                        
                        do
                            float xmm1_1 = eax_29[2]
                            eax_29 = &eax_29[2]
                            float xmm1_2 = xmm1_1 f* *(ecx_11 + 4)
                            ecx_11 += 8
                            esi_14 = &esi_14[2]
                            *(edi_5 - arg7 + eax_29) = xmm1_2 + eax_29[1] f* *ecx_11
                            *esi_14 = eax_29[1] f* *(ecx_11 - 4) - *ecx_11 * *eax_29
                            k_1 = k_9
                            k_9 -= 1
                        while (k_1 != 1)
                        ecx_10 = ebx << 2
                        j_23 = j_31
                        edi_5 = arg9
                    
                    j_3 = j_23
                    j_23 -= 1
                    j_31 = j_23
                while (j_3 != 1)
                edx_9 = var_40_1
            
            i_4 = i_23
            i_23 -= 1
        while (i_4 != 1)
        edi = arg4
    
    int32_t ecx_15 = 0
    int32_t esi_18 = edx_1 * arg2
    
    if (eax_3 s>= edi)
        if (eax_1 s> 1)
            int32_t ecx_18 = edx_1 << 2
            float* edx_20 = arg7
            int32_t var_54_2 = ecx_18
            void* edi_19 = &arg7[esi_18]
            void* esi_24 = &arg9[esi_18 - 1]
            void* eax_48 = &arg9[-1]
            int32_t i_20 = eax_1 - 1
            int32_t i_5
            
            do
                ebx = var_c
                edx_20 += ecx_18
                eax_48 += ecx_18
                edi_19 -= ecx_18
                esi_24 -= ecx_18
                void* var_50_2 = edi_19
                void* var_48_6 = esi_24
                
                if (arg4 s> 0)
                    int32_t eax_49 = ebx << 2
                    void* var_38_2 = edi_19
                    float* ecx_19 = edx_20
                    void* edx_21 = eax_48
                    int32_t j_14 = arg4
                    int32_t eax_51 = eax_49
                    float* var_40_3 = ecx_19
                    void* var_3c_4 = edx_21
                    void* var_24_3 = esi_24
                    int32_t j_4
                    
                    do
                        if (ebx s> 2)
                            float* eax_52 = edx_21
                            float* esi_25 = ecx_19
                            void* edx_23 = arg7 - arg9
                            int32_t* ecx_20 = var_24_3
                            int32_t k_10 = ((ebx - 3) u>> 1) + 1
                            int32_t k_2
                            
                            do
                                float xmm0_24 = eax_52[2]
                                eax_52 = &eax_52[2]
                                float xmm0_25 = xmm0_24 f+ ecx_20[2]
                                ecx_20 = &ecx_20[2]
                                esi_25 = &esi_25[2]
                                edi_19 += 8
                                *(eax_52 + edx_23) = xmm0_25
                                *(ecx_20 + edx_23) = eax_52[1] f- ecx_20[1]
                                *esi_25 = ecx_20[1] f+ eax_52[1]
                                *edi_19 = *ecx_20 - *eax_52
                                k_2 = k_10
                                k_10 -= 1
                            while (k_2 != 1)
                            ebx = var_c
                            eax_51 = eax_49
                            ecx_19 = var_40_3
                            edx_21 = var_3c_4
                            edi_19 = var_38_2
                            esi_24 = var_24_3
                        
                        ecx_19 += eax_51
                        edx_21 += eax_51
                        edi_19 += eax_51
                        var_40_3 = ecx_19
                        esi_24 += eax_51
                        var_3c_4 = edx_21
                        j_4 = j_14
                        j_14 -= 1
                        var_38_2 = edi_19
                        var_24_3 = esi_24
                    while (j_4 != 1)
                    ecx_18 = var_54_2
                    edi_19 = var_50_2
                    esi_24 = var_48_6
                
                i_5 = i_20
                i_20 -= 1
            while (i_5 != 1)
    else if (eax_1 s> 1)
        int32_t eax_38 = edx_1 << 2
        int32_t eax_39 = ebx << 2
        void* edx_15 = arg7 - eax_39
        void* edi_13 = arg9 - eax_39 - 4
        int32_t i_25 = eax_1 - 1
        int32_t i_36 = i_25
        int32_t i_6
        
        do
            void* edx_16 = edx_15 + eax_38
            ecx_15 += edx_1
            edi_13 += eax_38
            esi_18 -= edx_1
            var_20_1 += edx_1
            int32_t edx_18 = ecx_15
            
            if (ebx s> 2)
                void* ecx_16 = edx_16
                int32_t ebx_3 = var_20_1
                int32_t esi_19 = esi_18 - edx_18
                int32_t j_17 = ((ebx - 3) u>> 1) + 1
                int32_t j_29 = j_17
                void* edi_14 = edi_13
                int32_t j_5
                
                do
                    edx_18 += 2
                    ebx_3 += 2
                    ecx_16 += 8
                    edi_14 += 8
                    
                    if (arg4 s> 0)
                        float* edx_19 = ecx_16
                        int32_t* ecx_17 = edi_14
                        float* esi_22 = &arg7[ebx_3 + esi_19]
                        int32_t k_8 = arg4
                        float* eax_45 = &arg9[-1 + ebx_3 + esi_19]
                        void* edi_18 = arg7 - arg9
                        int32_t k_3
                        
                        do
                            ecx_17 = &ecx_17[ebx]
                            eax_45 = &eax_45[ebx]
                            edx_19 = &edx_19[ebx]
                            esi_22 = &esi_22[ebx]
                            k_3 = k_8
                            k_8 -= 1
                            *(ecx_17 + edi_18) = *ecx_17 + *eax_45
                            *(eax_45 + edi_18) = ecx_17[1] f- eax_45[1]
                            *edx_19 = eax_45[1] f+ ecx_17[1]
                            *esi_22 = *eax_45 f- *ecx_17
                        while (k_3 != 1)
                        j_17 = j_29
                    
                    j_5 = j_17
                    j_17 -= 1
                    j_29 = j_17
                while (j_5 != 1)
                ebx = var_c
                i_25 = i_36
            
            edx_15 = edx_16
            i_6 = i_25
            i_25 -= 1
            i_36 = i_25
        while (i_6 != 1)

void* edi_22 = arg5
int32_t eax_53 = 0

if (edi_22 s>= 4)
    void* ecx_21 = arg8 + 4
    void* edx_26 = arg10 + 0xc
    int32_t i_32 = ((arg5 - 4) u>> 2) + 1
    int32_t eax_55 = i_32 << 2
    int32_t i_7
    
    do
        ecx_21 += 0x10
        *(ecx_21 - 0x14) = *(edx_26 - 0xc)
        edx_26 += 0x10
        *(ecx_21 - 0x10) = *(arg10 - arg8 + ecx_21 - 0x10)
        *(ecx_21 - 0xc) = *(edx_26 - 0x14)
        *(ecx_21 - 8) = *(edx_26 - 0x10)
        i_7 = i_32
        i_32 -= 1
    while (i_7 != 1)
    eax_53 = eax_55
    edi_22 = arg5

if (eax_53 s< edi_22)
    void* ecx_22 = arg8 + (eax_53 << 2)
    void* i_29 = edi_22 - eax_53
    void* i_8
    
    do
        int32_t eax_60 = *(arg10 - arg8 + ecx_22)
        ecx_22 += 4
        *(ecx_22 - 4) = eax_60
        i_8 = i_29
        i_29 -= 1
    while (i_8 != 1)

int32_t edx_29 = 0
int32_t eax_62 = arg2 * edi_22
int32_t esi_32 = eax_62

if (eax_1 s> 1)
    int32_t ebx_8 = neg.d(ebx)
    float* eax_68 = arg9 - (ebx << 2)
    int32_t i_22 = eax_1 - 1
    int32_t i_9
    
    do
        edx_29 += edx_1
        eax_68 = &eax_68[edx_1]
        esi_32 -= edx_1
        ebx_8 += edx_1
        i_9 = i_22
        
        if (arg4 s> 0)
            float* ecx_26 = eax_68
            float* edx_31 = arg7 - arg9
            float* eax_72 = &arg9[ebx_8 - edx_29 + esi_32]
            int32_t j_24 = arg4
            int32_t j_6
            
            do
                float xmm0_32 = eax_72[ebx]
                eax_72 = &eax_72[ebx]
                float xmm0_33 = xmm0_32 + ecx_26[ebx]
                ecx_26 = &ecx_26[ebx]
                *(edx_31 + ecx_26) = xmm0_33
                *(edx_31 + eax_72) = *eax_72 - *ecx_26
                j_6 = j_24
                j_24 -= 1
            while (j_6 != 1)
            i_9 = i_22
        
        i_22 = i_9 - 1
    while (i_9 != 1)
    ebx = var_c

float xmm4 = (zx.o(0)).d
void* esi_34 = arg5
float xmm6 = 1f
int32_t ecx_30 = (arg2 - 1) * esi_34

if (eax_1 s> 1)
    int32_t edi_24 = esi_34 << 2
    int32_t ebx_9 = ecx_30
    void* esi_35 = arg10
    int32_t var_44_6 = edi_24
    void* edx_32 = arg10 + (eax_62 << 2)
    int32_t i_26 = eax_1 - 1
    int32_t i_38 = i_26
    int32_t i_10
    
    do
        void* esi_36 = esi_35 + edi_24
        float* edx_33 = edx_32 - edi_24
        int32_t eax_73 = 0
        void* var_20_2 = esi_36
        float* var_28_2 = edx_33
        float xmm3_3 = xmm6 * xmm0_4 - xmm4 * xmm7
        xmm4 = xmm4 * xmm0_4 + xmm6 * xmm7
        xmm6 = xmm3_3
        
        if (arg5 s> 0)
            float* edi_25 = edi_24 + arg8
            void* ecx_34 = arg8 + (ebx_9 << 2)
            
            do
                float xmm0_38 = *edi_25
                edi_25 = &edi_25[1]
                float xmm0_40 = xmm0_38 * xmm3_3 f+ *(arg8 + (eax_73 << 2))
                ebx_9 = ecx_30
                eax_73 += 1
                *esi_36 = xmm0_40
                esi_36 += 4
                float xmm0_41 = *ecx_34
                ecx_34 += 4
                *edx_33 = xmm0_41 * xmm4
                edx_33 = &edx_33[1]
            while (eax_73 s< arg5)
            
            edi_24 = var_44_6
            esi_36 = var_20_2
            edx_33 = var_28_2
            i_26 = i_38
        
        float xmm5_1 = xmm3_3
        float xmm1_14 = xmm4
        
        if (eax_1 s> 2)
            float* ebx_11 = edi_24 + arg8
            float* ecx_36 = arg8 + (ecx_30 << 2)
            int32_t j_18 = eax_1 - 2
            int32_t j_28 = j_18
            int32_t j_7
            
            do
                ecx_36 -= edi_24
                ebx_11 += edi_24
                float xmm2_3 = xmm5_1 * xmm3_3 - xmm1_14 * xmm4
                xmm1_14 = xmm1_14 * xmm3_3 + xmm5_1 * xmm4
                xmm5_1 = xmm2_3
                
                if (arg5 s> 0)
                    void* k_12 = arg5
                    float* eax_76 = edx_33
                    float* edx_34 = ecx_36
                    void* ecx_37 = esi_36
                    float* esi_37 = ebx_11
                    void* k_4
                    
                    do
                        float xmm0_45 = *esi_37
                        esi_37 = &esi_37[1]
                        *ecx_37 = xmm0_45 * xmm2_3 f+ *ecx_37
                        ecx_37 += 4
                        float xmm0_48 = *edx_34
                        edx_34 = &edx_34[1]
                        *eax_76 = xmm0_48 * xmm1_14 + *eax_76
                        eax_76 = &eax_76[1]
                        k_4 = k_12
                        k_12 -= 1
                    while (k_4 != 1)
                    j_18 = j_28
                    edi_24 = var_44_6
                
                esi_36 = var_20_2
                j_7 = j_18
                j_18 -= 1
                edx_33 = var_28_2
                j_28 = j_18
            while (j_7 != 1)
            i_26 = i_38
            ebx_9 = ecx_30
        
        esi_35 = var_20_2
        i_10 = i_26
        i_26 -= 1
        edx_32 = var_28_2
        i_38 = i_26
    while (i_10 != 1)
    ebx = var_c
    esi_34 = arg5

void* edi_26 = nullptr

if (eax_1 s> 1)
    int32_t eax_77 = esi_34 << 2
    void* edx_36 = arg8 + 8
    int32_t i_30 = eax_1 - 1
    int32_t var_58_7 = eax_77
    int32_t i_37 = i_30
    int32_t i_11
    
    do
        edx_36 += eax_77
        edi_26 += esi_34
        int32_t ecx_38 = 0
        void* var_44_7 = edx_36
        void* eax_78 = edi_26
        
        if (esi_34 s>= 4)
            void* eax_80 = arg10 + 8
            int32_t j_25 = ((esi_34 - 4) u>> 2) + 1
            ecx_38 = j_25 << 2
            int32_t j_8
            
            do
                *(eax_80 - 8) = *(edx_36 - 8) f+ *(eax_80 - 8)
                *(eax_80 - 4) = *(edx_36 - 4) f+ *(eax_80 - 4)
                *eax_80 = *edx_36 f+ *eax_80
                float xmm0_57 = *(edx_36 + 4)
                edx_36 += 0x10
                *(eax_80 + 4) = xmm0_57 f+ *(eax_80 + 4)
                eax_80 += 0x10
                j_8 = j_25
                j_25 -= 1
            while (j_8 != 1)
            eax_78 = ecx_38 + edi_26
            edx_36 = var_44_7
            i_30 = i_37
            esi_34 = arg5
        
        if (ecx_38 s< esi_34)
            void* eax_81 = arg8 + (eax_78 << 2)
            
            do
                float xmm0_59 = *eax_81
                eax_81 += 4
                *(arg10 + (ecx_38 << 2)) = xmm0_59 f+ *(arg10 + (ecx_38 << 2))
                ecx_38 += 1
            while (ecx_38 s< esi_34)
            
            edx_36 = var_44_7
            i_30 = i_37
        
        eax_77 = var_58_7
        i_11 = i_30
        i_30 -= 1
        i_37 = i_30
    while (i_11 != 1)
    ebx = var_c

int32_t i_40 = arg4
int32_t eax_82 = 0
int32_t var_28_3 = 0
int32_t* esi_40

if (ebx s>= i_40)
    esi_40 = arg6
    void* ecx_54 = nullptr
    arg5 = nullptr
    
    if (i_40 s> 0)
        int32_t i_19 = i_40
        void* var_24_5 = &arg9[2]
        void* var_20_4 = &esi_40[2]
        int32_t i_12
        
        do
            int32_t edx_54 = eax_82
            void* edi_41 = ecx_54
            void* const eax_112 = nullptr
            
            if (ebx s>= 4)
                void* ecx_55 = var_20_4
                void* edx_53 = var_24_5
                int32_t j_26 = ((ebx - 4) u>> 2) + 1
                int32_t eax_113 = j_26 << 2
                esi_40 = arg6
                int32_t j_9
                
                do
                    ecx_55 += 0x10
                    *(ecx_55 - 0x18) = *(edx_53 - 8)
                    edx_53 += 0x10
                    *(ecx_55 - 0x14) = *(edx_53 - 0x14)
                    *(ecx_55 - 0x10) = *(edx_53 - 0x10)
                    *(ecx_55 - 0xc) = *(edx_53 - 0xc)
                    j_9 = j_26
                    j_26 -= 1
                while (j_9 != 1)
                eax_112 = eax_113
                ecx_54 = arg5
                edx_54 = var_28_3 + eax_113
                edi_41 = eax_113 + arg5
            
            if (eax_112 s< ebx)
                void* ecx_56 = &esi_40[edi_41]
                void* edx_55 = &arg9[edx_54]
                void* j_27 = ebx - eax_112
                void* j_10
                
                do
                    int32_t eax_119 = *edx_55
                    edx_55 += 4
                    *ecx_56 = eax_119
                    ecx_56 += 4
                    j_10 = j_27
                    j_27 -= 1
                while (j_10 != 1)
                ecx_54 = arg5
            
            var_24_5 += ebx << 2
            ecx_54 += eax_5
            eax_82 = var_28_3 + ebx
            arg5 = ecx_54
            var_28_3 = eax_82
            var_20_4 += eax_5 << 2
            i_12 = i_19
            i_19 -= 1
        while (i_12 != 1)
else
    if (ebx s> 0)
        while (true)
            void* esi_52 = nullptr
            int32_t ecx_49 = eax_82
            arg5 = nullptr
            int32_t edx_45 = eax_82
            
            if (i_40 s>= 4)
                int32_t i_34 = ((i_40 - 4) u>> 2) + 1
                arg5 = i_34 << 2
                int32_t i_13
                
                do
                    int32_t ecx_50 = ecx_49 + ebx
                    arg6[edx_45] = arg9[ecx_49]
                    int32_t edx_46 = edx_45 + eax_5
                    int32_t ecx_51 = ecx_50 + ebx
                    arg6[edx_46] = arg9[ecx_50]
                    int32_t edx_47 = edx_46 + eax_5
                    int32_t ecx_52 = ecx_51 + ebx
                    arg6[edx_47] = arg9[ecx_51]
                    int32_t edx_48 = edx_47 + eax_5
                    ecx_49 = ecx_52 + ebx
                    arg6[edx_48] = arg9[ecx_52]
                    edx_45 = edx_48 + eax_5
                    i_13 = i_34
                    i_34 -= 1
                while (i_13 != 1)
                eax_82 = var_28_3
                esi_52 = arg5
            
            if (esi_52 s< arg4)
                void* edx_49 = &arg6[edx_45]
                void* i_35 = arg4 - arg5
                void* ecx_53 = &arg9[ecx_49]
                void* i_14
                
                do
                    int32_t eax_111 = *ecx_53
                    ecx_53 += ebx << 2
                    *edx_49 = eax_111
                    edx_49 += eax_5 << 2
                    i_14 = i_35
                    i_35 -= 1
                while (i_14 != 1)
                ebx = var_c
                eax_82 = var_28_3
            
            eax_82 += 1
            var_28_3 = eax_82
            
            if (eax_82 s>= ebx)
                break
            
            i_40 = arg4
    
    esi_40 = arg6

int32_t edx_40 = edx_1
int32_t edi_27 = ebx * 2
int32_t var_44_8 = edi_27
int32_t ecx_40 = edx_40 * arg2

if (eax_1 s> 1)
    eax_82 = edx_40 << 2
    int32_t var_48_8 = eax_82
    float* edx_39 = arg9
    void* edi_28 = &edx_39[ecx_40]
    int32_t* ecx_41 = esi_40
    void* i_33 = eax_1 - 1
    arg5 = i_33
    void* i_15
    
    do
        ecx_41 = &ecx_41[edi_27]
        edx_39 += eax_82
        ebx = var_c
        edi_28 -= eax_82
        int32_t* var_4c_4 = ecx_41
        float* var_50_4 = edx_39
        void* var_54_4 = edi_28
        
        if (arg4 s> 0)
            int32_t j_22 = arg4
            int32_t j_11
            
            do
                float eax_83 = *edx_39
                edx_39 = &edx_39[ebx]
                ecx_41[-1] = eax_83
                int32_t eax_84 = *edi_28
                edi_28 += ebx << 2
                *ecx_41 = eax_84
                ecx_41 = &ecx_41[eax_5]
                j_11 = j_22
                j_22 -= 1
            while (j_11 != 1)
            ebx = var_c
            edi_28 = var_54_4
            edx_39 = var_50_4
            ecx_41 = var_4c_4
            eax_82 = var_48_8
            i_33 = arg5
        
        i_15 = i_33
        i_33 -= 1
        arg5 = i_33
    while (i_15 != 1)
    esi_40 = arg6
    edi_27 = ebx * 2
    edx_40 = edx_1

if (ebx != 1)
    if (eax_3 s>= arg4)
        eax_82 = neg.d(ebx)
        
        if (eax_1 s> 1)
            int32_t edx_58 = edx_40 << 2
            arg5 = edi_27 << 2
            void* edx_60 = &esi_40[2]
            void* esi_57 = &esi_40[eax_82 + ebx - 2]
            void* ecx_58 = &arg9[ecx_40 + 2]
            void* edi_48 = &arg9[2]
            int32_t i_21 = eax_1 - 1
            eax_82 = edx_58
            int32_t i_16
            
            do
                esi_57 += arg5
                edi_48 += eax_82
                edx_60 += arg5
                ecx_58 -= eax_82
                void* var_50_5 = esi_57
                void* var_54_7 = edx_60
                void* var_58_12 = ecx_58
                
                if (arg4 s> 0)
                    int32_t eax_125 = eax_5 << 2
                    float* eax_126 = edi_48
                    int32_t j_15 = arg4
                    float* var_3c_6 = eax_126
                    void* var_40_6 = esi_57
                    void* var_48_9 = edx_60
                    void* var_38_3 = ecx_58
                    int32_t edi_52 = var_c << 2
                    int32_t j_12
                    
                    do
                        if (var_c s> 2)
                            int32_t k_13 = ((var_c - 3) u>> 1) + 1
                            int32_t k_5
                            
                            do
                                *(edx_60 - 4) = eax_126[-1] f+ *(ecx_58 - 4)
                                *(esi_57 - 4) = eax_126[-1] f- *(ecx_58 - 4)
                                *edx_60 = *eax_126 f+ *ecx_58
                                edx_60 += 8
                                float xmm0_75 = *ecx_58
                                ecx_58 += 8
                                float xmm0_76 = xmm0_75 - *eax_126
                                eax_126 = &eax_126[2]
                                *esi_57 = xmm0_76
                                esi_57 -= 8
                                k_5 = k_13
                                k_13 -= 1
                            while (k_5 != 1)
                            eax_126 = var_3c_6
                            edi_52 = var_c << 2
                            esi_57 = var_40_6
                            edx_60 = var_48_9
                            ecx_58 = var_38_3
                        
                        edx_60 += eax_125
                        eax_126 += edi_52
                        esi_57 += eax_125
                        ecx_58 += edi_52
                        j_12 = j_15
                        j_15 -= 1
                        var_48_9 = edx_60
                        var_40_6 = esi_57
                        var_3c_6 = eax_126
                        var_38_3 = ecx_58
                    while (j_12 != 1)
                    ecx_58 = var_58_12
                    edx_60 = var_54_7
                    esi_57 = var_50_5
                    eax_82 = edx_58
                
                i_16 = i_21
                i_21 -= 1
            while (i_16 != 1)
    else
        eax_82 = neg.d(ebx)
        int32_t edx_41 = 0
        
        if (eax_1 s> 1)
            int32_t edi_31 = edx_1 << 2
            void* edi_36 = &arg9[ecx_40 + 2]
            int32_t eax_88 = ebx - 2 + eax_82
            int32_t ecx_47 = 4 - eax_82 - ebx
            arg5 = &esi_40[eax_88]
            int32_t i_18 = eax_1 - 1
            void* esi_47 = &arg9[2]
            int32_t i_17
            
            do
                arg5 += ebx * 8
                eax_88 += var_44_8
                ecx_47 += neg.d(edi_27)
                edx_41 += var_44_8
                esi_47 += edi_31
                edi_36 -= edi_31
                int32_t ebx_16 = var_c
                int32_t var_54_5 = ecx_47
                void* var_10_2 = edi_36
                
                if (ebx_16 s> 2)
                    void* var_24_4 = esi_47
                    int32_t esi_48 = eax_88
                    float* var_28_4 = arg5
                    int32_t j_19 = ((ebx_16 - 3) u>> 1) + 1
                    int32_t var_1c_3 = ecx_47
                    int32_t var_2c_1 = esi_48
                    void* var_20_3 = edi_36
                    int32_t j_30 = j_19
                    int32_t j_13
                    
                    do
                        void* edx_42 = var_24_4
                        
                        if (arg4 s> 0)
                            void* ecx_48 = edx_42
                            float* esi_49 = var_28_4
                            void* edx_43 = var_20_3
                            int32_t eax_93 = ebx_16 << 2
                            void* eax_97 = &arg6[var_1c_3 + var_2c_1 + edx_41]
                            int32_t k_7 = arg4
                            ebx_16 = var_c
                            int32_t k_6
                            
                            do
                                *(eax_97 - 4) = *(edx_43 - 4) f+ *(ecx_48 - 4)
                                esi_49[-1] = *(ecx_48 - 4) f- *(edx_43 - 4)
                                *eax_97 = *edx_43 f+ *ecx_48
                                eax_97 += eax_5 << 2
                                float xmm0_68 = *edx_43 f- *ecx_48
                                edx_43 += eax_93
                                ecx_48 += eax_93
                                *esi_49 = xmm0_68
                                esi_49 = &esi_49[eax_5]
                                k_6 = k_7
                                k_7 -= 1
                            while (k_6 != 1)
                            j_19 = j_30
                            ecx_47 = var_1c_3
                            edx_42 = var_24_4
                            esi_48 = var_2c_1
                            edi_36 = var_20_3
                        
                        var_28_4 -= 8
                        esi_48 -= 2
                        var_2c_1 = esi_48
                        edi_36 += 8
                        var_24_4 = edx_42 + 8
                        ecx_47 += 4
                        var_20_3 = edi_36
                        j_13 = j_19
                        j_19 -= 1
                        var_1c_3 = ecx_47
                        j_30 = j_19
                    while (j_13 != 1)
                    ecx_47 = var_54_5
                    edi_36 = var_10_2
                
                i_17 = i_18
                i_18 -= 1
            while (i_17 != 1)
            return eax_88

return eax_82
