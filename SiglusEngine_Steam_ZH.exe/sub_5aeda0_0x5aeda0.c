// 函数: sub_5aeda0
// 地址: 0x5aeda0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* var_1c = ebx

if (*(ebx + 0x1c8) == 0 && *(ebx + 0x1a8) s<= 0)
    return 

int32_t eax_1
int32_t edx_1
edx_1:eax_1 = muls.dp.d(0x2e8ba2e9, *(ebx + 0xa8) - *(ebx + 0xa4))
int32_t edx_2 = edx_1 s>> 8
int32_t var_18_1
int32_t var_c

if (*(ebx + 0x144) s<= 0)
    var_18_1 = (edx_2 u>> 0x1f) + edx_2
else
    void* eax_2 = &var_c
    int32_t ecx_4 = (edx_2 u>> 0x1f) + edx_2
    bool cond:0_1 = ecx_4 s>= *(ebx + 0x144)
    var_c = ecx_4
    
    if (cond:0_1)
        eax_2 = ebx + 0x144
    
    var_18_1 = *eax_2

int32_t i = 0
int32_t eax_4
int32_t edx_3
edx_3:eax_4 = muls.dp.d(0x2e8ba2e9, *(ebx + 0xa8) - *(ebx + 0xa4))
int32_t i_1 = 0
int32_t edx_4 = edx_3 s>> 8

if ((edx_4 u>> 0x1f) + edx_4 s<= 0)
    return 

int32_t edx_53

do
    int32_t eax_7 = *(ebx + 0x19c)
    int32_t edi_4 = 0
    int32_t var_14_1 = 0xff
    int32_t var_8_1 = 0
    var_c = 0
    int32_t eax_46
    int32_t esi_2
    int32_t edi_6
    int32_t xmm4_1[0x2]
    
    switch (eax_7)
        case 1
            int32_t ecx_7 = *(ebx + 0x1a0)
            int32_t eax_8 = *(ebx + 0x1a4)
            
            if (ecx_7 == 0)
                var_14_1 = 0xff
            else if (ecx_7 s<= 0)
                if (ecx_7 s>= 0)
                    var_14_1 = divs.dp.d(sx.q(eax_8 * 0xff), ecx_7)
                else if (eax_8 s>= ecx_7)
                    if (eax_8 s> 0)
                        eax_8 = 0
                    
                    var_14_1 = divs.dp.d(sx.q(eax_8 * 0xff), ecx_7)
                else
                    var_14_1 = divs.dp.d(sx.q(ecx_7 * 0xff), ecx_7)
            else if (eax_8 s< 0)
                var_14_1 = divs.dp.d(0, ecx_7)
            else if (eax_8 s<= ecx_7)
                var_14_1 = divs.dp.d(sx.q(eax_8 * 0xff), ecx_7)
            else
                var_14_1 = divs.dp.d(sx.q(ecx_7 * 0xff), ecx_7)
        case 2
            esi_2 = *(ebx + 0x1a0)
            edi_6 = (mods.dp.d(sx.q(i), var_18_1) - var_18_1) * 0x32 + *(ebx + 0x1a4)
            int32_t eax_24 = edi_6
            
            if (esi_2 != 0)
                if (esi_2 s<= 0)
                    if (esi_2 s< 0)
                        if (edi_6 s< esi_2)
                            eax_24 = esi_2
                        else if (edi_6 s> 0)
                            eax_24 = 0
                else if (edi_6 s< 0)
                    eax_24 = 0
                else if (edi_6 s> esi_2)
                    eax_24 = esi_2
                
                var_14_1 = divs.dp.d(sx.q(eax_24 * 0xff), esi_2)
            else
                var_14_1 = 0xff
            
            if (esi_2 != 0)
                xmm4_1 = zx.q(neg.d(*(data_bac4a0 + 0xc)))
            label_5aef61:
                double xmm3_2 = _mm_cvtepi32_pd(zx.q(esi_2))
                double xmm1_1 = 0.0 - xmm3_2
                double xmm4_2 = _mm_cvtepi32_pd(xmm4_1)
                double xmm0_2 = _mm_cvtepi32_pd(zx.q(edi_6))
                
                if (not(0.0 <= xmm1_1))
                    if (not(0 f<= xmm0_2))
                        xmm0_2 = (zx.o(0)).q
                    else if (not(xmm0_2 <= xmm3_2))
                        xmm0_2 = xmm3_2
                
                if (not(xmm1_1 f<= 0))
                    if (not(xmm3_2 <= xmm0_2))
                        xmm0_2 = xmm3_2
                    else if (not(xmm0_2 f<= 0))
                        xmm0_2 = (zx.o(0)).q
                
                double xmm0_3 = xmm0_2 - xmm3_2
                double xmm3_3 = xmm3_2 - 0.0
                edi_4 = int.d(0.0 - (0.0 - xmm4_2) * xmm0_3 * xmm0_3 / xmm3_3 / xmm3_3)
                var_c = edi_4
                i = i_1
            else
                edi_4 = 0
                var_c = 0
                i = i_1
        case 3
            esi_2 = *(ebx + 0x1a0)
            edi_6 = *(ebx + 0x1a4) - mods.dp.d(sx.q(i), var_18_1) * 0x32
            int32_t eax_34 = edi_6
            
            if (esi_2 != 0)
                if (esi_2 s<= 0)
                    if (esi_2 s< 0)
                        if (edi_6 s< esi_2)
                            eax_34 = esi_2
                        else if (edi_6 s> 0)
                            eax_34 = 0
                else if (edi_6 s< 0)
                    eax_34 = 0
                else if (edi_6 s> esi_2)
                    eax_34 = esi_2
                
                var_14_1 = divs.dp.d(sx.q(eax_34 * 0xff), esi_2)
            else
                var_14_1 = 0xff
            
            if (esi_2 != 0)
                xmm4_1 = zx.q(*(data_bac4a0 + 0xc))
                goto label_5aef61
            
            edi_4 = 0
            var_c = 0
            i = i_1
        case 4
            int32_t esi_3 = *(ebx + 0x1a0)
            int32_t eax_41 = mods.dp.d(sx.q(i), var_18_1) * 0x32
            int32_t edi_9 = *(ebx + 0x1a4) - eax_41
            var_14_1 = sub_5b08c0(eax_41, 0, edi_9, 0, esi_3, 0xff)
            int32_t eax_45 = neg.d(*(data_bac4a0 + 8))
            eax_46 = sub_5ad8c0(eax_45, 0, edi_9, eax_45, esi_3, 0)
            edi_4 = var_c
            var_8_1 = eax_46
            i = i_1
        case 5
            int32_t esi_4 = *(ebx + 0x1a0)
            int32_t eax_49 = mods.dp.d(sx.q(i), var_18_1) * 0x32
            int32_t edi_11 = *(ebx + 0x1a4) - eax_49
            var_14_1 = sub_5b08c0(eax_49, 0, edi_11, 0, esi_4, 0xff)
            void* eax_51 = data_bac4a0
            eax_46 = sub_5ad8c0(eax_51, 0, edi_11, *(eax_51 + 8), esi_4, 0)
            edi_4 = var_c
            var_8_1 = eax_46
            i = i_1
        case 6
            int32_t temp1_11 = mods.dp.d(sx.q(i), var_18_1)
            int32_t eax_54 = temp1_11 * 0x32
            int32_t ecx_13 = *(ebx + 0x1a4) - eax_54
            var_14_1 = sub_5b08c0(eax_54, 0, ecx_13, 0, *(ebx + 0x1a0), 0xff)
            int32_t esi_6 = temp1_11 & 0x80000001
            bool cond:4_1 = esi_6 != 0
            
            if (esi_6 s< 0)
                cond:4_1 = ((esi_6 - 1) | 0xfffffffe) != 0xffffffff
            
            int32_t eax_57 = data_bac4a0
            int32_t var_100_3
            
            if (cond:4_1)
                eax_57 = neg.d(*(eax_57 + 8))
                var_100_3 = eax_57
            else
                var_100_3 = *(eax_57 + 8)
            
            var_8_1 = sub_5ad8c0(eax_57, 0, ecx_13, var_100_3, *(ebx + 0x1a0), 0)
            i = i_1
    
    int32_t eax_60 = *(ebx + 0x1c0)
    
    if (eax_60 s>= 0 && i != eax_60)
        int32_t ecx_15 = *(ebx + 0x1b4)
        
        if (ecx_15 == 1)
            int32_t ecx_16 = *(ebx + 0x1b8)
            int32_t eax_59 = *(ebx + 0x1bc)
            
            if (ecx_16 != 0)
                if (ecx_16 s<= 0)
                    if (ecx_16 s< 0)
                        if (eax_59 s< ecx_16)
                            eax_59 = ecx_16
                        else if (eax_59 s> 0)
                            eax_59 = 0
                else if (eax_59 s< 0)
                    eax_59 = 0
                else if (eax_59 s> ecx_16)
                    eax_59 = ecx_16
                
                eax_60 = *(ebx + 0x1c0)
                var_14_1 = 0xff - divs.dp.d(sx.q(eax_59 * 0xff), ecx_16)
            else
                eax_60 = *(ebx + 0x1c0)
                var_14_1 = ecx_16
        else if (ecx_15 == 2)
            int32_t ecx_18 = *(ebx + 0xa4)
            int32_t eax_64 = eax_60 * 0x580
            int32_t eax_65 = i * 0x580
            int32_t esi_10 = *(var_1c + 0x1b8)
            int32_t edi_13 = *(var_1c + 0x1bc)
            int32_t ebx_2 = *(eax_64 + ecx_18 + 0x2b0) - *(eax_65 + ecx_18 + 0x2b0)
            var_c = *(eax_64 + ecx_18 + 0x2b4) - *(eax_65 + ecx_18 + 0x2b4)
            int32_t eax_66 = sub_5b08c0(eax_65, 0, edi_13, 0xff, esi_10, 0)
            var_14_1 = eax_66
            int32_t eax_67 = sub_5ad8c0(eax_66, 0, edi_13, 0, esi_10, ebx_2)
            var_8_1 = eax_67
            ebx = var_1c
            edi_4 = sub_5ad8c0(eax_67, 0, edi_13, 0, esi_10, var_c)
            var_c = edi_4
    
    int32_t ecx_22 = *(ebx + 0x1a8)
    int32_t ebx_3
    
    if (ecx_22 s< 1)
    label_5af2f8:
        
        if (ecx_22 == 2)
            int32_t ecx_24 = *(ebx + 0x1ac)
            int32_t esi_12 = *(ebx + 0x1b0) - mods.dp.d(sx.q(i_1), var_18_1) * 0x32
            int32_t eax_76 = esi_12
            
            if (ecx_24 != 0)
                if (ecx_24 s<= 0)
                    if (ecx_24 s< 0)
                        if (esi_12 s< ecx_24)
                            eax_76 = ecx_24
                        else if (esi_12 s> 0)
                            eax_76 = 0
                else if (esi_12 s< 0)
                    eax_76 = 0
                else if (esi_12 s> ecx_24)
                    eax_76 = ecx_24
                
                ebx_3 = 0xff - divs.dp.d(sx.q(eax_76 * 0xff), ecx_24)
            else
                ebx_3 = 0
            
            edi_4 = neg.d(*(data_bac4a0 + 0xc))
            
            if (ecx_24 != 0)
                double xmm3_5 = _mm_cvtepi32_pd(zx.q(ecx_24))
                double xmm4_3 = 0.0 - xmm3_5
                double xmm1_7 = _mm_cvtepi32_pd(zx.q(esi_12))
                double xmm2_2 = _mm_cvtepi32_pd(zx.q(edi_4))
                
                if (not(0.0 <= xmm4_3))
                    if (not(0 f<= xmm1_7))
                        xmm1_7 = (zx.o(0)).q
                    else if (not(xmm1_7 <= xmm3_5))
                        xmm1_7 = xmm3_5
                
                if (not(xmm4_3 f<= 0))
                    if (not(xmm3_5 <= xmm1_7))
                        xmm1_7 = xmm3_5
                    else if (not(xmm1_7 f<= 0))
                        xmm1_7 = (zx.o(0)).q
                
                double xmm1_8 = xmm1_7 - 0.0
                double xmm3_6 = xmm3_5 - 0.0
                edi_4 = int.d((xmm2_2 - 0.0) * xmm1_8 * xmm1_8 / xmm3_6 / xmm3_6 + 0.0)
        else if (ecx_22 == 3)
            int32_t ecx_25 = *(ebx + 0x1ac)
            int32_t esi_14 = (mods.dp.d(sx.q(i_1), var_18_1) - var_18_1) * 0x32 + *(ebx + 0x1b0)
            int32_t eax_83 = esi_14
            
            if (ecx_25 != 0)
                if (ecx_25 s<= 0)
                    if (ecx_25 s< 0)
                        if (esi_14 s< ecx_25)
                            eax_83 = ecx_25
                        else if (esi_14 s> 0)
                            eax_83 = 0
                else if (esi_14 s< 0)
                    eax_83 = 0
                else if (esi_14 s> ecx_25)
                    eax_83 = ecx_25
                
                ebx_3 = 0xff - divs.dp.d(sx.q(eax_83 * 0xff), ecx_25)
            else
                ebx_3 = 0
            
            edi_4 = *(data_bac4a0 + 0xc)
            
            if (ecx_25 != 0)
                double xmm2_9 = _mm_cvtepi32_pd(zx.q(ecx_25))
                double xmm3_7 = 0.0 - xmm2_9
                double xmm1_11 = _mm_cvtepi32_pd(zx.q(esi_14))
                double xmm4_5 = _mm_cvtepi32_pd(zx.q(edi_4))
                
                if (not(0.0 <= xmm3_7))
                    if (not(0 f<= xmm1_11))
                        xmm1_11 = (zx.o(0)).q
                    else if (not(xmm1_11 <= xmm2_9))
                        xmm1_11 = xmm2_9
                
                if (not(xmm3_7 f<= 0))
                    if (not(xmm2_9 <= xmm1_11))
                        xmm1_11 = xmm2_9
                    else if (not(xmm1_11 f<= 0))
                        xmm1_11 = (zx.o(0)).q
                
                double xmm1_12 = xmm1_11 - 0.0
                double xmm2_10 = xmm2_9 - 0.0
                edi_4 = int.d(xmm1_12 * xmm1_12 * (xmm4_5 - 0.0) / xmm2_10 / xmm2_10 + 0.0)
        else
            int32_t var_f8_3
            int32_t eax_94
            int32_t edx_46
            int32_t esi_15
            int32_t edi_16
            
            if (ecx_22 != 4)
                if (ecx_22 == 5)
                    esi_15 = *(ebx + 0x1ac)
                    int32_t eax_97 = mods.dp.d(sx.q(i_1), var_18_1) * 0x32
                    edi_16 = *(ebx + 0x1b0) - eax_97
                    int32_t eax_98
                    eax_98, edx_46 = sub_5b08c0(eax_97, 0, edi_16, 0xff, esi_15, 0)
                    ebx_3 = eax_98
                    eax_94 = data_bac4a0
                    var_f8_3 = *(eax_94 + 8)
                    goto label_5af557
                
                if (ecx_22 != 6)
                    ebx_3 = var_14_1
                else
                    int32_t temp1_20 = mods.dp.d(sx.q(i_1), var_18_1)
                    int32_t ecx_30 = *(ebx + 0x1b0) - temp1_20 * 0x32
                    int32_t eax_103 = *(ebx + 0x1ac)
                    var_c = eax_103
                    int32_t eax_104
                    int32_t edx_51
                    eax_104, edx_51 = sub_5b08c0(eax_103, 0, ecx_30, 0xff, eax_103, 0)
                    ebx_3 = eax_104
                    int32_t esi_17 = temp1_20 & 0x80000001
                    bool cond:12_1 = esi_17 != 0
                    
                    if (esi_17 s< 0)
                        cond:12_1 = ((esi_17 - 1) | 0xfffffffe) != 0xffffffff
                    
                    int32_t eax_105 = data_bac4a0
                    int32_t var_f8_4
                    
                    if (cond:12_1)
                        eax_105 = neg.d(*(eax_105 + 8))
                        var_f8_4 = eax_105
                    else
                        var_f8_4 = *(eax_105 + 8)
                    
                    var_8_1 = sub_5ad820(eax_105, edx_51, ecx_30, 0, var_c, var_f8_4)
            else
                esi_15 = *(ebx + 0x1ac)
                int32_t eax_90 = mods.dp.d(sx.q(i_1), var_18_1) * 0x32
                edi_16 = *(ebx + 0x1b0) - eax_90
                int32_t eax_91
                eax_91, edx_46 = sub_5b08c0(eax_90, 0, edi_16, 0xff, esi_15, 0)
                ebx_3 = eax_91
                eax_94 = neg.d(*(data_bac4a0 + 8))
                var_f8_3 = eax_94
            label_5af557:
                int32_t eax_99 = sub_5ad820(eax_94, edx_46, edi_16, 0, esi_15, var_f8_3)
                edi_4 = var_c
                var_8_1 = eax_99
    else if (*(ebx + 0x190) s< 1 || eax_60 s< 0 || i_1 == eax_60)
        if (ecx_22 != 1)
            goto label_5af2f8
        
        int32_t ecx_23 = *(ebx + 0x1ac)
        int32_t eax_69 = *(ebx + 0x1b0)
        
        if (ecx_23 != 0)
            if (ecx_23 s<= 0)
                if (ecx_23 s< 0)
                    if (eax_69 s< ecx_23)
                        eax_69 = ecx_23
                    else if (eax_69 s> 0)
                        eax_69 = 0
            else if (eax_69 s< 0)
                eax_69 = 0
            else if (eax_69 s> ecx_23)
                eax_69 = ecx_23
            
            ebx_3 = 0xff - divs.dp.d(sx.q(eax_69 * 0xff), ecx_23)
        else
            ebx_3 = 0
    else
        ebx_3 = 0
    
    int32_t var_e4
    FI::`default constructor closure'(&var_e4)
    int32_t var_6c_1 = ebx_3
    ebx = var_1c
    int32_t var_dc_1 = *(data_bac510 + 0xa2eb9c)
    var_e4 = 1
    int32_t var_d8_1 = 0
    sub_5b3210(i_1 * 0x580 + *(ebx + 0xa4), &var_e4, *(ebx + 0x170), *(ebx + 0x17c), arg2, arg3, 
        *(ebx + 0x12c) + var_8_1, *(ebx + 0x130) + edi_4)
    i = i_1 + 1
    int32_t eax_112
    int32_t edx_52
    edx_52:eax_112 = muls.dp.d(0x2e8ba2e9, *(ebx + 0xa8) - *(ebx + 0xa4))
    i_1 = i
    edx_53 = edx_52 s>> 8
while (i s< (edx_53 u>> 0x1f) + edx_53)
