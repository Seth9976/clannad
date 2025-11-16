// 函数: sub_6246a0
// 地址: 0x6246a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (*(arg1 + 0x4a79c) != 0)
    result = sub_5cb350(arg1 + 0x62538)
    
    if (result != 2 && result != 3)
        void* edi_1 = data_bac4a0
        
        if (*(edi_1 + 0xcc) == 0)
            void* ebx_1 = data_bac484
            
            if (*(ebx_1 + 0x138) == 0)
                char* edx_1 = data_bac498
                
                if (edx_1[2] == 0 && *(arg1 + 0x4ae4c) == 0)
                    void* ecx_1 = data_bac4c8
                    
                    if (*(ecx_1 + 0x38) == 1)
                        int32_t i = 0
                        int64_t xmm0_1 = *(ecx_1 + 0x40)
                        int64_t var_c_1 = xmm0_1
                        
                        if (*(data_bac510 + 0x178) s> 0)
                            int32_t* edi_2 = 0x1d7c
                            
                            do
                                int32_t eax_1 = *(edi_2 + data_bac510)
                                
                                if (eax_1 != 1)
                                    int64_t xmm1_2
                                    
                                    if (eax_1 != 2)
                                        if (eax_1 != 3)
                                            if (eax_1 == 4)
                                                xmm1_2 = (zx.o(0)).q
                                                goto label_62482d
                                            
                                            if (eax_1 != 5)
                                                if (eax_1 != 6)
                                                    if (eax_1 != 7)
                                                        if (eax_1 == 8
                                                                && not(xmm0_1 f< -2.3561944961547852))
                                                            xmm1_2 = -0x4016de04a0000000
                                                            goto label_62482d
                                                    else if (not(xmm0_1 f< -0.78539818525314331))
                                                        xmm1_2 = 0x3fe921fb60000000
                                                        goto label_62482d
                                                else if (not(xmm0_1 f< 0.78539818525314331))
                                                    xmm1_2 = 0x4002d97c80000000
                                                    goto label_62482d
                                            else if (-0x3ffd268380000000 f> xmm0_1
                                                    || not(xmm0_1 f< 2.3561944961547852))
                                                goto label_624836
                                        else if (not(xmm0_1 f< 0.0))
                                            goto label_624836
                                    else if (not(xmm0_1 f< -1.5707963705062866))
                                        xmm1_2 = 0x3ff921fb60000000
                                    label_62482d:
                                        
                                        if (not(xmm1_2 f<= xmm0_1))
                                            goto label_624836
                                else if (-0x4006de04a0000000 f> xmm0_1
                                    || not(xmm0_1 f< 1.5707963705062866))
                                label_624836:
                                    sub_6b2000(ecx_1 + 8)
                                    *edx_1 = 0
                                    char eax_2 = sub_660000()
                                    
                                    if (eax_2 == 0)
                                        *edx_1 = eax_2
                                    
                                    sub_65e270(i)
                                    xmm0_1 = var_c_1
                                    edx_1 = data_bac498
                                    ecx_1 = data_bac4c8
                                
                                i += 1
                                edi_2 = &edi_2[1]
                            while (i s< *(data_bac510 + 0x178))
                            
                            edi_1 = data_bac4a0
                            ebx_1 = data_bac484
                    
                    if (*(edi_1 + 0xcc) != 0)
                        result.b = 0
                    else if (*(ebx_1 + 0x138) == 0)
                        result.b = edx_1[2] == 0
                    else
                        result.b = 0
                    
                    if (*(ecx_1 + 0x64) == 2)
                        if (result.b == 0)
                            goto label_6248c3
                        
                        if (sub_634fe0().b == 0)
                            ecx_1 = data_bac4c8
                        label_6248c3:
                            
                            if (sub_6b1fd0(ecx_1 + 0x58) == 0)
                                return 1
                            
                            goto label_624932
                    else if (*(ecx_1 + 0x97c) != 2)
                        if (*(ecx_1 + 0x1d2c) == 2 && (result.b == 0 || *(data_bac458 + 0x3e8) == 0)
                            && sub_6b1fd0(ecx_1 + 0x1d20).b != 0)
                        label_624932:
                            void* ecx_4
                            ecx_4.b = 0
                            sub_65ffe0(ecx_4.b)
                            sub_65ffa0()
                    else if (result.b == 0 || *(data_bac458 + 0x3a9) == 0)
                        if (sub_6b1fd0(ecx_1 + 0x970) == 0)
                            return 1
                        
                        goto label_624932

result.b = 1
return result
