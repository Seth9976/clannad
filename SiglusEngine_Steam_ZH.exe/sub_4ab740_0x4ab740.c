// 函数: sub_4ab740
// 地址: 0x4ab740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0x14)
int32_t edx = arg3
int32_t ecx_1 = *(*(eax + (edx << 2)) + 0x38)

if (ecx_1 != 0xffffffff)
    arg3 = ecx_1
    edx = ecx_1

int32_t* ebx = arg2
void* esi = *(eax + (edx << 2))
int32_t edi
int32_t var_4c = edi
void* var_18 = esi

if (*ebx == *(esi + 4))
    int32_t eax_3 = *(esi + 0xc) << 2
    
    if (*(eax_3 + ebx[4]) == 0xffffffff)
        int32_t ecx_3 = ebx[1]
        
        if (*(eax_3 + ebx[2]) u>= ecx_3 || *(eax_3 + ebx[3]) u>= ecx_3)
            int32_t j_1 = 0xffffffff
            int32_t var_c_1 = 0xffffffff
            int32_t var_30
            
            if (arg6 != 0xffffffff)
                int32_t j_3 = *(ebx[8] + (arg6 << 2))
                j_1 = j_3
                var_c_1 = sub_4a32b7(arg1, ebx, edx, j_3, arg4, &var_30, 0xffffffff)
            else
                arg6 = 0
                
                if (ebx[0xb] u<= 0)
                label_4ab8dd:
                    
                    if ((ebx[0x18].b & 2) != 0)
                        sub_4a4100(arg1, *(ebx[0x17] + 0x3c), 0xfa4, 
                            "program too complex; there are more active values than registers")
                    
                    return 0x80004005
                
                do
                    int32_t j_2 = *(ebx[8] + (arg6 << 2))
                    int32_t* ecx_5 = ebx[0xf]
                    int32_t* edx_1 = ebx[0x10]
                    arg2 = nullptr
                    *(esi + 0xc)
                    int32_t edi_3 = ecx_5[*(esi + 0xc)]
                    int32_t j
                    
                    if (edi_3 u<= 0)
                        j = j_2
                    label_4ab828:
                        
                        if (arg5 == 0xffffffff)
                        label_4ab87d:
                            int32_t var_40
                            int32_t eax_18 = sub_4a32b7(arg1, ebx, arg3, j, arg4, &var_40, var_c_1)
                            
                            if (eax_18 u< var_c_1)
                                j_1 = j
                                var_30 = var_40
                                void var_2c
                                void* edi_10 = &var_2c
                                void var_3c
                                void* esi_4 = &var_3c
                                *edi_10 = *esi_4
                                void* edi_11 = edi_10 + 4
                                void* esi_5 = esi_4 + 4
                                *edi_11 = *esi_5
                                var_c_1 = eax_18
                                *(edi_11 + 4) = *(esi_5 + 4)
                                
                                if (eax_18 == 0)
                                    esi = var_18
                                    break
                        else
                            arg2 = nullptr
                            int32_t* eax_15 = *(*(*(arg1 + 0x14) + (arg5 << 2)) + 0xc) << 2
                            int32_t ecx_6 = *(eax_15 + ecx_5)
                            
                            if (ecx_6 u<= 0)
                                goto label_4ab87d
                            
                            while (j != *(ebx[4] +
                                    (*(ebx[0x11] + (*(eax_15 + edx_1) << 2) + (arg2 << 2)) << 2)))
                                arg2 += 1
                                
                                if (arg2 u>= ecx_6)
                                    break
                            
                            if (arg2 u>= ecx_6)
                                goto label_4ab87d
                    else
                        while (true)
                            j = j_2
                            
                            if (j == *(ebx[4] +
                                    (*(ebx[0x11] + (edx_1[*(esi + 0xc)] << 2) + (arg2 << 2)) << 2)))
                                break
                            
                            arg2 += 1
                            
                            if (arg2 u>= edi_3)
                                j = j_2
                                break
                        
                        if (arg2 u>= edi_3)
                            goto label_4ab828
                    arg6 += 1
                    esi = var_18
                while (arg6 u< ebx[0xb])
            
            if (var_c_1 == 0xffffffff)
                goto label_4ab8dd
            
            int32_t j_4 = j_1
            *(ebx[4] + (*(esi + 0xc) << 2)) = j_4
            
            if ((*(arg1 + 0xcc) & 4) != 0)
                int32_t edi_15 = ebx[9]
                
                if (j_4 u< edi_15)
                    int32_t* ecx_10 = ebx[8]
                    int32_t i = 0
                    
                    while (true)
                        i += 1
                        
                        if (*ecx_10 == j_4)
                            break
                        
                        ecx_10 = &ecx_10[1]
                    
                    if (i u< edi_15)
                        do
                            int32_t* ecx_12 = ebx[8] + (i << 2)
                            i += 1
                            ecx_12[-1] = *ecx_12
                        while (i u< ebx[9])
                    
                    *(ebx[8] + (ebx[9] << 2) - 4) = j_4
            
            for (arg3 = 0; arg3 u< 4; arg3 += 1)
                int32_t* eax_27 = (arg3 + (*(esi + 0xc) << 2)) << 2
                int32_t ecx_16 = *(eax_27 + ebx[6])
                
                if (ecx_16 != 0xffffffff)
                    int32_t ecx_18 = (&var_30)[arg3]
                    *(eax_27 + ebx[5]) = ecx_18
                    int32_t* eax_29 = ebx[7] + ((ecx_18 + (j_4 << 2)) << 2)
                    
                    if (*eax_29 != 0xffffffff)
                        do
                            if (*((*(arg1 + 0x14))[*eax_29] + 0x58)
                                    u<= *(*(*(arg1 + 0x14) + (ecx_16 << 2)) + 0x58))
                                break
                            
                            eax_29 = *((*eax_29 << 2) + *(arg1 + 0x14)) + 0x30
                        while (*eax_29 != 0xffffffff)
                        
                        j_4 = j_1
                    
                    *(*(*(arg1 + 0x14) + (ecx_16 << 2)) + 0x30) = *eax_29
                    *eax_29 = ecx_16

int32_t esi_8 = *(esi + 8)

if (esi_8 != 0xffffffff)
    int32_t result = sub_4ab740(ebx, esi_8, 0, 0xffffffff, 0xffffffff)
    
    if (result s< 0)
        return result

return 0
