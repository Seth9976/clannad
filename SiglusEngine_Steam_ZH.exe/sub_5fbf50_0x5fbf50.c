// 函数: sub_5fbf50
// 地址: 0x5fbf50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 0xa0)

if (edx s>= 0)
    int32_t edi_1 = *(arg1 + 0xb0)
    
    if (edi_1 s<= 0)
        sub_5fb9f0(arg1)
    else
        int32_t ebx_1 = *(arg1 + 0xc0)
        char var_5_1
        
        if (ebx_1 != 0 || *(arg1 + 0xc4) != ebx_1)
            var_5_1 = 0
            
            if (*(arg1 + 0xac) - (*(arg1 + 0xc4) + ebx_1) * edi_1 s< 0)
                goto label_5fbfae
            
            sub_5fb9f0(arg1)
        else
            var_5_1 = 1
        label_5fbfae:
            int32_t eax
            int32_t var_c_1
            int32_t eax_14
            int32_t edx_5
            int32_t ebx_2
            
            if (edx == 0)
                int32_t eax_2 = *(arg1 + 0xa4)
                ebx_2 = 0
                var_c_1 = 0
                
                switch (eax_2)
                    case 0
                        var_c_1 = 0xffffffff
                    case 1
                        ebx_2 = eax_2
                        var_c_1 = 0xffffffff
                    case 2
                        ebx_2 = eax_2 - 1
                        var_c_1 = 0
                    case 3
                        ebx_2 = 1
                        var_c_1 = 1
                    case 4
                        ebx_2 = 0
                        var_c_1 = 1
                    case 5
                        ebx_2 = 0xffffffff
                        var_c_1 = 1
                    case 6
                        ebx_2 = 0xffffffff
                        var_c_1 = 0
                    case 7
                        ebx_2 = 0xffffffff
                        var_c_1 = 0xffffffff
                
                int32_t ecx_3 = mods.dp.d(sx.q(*(arg1 + 0xac)), edi_1)
                int32_t eax_6
                int32_t edx_3
                edx_3:eax_6 = sx.q(edi_1)
                int32_t eax_8 = (eax_6 + (edx_3 & 3)) s>> 2
                
                if (ecx_3 s< eax_8)
                    int32_t eax_10
                    edx_5:eax_10 = sx.q(*(arg1 + 0xa8))
                    eax_14 = sub_5ad820(eax_8, edx_5, ecx_3, 0, eax_8, (eax_10 - edx_5) s>> 1)
                    goto label_5fc06b
                
                int32_t eax_16
                int32_t edx_6
                edx_6:eax_16 = sx.q(edi_1)
                int32_t eax_18 = (eax_16 - edx_6) s>> 1
                
                if (ecx_3 s< eax_18)
                    int32_t edx_7 = *(arg1 + 0xa8)
                    int32_t eax_21
                    int32_t edx_8
                    edx_8:eax_21 = sx.q(edx_7)
                    int32_t eax_23 = (eax_21 - edx_8) s>> 1
                    eax_14 = sub_5ad8c0(eax_23, 0, ecx_3 - eax_8, eax_23, eax_8, edx_7)
                    goto label_5fc06b
                
                int32_t eax_25
                int32_t edx_9
                edx_9:eax_25 = sx.q(edi_1 * 3)
                eax = (eax_25 + (edx_9 & 3)) s>> 2
                
                if (ecx_3 s< eax)
                    int32_t eax_28
                    edx_5:eax_28 = sx.q(*(arg1 + 0xa8))
                    eax_14 = sub_5ad820(eax_8, edx_5, ecx_3 - eax_18, *(arg1 + 0xa8), eax_8, 
                        (eax_28 - edx_5) s>> 1)
                    goto label_5fc06b
                
                if (ecx_3 s< edi_1)
                    int32_t eax_33
                    int32_t edx_11
                    edx_11:eax_33 = sx.q(*(arg1 + 0xa8))
                    int32_t eax_35 = (eax_33 - edx_11) s>> 1
                    eax_14 = sub_5ad8c0(eax_35, 0, ecx_3 - eax, eax_35, eax_8, 0)
                    goto label_5fc06b
                
                ebx_1 = *(arg1 + 0xc0)
            else if (edx == 1)
                int32_t eax_36 = *(arg1 + 0xa4)
                ebx_2 = 0
                var_c_1 = 0
                
                switch (eax_36)
                    case 0
                        var_c_1 = 0xffffffff
                    case 1
                        ebx_2 = eax_36
                        var_c_1 = 0xffffffff
                    case 2
                        ebx_2 = eax_36 - 1
                        var_c_1 = 0
                    case 3
                        ebx_2 = 1
                        var_c_1 = 1
                    case 4
                        ebx_2 = 0
                        var_c_1 = 1
                    case 5
                        ebx_2 = 0xffffffff
                        var_c_1 = 1
                    case 6
                        ebx_2 = 0xffffffff
                        var_c_1 = 0
                    case 7
                        ebx_2 = 0xffffffff
                        var_c_1 = 0xffffffff
                
                int32_t temp1_2 = mods.dp.d(sx.q(*(arg1 + 0xac)), edi_1)
                int32_t eax_40
                int32_t edx_14
                edx_14:eax_40 = sx.q(edi_1)
                int32_t eax_42 = (eax_40 + (edx_14 & 3)) s>> 2
                
                if (temp1_2 s>= eax_42)
                    int32_t eax_49
                    int32_t edx_17
                    edx_17:eax_49 = sx.q(edi_1)
                    int32_t eax_51 = (eax_49 - edx_17) s>> 1
                    int32_t eax_13
                    
                    if (temp1_2 s< eax_51)
                        int32_t eax_54
                        edx_5:eax_54 = sx.q(*(arg1 + 0xa8))
                        eax_13 = (eax_54 - edx_5) s>> 1
                        eax_14 = sub_5ad820(eax_13, edx_5, temp1_2 - eax_42, eax_13, eax_42, 0)
                        goto label_5fc06b
                    
                    int32_t eax_57
                    int32_t edx_18
                    edx_18:eax_57 = sx.q(edi_1 * 3)
                    eax = (eax_57 + (edx_18 & 3)) s>> 2
                    
                    if (temp1_2 s< eax)
                        int32_t eax_60
                        int32_t edx_20
                        edx_20:eax_60 = sx.q(*(arg1 + 0xa8))
                        eax_14 = sub_5ad8c0(eax_42, 0, temp1_2 - eax_51, 0, eax_42, 
                            neg.d((eax_60 - edx_20) s>> 1))
                        goto label_5fc06b
                    
                    if (temp1_2 s< edi_1)
                        int32_t eax_67
                        edx_5:eax_67 = sx.q(*(arg1 + 0xa8))
                        eax_13 = neg.d((eax_67 - edx_5) s>> 1)
                        eax_14 = sub_5ad820(eax_13, edx_5, temp1_2 - eax, eax_13, eax_42, 0)
                        goto label_5fc06b
                    
                    ebx_1 = *(arg1 + 0xc0)
                else
                    int32_t eax_44
                    int32_t edx_16
                    edx_16:eax_44 = sx.q(*(arg1 + 0xa8))
                    eax_14 = sub_5ad8c0(eax_42, 0, temp1_2, 0, eax_42, (eax_44 - edx_16) s>> 1)
                label_5fc06b:
                    *(arg1 + 0xd8) = eax_14 * ebx_2
                    *(arg1 + 0xdc) = eax_14 * var_c_1
                    ebx_1 = *(arg1 + 0xc0)
            else if (edx == 2)
                int32_t eax_70 = *(arg1 + 0xa8)
                
                if (eax_70 s< 0)
                    eax_70 = 0
                else if (eax_70 s> 0xff)
                    eax_70 = 0xff
                
                int32_t temp0_1 = divs.dp.d(0x3e800, 0x100 - eax_70)
                int32_t eax_74
                int32_t edx_22
                edx_22:eax_74 = sx.q(temp0_1 - 0x3e8)
                int32_t temp1_3 = mods.dp.d(sx.q(*(arg1 + 0xac)), edi_1)
                int32_t eax_81
                int32_t edx_25
                edx_25:eax_81 = sx.q(edi_1)
                int32_t edx_26 = edx_25 & 3
                int32_t ebx_4 = (edx_26 + eax_81) s>> 2
                
                if (temp1_3 s>= ebx_4)
                    int32_t eax_83
                    int32_t edx_27
                    edx_27:eax_83 = sx.q(edi_1)
                    int32_t eax_85 = (eax_83 - edx_27) s>> 1
                    int32_t var_14_3 = eax_85
                    
                    if (temp1_3 s>= eax_85)
                        int32_t eax_87
                        int32_t edx_28
                        edx_28:eax_87 = sx.q(edi_1 * 3)
                        int32_t edx_29 = edx_28 & 3
                        eax_85 = (eax_87 + edx_29) s>> 2
                        
                        if (temp1_3 s>= eax_85)
                            eax = sub_5ad8c0(eax_85, 0, temp1_3 - eax_85, 
                                ((eax_74 - edx_22) s>> 1) + 0x3e8, ebx_4, 0x3e8)
                        else
                            eax = sub_5ad820(eax_85, edx_29, temp1_3 - var_14_3, temp0_1, ebx_4, 
                                ((eax_74 - edx_22) s>> 1) + 0x3e8)
                    else
                        eax = sub_5ad8c0(eax_85, 0, temp1_3 - ebx_4, 
                            ((eax_74 - edx_22) s>> 1) + 0x3e8, ebx_4, temp0_1)
                else
                    eax = sub_5ad820(eax_81, edx_26, temp1_3, 0x3e8, ebx_4, 
                        ((eax_74 - edx_22) s>> 1) + 0x3e8)
                
                *(arg1 + 0xe0) = eax
                ebx_1 = *(arg1 + 0xc0)
            int64_t xmm1_1 = (zx.o(0)).q
            double xmm7_1 = 1.0
            double xmm6_1 = 1000.0
            
            if (var_5_1 == 0)
                int32_t edx_30 = *(arg1 + 0xac)
                int32_t ecx_15 = ebx_1 * edi_1
                
                if (edx_30 - ecx_15 s>= 0)
                    int32_t eax_92 = (*(arg1 + 0xc4) + ebx_1) * edi_1
                    double xmm2_2 = _mm_cvtepi32_pd(zx.q(ecx_15))
                    double xmm3_2 = _mm_cvtepi32_pd(zx.q(eax_92))
                    double xmm4_2 = _mm_cvtepi32_pd(zx.q(edx_30))
                    xmm2_2 - xmm3_2
                    double xmm5_1 = xmm4_2
                    eax_92:1.b = (xmm2_2 == xmm3_2 ? 1 : 0) << 6
                        | (is_unordered.q(xmm2_2, xmm3_2) ? 1 : 0) << 2 | (xmm2_2 < xmm3_2 ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    int64_t xmm6_2
                    
                    if (p_2)
                        if (xmm3_2 <= xmm2_2)
                            if (not(xmm2_2 <= xmm3_2))
                                if (not(xmm3_2 <= xmm5_1))
                                    xmm5_1 = xmm3_2
                                else if (not(xmm5_1 <= xmm2_2))
                                    xmm5_1 = xmm2_2
                        else if (xmm2_2 > xmm5_1)
                            xmm5_1 = xmm2_2
                        else if (not(xmm5_1 <= xmm3_2))
                            xmm5_1 = xmm3_2
                        
                        xmm6_2 = xmm7_1 - (xmm5_1 - xmm2_2) / (xmm3_2 - xmm2_2)
                    else
                        xmm6_2 = (zx.o(0)).q
                    
                    double xmm5_4 = xmm4_2
                    xmm2_2 - xmm3_2
                    *(arg1 + 0xd8) = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xd8))) f* xmm6_2)
                    int32_t eax_93
                    eax_93:1.b = (xmm2_2 == xmm3_2 ? 1 : 0) << 6
                        | (is_unordered.q(xmm2_2, xmm3_2) ? 1 : 0) << 2 | (xmm2_2 < xmm3_2 ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    double xmm6_4
                    
                    if (p_4)
                        if (xmm3_2 <= xmm2_2)
                            if (not(xmm2_2 <= xmm3_2))
                                if (not(xmm3_2 <= xmm5_4))
                                    xmm5_4 = xmm3_2
                                else if (not(xmm5_4 <= xmm2_2))
                                    xmm5_4 = xmm2_2
                        else if (xmm2_2 > xmm5_4)
                            xmm5_4 = xmm2_2
                        else if (not(xmm5_4 <= xmm3_2))
                            xmm5_4 = xmm3_2
                        
                        xmm6_4 = xmm7_1 - (xmm5_4 - xmm2_2) / (xmm3_2 - xmm2_2)
                    else
                        xmm6_4 = (zx.o(0)).q
                    
                    xmm2_2 - xmm3_2
                    *(arg1 + 0xdc) = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xdc))) * xmm6_4)
                    int32_t eax_94
                    eax_94:1.b = (xmm2_2 == xmm3_2 ? 1 : 0) << 6
                        | (is_unordered.q(xmm2_2, xmm3_2) ? 1 : 0) << 2 | (xmm2_2 < xmm3_2 ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    double xmm2_3
                    
                    if (p_6)
                        if (xmm3_2 <= xmm2_2)
                            if (not(xmm2_2 <= xmm3_2))
                                if (not(xmm3_2 <= xmm4_2))
                                    xmm4_2 = xmm3_2
                                else if (not(xmm4_2 <= xmm2_2))
                                    xmm4_2 = xmm2_2
                        else if (xmm2_2 > xmm4_2)
                            xmm4_2 = xmm2_2
                        else if (not(xmm4_2 <= xmm3_2))
                            xmm4_2 = xmm3_2
                        
                        xmm2_3 = xmm7_1 - (xmm4_2 - xmm2_2) / (xmm3_2 - xmm2_2)
                    else
                        xmm2_3 = (zx.o(0)).q
                    
                    xmm6_1 = 1000.0
                    *(arg1 + 0xe0) =
                        int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xe0) - 0x3e8)) * xmm2_3 + xmm6_1)
            
            if (*(arg1 + 0xb4) != 0)
                int32_t ecx_16 = *(arg1 + 0xb8)
                int32_t edx_31 = *(arg1 + 0xbc)
                
                if (ecx_16 - edx_31 s>= 0)
                    sub_5fb9f0(arg1)
                else
                    double xmm2_6 = _mm_cvtepi32_pd(zx.q(edx_31))
                    0 f- xmm2_6
                    double xmm3_5 = _mm_cvtepi32_pd(zx.q(ecx_16))
                    eax:1.b = (0.0 == xmm2_6 ? 1 : 0) << 6
                        | (is_unordered.q(0.0, xmm2_6) ? 1 : 0) << 2 | (0.0 < xmm2_6 ? 1 : 0)
                    double xmm4_5 = xmm3_5
                    bool p_8 = unimplemented  {test ah, 0x44}
                    int64_t xmm5_7
                    
                    if (p_8)
                        if (xmm2_6 f<= 0)
                            if (not(0 f<= xmm2_6))
                                if (not(xmm2_6 <= xmm4_5))
                                    xmm4_5 = xmm2_6
                                else if (not(xmm4_5 f<= 0))
                                    xmm4_5 = (zx.o(0)).q
                        else if (0 f> xmm4_5)
                            xmm4_5 = (zx.o(0)).q
                        else if (not(xmm4_5 <= xmm2_6))
                            xmm4_5 = xmm2_6
                        
                        xmm5_7 = xmm7_1 - (xmm4_5 - 0.0) / (xmm2_6 - 0.0)
                    else
                        xmm5_7 = (zx.o(0)).q
                    
                    double xmm4_8 = xmm3_5
                    0 f- xmm2_6
                    *(arg1 + 0xd8) = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xd8))) f* xmm5_7)
                    int32_t eax_98
                    eax_98:1.b = (0.0 == xmm2_6 ? 1 : 0) << 6
                        | (is_unordered.q(0.0, xmm2_6) ? 1 : 0) << 2 | (0.0 < xmm2_6 ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    int64_t xmm5_9
                    
                    if (p_10)
                        if (xmm2_6 f<= 0)
                            if (not(0 f<= xmm2_6))
                                if (not(xmm2_6 <= xmm4_8))
                                    xmm4_8 = xmm2_6
                                else if (not(xmm4_8 f<= 0))
                                    xmm4_8 = (zx.o(0)).q
                        else if (0 f> xmm4_8)
                            xmm4_8 = (zx.o(0)).q
                        else if (not(xmm4_8 <= xmm2_6))
                            xmm4_8 = xmm2_6
                        
                        xmm5_9 = xmm7_1 - (xmm4_8 - 0.0) / (xmm2_6 - 0.0)
                    else
                        xmm5_9 = (zx.o(0)).q
                    
                    0 f- xmm2_6
                    *(arg1 + 0xdc) = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xdc))) f* xmm5_9)
                    int32_t eax_99
                    eax_99:1.b = (0.0 == xmm2_6 ? 1 : 0) << 6
                        | (is_unordered.q(0.0, xmm2_6) ? 1 : 0) << 2 | (0.0 < xmm2_6 ? 1 : 0)
                    bool p_12 = unimplemented  {test ah, 0x44}
                    
                    if (p_12)
                        if (xmm2_6 f<= 0)
                            if (not(0 f<= xmm2_6))
                                if (not(xmm2_6 <= xmm3_5))
                                    xmm3_5 = xmm2_6
                                else if (not(xmm3_5 f<= 0))
                                    xmm3_5 = (zx.o(0)).q
                        else if (0 f> xmm3_5)
                            xmm3_5 = (zx.o(0)).q
                        else if (not(xmm3_5 <= xmm2_6))
                            xmm3_5 = xmm2_6
                        
                        xmm1_1 = xmm7_1 - (xmm3_5 - 0.0) / (xmm2_6 - 0.0)
                    
                    *(arg1 + 0xe0) =
                        int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0xe0) - 0x3e8)) f* xmm1_1 + xmm6_1)

if (*(arg1 + 0xa0) == 0xffffffff)
    sub_5fb9f0(arg1)
