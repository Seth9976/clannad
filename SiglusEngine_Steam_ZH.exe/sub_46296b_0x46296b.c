// 函数: sub_46296b
// 地址: 0x46296b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_50 = edi
int32_t* edi_1 = arg2
int32_t* ebx = *edi_1
void* ecx_1 = arg3 - ebx
int32_t* var_2c = edi_1
int32_t* var_1c = arg4
int32_t result

if (ecx_1 u>= 8)
    while (true)
        int32_t esi_2 = *ebx
        int32_t eax_12 = ebx[1]
        
        if ((esi_2 & eax_12) == 0xffffffff)
            int32_t i = 0
            
            if (*var_1c u> 0)
                do
                    result = (*(**(var_1c[3] + (i << 2)) + 0x40))(arg3)
                    
                    if (result s< 0)
                        goto label_462b62
                    
                    i += 1
                while (i u< *var_1c)
            
            result = 0
            break
        
        void*** esi_11
        
        if (eax_12 s< 0 || (eax_12 s<= 0 && esi_2 u< 0))
            int32_t eax_7 = neg.d(adc.d(eax_12, 0, esi_2 != 0))
            void*** var_24
            
            if (eax_7 u<= 0 && (eax_7 u< 0 || neg.d(esi_2) u<= *(arg1 + 0x28))
                    && sub_461701(arg1, ebx + esi_2, &var_24) != 0)
                void*** eax_10 = sub_745f3f(8)
                
                if (eax_10 == 0)
                    esi_11 = nullptr
                else
                    void*** ecx_12 = var_24
                    *eax_10 = &data_ac3b28
                    eax_10[1] = ecx_12
                    esi_11 = eax_10
                
                if (esi_11 == 0)
                    result = 0x8007000e
                    break
                
                int32_t* ecx_13 = var_1c
                var_24 = esi_11
                
                if (sub_48647e(ecx_13, &var_24) == 0)
                label_462b78:
                    (*esi_11)[0xc](1)
                    result = 0x8007000e
                    break
                
                *edi_1 += 8
            label_462b13:
                ebx = *edi_1
                ecx_1 = arg3 - ebx
                
                if (ecx_1 u>= 8)
                    continue
        else if (ecx_1 u>= 0x38)
            int32_t edi_3 = *(arg1 + 0x2c)
            int32_t ecx_2 = ebx[3]
            int32_t edx_1 = ebx[2]
            
            if (ecx_2 u<= 0 && (ecx_2 u< 0 || edx_1 u<= edi_3) && eax_12 u<= 0
                    && (eax_12 u< 0 || esi_2 u<= edi_3))
                int32_t ecx_3 = adc.d(ecx_2, eax_12, edx_1 + esi_2 u< edx_1)
                
                if (ecx_3 u<= 0 && (ecx_3 u< 0 || edx_1 + esi_2 u<= edi_3))
                    int32_t var_18 = ebx[4]
                    void var_14
                    int32_t** edi_4 = &var_14
                    int32_t** esi_4 = &ebx[5]
                    *edi_4 = *esi_4
                    void* edi_5 = &edi_4[1]
                    void* esi_5 = &esi_4[1]
                    *edi_5 = *esi_5
                    *(edi_5 + 4) = *(esi_5 + 4)
                    int32_t var_48
                    
                    if (sub_4607b2(arg1, &var_18, &var_48) != 0)
                        *var_2c += 0x38
                        int32_t var_30
                        
                        if (sub_4606c9(var_2c, arg3, &var_30) != 0)
                            int32_t esi_10 = *var_2c - var_30
                            void*** eax_3 = sub_745f3f(0x24)
                            
                            if (eax_3 == 0)
                                esi_11 = nullptr
                            else
                                esi_11 = sub_4625cb(eax_3, arg1, ebx, esi_10, var_48)
                            
                            if (esi_11 == 0)
                                result = 0x8007000e
                                break
                            
                            int32_t* ecx_7 = var_1c
                            void*** var_44 = esi_11
                            
                            if (sub_48647e(ecx_7, &var_44) == 0)
                                goto label_462b78
                            
                            edi_1 = var_2c
                            goto label_462b13
        result = 0x8876038f
        break
else
    result = 0x8876038f

label_462b62:
sub_745f2b(__security_cookie_1)
return result
