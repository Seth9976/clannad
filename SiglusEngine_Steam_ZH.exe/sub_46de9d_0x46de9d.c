// 函数: sub_46de9d
// 地址: 0x46de9d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* var_14 = esi

if (arg3 != 2)
    return neg.d(sbb.d(1, 1, 1 u< arg4))

int32_t result = arg4 * arg5

if (result != 0)
    int32_t var_c_1 = 0
    int32_t edi
    int32_t var_24_1 = edi
    
    if (arg4 u> 0)
        void* eax_2 = *(esi + 8)
        int32_t* ebx_1 = arg2
        
        do
            void* edx_1 = *(*(eax_2 + 0x14) + (*ebx_1 << 2))
            arg3 = nullptr
            int32_t edi_1 = *(edx_1 + 4)
            
            if (arg5 u> 0)
                int32_t* var_8_1 = ebx_1
                
                do
                    void* esi_2 = *(*(*(esi + 8) + 0x14) + (*var_8_1 << 2))
                    
                    if (edi_1 != *(esi_2 + 4))
                        goto label_46e027
                    
                    bool cond:4_1
                    
                    if ((*(*(*(eax_2 + 0x10) + (edi_1 << 2)) + 4) & 0x40) == 0)
                        cond:4_1 = *(edx_1 + 0x48) != *(esi_2 + 0x48)
                    else
                        if ((arg3 u>> 2) + *(edx_1 + 0xc) != *(esi_2 + 0xc))
                            goto label_46e027
                        
                        cond:4_1 = (arg3 & 3) + *(edx_1 + 0x10) != *(esi_2 + 0x10)
                    
                    if (cond:4_1)
                        goto label_46e027
                    
                    arg3 += 1
                    var_8_1 = &var_8_1[1]
                while (arg3 u< arg5)
                
                esi = var_14
            
            var_c_1 += 1
            ebx_1 = &ebx_1[arg5]
        while (var_c_1 u< arg4)
    
    int32_t var_c_2 = 0
    
    if (arg5 u<= 0)
    label_46e027:
        result = 1
    else
        void* eax_22 = *(esi + 8)
        int32_t* edi_2 = arg2
        
        while (true)
            void* eax_25 = *(*(eax_22 + 0x14) + (*edi_2 << 2))
            arg2 = nullptr
            int32_t esi_3 = *(eax_25 + 4)
            
            if (arg4 u> 0)
                arg3 = edi_2
                
                while (true)
                    void* edx_7 = *(*(*(var_14 + 8) + 0x14) + (*arg3 << 2))
                    
                    if (esi_3 == *(edx_7 + 4))
                        bool cond:5_1
                        
                        if ((*(*(*(eax_22 + 0x10) + (esi_3 << 2)) + 4) & 0x40) == 0)
                            cond:5_1 = *(eax_25 + 0x48) != *(edx_7 + 0x48)
                        label_46dffd:
                            
                            if (not(cond:5_1))
                                arg2 += 1
                                arg3 = &arg3[arg5]
                                
                                if (arg2 u>= arg4)
                                    goto label_46e013
                                
                                continue
                        else if ((arg2 u>> 2) + *(eax_25 + 0xc) == *(edx_7 + 0xc))
                            cond:5_1 = (arg2 & 3) + *(eax_25 + 0x10) != *(edx_7 + 0x10)
                            goto label_46dffd
                    
                    result = 0
                    break
                
                break
            
        label_46e013:
            var_c_2 += 1
            edi_2 = &edi_2[1]
            
            if (var_c_2 u>= arg5)
                goto label_46e027

return result
