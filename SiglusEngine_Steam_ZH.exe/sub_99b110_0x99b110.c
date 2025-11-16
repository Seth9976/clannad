// 函数: sub_99b110
// 地址: 0x99b110
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x1c)
int32_t eax_2 = sub_742fa0(arg2, 8) + 1
*(edi + 0x18) = eax_2

if (eax_2 s> 0)
    if (eax_2 s> 0)
        void* var_c_1 = edi + 0x720
        int32_t i = 0
        
        do
            int32_t* eax_4 = sub_99eae0(arg2)
            *var_c_1 = eax_4
            
            if (eax_4 == 0)
                goto label_99b3c8
            
            i += 1
            var_c_1 += 4
        while (i s< *(edi + 0x18))
    
    int32_t eax_6 = sub_742fa0(arg2, 6) + 1
    
    if (eax_6 s> 0)
        int32_t ebx_1 = 0
        
        if (eax_6 s> 0)
            do
                if (sub_742fa0(arg2, 0x10) != 0)
                    goto label_99b3c8
                
                ebx_1 += 1
            while (ebx_1 s< eax_6)
        
        int32_t eax_9 = sub_742fa0(arg2, 6) + 1
        *(edi + 0x10) = eax_9
        
        if (eax_9 s> 0)
            int32_t var_c_3 = 0
            void* ebx_2 = edi + 0x420
            
            while (true)
                int32_t eax_10 = sub_742fa0(arg2, 0x10)
                *(ebx_2 - 0x100) = eax_10
                
                if (eax_10 s< 0)
                    break
                
                if (eax_10 s>= 2)
                    break
                
                int32_t eax_13 = (*(&data_adde08)[eax_10])[1](arg1, arg2)
                *ebx_2 = eax_13
                
                if (eax_13 == 0)
                    break
                
                ebx_2 += 4
                int32_t eax_15 = var_c_3 + 1
                var_c_3 = eax_15
                
                if (eax_15 s>= *(edi + 0x10))
                    int32_t eax_17 = sub_742fa0(arg2, 6) + 1
                    *(edi + 0x14) = eax_17
                    
                    if (eax_17 s> 0)
                        int32_t var_c_4 = 0
                        void* ebx_3 = edi + 0x620
                        
                        while (true)
                            int32_t eax_18 = sub_742fa0(arg2, 0x10)
                            *(ebx_3 - 0x100) = eax_18
                            
                            if (eax_18 s< 0)
                                break
                            
                            if (eax_18 s>= 3)
                                break
                            
                            int32_t eax_21 = (*((&data_addf44)[eax_18] + 4))(arg1, arg2)
                            *ebx_3 = eax_21
                            
                            if (eax_21 == 0)
                                break
                            
                            ebx_3 += 4
                            int32_t eax_23 = var_c_4 + 1
                            var_c_4 = eax_23
                            
                            if (eax_23 s>= *(edi + 0x14))
                                int32_t eax_25 = sub_742fa0(arg2, 6) + 1
                                *(edi + 0xc) = eax_25
                                
                                if (eax_25 s> 0)
                                    int32_t var_c_5 = 0
                                    void* ebx_4 = edi + 0x220
                                    
                                    while (true)
                                        int32_t eax_26 = sub_742fa0(arg2, 0x10)
                                        *(ebx_4 - 0x100) = eax_26
                                        
                                        if (eax_26 s< 0)
                                            break
                                        
                                        if (eax_26 s>= 1)
                                            break
                                        
                                        int32_t eax_29 = (*(&data_adde04)[eax_26])[1](arg1, arg2)
                                        *ebx_4 = eax_29
                                        
                                        if (eax_29 == 0)
                                            break
                                        
                                        ebx_4 += 4
                                        int32_t eax_31 = var_c_5 + 1
                                        var_c_5 = eax_31
                                        
                                        if (eax_31 s>= *(edi + 0xc))
                                            int32_t eax_32
                                            void* ecx_13
                                            int32_t edx
                                            eax_32, ecx_13, edx = sub_742fa0(arg2, 6)
                                            int32_t eax_33 = eax_32 + 1
                                            *(edi + 8) = eax_33
                                            
                                            if (eax_33 s> 0)
                                                int32_t var_c_6 = 0
                                                void* ebx_5 = edi + 0x20
                                                
                                                while (true)
                                                    *ebx_5 =
                                                        sub_74c590(eax_33, edx, ecx_13, 1, 0x10)
                                                    **ebx_5 = sub_742fa0(arg2, 1)
                                                    *(*ebx_5 + 4) = sub_742fa0(arg2, 0x10)
                                                    *(*ebx_5 + 8) = sub_742fa0(arg2, 0x10)
                                                    int32_t eax_38
                                                    eax_38, edx = sub_742fa0(arg2, 8)
                                                    ecx_13 = *ebx_5
                                                    *(ecx_13 + 0xc) = eax_38
                                                    void* eax_39 = *ebx_5
                                                    
                                                    if (*(eax_39 + 4) s>= 1)
                                                        break
                                                    
                                                    if (*(eax_39 + 8) s>= 1)
                                                        break
                                                    
                                                    int32_t eax_40 = *(eax_39 + 0xc)
                                                    
                                                    if (eax_40 s>= *(edi + 0xc))
                                                        break
                                                    
                                                    if (eax_40 s< 0)
                                                        break
                                                    
                                                    ebx_5 += 4
                                                    eax_33 = var_c_6 + 1
                                                    var_c_6 = eax_33
                                                    
                                                    if (eax_33 s>= *(edi + 8))
                                                        if (sub_742fa0(arg2, 1) == 1)
                                                            return 0
                                                        
                                                        break
                                            
                                            break
                                
                                break
                    
                    break

label_99b3c8:
sub_99b640(arg1)
return 0xffffff7b
