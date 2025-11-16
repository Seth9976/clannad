// 函数: sub_621480
// 地址: 0x621480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = data_bac42c
int32_t* esi = data_bac4dc

if (esi[0xe] s> 0 && (*edx != esi[0xa] || edx[1] != esi[0xb]))
    esi[0xe] = 0

int32_t ecx = esi[0xe]

if (ecx s> 0)
    int32_t Y = esi[9]
    int32_t eax_4 = *data_bac47c
    int32_t eax_5 = esi[0xd]
    int32_t edi_1 = ecx + eax_5
    int32_t ecx_1 = esi[7]
    int32_t X = esi[8]
    int32_t X_1 = X
    
    if (eax_5 != edi_1)
        uint64_t xmm6_1 = zx.q(esi[6])
        double xmm0_2 = _mm_cvtepi32_pd(zx.q(eax_5))
        double xmm2_2 = _mm_cvtepi32_pd(zx.q(edi_1))
        double xmm3_2 = xmm0_2 - xmm2_2
        double xmm1_2 = _mm_cvtepi32_pd(zx.q(eax_4))
        double xmm6_2 = _mm_cvtepi32_pd(xmm6_1)
        double xmm5_2 = _mm_cvtepi32_pd(zx.q(X))
        
        if (not(0.0 <= xmm3_2))
            if (not(xmm0_2 <= xmm1_2))
                xmm1_2 = xmm0_2
            else if (not(xmm1_2 <= xmm2_2))
                xmm1_2 = xmm2_2
        
        if (not(xmm3_2 f<= 0))
            if (not(xmm2_2 <= xmm1_2))
                xmm1_2 = xmm2_2
            else if (not(xmm1_2 <= xmm0_2))
                xmm1_2 = xmm0_2
        
        double xmm1_3 = xmm1_2 - xmm2_2
        double xmm2_3 = xmm2_2 - xmm0_2
        X = int.d(xmm5_2 - (xmm5_2 - xmm6_2) * xmm1_3 * xmm1_3 / xmm2_3 / xmm2_3)
        X_1 = X
        
        if (eax_5 != edi_1)
            double xmm0_9 = _mm_cvtepi32_pd(zx.q(eax_5))
            double xmm2_5 = _mm_cvtepi32_pd(zx.q(edi_1))
            double xmm3_4 = xmm0_9 - xmm2_5
            double xmm1_6 = _mm_cvtepi32_pd(zx.q(eax_4))
            double xmm6_4 = _mm_cvtepi32_pd(zx.q(ecx_1))
            double xmm5_5 = _mm_cvtepi32_pd(zx.q(Y))
            
            if (not(0.0 <= xmm3_4))
                if (not(xmm0_9 <= xmm1_6))
                    xmm1_6 = xmm0_9
                else if (not(xmm1_6 <= xmm2_5))
                    xmm1_6 = xmm2_5
            
            if (not(xmm3_4 f<= 0))
                if (not(xmm2_5 <= xmm1_6))
                    xmm1_6 = xmm2_5
                else if (not(xmm1_6 <= xmm0_9))
                    xmm1_6 = xmm0_9
            
            double xmm1_7 = xmm1_6 - xmm2_5
            double xmm2_6 = xmm2_5 - xmm0_9
            Y = int.d(xmm5_5 - (xmm5_5 - xmm6_4) * xmm1_7 * xmm1_7 / xmm2_6 / xmm2_6)
    
    *edx = X
    edx[1] = Y
    ecx, edx = SetCursorPos(X, Y)
    esi = data_bac4dc
    esi[0xa] = X_1
    esi[0xb] = Y
    
    if (eax_4 - edi_1 s>= 0)
        esi[0xe] = 0

if (*esi != esi[1] && esi[0xe] == 0)
    void* ebx_1 = data_bac4a0
    void* esi_1 = data_bac484
    void* edi_2 = data_bac498
    edx.b = *(ebx_1 + 0xcc)
    void* eax_9
    
    if (edx.b != 0)
        eax_9.b = 0
    else if (*(esi_1 + 0x138) == 0)
        eax_9.b = *(edi_2 + 2) == 0
    else
        eax_9.b = 0
    
    void* ecx_2 = data_bac4c8
    
    if (*(ecx_2 + 0xd84) != 1)
    label_621751:
        
        if (edx.b != 0)
            ecx_2.b = 0
        else if (*(esi_1 + 0x138) == 0)
            ecx_2.b = *(edi_2 + 2) == 0
        else
            ecx_2.b = 0
        
        int32_t eax_16 = sub_635790(eax_9, 0x27, ecx_2.b, 0, 2)
        
        if (eax_16.b != 0)
            goto label_6216c8
        
        bool ecx_3
        
        if (*(ebx_1 + 0xcc) != eax_16.b)
            ecx_3 = false
        else if (*(esi_1 + 0x138) == 0)
            ecx_3 = *(edi_2 + 2) == 0
        else
            ecx_3 = false
        
        char eax_17 = sub_635790(eax_16, 0x26, ecx_3, 0, 2)
        char eax_18
        
        if (eax_17 == 0)
            eax_18 = sub_635940()
        
        if (eax_17 != 0 || eax_18 != 0)
            sub_6213f0()
            esi = data_bac4dc
            esi[0xf] = 2
            goto label_6216df
        
        esi = data_bac4dc
    else
        if (eax_9.b != 0)
            eax_9 = data_bac458
            
            if (*(eax_9 + 0x3b6) != 0 || *(ecx_2 + 0xd84) != 1)
                goto label_621751
        else if (*(ecx_2 + 0xd84) != 1)
            goto label_621751
        
        *(ecx_2 + 0xd84) = 0
        *(ecx_2 + 0xd8c) = 0
    label_6216c8:
        sub_621350()
        esi = data_bac4dc
        esi[0xf] = 1
    label_6216df:
        int32_t eax_11 = *data_bac47c
        esi[0x11] = 0
        esi[0x10] = eax_11

void* eax_26 = esi[0xf]

if (eax_26 s> 0)
    if (eax_26 == 1)
        void* eax_12 = sub_634fb0()
        ecx.b = eax_12.b
        char eax_13
        eax_13, ecx = sub_635790(eax_12, 0x28, ecx.b, 0, 0)
        
        if (eax_13 == 0)
            void* eax_14 = sub_634fb0()
            ecx.b = eax_14.b
            char eax_15
            eax_15, ecx = sub_635790(eax_14, 0x27, ecx.b, 0, 0)
            
            if (eax_15 == 0)
                esi[0xf] = 0
                return 1
    
    if (esi[0xf] == 2)
        void* eax_19 = sub_634fb0()
        ecx.b = eax_19.b
        
        if (sub_635790(eax_19, 0x26, ecx.b, 0, 0) == 0)
            void* eax_21 = sub_634fb0()
            
            if (sub_635790(eax_21, 0x25, eax_21.b, 0, 0) == 0)
                esi[0xf] = 0
                return 1
    
    int32_t eax_22 = esi[0x11]
    int32_t ecx_6
    
    if (eax_22 != 0)
        ecx_6 = (eax_22 + 0xa) * 0x32 + esi[0x10]
    else
        ecx_6 = esi[0x10] + 0x1f4
    
    if (*data_bac47c - ecx_6 s> 0)
        if (esi[0xf] == 1)
            sub_621350()
            void* eax_27 = data_bac4dc
            *(eax_27 + 0x44) += 1
            eax_27.b = 1
            return eax_27
        
        sub_6213f0()
        eax_26 = data_bac4dc
        *(eax_26 + 0x44) += 1

eax_26.b = 1
return eax_26
