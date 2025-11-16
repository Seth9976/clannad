// 函数: sub_4d0387
// 地址: 0x4d0387
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0
int32_t edi
int32_t var_20 = edi
int32_t ecx = *arg2
int32_t ecx_1 = ecx & 0xfffff
int32_t edx_1 = ecx & 0xfff00000
int32_t ecx_14
int32_t esi_2

if (arg3 == 0)
    if (edx_1 == 0x10f00000)
        int32_t ecx_9 = ecx_1 & 0xfffff
        int32_t* edi_3 = *(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*arg2[2] << 2)) + 4) << 2))
        esi_2 = ecx_9 | 0x73100000
        
        if ((edi_3[1].w & 0x208) == 0)
        label_4d05a9:
            ecx_14 = ecx_9 | 0x73f00000
        label_4d05af:
            esi_2 = ecx_14
            var_c = 1
            goto label_4d05ba
        
        char* eax_18 = *edi_3
        
        if (eax_18 != 0)
            if (_strchr(eax_18, 0x69) != 0)
                goto label_4d059e
            
            if (_strchr(*edi_3, 0x49) == 0 && _strchr(*edi_3, 0x62) == 0
                    && _strchr(*edi_3, 0x42) == 0)
                if ((*(edi_3 + 5) & 8) != 0
                        || *(*(*(arg1 + 0x14) + (*arg2[2] << 2)) + 8) != 0xffffffff)
                    goto label_4d05a9
                
                goto label_4d05ba
        
    label_4d059e:
        
        if (*(*(*(arg1 + 0x14) + (*arg2[2] << 2)) + 8) == 0xffffffff)
            goto label_4d05ba
        
        goto label_4d05a9
    
    if (edx_1 == 0x73500000)
        esi_2 = (ecx_1 & 0xfffff) | 0x73d00000
    label_4d05ba:
        void* eax_27 = sub_49ec23(0x74)
        int32_t* result
        int32_t* result_1
        
        if (eax_27 == 0)
            result = nullptr
            result_1 = nullptr
        else
            result_1 = sub_49e789(eax_27)
            result = result_1
        
        if (result_1 != 0)
            int32_t var_2c_1
            int32_t var_28_9
            
            if (edx_1 != 0x10f00000 || var_c != 0)
                int32_t var_24_2 = 0
                var_28_9 = ecx_1
                var_2c_1 = ecx_1 * 2
            else
                int32_t var_24_1 = 0
                var_28_9 = ecx_1
                var_2c_1 = ecx_1
            
            if (sub_49ec6e(result_1, esi_2, var_2c_1, var_28_9, 0) s< 0)
                sub_46cb59(result_1, 1)
            else
                int32_t* esi_12 = arg2
                
                if (sub_49e7bf(result_1, esi_12) s>= 0)
                    if (arg3 != 0)
                        int32_t ecx_19 = esi_12[3] << 2
                        int32_t esi_14
                        int32_t edi_5
                        edi_5, esi_14 = __builtin_memcpy(result_1[4], esi_12[4], ecx_19 u>> 2 << 2)
                        __builtin_memcpy(edi_5, esi_14, ecx_19 & 3)
                        result_1 = result
                        esi_12 = arg2
                        goto label_4d0699
                    
                    int32_t* result_3 = result_1
                    int32_t* result_2 = result_1
                    result_2.q = fconvert.d(float.t(0))
                    *result_1[4] = sub_49f544(arg1, *(arg1 + 0xa8), 0, 0, result_2)
                    
                    if (*result_1[4] != 0xffffffff)
                        int32_t eax_36 = *(arg1 + 0x14)
                        void* ecx_27 = *(eax_36 + (*result_1[4] << 2))
                        void* eax_37 = *(eax_36 + (*esi_12[4] << 2))
                        *(ecx_27 + 0x18) = *(eax_37 + 0x18)
                        *(ecx_27 + 0x14) = *(eax_37 + 0x14)
                    label_4d0699:
                        int32_t ecx_29 = esi_12[1] << 2
                        int32_t esi_16
                        int32_t edi_7
                        edi_7, esi_16 = __builtin_memcpy(result_1[2], esi_12[2], ecx_29 u>> 2 << 2)
                        int32_t* ecx_33 = __builtin_memcpy(edi_7, esi_16, ecx_29 & 3)
                        
                        if (var_c == 0)
                            return result
                        
                        arg2 = nullptr
                        
                        if (*(arg1 + 8) u> 0)
                            ecx_33 = *(arg1 + 0x14)
                            int32_t i_1 = *(arg1 + 8)
                            int32_t i
                            
                            do
                                void* eax_40 = *ecx_33
                                
                                if ((*(*(*(arg1 + 0x10) + (*(eax_40 + 4) << 2)) + 5) & 1) != 0)
                                    void* eax_41 = *(eax_40 + 0xc)
                                    
                                    if (eax_41 u>= arg2)
                                        arg2 = eax_41 + 1
                                
                                ecx_33 = &ecx_33[1]
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                        
                        if (*(arg1 + 0x188) == 0xffffffff)
                            int32_t* var_24_4 = ecx_33
                            int32_t* var_28_10 = ecx_33
                            var_28_10.q = fconvert.d(float.t(0))
                            *(arg1 + 0x188) = sub_49f544(arg1, *(arg1 + 0x78), arg2, 0, var_28_10)
                        
                        int32_t ebx_1 = *(arg1 + 0x188)
                        
                        if (ebx_1 != 0xffffffff)
                            *(result[2] + 4) = ebx_1
                            return result
                        
                        sub_46cb59(result, 1)
                else
                    sub_46cb59(result_1, 1)
    else
        if (edx_1 == 0x73600000)
            esi_2 = (ecx_1 & 0xfffff) | 0x73e00000
            goto label_4d05ba
        
        if (edx_1 == 0x73700000)
            esi_2 = (ecx_1 & 0xfffff) | 0x73f00000
            goto label_4d05ba
        
        if (edx_1 == 0x73800000)
            esi_2 = (ecx_1 & 0xfffff) | 0x74000000
            goto label_4d05ba
else
    if (edx_1 == 0x10f00000)
        int32_t ecx_3 = ecx_1 & 0xfffff
        int32_t* edi_2 = *(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*arg2[2] << 2)) + 4) << 2))
        esi_2 = ecx_3 | 0x73000000
        
        if ((edi_2[1].w & 0x208) == 0)
        label_4d04b0:
            ecx_14 = ecx_3 | 0x73b00000
            goto label_4d05af
        
        char* eax_5 = *edi_2
        
        if (eax_5 != 0)
            if (_strchr(eax_5, 0x69) != 0)
                goto label_4d04a1
            
            if (_strchr(*edi_2, 0x49) == 0 && _strchr(*edi_2, 0x62) == 0
                    && _strchr(*edi_2, 0x42) == 0)
                if ((*(edi_2 + 5) & 8) != 0
                        || *(*(*(arg1 + 0x14) + (*arg2[2] << 2)) + 8) != 0xffffffff)
                    goto label_4d04b0
                
                goto label_4d05ba
        
    label_4d04a1:
        
        if (*(*(*(arg1 + 0x14) + (*arg2[2] << 2)) + 8) == 0xffffffff)
            goto label_4d05ba
        
        goto label_4d04b0
    
    if (edx_1 == 0x73500000)
        esi_2 = (ecx_1 & 0xfffff) | 0x73900000
        goto label_4d05ba
    
    if (edx_1 == 0x73600000)
        esi_2 = (ecx_1 & 0xfffff) | 0x73a00000
        goto label_4d05ba
    
    if (edx_1 == 0x73700000)
        esi_2 = (ecx_1 & 0xfffff) | 0x73b00000
        goto label_4d05ba
    
    if (edx_1 == 0x73800000)
        esi_2 = (ecx_1 & 0xfffff) | 0x73c00000
        goto label_4d05ba
return nullptr
