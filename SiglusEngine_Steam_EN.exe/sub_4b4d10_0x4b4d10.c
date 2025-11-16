// 函数: sub_4b4d10
// 地址: 0x4b4d10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_a4 = 0xff
int32_t var_a8 = arg5
void* var_ac = arg4
int32_t edx = data_1bff814
double* var_b0 = arg2
int32_t result = sub_584e80(arg2, data_702fec, data_702fe8, data_702ff0, data_976eb4, data_976eb8, 
    data_976ebc, data_703098, data_70309c, 0, data_7030ac, data_7030b0, arg3.b)
int32_t esi = data_1bfe300:8

if (esi != 0)
    int32_t edi_1 = data_1bfe300:0xc
    
    if (edi_1 s> 0)
        int32_t eax_1 = data_703060
        int32_t eax_2 = data_703064
        int32_t var_70_1 = 0
        int32_t edx_3 = sbb.d(0x3e7, 0x3e7, 0x3e7 u< arg7 - 1) & arg7
        int32_t eax_6 = sbb.d(arg8 - 1, arg8 - 1, 0x3e7 u< arg8 - 1) & arg8
        int32_t edx_7
        
        if (arg6 != 0 || edx_3 != 0 || eax_6 != 0 || eax_2 != eax_6)
            int32_t eax_8
            int32_t edx_8
            edx_8:eax_8 = sx.q(edi_1)
            edx_7 = (eax_8 - edx_8) s>> 1
            
            if (edx_7 s> 0x3c)
                edx_7 = 0x3c
        else
            int32_t edx_5 = neg.d(eax_1)
            var_70_1 = 1
            edx_7 = sbb.d(edx_5, edx_5, eax_1 != 0) & 6
        
        int32_t ecx_3 = data_7030c4
        int32_t i_1 = 0
        uint32_t temp0_1 = divu.dp.d(0:(ecx_3 * edx_7), edi_1)
        uint32_t temp0_2 = divu.dp.d(0:(ecx_3 - temp0_1), data_1bfe300:0xc)
        result = data_1bfe300:0xc
        int32_t edx_13 = (result - 1) * temp0_2
        int32_t var_3c_1 = edx_13
        
        if (result s> 0)
            double xmm4_1 = 0.5
            double xmm5_1 = -0.5
            int32_t result_1 = result * 0x28 + 0xffffffec + esi
            int32_t eax_20 = edx - edx_13
            int32_t edx_15 = eax_20 - temp0_1
            int32_t var_24_1 = edx_15
            int32_t var_34_1 = eax_20 * 0x3e8
            int32_t var_50_1 = eax_20 * arg6
            int32_t var_38_1 = eax_20 << 9
            int32_t var_40_1 = eax_20 * 0xff
            result = result_1
            int32_t i
            
            do
                int32_t var_28_1 = 0
                int32_t var_1c = 0
                int32_t ecx_17 = 0xff
                int32_t esi_2 = 0
                int32_t var_2c_1 = 0xff
                int32_t var_14 = 0x3e8
                int32_t var_18 = 0x3e8
                int32_t var_20_1 = 0
                void* var_10
                
                if (var_3c_1 s>= edx)
                label_4b50cc:
                    int32_t edx_32 = data_7030b0
                    void* var_44 = *(result_1 - 4)
                    int32_t var_58 = *result_1
                    void* eax_56 = *(result_1 + 4)
                    var_10 = eax_56
                    void* var_4c = eax_56
                    int32_t eax_57 = *(result_1 + 8)
                    int32_t ecx_19 = data_7030ac
                    int32_t var_48 = eax_57
                    
                    if (sub_4d2220(&var_44, edx_32, ecx_19, data_7030b4, data_7030b8, &var_44, 
                            &var_58, &var_4c, &var_48) != 0)
                        int32_t eax_60 = var_14
                        int32_t eax_61
                        
                        if (var_28_1 == 0 && eax_60 == 0x3e8)
                            eax_61 = var_18
                            
                            if (eax_61 != 0x3e8)
                                goto label_4b5237
                            
                            int32_t ecx_21 = *(result_1 - 4) + var_20_1
                            var_10 += var_20_1
                            var_1c = eax_57 + esi_2
                            var_18 = ecx_21
                            int32_t ecx_23 = *result_1 + esi_2
                            var_14 = ecx_23
                            
                            if (sub_4d2220(&var_18, arg2, arg3, arg4, arg5, &var_18, &var_14, 
                                    &var_10, &var_1c) != 0)
                                void* eax_71 = var_4c + var_20_1
                                
                                if (sub_4d2220(eax_71, var_58 + esi_2, var_20_1 + var_44, eax_71, 
                                        var_48 + esi_2, &var_18, &var_14, &var_10, &var_1c) != 0)
                                    int32_t var_a4_4 = var_2c_1
                                    int32_t var_a8_4 = var_1c
                                    void* var_ac_4 = var_10
                                    int32_t var_b0_4 = var_14
                                    int32_t eax_74 = *(result_1 - 4)
                                    sub_584e80(eax_74, data_702fec, data_702fe8, data_702ff0, 
                                        data_976e94, data_976e98, data_976e9c, eax_74, *result_1, 
                                        0, ecx_21, ecx_23, var_18.b)
                        else if (eax_60 s> 0)
                            eax_61 = var_18
                        label_4b5237:
                            
                            if (eax_61 s> 0)
                                int32_t var_a4_5 = 1
                                int32_t ecx_29 = *result_1
                                int32_t eax_77
                                int32_t edx_39
                                edx_39:eax_77 = sx.q(eax_57 - ecx_29)
                                int32_t esi_4 = ((eax_77 - edx_39) s>> 1) + ecx_29
                                int32_t ecx_30 = *(result_1 - 4)
                                int32_t eax_82
                                int32_t edx_41
                                edx_41:eax_82 = sx.q(var_10 - ecx_30)
                                int32_t ecx_31 = ecx_30 + ((eax_82 - edx_41) s>> 1)
                                int32_t eax_88 = var_20_1 + ecx_31
                                sub_429860(eax_88, data_976e98, data_976e94, data_976e9c, var_44, 
                                    var_58, var_4c, var_48, ecx_31, esi_4, ecx_31, data_702fe8, 
                                    data_702fec, data_702ff0, eax_88, var_1c + esi_4, arg3, arg2, 
                                    arg4, arg5, var_28_1, var_14, var_18.b, 0, 0, 0, 0, 0, 0, 0, 0, 
                                    0, 0, 0, 0, nullptr, 0, 0, 0, 0, 0, var_2c_1, nullptr, nullptr, 
                                    nullptr, 0, 0, 0)
                                xmm4_1 = 0.5
                                xmm5_1 = -0.5
                    
                    result = result_1
                else if (temp0_1 s> 0)
                    void* eax_24 = edx_15 + temp0_1
                    var_10 = eax_24
                    
                    if (eax_24 s>= temp0_1)
                        result = result_1
                    else
                        if (eax_1 != 0)
                            if (var_70_1 == 0)
                                ecx_17 = 0x200 - divs.dp.d(sx.q(var_38_1), temp0_1)
                                
                                if (ecx_17 s> 0xff)
                                    ecx_17 = 0xff
                            else
                                ecx_17 = 0xff - divs.dp.d(sx.q(var_40_1), temp0_1)
                            
                            var_2c_1 = ecx_17
                        
                        if (arg6 != 0)
                            var_28_1 = arg6 - divs.dp.d(sx.q(var_50_1), temp0_1)
                        
                        if (edx_3 != 0)
                            if (edx_3 s>= 0)
                                var_14 = divs.dp.d(sx.q((edx_3 - 0x3e8) * var_10), temp0_1) + 0x3e8
                            else
                                var_14 = 0x3e8 - divs.dp.d(sx.q(var_34_1), temp0_1)
                        
                        if (eax_6 != 0)
                            if (eax_6 s>= 0)
                                var_18 = divs.dp.d(sx.q((eax_6 - 0x3e8) * var_10), temp0_1) + 0x3e8
                            else
                                var_18 = 0x3e8 - divs.dp.d(sx.q(var_34_1), temp0_1)
                        
                        if (eax_2 != 0)
                            void* edx_31 = var_10
                            int32_t eax_52 = *(result_1 + 0xc)
                            var_20_1 = eax_52
                            
                            if (eax_52 == 0)
                                var_20_1 = eax_52
                            else if (edx_31 s>= 0)
                                double xmm0_2 = _mm_cvtepi32_pd(zx.q(var_24_1))
                                double xmm1_2 = _mm_cvtepi32_pd(zx.q(temp0_1))
                                double xmm3_2 = _mm_cvtepi32_pd(zx.q(eax_52))
                                double xmm3_3 = xmm3_2 - xmm0_2 * xmm0_2 * xmm0_2 * xmm0_2 * xmm3_2
                                    / (xmm1_2 * xmm1_2 * xmm1_2 * xmm1_2)
                                double xmm0_7
                                
                                xmm0_7 = xmm3_3 f< 0 ? xmm5_1 : xmm4_1
                                
                                var_20_1 = int.d(xmm0_7 + xmm3_3)
                            
                            esi_2 = *(result_1 + 0x10)
                            var_1c = esi_2
                            
                            if (esi_2 == 0)
                                var_1c = esi_2
                            else if (edx_31 s>= 0)
                                double xmm0_10 = _mm_cvtepi32_pd(zx.q(var_24_1))
                                double xmm1_4 = _mm_cvtepi32_pd(zx.q(temp0_1))
                                double xmm3_5 = _mm_cvtepi32_pd(zx.q(esi_2))
                                double xmm3_6 = xmm3_5 - xmm0_10 * xmm0_10 * xmm0_10 * xmm0_10
                                    * xmm3_5 / (xmm1_4 * xmm1_4 * xmm1_4 * xmm1_4)
                                double xmm0_15
                                
                                xmm0_15 = xmm3_6 f< 0 ? xmm5_1 : xmm4_1
                                
                                esi_2 = int.d(xmm0_15 + xmm3_6)
                                var_1c = esi_2
                        
                        if (ecx_17 s> 0)
                            goto label_4b50cc
                        
                        result = result_1
                result -= 0x28
                var_3c_1 -= temp0_2
                var_40_1 -= temp0_2 * 0xffffff01
                var_38_1 -= temp0_2 * 0xfffffe00
                var_50_1 -= neg.d(temp0_2 * arg6)
                var_34_1 -= temp0_2 * 0xfffffc18
                var_24_1 -= neg.d(temp0_2)
                edx_15 = var_24_1
                i = i_1 + 1
                result_1 = result
                i_1 = i
            while (i s< data_1bfe300:0xc)

return result
