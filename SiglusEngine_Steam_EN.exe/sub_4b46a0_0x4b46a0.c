// 函数: sub_4b46a0
// 地址: 0x4b46a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_ac = 0xff
int32_t var_b0 = arg5
int32_t i_3 = data_1bff814
void* var_b4 = arg4
double* var_b8 = arg2
int32_t i = sub_584e80(i_3, data_702fec, data_702fe8, data_702ff0, data_976e94, data_976e98, 
    data_976e9c, 0, 0, 0, 0, 0, arg3.b)
int32_t* esi = data_1bfe300:8
int32_t* var_c = esi

if (esi != 0)
    int32_t edi_1 = data_1bfe300:0xc
    
    if (edi_1 s> 0)
        int32_t eax = data_703060
        int32_t eax_1 = data_703064
        int32_t var_74_1 = 0
        int32_t edx_2 = sbb.d(0x3e7, 0x3e7, 0x3e7 u< arg7 - 1) & arg7
        int32_t eax_5 = sbb.d(arg8 - 1, arg8 - 1, 0x3e7 u< arg8 - 1) & arg8
        int32_t edi_5
        
        if (arg6 != 0 || edx_2 != 0 || eax_5 != 0 || eax_1 != eax_5)
            edi_5 = edi_1 s/ 3
            
            if (edi_5 s> 0x3c)
                edi_5 = 0x3c
        else
            int32_t edi_3 = neg.d(eax)
            var_74_1 = 1
            edi_5 = sbb.d(edi_3, edi_3, eax != 0) & 6
        
        int32_t ecx_3 = data_7030c4
        int32_t var_58_1 = 0
        int32_t i_2 = 0
        uint32_t temp0_1 = divu.dp.d(0:(ecx_3 * edi_5), data_1bfe300:0xc)
        int32_t ecx_5 = data_1bfe300:0xc
        i = divu.dp.d(0:(ecx_3 - temp0_1), ecx_5)
        int32_t edx_7 = data_7030ac - data_703098
        int32_t edx_9 = data_7030b0 - data_70309c
        int32_t i_1 = i
        
        if (ecx_5 s> 0)
            int32_t eax_11 = neg.d(i)
            int32_t ecx_7 = i_3 - temp0_1
            int32_t edx_11 = i_3 * arg6
            double xmm4_1 = 0.5
            double xmm5_1 = -0.5
            int32_t var_1c_1 = ecx_7
            int32_t var_2c_1 = i_3 * 0x3e8
            int32_t var_44_1 = i_3 << 9
            int32_t var_34_1 = edx_11
            int32_t var_40_1 = i_3 * 0xff
            int32_t* esi_6 = var_c
            
            do
                int32_t var_20_1 = 0xff
                int32_t var_14 = 0x3e8
                int32_t var_10 = 0x3e8
                i = i_3
                int32_t var_18 = 0
                int32_t var_24_1 = 0
                int32_t var_28_1 = 0
                
                if (var_58_1 s>= i)
                    break
                
                if (temp0_1 s<= 0)
                label_4b4a3f:
                    void* eax_46 = *esi_6
                    int32_t edx_28 = data_70309c
                    int32_t ecx_12 = data_703098
                    void* var_48 = eax_46
                    int32_t eax_47 = esi_6[1]
                    int32_t var_50 = eax_47
                    void* eax_48 = esi_6[2]
                    void* var_3c = eax_48
                    int32_t eax_49 = esi_6[3]
                    int32_t var_4c = eax_49
                    
                    if (sub_4d2220(&var_48, edx_28, ecx_12, data_7030a0, data_7030a4, &var_48, 
                            &var_50, &var_3c, &var_4c) != 0)
                        int32_t eax_52 = var_14
                        int32_t edx_29
                        
                        if (var_18 == 0 && eax_52 == 0x3e8)
                            edx_29 = var_10
                            
                            if (edx_29 != eax_52)
                                goto label_4b4bb9
                            
                            int32_t eax_54 = esi_6[4] + var_24_1
                            var_18 = eax_54
                            int32_t* eax_56 = esi_6[5] + var_28_1
                            var_c = eax_56
                            var_14 = esi_6[6] + var_24_1
                            var_10 = esi_6[7] + var_28_1
                            
                            if (sub_4d2220(&var_18, arg2, arg3, arg4, arg5, &var_18, &var_c, 
                                    &var_14, &var_10) != 0)
                                void* eax_68 = var_3c + var_24_1 + edx_7
                                int32_t eax_69 = sub_4d2220(eax_68, var_50 + var_28_1 + edx_9, 
                                    var_24_1 + var_48 + edx_7, eax_68, var_4c + var_28_1 + edx_9, 
                                    &var_18, &var_c, &var_14, &var_10)
                                
                                if (eax_69 != 0)
                                    int32_t var_ac_4 = var_20_1
                                    int32_t var_b0_4 = var_10
                                    int32_t var_b4_4 = var_14
                                    int32_t* var_b8_4 = var_c
                                    sub_584e80(eax_69, data_702fec, data_702fe8, data_702ff0, 
                                        data_976eb4, data_976eb8, data_976ebc, *esi_6, esi_6[1], 0, 
                                        eax_54, eax_56, var_18.b)
                        else if (eax_52 s> 0)
                            edx_29 = var_10
                        label_4b4bb9:
                            
                            if (edx_29 s> 0)
                                int32_t var_ac_5 = 1
                                int32_t ecx_20 = esi_6[5]
                                int32_t esi_7 = esi_6[4]
                                int32_t eax_73
                                int32_t edx_35
                                edx_35:eax_73 = sx.q(var_c[7] - ecx_20)
                                int32_t eax_81
                                int32_t edx_36
                                edx_36:eax_81 = sx.q(var_c[6] - esi_7)
                                int32_t eax_88
                                int32_t edx_37
                                edx_37:eax_88 = sx.q(eax_49 - eax_47)
                                int32_t eax_94
                                int32_t edx_38
                                edx_38:eax_94 = sx.q(eax_48 - eax_46)
                                int32_t eax_97 = ((eax_94 - edx_38) s>> 1) + eax_46
                                sub_429860(eax_97, data_976eb8, data_976eb4, data_976ebc, var_48, 
                                    var_50, var_3c, var_4c, eax_97, 
                                    ((eax_88 - edx_37) s>> 1) + eax_47, var_28_1, data_702fe8, 
                                    data_702fec, data_702ff0, 
                                    ((eax_81 - edx_36) s>> 1) + esi_7 + var_24_1, 
                                    ((eax_73 - edx_35) s>> 1) + ecx_20 + var_28_1, arg3, arg2, 
                                    arg4, arg5, var_18, eax_52, edx_29.b, 0, 0, 0, 0, 0, 0, 0, 0, 
                                    0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0, var_20_1, nullptr, nullptr, 
                                    nullptr, 0, 0, 0)
                                xmm4_1 = 0.5
                                xmm5_1 = -0.5
                                esi_6 = var_c
                else
                    int32_t ecx_8 = ecx_7 + temp0_1
                    
                    if (ecx_8 s>= temp0_1)
                        goto label_4b4a3f
                    
                    if (eax != 0)
                        int32_t eax_20
                        
                        if (var_74_1 == 0)
                            eax_20 = divs.dp.d(sx.q(var_44_1), temp0_1)
                            
                            if (eax_20 s> 0xff)
                                eax_20 = 0xff
                        else
                            eax_20 = divs.dp.d(sx.q(var_40_1), temp0_1)
                        
                        edx_11 = var_34_1
                        var_20_1 = eax_20
                    
                    if (arg6 != 0)
                        var_18 = divs.dp.d(sx.q(edx_11), temp0_1)
                    
                    if (edx_2 != 0)
                        if (edx_2 s>= 0)
                            var_14 = edx_2 - divs.dp.d(sx.q((edx_2 - 0x3e8) * ecx_8), temp0_1)
                        else
                            var_14 = divs.dp.d(sx.q(var_2c_1), temp0_1)
                    
                    if (eax_5 != 0)
                        if (eax_5 s>= 0)
                            var_10 = eax_5 - divs.dp.d(sx.q((eax_5 - 0x3e8) * ecx_8), temp0_1)
                        else
                            var_10 = divs.dp.d(sx.q(var_2c_1), temp0_1)
                    
                    if (eax_1 != 0)
                        int32_t eax_42 = esi_6[8]
                        int32_t ecx_9
                        
                        if (eax_42 == 0)
                            ecx_9 = 0
                        else if (ecx_8 s>= 0)
                            double xmm0_2 = _mm_cvtepi32_pd(zx.q(var_1c_1))
                            double xmm1_2 = _mm_cvtepi32_pd(zx.q(temp0_1))
                            double xmm3_2 = _mm_cvtepi32_pd(zx.q(eax_42))
                            double xmm3_3 = xmm3_2 - xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * xmm3_2
                                / (xmm1_2 * xmm1_2 * xmm1_2 * xmm1_2)
                            double xmm0_7
                            
                            xmm0_7 = xmm3_3 f< 0 ? xmm5_1 : xmm4_1
                            
                            ecx_9 = int.d(xmm0_7 + xmm3_3)
                        else
                            ecx_9 = eax_42
                        
                        int32_t ecx_10 = esi_6[9]
                        var_24_1 = eax_42 - ecx_9
                        int32_t eax_44
                        
                        if (ecx_10 == 0)
                            eax_44 = 0
                        else if (var_1c_1 + temp0_1 s>= 0)
                            double xmm0_10 = _mm_cvtepi32_pd(zx.q(var_1c_1))
                            double xmm1_4 = _mm_cvtepi32_pd(zx.q(temp0_1))
                            double xmm3_5 = _mm_cvtepi32_pd(zx.q(ecx_10))
                            double xmm3_6 = xmm3_5 - xmm0_10 * xmm0_10 * xmm0_10 * xmm0_10 * xmm3_5
                                / (xmm1_4 * xmm1_4 * xmm1_4 * xmm1_4)
                            double xmm0_15
                            
                            xmm0_15 = xmm3_6 f< 0 ? xmm5_1 : xmm4_1
                            
                            eax_44 = int.d(xmm0_15 + xmm3_6)
                        else
                            eax_44 = ecx_10
                        
                        var_28_1 = ecx_10 - eax_44
                    
                    if (var_20_1 s> 0)
                        goto label_4b4a3f
                
                esi_6 = &esi_6[0xa]
                var_58_1 += i_1
                var_40_1 += i_1 * 0xffffff01
                var_44_1 += i_1 * 0xfffffe00
                var_2c_1 += i_1 * 0xfffffc18
                i = i_2 + 1
                edx_11 = var_34_1 + neg.d(i_1 * arg6)
                ecx_7 = var_1c_1 + eax_11
                var_34_1 = edx_11
                var_1c_1 = ecx_7
                var_c = esi_6
                i_2 = i
            while (i s< data_1bfe300:0xc)

return i
