// 函数: sub_464ea0
// 地址: 0x464ea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg3[6]
int32_t ebx = eax[1]
int32_t edi
int32_t var_18 = edi
char* edi_1 = *eax
int32_t* var_8 = eax
arg3[0x38] = arg1
arg3[0x39] = arg2

if (ebx != 0)
    goto label_464edb

if (eax[3](arg3) != 0)
    eax = var_8
    edi_1 = *eax
    ebx = eax[1]
label_464edb:
    int32_t ecx
    ecx:1.b = *edi_1
    int32_t ebx_1 = ebx - 1
    void* edi_2 = &edi_1[1]
    
    if (ebx_1 != 0)
        goto label_464f00
    
    if (eax[3](arg3) != 0)
        eax = var_8
        edi_2 = *eax
        ebx_1 = eax[1]
    label_464f00:
        int32_t ecx_2 = ecx + zx.d(*edi_2)
        int32_t ebx_2 = ebx_1 - 1
        void* edi_3 = edi_2 + 1
        
        if (ebx_2 != 0)
            goto label_464f22
        
        if (eax[3](arg3) != 0)
            eax = var_8
            edi_3 = *eax
            ebx_2 = eax[1]
        label_464f22:
            int32_t ebx_3 = ebx_2 - 1
            void* edi_4 = edi_3 + 1
            arg3[0x36] = zx.d(*edi_3)
            
            if (ebx_3 != 0)
                goto label_464f44
            
            if (eax[3](arg3) != 0)
                eax = var_8
                edi_4 = *eax
                ebx_3 = eax[1]
            label_464f44:
                int32_t edx_1
                edx_1:1.b = *edi_4
                int32_t ebx_4 = ebx_3 - 1
                void* edi_5 = edi_4 + 1
                arg3[8] = edx_1
                
                if (ebx_4 != 0)
                    goto label_464f6b
                
                if (eax[3](arg3) != 0)
                    eax = var_8
                    edi_5 = *eax
                    ebx_4 = eax[1]
                label_464f6b:
                    int32_t ebx_5 = ebx_4 - 1
                    void* edi_6 = edi_5 + 1
                    arg3[8] += zx.d(*edi_5)
                    
                    if (ebx_5 != 0)
                        goto label_464f8a
                    
                    if (eax[3](arg3) != 0)
                        eax = var_8
                        edi_6 = *eax
                        ebx_5 = eax[1]
                    label_464f8a:
                        int32_t edx_4
                        edx_4:1.b = *edi_6
                        int32_t ebx_6 = ebx_5 - 1
                        void* edi_7 = edi_6 + 1
                        arg3[7] = edx_4
                        
                        if (ebx_6 != 0)
                            goto label_464fb1
                        
                        if (eax[3](arg3) != 0)
                            eax = var_8
                            edi_7 = *eax
                            ebx_6 = eax[1]
                        label_464fb1:
                            int32_t ebx_7 = ebx_6 - 1
                            void* edi_8 = edi_7 + 1
                            arg3[7] += zx.d(*edi_7)
                            
                            if (ebx_7 != 0)
                                goto label_464fd1
                            
                            if (eax[3](arg3) != 0)
                                edi_8 = *var_8
                                ebx_7 = var_8[1]
                            label_464fd1:
                                void* eax_10 = *arg3
                                int32_t ecx_6 = arg3[0x69]
                                arg3[9] = zx.d(*edi_8)
                                int32_t edx_8 = arg3[7]
                                *(eax_10 + 0x18) = ecx_6
                                int32_t ecx_7 = arg3[8]
                                *(eax_10 + 0x1c) = edx_8
                                int32_t edx_9 = arg3[9]
                                *(eax_10 + 0x20) = ecx_7
                                *(eax_10 + 0x24) = edx_9
                                int32_t ebx_8 = ebx_7 - 1
                                void* edi_9 = edi_8 + 1
                                *(eax_10 + 0x14) = 0x64
                                (*(eax_10 + 4))(arg3, 1)
                                
                                if (*(arg3[0x6f] + 0x10) != 0)
                                    void* eax_12 = *arg3
                                    *(eax_12 + 0x14) = 0x3a
                                    (*eax_12)(arg3)
                                
                                if (arg3[8] u<= 0 || arg3[7] u<= 0 || arg3[9] s<= 0)
                                    void* eax_16 = *arg3
                                    *(eax_16 + 0x14) = 0x20
                                    (*eax_16)(arg3)
                                
                                if (ecx_2 - 8 != arg3[9] * 3)
                                    void* eax_18 = *arg3
                                    *(eax_18 + 0x14) = 0xb
                                    (*eax_18)(arg3)
                                
                                if (arg3[0x37] == 0)
                                    arg3[0x37] = (*arg3[1])(arg3, 1, arg3[9] * 0x54)
                                
                                int32_t* ecx_10 = arg3[0x37]
                                int32_t var_10_1 = 0
                                int32_t* var_c_4 = ecx_10
                                
                                if (arg3[9] s> 0)
                                    while (true)
                                        ecx_10[1] = var_10_1
                                        
                                        if (ebx_8 == 0)
                                            if (var_8[3](arg3) == 0)
                                                return 0
                                            
                                            edi_9 = *var_8
                                            ebx_8 = var_8[1]
                                            ecx_10 = var_c_4
                                        
                                        int32_t ebx_10 = ebx_8 - 1
                                        void* edi_11 = edi_9 + 1
                                        *ecx_10 = zx.d(*edi_9)
                                        
                                        if (ebx_10 == 0)
                                            if (var_8[3](arg3) == 0)
                                                return 0
                                            
                                            edi_11 = *var_8
                                            ebx_10 = var_8[1]
                                            ecx_10 = var_c_4
                                        
                                        uint32_t eax_29 = zx.d(*edi_11)
                                        int32_t ebx_12 = ebx_10 - 1
                                        void* edi_12 = edi_11 + 1
                                        ecx_10[2] = eax_29 s>> 4 & 0xf
                                        ecx_10[3] = eax_29 & 0xf
                                        
                                        if (ebx_12 == 0)
                                            if (var_8[3](arg3) == 0)
                                                return 0
                                            
                                            edi_12 = *var_8
                                            ebx_12 = var_8[1]
                                            ecx_10 = var_c_4
                                        
                                        int32_t edx_16 = *ecx_10
                                        ecx_10[4] = zx.d(*edi_12)
                                        void* eax_33 = *arg3
                                        *(eax_33 + 0x18) = edx_16
                                        *(eax_33 + 0x1c) = ecx_10[2]
                                        *(eax_33 + 0x20) = ecx_10[3]
                                        *(eax_33 + 0x24) = ecx_10[4]
                                        ebx_8 = ebx_12 - 1
                                        edi_9 = edi_12 + 1
                                        *(eax_33 + 0x14) = 0x65
                                        (*(eax_33 + 4))(arg3, 1)
                                        bool cond:12_1 = var_10_1 + 1 s< arg3[9]
                                        var_10_1 += 1
                                        var_c_4 = &var_c_4[0x15]
                                        
                                        if (not(cond:12_1))
                                            break
                                        
                                        ecx_10 = var_c_4
                                
                                *(arg3[0x6f] + 0x10) = 1
                                *var_8 = edi_9
                                var_8[1] = ebx_8
                                return 1

return 0
