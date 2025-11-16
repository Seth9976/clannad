// 函数: sub_4c3d66
// 地址: 0x4c3d66
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
int32_t* edi_1 = arg1[0x40]
int32_t esi_1 = *edi_1 & 0xfffff

if (esi_1 u>= 3)
    int32_t* eax_1 = sub_4d10f4(arg1, 0x10000002, edi_1, nullptr, 2, 1)
    int32_t* ebx_1 = eax_1
    
    if (ebx_1 == 0)
        int32_t* eax_2 = sub_4d10f4(arg1, 0x10000003, edi_1, eax_1, 2, 1)
        ebx_1 = eax_2
        
        if (ebx_1 != 0)
            goto label_4c3dde
        
        ebx_1 = sub_4d10f4(arg1, 0x10000004, edi_1, eax_2, 2, 1)
        
        if (ebx_1 == 0)
            goto label_4c3f1a
        
        goto label_4c3dde
    
label_4c3dde:
    int32_t eax_4 = arg1[5]
    int32_t var_18_1
    int32_t var_14
    int32_t i_4
    
    if (*(*(eax_4 + (*ebx_1[4] << 2)) + 4) == arg1[0x21])
        i_4 = *ebx_1 & 0xfffff
        var_18_1 = 1
        
        if (i_4 u> 0)
            var_14 = *edi_1[4]
            int32_t* ecx_5 = ebx_1[2]
            int32_t i_3 = i_4
            int32_t i
            
            do
                int32_t eax_8 = *ecx_5
                
                if (eax_8 != var_14 || (*(*(eax_4 + (eax_8 << 2)) + 0x34) & 0x1ffe00) != 0)
                    var_18_1 = 0
                
                ecx_5 = &ecx_5[1]
                i = i_3
                i_3 -= 1
            while (i != 1)
    
    if (*(*(eax_4 + (*ebx_1[4] << 2)) + 4) != arg1[0x21] || (i_4 u> 0 && var_18_1 == 0))
    label_4c3f1a:
        
        if (esi_1 == 3 && zx.d((arg1[0x32]).w) u>= 0x200)
            int32_t* eax_19 = arg1[0x40]
            int32_t* esi_10 = eax_19[2]
            int32_t i_1 = 3
            int32_t* edi_7 = &esi_10[3]
            bool cond:4_1 = false
            
            while (i_1 != 0)
                int32_t temp0_1 = *esi_10
                int32_t temp1_1 = *edi_7
                cond:4_1 = temp0_1 != temp1_1
                esi_10 = &esi_10[1]
                edi_7 = &edi_7[1]
                i_1 -= 1
                
                if (temp0_1 != temp1_1)
                    break
            
            if (not(cond:4_1))
                int32_t* eax_20 = sub_4d10f4(arg1, 0x10700001, eax_19, nullptr, 2, 1)
                
                if (eax_20 != 0)
                    int32_t* ebx_2 = sub_4d10f4(arg1, 0x20500003, eax_20, &var_14, 2, 1)
                    
                    if (ebx_2 != 0)
                    label_4c3fb7:
                        int32_t* edi_8 = eax_19[2]
                        int32_t eax_25 = arg1[5]
                        void* ecx_27 = *(eax_25 + (*edi_8 << 2))
                        void* eax_26 = *(eax_25 + (*ebx_2[4] << 2))
                        int32_t eax_28 = *ebx_2 & 0xfffff
                        int32_t edx_8 = eax_28 << 2
                        int32_t* esi_13 = ebx_2[2] + edx_8
                        int32_t i_2 = 3
                        bool cond:7_1 = false
                        
                        while (i_2 != 0)
                            int32_t temp3_1 = *esi_13
                            int32_t temp4_1 = *edi_8
                            cond:7_1 = temp3_1 != temp4_1
                            esi_13 = &esi_13[1]
                            edi_8 = &edi_8[1]
                            i_2 -= 1
                            
                            if (temp3_1 != temp4_1)
                                break
                        
                        if (not(cond:7_1))
                            int32_t ecx_30 = 0
                            
                            if (eax_28 u> 0)
                                int32_t* edx_9 = ebx_2[4]
                                
                                do
                                    if (*(*(eax_25 + (*edx_9 << 2)) + 0x10) != ecx_30)
                                        return 0
                                    
                                    ecx_30 += 1
                                    edx_9 = &edx_9[1]
                                while (ecx_30 u< eax_28)
                            
                            if (*(ecx_27 + 4) != *(eax_26 + 4)
                                    || *(ecx_27 + 0xc) != *(eax_26 + 0xc))
                                void* eax_31 = sub_49ec23(0x74)
                                int32_t* var_c_4
                                int32_t* edi_10
                                
                                if (eax_31 == 0)
                                    var_c_4 = nullptr
                                    edi_10 = nullptr
                                else
                                    edi_10 = sub_49e789(eax_31)
                                    var_c_4 = edi_10
                                
                                if (edi_10 == 0)
                                    return 0x8007000e
                                
                                int32_t eax_34 = eax_28 & 0xfffff
                                int32_t eax_16 =
                                    sub_49ec6e(edi_10, eax_34 | 0x70200000, eax_28, eax_28, 0)
                                
                                if (eax_16 s< 0)
                                    return eax_16
                                
                                eax_16 = sub_49e7bf(edi_10, ebx_2)
                                
                                if (eax_16 s< 0)
                                    return eax_16
                                
                                int32_t esi_17
                                int32_t edi_12
                                edi_12, esi_17 =
                                    __builtin_memcpy(edi_10[4], ebx_2[4], edx_8 u>> 2 << 2)
                                __builtin_memcpy(edi_12, esi_17, edx_8 & 3)
                                int32_t esi_20
                                int32_t edi_14
                                edi_14, esi_20 =
                                    __builtin_memcpy(var_c_4[2], ebx_2[2] + edx_8, edx_8 u>> 2 << 2)
                                __builtin_memcpy(edi_14, esi_20, edx_8 & 3)
                                
                                if ((*(*arg1 + 0x20))(var_c_4, 0) != 0)
                                    sub_46cb59(var_c_4, 1)
                                else
                                    *eax_19 = 0
                                    *eax_20 = 0
                                    *ebx_2 = 0
                                    
                                    if ((*(*arg1 + 0x34))(var_c_4, var_14) != 0)
                                        *eax_19 = 0x50000003
                                        *eax_20 = 0x10700001
                                        *ebx_2 = eax_34 | 0x20500000
                                        sub_46cb59(var_c_4, 1)
                                    else
                                        void* ecx_46 = *(arg1[6] + (var_14 << 2))
                                        
                                        if (ecx_46 != 0)
                                            sub_46cb59(ecx_46, 1)
                                        
                                        *(arg1[6] + (var_14 << 2)) = var_c_4
                    else
                        ebx_2 = sub_4d10f4(arg1, 0x20500004, eax_20, &var_14, 2, 1)
                        
                        if (ebx_2 != 0)
                            goto label_4c3fb7
    else
        void* eax_10 = sub_49ec23(0x74)
        int32_t* var_c_2
        
        if (eax_10 == 0)
            var_c_2 = nullptr
        else
            var_c_2 = sub_49e789(eax_10)
        
        if (var_c_2 == 0)
            return 0x8007000e
        
        int32_t esi_4 = sub_49ec6e(var_c_2, (esi_1 & 0xfffff) | 0x50000000, edi_1[1], ebx_1[3], 0)
        
        if (esi_4 s< 0)
            sub_46cb59(var_c_2, 1)
            return esi_4
        
        esi_4 = sub_49e7bf(var_c_2, edi_1)
        
        if (esi_4 s< 0)
            sub_46cb59(var_c_2, 1)
            return esi_4
        
        int32_t ecx_10 = var_c_2[3] << 2
        int32_t esi_6
        int32_t edi_4
        edi_4, esi_6 = __builtin_memcpy(var_c_2[4], ebx_1[4], ecx_10 u>> 2 << 2)
        int32_t* eax_15 = var_c_2
        __builtin_memcpy(edi_4, esi_6, ecx_10 & 3)
        int32_t ecx_15 = eax_15[1] << 2
        int32_t esi_8
        int32_t edi_6
        edi_6, esi_8 = __builtin_memcpy(eax_15[2], edi_1[2], ecx_15 u>> 2 << 2)
        __builtin_memcpy(edi_6, esi_8, ecx_15 & 3)
        *ebx_1 = 0
        void* ecx_19 = arg1[0x40]
        
        if (ecx_19 != 0)
            sub_46cb59(ecx_19, 1)
            eax_15 = var_c_2
        
        *(arg1[6] + (arg1[0x3f] << 2)) = eax_15
        arg1[0x40] = eax_15

return 0
