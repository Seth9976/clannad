// 函数: sub_1a9fd25
// 地址: 0x1a9fd25
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx

if (arg1 != 0)
    void* eax_1 = sub_1a93473(arg1, 0x3d)
    
    if (eax_1 != 0 && arg1 != eax_1)
        void* eax_2 = data_1c076c0
        int32_t ebx_1
        ebx_1.b = *(eax_1 + 1) == 0
        
        if (eax_2 == data_1c076c4)
            eax_2 = sub_1a9ff04(eax_2)
            data_1c076c0 = eax_2
        
        if (eax_2 != 0)
            goto label_1a9fdca
        
        if (arg2 == 0 || data_1c076c8 == 0)
            if (ebx_1 != 0)
                return 0
            
            void* eax_5 = sub_1a91fb2(4)
            data_1c076c0 = eax_5
            
            if (eax_5 != 0)
                *eax_5 = 0
                
                if (data_1c076c8 != 0)
                    goto label_1a9fdca
                
                void* eax_6 = sub_1a91fb2(4)
                data_1c076c8 = eax_6
                
                if (eax_6 != 0)
                    *eax_6 = 0
                label_1a9fdca:
                    int32_t* edi_1 = data_1c076c0
                    int32_t esi_3 = sub_1a9feac(arg1, eax_1 - arg1)
                    void* eax_11
                    
                    if (esi_3 s>= 0 && *edi_1 != 0)
                        if (ebx_1 == 0)
                            edi_1[esi_3] = arg1
                        else
                            void* edi_2 = &edi_1[esi_3]
                            sub_1a91ec9(edi_1[esi_3])
                            
                            while (*edi_2 != 0)
                                esi_3 += 1
                                *edi_2 = *(edi_2 + 4)
                                edi_2 += 4
                            
                            eax_11 = sub_1a98221(edi_1, esi_3 << 2)
                            
                            if (eax_11 != 0)
                                goto label_1a9fe54
                        
                    label_1a9fe59:
                        
                        if (arg2 == 0)
                            return 0
                        
                        PSTR lpName = sub_1a91fb2(sub_1a91a20(arg1) + 2)
                        
                        if (lpName != 0)
                            sub_1a91830(lpName, arg1)
                            void* eax_20 = lpName - arg1 + eax_1
                            *eax_20 = 0
                            int32_t ebx_2 = neg.d(ebx_1)
                            SetEnvironmentVariableA(lpName, 
                                not.d(sbb.d(ebx_2, ebx_2, ebx_1 != 0)) & (eax_20 + 1))
                            sub_1a91ec9(lpName)
                        
                        return 0
                    
                    if (ebx_1 != 0)
                        return 0
                    
                    if (esi_3 s< 0)
                        esi_3 = neg.d(esi_3)
                    
                    eax_11 = sub_1a98221(edi_1, (esi_3 << 2) + 8)
                    
                    if (eax_11 != 0)
                        *(eax_11 + (esi_3 << 2)) = arg1
                        *(eax_11 + (esi_3 << 2) + 4) = 0
                    label_1a9fe54:
                        data_1c076c0 = eax_11
                        goto label_1a9fe59
        else if (sub_1a9f0b2() == 0)
            goto label_1a9fdca

return 0xffffffff
