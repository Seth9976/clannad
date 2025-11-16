// 函数: sub_4993ef
// 地址: 0x4993ef
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg1 != 0)
    int32_t* eax_1 = arg1[7]
    
    if (eax_1 != 0 && *arg1 != 0)
        int32_t* result = 0xfffffffb
        
        arg2 = arg2 != 4 ? nullptr : 0xfffffffb
        
        while (true)
            int32_t eax_40 = *eax_1
            
            if (eax_40 u> 0xd)
                break
            
            switch (eax_40)
                case 0
                    int32_t eax_2 = arg1[1]
                    
                    if (eax_2 == 0)
                        return result
                    
                    void* ecx_1 = arg1[7]
                    result = arg2
                    arg1[2] += 1
                    arg1[1] = eax_2 - 1
                    *(ecx_1 + 4) = zx.d(**arg1)
                    int32_t* eax_6 = arg1[7]
                    char ecx_2 = (eax_6[1]).b & 0xf
                    *arg1 += 1
                    
                    if (ecx_2 == 8)
                        if ((eax_6[1] u>> 4) + 8 u> eax_6[4])
                            *eax_6 = 0xd
                            arg1[6] = "invalid window size"
                            goto label_49961c
                        
                        *eax_6 = 1
                    label_499497:
                        int32_t eax_7 = arg1[1]
                        
                        if (eax_7 == 0)
                            return result
                        
                        arg1[2] += 1
                        arg1[1] = eax_7 - 1
                        char* eax_9 = *arg1
                        uint32_t ebx_1 = zx.d(*eax_9)
                        *arg1 = &eax_9[1]
                        int32_t* ecx_7 = arg1[7]
                        
                        if (modu.dp.d(0:((ecx_7[1] << 8) + ebx_1), 0x1f) != 0)
                            result = arg2
                            *ecx_7 = 0xd
                            arg1[6] = "incorrect header check"
                            goto label_49961c
                        
                        result = arg2
                        
                        if ((ebx_1.b & 0x20) == 0)
                            *ecx_7 = 7
                            eax_1 = arg1[7]
                            continue
                        
                        *arg1[7] = 2
                    label_499647:
                        int32_t eax_43 = arg1[1]
                        
                        if (eax_43 == 0)
                            return result
                        
                        void* ecx_19 = arg1[7]
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_43 - 1
                        *(ecx_19 + 8) = zx.d(**arg1) << 0x18
                        int32_t* eax_48 = arg1[7]
                        *arg1 += 1
                        *eax_48 = 3
                    label_499671:
                        int32_t eax_49 = arg1[1]
                        
                        if (eax_49 == 0)
                            return result
                        
                        char* ecx_20 = *arg1
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_49 - 1
                        void* eax_51 = arg1[7]
                        *(eax_51 + 8) += zx.d(*ecx_20) << 0x10
                        int32_t* eax_52 = arg1[7]
                        *arg1 += 1
                        *eax_52 = 4
                    label_49969b:
                        int32_t eax_53 = arg1[1]
                        
                        if (eax_53 == 0)
                            return result
                        
                        char* ecx_23 = *arg1
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_53 - 1
                        void* eax_55 = arg1[7]
                        *(eax_55 + 8) += zx.d(*ecx_23) << 8
                        int32_t* eax_56 = arg1[7]
                        *arg1 += 1
                        *eax_56 = 5
                    label_4996c5:
                        int32_t eax_57 = arg1[1]
                        
                        if (eax_57 == 0)
                            return result
                        
                        char* ecx_26 = *arg1
                        arg1[2] += 1
                        arg1[1] = eax_57 - 1
                        void* eax_59 = arg1[7]
                        *(eax_59 + 8) += zx.d(*ecx_26)
                        int32_t* eax_60 = arg1[7]
                        *arg1 += 1
                        arg1[0xc] = eax_60[2]
                        *eax_60 = 6
                        return 2
                    else
                        *eax_6 = 0xd
                        arg1[6] = "unknown compression method"
                    label_49961c:
                        *(arg1[7] + 4) = 5
                        eax_1 = arg1[7]
                        continue
                case 1
                    goto label_499497
                case 2
                    goto label_499647
                case 3
                    goto label_499671
                case 4
                    goto label_49969b
                case 5
                    goto label_4996c5
                case 6
                    *arg1[7] = 0xd
                    void* eax_62 = arg1[7]
                    arg1[6] = "need dictionary"
                    *(eax_62 + 4) = 0
                    break
                case 7
                    result = sub_4e4382(*(arg1[7] + 0x14), arg1, result)
                    
                    if (result != 0xfffffffd)
                        if (result == 0)
                            result = arg2
                        
                        if (result != 1)
                            return result
                        
                        void* eax_19 = arg1[7]
                        result = arg2
                        sub_4e4298(*(eax_19 + 0x14), arg1, eax_19 + 4)
                        int32_t* eax_20 = arg1[7]
                        
                        if (eax_20[3] != 0)
                            *eax_20 = 0xc
                            eax_1 = arg1[7]
                            continue
                        
                        *eax_20 = 8
                    label_49955d:
                        int32_t eax_21 = arg1[1]
                        
                        if (eax_21 == 0)
                            return result
                        
                        void* ecx_9 = arg1[7]
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_21 - 1
                        *(ecx_9 + 8) = zx.d(**arg1) << 0x18
                        int32_t* eax_26 = arg1[7]
                        *arg1 += 1
                        *eax_26 = 9
                    label_49958b:
                        int32_t eax_27 = arg1[1]
                        
                        if (eax_27 == 0)
                            return result
                        
                        char* ecx_10 = *arg1
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_27 - 1
                        void* eax_29 = arg1[7]
                        *(eax_29 + 8) += zx.d(*ecx_10) << 0x10
                        int32_t* eax_30 = arg1[7]
                        *arg1 += 1
                        *eax_30 = 0xa
                    label_4995b9:
                        int32_t eax_31 = arg1[1]
                        
                        if (eax_31 == 0)
                            return result
                        
                        char* ecx_13 = *arg1
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_31 - 1
                        void* eax_33 = arg1[7]
                        *(eax_33 + 8) += zx.d(*ecx_13) << 8
                        int32_t* eax_34 = arg1[7]
                        *arg1 += 1
                        *eax_34 = 0xb
                    label_4995e3:
                        int32_t eax_35 = arg1[1]
                        
                        if (eax_35 == 0)
                            return result
                        
                        char* ecx_16 = *arg1
                        result = arg2
                        arg1[2] += 1
                        arg1[1] = eax_35 - 1
                        void* eax_37 = arg1[7]
                        *(eax_37 + 8) += zx.d(*ecx_16)
                        int32_t* eax_38 = arg1[7]
                        *arg1 += 1
                        
                        if (eax_38[1] == eax_38[2])
                            *arg1[7] = 0xc
                            return 1
                        
                        *eax_38 = 0xd
                        arg1[6] = "incorrect data check"
                        goto label_49961c
                    else
                        *arg1[7] = 0xd
                        *(arg1[7] + 4) = 0
                        eax_1 = arg1[7]
                        continue
                case 8
                    goto label_49955d
                case 9
                    goto label_49958b
                case 0xa
                    goto label_4995b9
                case 0xb
                    goto label_4995e3
                case 0xc
                    return 1
                case 0xd
                    return 0xfffffffd

return 0xfffffffe
