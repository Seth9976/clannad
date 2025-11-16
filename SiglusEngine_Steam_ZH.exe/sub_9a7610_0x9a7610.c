// 函数: sub_9a7610
// 地址: 0x9a7610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
void* eax = ebx[0x10]
void* edi = *(eax + 4)
void* eax_1 = *(eax + 0x68)
void* eax_2 = ebx[0x1a]
int32_t ecx = *(edi + 0x1c)
int32_t eax_3 = ebx[9]
int32_t esi_1 = *(edi + 4) << 2
void* var_10 = edi
__alloca_probe_16(esi_1)
int32_t __saved_edi
int32_t* var_54 = &__saved_edi
int32_t eax_5 = sub_99cca0(ebx, esi_1)
int32_t* eax_6 = sub_99cca0(ebx, *(edi + 4) << 2)
int32_t* eax_7 = sub_99cca0(ebx, *(edi + 4) << 2)
float var_40 = *(eax_2 + 4)
__alloca_probe_16(*(edi + 4) << 2)
int32_t edx_5 = ebx[7]
int32_t* var_28 = &__saved_edi
int32_t* esi_2 = *(ecx + (edx_5 << 2) + 0x220)
int32_t eax_13 = neg.d(edx_5)
int32_t* ecx_6 = ((sbb.d(eax_13, eax_13, edx_5 != 0) & 2) + *(eax_2 + 8)) * 0x34 + *(eax_1 + 0x38)
int32_t i = 0
ebx[0xa] = edx_5
int32_t i_4 = 0

if (*(edi + 4) s> 0)
    int32_t eax_19
    int32_t edx_6
    edx_6:eax_19 = sx.q(eax_3)
    float xmm1_1 = 4f / _mm_cvtepi32_ps(zx.o(eax_3))
    void* edx_8 = (((eax_19 - edx_6) s>> 1 << 2) + 7) & 0xfffffff8
    int32_t* esi_4 = &__saved_edi
    void* eax_28 = eax_5 - &__saved_edi
    void* var_24_1 = edx_8
    
    do
        void* eax_30 = *(*ebx + (i << 2))
        
        if (ebx[0x12] + edx_8 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t* eax_33 = _malloc(8)
                edx_8 = var_24_1
                ebx[0x14] += ebx[0x12]
                eax_33[1] = ebx[0x15]
                *eax_33 = ebx[0x11]
                ebx[0x15] = eax_33
            
            ebx[0x13] = edx_8
            int32_t eax_37 = _malloc(edx_8)
            edx_8 = var_24_1
            ebx[0x11] = eax_37
            ebx[0x12] = 0
        
        void* eax_38 = ebx[0x12]
        void* ecx_9 = ebx[0x11] + eax_38
        ebx[0x12] = eax_38 + edx_8
        *(eax_28 + esi_4 + eax_6 - eax_5) = ecx_9
        edi = var_10
        
        if (ebx[0x12] + edx_8 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t* eax_44 = _malloc(8)
                edx_8 = var_24_1
                ebx[0x14] += ebx[0x12]
                eax_44[1] = ebx[0x15]
                *eax_44 = ebx[0x11]
                ebx[0x15] = eax_44
            
            ebx[0x13] = edx_8
            int32_t eax_48 = _malloc(edx_8)
            edx_8 = var_24_1
            ebx[0x11] = eax_48
            ebx[0x12] = 0
        
        void* eax_49 = ebx[0x12]
        void* ecx_12 = ebx[0x11] + eax_49
        ebx[0x12] = eax_49 + edx_8
        *(eax_28 + esi_4) = ecx_12
        int32_t eax_53 = xmm1_1 & 0x7fffffff
        void* var_78_3 = ebx[8]
        int32_t var_7c_1 = ebx[7]
        double xmm0_5 = _mm_cvtepi32_pd(zx.q(eax_53))
        uint32_t eax_54 = eax_53 u>> 0x1f
        int32_t var_80_1 = ebx[6]
        float xmm0_12 = _mm_cvtpd_ps(_mm_cvtps_pd(
            _mm_cvtpd_ps(xmm0_5 f+ *((eax_54 << 3) + &data_b0dbb0)) * 7.1771143e-07f - 764.616211f)
            + 0.34499999999999997)
        sub_9a5510(eax_54, eax_1 + 4, eax_30, ecx, var_80_1, var_7c_1, var_78_3)
        int32_t eax_56 = ebx[7]
        sub_9a4f90(eax_56, eax_30, **(eax_1 + (eax_56 << 2) + 0xc), *(eax_28 + esi_4))
        int32_t eax_58 = ebx[7] * 3
        int32_t ecx_17 = *(eax_1 + (eax_58 << 2) + 0x14)
        
        if (ecx_17 != 1)
            void* edx_12 = *(eax_1 + (eax_58 << 2) + 0x18)
            void* eax_59 = edx_12 + (ecx_17 << 2)
            sub_9a2090(eax_59, eax_30, ecx_17, edx_12, eax_59, *(eax_1 + (eax_58 << 2) + 0x1c))
            edi = var_10
        
        int32_t eax_61 = *eax_30 & 0x7fffffff
        double xmm5_1 = 0.34499999999999997
        int32_t xmm0_23 = _mm_cvtpd_ps(_mm_cvtps_pd(
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_61)) f+ *((eax_61 u>> 0x1f << 3) + &data_b0dbb0))
            * 7.1771143e-07f - 764.616211f + xmm0_12) + xmm5_1)
        *eax_30 = xmm0_23
        *esi_4 = xmm0_23
        
        if (eax_3 - 1 s> 1)
            int32_t j = 1
            
            do
                float xmm0_24 = *(eax_30 + (j << 2))
                float xmm1_2 = *(eax_30 + (j << 2) + 4)
                int32_t eax_64 = (xmm1_2 * xmm1_2 + xmm0_24 * xmm0_24) & 0x7fffffff
                int32_t xmm0_36 = _mm_cvtpd_ps(_mm_cvtps_pd((_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_64)) f+ *((eax_64 u>> 0x1f << 3) + &data_b0dbb0))
                    * 7.1771143e-07f - 764.616211f) * 0.5f + xmm0_12) + xmm5_1)
                *(eax_30 + ((j + 1) s>> 1 << 2)) = xmm0_36
                
                if (not(xmm0_36 f<= *esi_4))
                    *esi_4 = xmm0_36
                
                j += 2
            while (j s< eax_3 - 1)
            
            edi = var_10
        
        if (not(*esi_4 f<= 0))
            *esi_4 = 0
        
        float xmm0_38 = *esi_4
        
        if (not(xmm0_38 <= var_40))
            var_40 = xmm0_38
        
        esi_4 = &esi_4[1]
        edx_8 = var_24_1
        i = i_4 + 1
        i_4 = i
    while (i s< *(edi + 4))

int32_t eax_69
int32_t edx_15
edx_15:eax_69 = sx.q(eax_3)
int32_t eax_71 = (eax_69 - edx_15) s>> 1
void* ecx_20 = ((eax_71 << 2) + 7) & 0xfffffff8
void* var_34_4 = ecx_20

if (ebx[0x12] + ecx_20 s> ebx[0x13])
    if (ebx[0x11] != 0)
        int32_t* eax_74 = _malloc(8)
        ebx[0x14] += ebx[0x12]
        eax_74[1] = ebx[0x15]
        *eax_74 = ebx[0x11]
        ecx_20 = var_34_4
        ebx[0x15] = eax_74
    
    ebx[0x13] = ecx_20
    int32_t eax_75 = _malloc(ecx_20)
    ecx_20 = var_34_4
    ebx[0x11] = eax_75
    ebx[0x12] = 0

void* eax_76 = ebx[0x12]
void* edx_16 = ebx[0x11]
void* esi_5 = edx_16 + eax_76
void* eax_77 = eax_76 + ecx_20
ebx[0x12] = eax_77
int32_t* esi_6 = esi_2

if (eax_77 + ecx_20 s> ebx[0x13])
    if (edx_16 != 0)
        int32_t* eax_79 = _malloc(8)
        ebx[0x14] += eax_77
        eax_79[1] = ebx[0x15]
        *eax_79 = ebx[0x11]
        ecx_20 = var_34_4
        ebx[0x15] = eax_79
    
    ebx[0x13] = ecx_20
    int32_t eax_80 = _malloc(ecx_20)
    ecx_20 = var_34_4
    ebx[0x11] = eax_80
    ebx[0x12] = 0

void* eax_81 = ebx[0x12]
void* edx_18 = ebx[0x11] + eax_81
int32_t i_1 = 0
ebx[0x12] = eax_81 + ecx_20
int32_t var_38 = edx_18
int32_t i_3 = 0

if (*(edi + 4) s> 0)
    int32_t* edx_19 = eax_7
    void* var_28_1 = var_28 - edx_19
    int32_t* var_24_2 = edx_19
    
    do
        int32_t eax_86 = esi_6[i_1 + 1]
        void* eax_88 = var_28_1 + edx_19
        void* eax_89 = *(eax_88 + eax_5 - var_28)
        edi = var_10
        float* eax_91 = *(*ebx + (i_1 << 2))
        ebx[0xa] = edx_5
        
        if (ebx[0x12] + 0x40 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t* eax_95 = _malloc(8)
                ebx[0x14] += ebx[0x12]
                eax_95[1] = ebx[0x15]
                *eax_95 = ebx[0x11]
                ebx[0x15] = eax_95
            
            ebx[0x13] = 0x40
            edx_19 = var_24_2
            ebx[0x11] = _malloc(0x40)
            ebx[0x12] = 0
        
        int32_t eax_97 = ebx[0x12]
        char* ecx_31 = ebx[0x11] + eax_97
        ebx[0x12] = eax_97 + 0x40
        *edx_19 = ecx_31
        _memset(ecx_31, 0, 0x3c)
        int32_t ecx_32 = eax_71
        int32_t eax_99 = 0
        double xmm3_1 = 0.34499999999999997
        
        if (ecx_32 s>= 4)
            void* ecx_33 = &eax_91[ecx_32]
            void* ebx_1 = eax_89 + 0xc
            void* edx_21 = ecx_33 + 4
            int32_t j_9 = ((ecx_32 - 4) u>> 2) + 1
            int32_t eax_102 = j_9 << 2
            int32_t j_1
            
            do
                int32_t eax_104 = *(ebx_1 - 0xc) & 0x7fffffff
                *(edx_21 - 4) = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_104)) f+ *((eax_104 u>> 0x1f << 3) + &data_b0dbb0))
                    * 7.1771143e-07f - 764.616211f) + xmm3_1)
                int32_t eax_107 = *(eax_89 - ecx_33 + edx_21) & 0x7fffffff
                *edx_21 = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_107)) f+
                    *((eax_107 u>> 0x1f << 3) + &data_b0dbb0)) * 7.1771143e-07f - 764.616211f) + xmm3_1)
                int32_t eax_110 = *(ebx_1 - 4) & 0x7fffffff
                *(edx_21 + 4) = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_110)) f+ *((eax_110 u>> 0x1f << 3) + &data_b0dbb0))
                    * 7.1771143e-07f - 764.616211f) + xmm3_1)
                int32_t xmm0_69 = *ebx_1
                ebx_1 += 0x10
                int32_t eax_113 = xmm0_69 & 0x7fffffff
                *(edx_21 + 8) = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_113)) f+ *((eax_113 u>> 0x1f << 3) + &data_b0dbb0))
                    * 7.1771143e-07f - 764.616211f) + xmm3_1)
                edx_21 += 0x10
                j_1 = j_9
                j_9 -= 1
            while (j_1 != 1)
            esi_6 = esi_2
            eax_99 = eax_102
            ecx_32 = eax_71
        
        if (eax_99 s< ecx_32)
            void* edx_22 = &eax_91[eax_71]
            int32_t* ecx_37 = edx_22 + (eax_99 << 2)
            int32_t j_10 = eax_71 - eax_99
            int32_t j_2
            
            do
                int32_t eax_116 = *(ecx_37 + eax_89 - edx_22) & 0x7fffffff
                *ecx_37 = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_116)) f+
                    *((eax_116 u>> 0x1f << 3) + &data_b0dbb0)) * 7.1771143e-07f - 764.616211f) + xmm3_1)
                ecx_37 = &ecx_37[1]
                j_2 = j_10
                j_10 -= 1
            while (j_2 != 1)
            edi = var_10
        
        sub_99fd80(eax_91, &eax_91[eax_71], ecx_6, esi_5)
        sub_99fc30(eax_88, eax_91, ecx_6, var_40, var_38, *eax_88)
        float* eax_120 = &eax_91[eax_71]
        sub_99fb10(eax_120, esi_5, ecx_6, var_38, 1, eax_91, eax_89, eax_120)
        int32_t eax_122 = esi_6[eax_86 + 0x101]
        
        if (*(ecx + (eax_122 << 2) + 0x320) != 1)
            return 0xffffffff
        
        float* var_78_9 = eax_91
        ebx = arg1
        void* var_7c_4 = &eax_91[eax_71]
        *(*(eax_1 + 0x30) + (eax_122 << 2))
        int32_t*** edx_32 = var_24_2
        (*edx_32)[7] = sub_9a9d40()
        
        if (sub_9a54e0(ebx) != 0 && (*edx_32)[7] != 0)
            int32_t edx_33 = 0
            int32_t ecx_48 = *ecx_6
            float xmm2_2 = *(ecx_6[1] + 0x14)
            
            if (ecx_48 s> 0)
                int32_t ecx_49 = var_38
                void* eax_131 = eax_91 - var_38
                void* var_68_2 = eax_131
                
                do
                    float xmm0_91 = *(*(ecx_6[3] + 8) + (edx_33 << 2)) f+ *(esi_5 - var_38 + ecx_49)
                    float xmm1_5 = *(ecx_6[1] + 0x6c)
                    
                    if (not(xmm0_91 <= xmm1_5))
                        xmm0_91 = xmm1_5
                    
                    float xmm1_7 = xmm2_2 f+ *ecx_49
                    
                    if (not(xmm0_91 > xmm1_7))
                        xmm0_91 = xmm1_7
                    
                    *(eax_131 + ecx_49) = xmm0_91
                    edx_33 += 1
                    ecx_49 += 4
                while (edx_33 s< ecx_48)
                
                ebx = arg1
                esi_6 = esi_2
            
            float* var_78_10 = eax_91
            void* var_7c_5 = &eax_91[eax_71]
            *(*(eax_1 + 0x30) + (esi_6[eax_86 + 0x101] << 2))
            int32_t edx_37 = 0
            *(*var_24_2 + 0x38) = sub_9a9d40()
            int32_t ecx_55 = *ecx_6
            float xmm2_3 = *(ecx_6[1] + 0xc)
            
            if (ecx_55 s> 0)
                float* ecx_56 = var_38
                void* eax_146 = eax_91 - var_38
                void* var_68_3 = eax_146
                
                do
                    float xmm0_93 = *(*ecx_6[3] + (edx_37 << 2)) f+ *(ecx_56 + esi_5 - var_38)
                    float xmm1_8 = *(ecx_6[1] + 0x6c)
                    
                    if (not(xmm0_93 <= xmm1_8))
                        xmm0_93 = xmm1_8
                    
                    float xmm1_10 = xmm2_3 + *ecx_56
                    
                    if (not(xmm0_93 > xmm1_10))
                        xmm0_93 = xmm1_10
                    
                    *(ecx_56 + eax_146) = xmm0_93
                    edx_37 += 1
                    ecx_56 = &ecx_56[1]
                while (edx_37 s< ecx_55)
                
                ebx = arg1
                esi_6 = esi_2
            
            float* var_78_11 = eax_91
            void* var_7c_6 = &eax_91[eax_71]
            *(*(eax_1 + 0x30) + (esi_6[eax_86 + 0x101] << 2))
            edx_32 = var_24_2
            int32_t* var_50_5 = 4
            int32_t j_3 = 0x10000
            **edx_32 = sub_9a9d40()
            
            do
                int32_t** ecx_61 = *edx_32
                int32_t var_78_12 = j_3 s/ 7
                int32_t eax_161 = esi_2[eax_86 + 0x101]
                edx_32 = var_24_2
                j_3 += 0x10000
                int32_t* edi_10 = var_50_5
                var_50_5 = &var_50_5[1]
                *(edi_10 + *edx_32) = sub_9aa320(eax_161, *(*(eax_1 + 0x30) + (eax_161 << 2)), ebx, 
                    *ecx_61, ecx_61[7])
            while (j_3 s< 0x70000)
            
            int32_t edi_11 = 0x20
            
            for (int32_t j_4 = 0x10000; j_4 s< 0x70000; )
                int32_t** ecx_66 = *edx_32
                int32_t var_78_13 = j_4 s/ 7
                int32_t eax_168 = esi_2[eax_86 + 0x101]
                edx_32 = var_24_2
                edi_11 += 4
                j_4 += 0x10000
                *(edi_11 + *edx_32 - 4) = sub_9aa320(eax_168, *(*(eax_1 + 0x30) + (eax_168 << 2)), 
                    ebx, ecx_66[7], ecx_66[0xe])
            
            edi = var_10
            esi_6 = esi_2
        
        edx_19 = &edx_32[1]
        i_1 = i_3 + 1
        var_24_2 = edx_19
        i_3 = i_1
    while (i_1 s< *(edi + 4))

*(eax_2 + 4) = var_40
int32_t esi_12 = *(edi + 4) << 2
__alloca_probe_16(esi_12)
int32_t* var_3c_3 = &__saved_edi
__alloca_probe_16(esi_12)
int32_t* var_40_1 = &__saved_edi
void* eax_174 = *(ebx[0x10] + 0x68)
int32_t eax_176

if (eax_174 == 0xffffffb0 || *(eax_174 + 0x50) == 0)
    eax_176 = 0
else
    eax_176 = 1

int32_t i_2 = 7

if (eax_176 != 0)
    i_2 = 0

int32_t i_5 = i_2
int32_t eax_178 = sub_9a54e0(ebx)
int32_t eax_179 = neg.d(eax_178)

if (i_2 s<= (sbb.d(eax_179, eax_179, eax_178 != 0) & 7) + 7)
    int32_t eax_214
    int32_t eax_215
    
    do
        int32_t* esi_13 = *(eax_2 + (i_2 << 2) + 0xc)
        sub_742d70(esi_13, 0, 1)
        sub_742d70(esi_13, edx_5, *(eax_1 + 0x2c))
        
        if (ebx[7] != 0)
            sub_742d70(esi_13, ebx[6], 1)
            sub_742d70(esi_13, ebx[8], 1)
        
        int32_t j_7 = 0
        
        if (*(edi + 4) s> 0)
            int32_t* esi_14 = eax_7
            int32_t* ecx_74 = &esi_2[1]
            int32_t* eax_186 = eax_6 - esi_14
            void* edx_52 = var_54 - esi_14
            int32_t* var_50_6 = ecx_74
            int32_t* var_64_4 = eax_186
            int32_t j_5
            
            do
                int32_t eax_190 = *(eax_1 + 0x30)
                int32_t eax_191 = sub_9aa3e0(eax_190, ebx, esi_13, 
                    *(eax_190 + (esi_2[*ecx_74 + 0x101] << 2)), *(*esi_14 + (i_5 << 2)), 
                    *(eax_186 + esi_14))
                esi_14 = &esi_14[1]
                *(edx_52 + esi_14 - 4) = eax_191
                j_5 = j_7 + 1
                ecx_74 = &var_50_6[1]
                j_7 = j_5
                eax_186 = var_64_4
                var_50_6 = ecx_74
            while (j_5 s< *(edi + 4))
        
        int32_t eax_196 = (ebx[7] + 0x36) * 0xf + i_5
        sub_99ee70(eax_196, ecx + 0xb34, i_5, ecx_6, esi_2, eax_5, eax_6, var_54, 
            *(ecx + 0xb34 + (eax_196 << 2) - 0xb34), *(edi + 4))
        int32_t j_8 = 0
        
        if (*esi_2 s> 0)
            void* esi_16 = &esi_2[0x111]
            void* var_50_7 = esi_16
            int32_t j_6
            
            do
                int32_t edx_57 = 0
                int32_t esi_17 = *esi_16
                int32_t k = 0
                int32_t var_34_6 = 0
                int32_t var_58_2 = esi_17
                
                if (*(var_10 + 4) s> 0)
                    int32_t* edx_58 = eax_6
                    void* ebx_8 = var_54 - edx_58
                    int32_t* ecx_84 = var_40_1
                    void* esi_19 = &esi_2[1]
                    int32_t j_11 = j_8
                    int32_t* ebx_10 = var_3c_3 - ecx_84
                    
                    do
                        if (*esi_19 == j_11)
                            *ecx_84 = 0
                            
                            if (*(ebx_8 + edx_58) != 0)
                                *ecx_84 = 1
                            
                            var_34_6 += 1
                            *(ebx_10 + ecx_84) = *edx_58
                            ecx_84 = &ecx_84[1]
                            j_11 = j_8
                        
                        k += 1
                        esi_19 += 4
                        edx_58 = &edx_58[1]
                    while (k s< *(var_10 + 4))
                    
                    ebx = arg1
                    edx_57 = var_34_6
                    esi_17 = var_58_2
                
                int32_t eax_204 = (*((&data_addf44)[*(ecx + (esi_17 << 2) + 0x520)] + 0x14))(ebx, 
                    *(*(eax_1 + 0x34) + (esi_17 << 2)), var_3c_3, var_40_1, edx_57)
                int32_t k_1 = 0
                void* eax_205 = var_10
                int32_t edx_59 = 0
                
                if (*(eax_205 + 4) s> 0)
                    void* esi_21 = &esi_2[1]
                    
                    do
                        if (*esi_21 == j_8)
                            var_3c_3[edx_59] = eax_6[k_1]
                            edx_59 += 1
                            eax_205 = var_10
                        
                        k_1 += 1
                        esi_21 += 4
                    while (k_1 s< *(eax_205 + 4))
                    
                    ebx = arg1
                    esi_17 = var_58_2
                
                (*((&data_addf44)[*(ecx + (esi_17 << 2) + 0x520)] + 0x18))(esi_13, ebx, 
                    *(*(eax_1 + 0x34) + (esi_17 << 2)), var_3c_3, var_40_1, edx_59, eax_204, j_8)
                j_6 = j_8 + 1
                esi_16 = var_50_7 + 4
                j_8 = j_6
                var_50_7 = esi_16
            while (j_6 s< *esi_2)
            edi = var_10
        
        i_2 = i_5 + 1
        i_5 = i_2
        eax_214 = sub_9a54e0(ebx)
        eax_215 = neg.d(eax_214)
    while (i_2 s<= (sbb.d(eax_215, eax_215, eax_214 != 0) & 7) + 7)

return 0
