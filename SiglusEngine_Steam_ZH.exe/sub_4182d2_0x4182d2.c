// 函数: sub_4182d2
// 地址: 0x4182d2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg1
int32_t edi
int32_t var_38 = edi
int32_t* var_28 = ebx

if (arg3 u>= 4 && *arg2 == 0x20534444)
    void* eax_2 = &arg2[1]
    
    if (arg3 - 4 u>= 0x7c)
        arg3 -= 0x80
        void* var_8_1 = eax_2 + 0x7c
        ebx[3] = *(eax_2 + 0xc)
        ebx[4] = *(eax_2 + 8)
        int32_t eax_6
        
        if ((*(eax_2 + 6) & 0x80) == 0)
            eax_6 = 1
        else
            eax_6 = *(eax_2 + 0x14)
        
        ebx[5] = eax_6
        
        if (eax_6 == 0)
            ebx[5] = 1
        
        int32_t eax_8 = *(eax_2 + 0x6c) & 0xfc00
        int32_t var_1c_1
        
        if (eax_8 == 0xfc00)
            var_1c_1 = 6
        label_41835e:
            int32_t eax_9 = *(eax_2 + 0x18)
            int32_t var_24_1 = eax_9
            
            if (eax_9 == 0)
                var_24_1 = 1
            
            int32_t ecx = *(eax_2 + 0x4c)
            
            if ((ecx.b & 4) != 0)
                ecx = 4
            
            int32_t* var_20_1 = ecx & 0xc4040
            int32_t* eax_18 = &data_b4e460
            
            if (data_b4e460 != 0)
                do
                    if (*(eax_2 + 0x48) == 0x20 && eax_18[2] == ecx
                            && ((ecx & 4) == 0 || *(eax_2 + 0x50) == eax_18[3])
                            && ((ecx & 0xc4462) == 0 || *(eax_2 + 0x54) == eax_18[4])
                            && ((ecx & 0xe4040) == 0 || *(eax_2 + 0x58) == eax_18[5])
                            && ((ecx & 0xc4440) == 0 || *(eax_2 + 0x5c) == eax_18[6])
                            && (var_20_1 == 0 || *(eax_2 + 0x60) == eax_18[7]))
                        if ((ecx & 0x80003) == 0)
                            break
                        
                        if (*(eax_2 + 0x64) == eax_18[8])
                            break
                    
                    eax_18 = &eax_18[9]
                while (*eax_18 != 0)
                
                ebx = var_28
            
            int32_t eax_19 = *eax_18
            
            if (eax_19 != 0)
                void* eax_20 = sub_405eea(eax_19)
                
                if ((*(eax_2 + 6) & 0x80) == 0)
                    int32_t ecx_1
                    ecx_1.b = var_1c_1 == 6
                    ebx[0x11] = ecx_1 * 2 + 3
                else
                    ebx[0x11] = 4
                
                void* var_2c_2
                
                if (*(eax_20 + 4) != 1)
                    var_2c_2 = nullptr
                label_41847e:
                    int32_t var_18_2 = 0
                    
                    if (var_1c_1 u> 0)
                        int32_t* esi_2 = arg3
                        
                        do
                            uint32_t edi_3 = ebx[3]
                            uint32_t var_10_1 = ebx[4]
                            arg2 = ebx[5]
                            
                            if (var_18_2 != 0)
                                int32_t* eax_23 = sub_745f3f(0x54)
                                int32_t* eax_24
                                
                                if (eax_23 == 0)
                                    eax_24 = nullptr
                                else
                                    eax_24 = sub_4164f8(eax_23)
                                
                                if (eax_24 == 0)
                                    return 0x8007000e
                                
                                var_20_1[0x14] = eax_24
                                var_20_1 = eax_24
                            else
                                var_20_1 = ebx
                            
                            int32_t var_14_1 = 0
                            
                            if (var_24_1 u> 0)
                                uint32_t ebx_7 = var_10_1
                                
                                do
                                    int32_t eax_25 = eax_19
                                    
                                    if (var_14_1 != 0)
                                        int32_t* eax_26 = sub_745f3f(0x54)
                                        int32_t* eax_27
                                        
                                        if (eax_26 == 0)
                                            eax_27 = nullptr
                                        else
                                            eax_27 = sub_4164f8(eax_26)
                                        
                                        if (eax_27 == 0)
                                            return 0x8007000e
                                        
                                        esi_2[0x13] = eax_27
                                        esi_2 = eax_27
                                        eax_25 = eax_19
                                    else
                                        esi_2 = var_20_1
                                    
                                    uint32_t eax_30
                                    int32_t ecx_11
                                    
                                    if (eax_25 s> 0x34545844)
                                        if (eax_25 == 0x35545844)
                                            eax_30 = (edi_3 + 3) u>> 2 << 4
                                            ecx_11 = ((ebx_7 + 3) u>> 2) * eax_30
                                        else if (eax_25 == 0x42475247 || eax_25 == 0x47424752
                                                || eax_25 == 0x59565955)
                                            eax_30 = (edi_3 + 1) u>> 1 << 2
                                            ecx_11 = eax_30 * ebx_7
                                        else
                                            eax_30 = (*(eax_20 + 8) u>> 3) * edi_3
                                            ecx_11 = eax_30 * ebx_7
                                    else if (eax_25 == 0x34545844)
                                        eax_30 = (edi_3 + 3) u>> 2 << 4
                                        ecx_11 = ((ebx_7 + 3) u>> 2) * eax_30
                                    else if (eax_25 == 0x31545844)
                                        eax_30 = (edi_3 + 3) u>> 2 << 3
                                        ecx_11 = ((ebx_7 + 3) u>> 2) * eax_30
                                    else if (eax_25 == 0x32545844)
                                        eax_30 = (edi_3 + 3) u>> 2 << 4
                                        ecx_11 = ((ebx_7 + 3) u>> 2) * eax_30
                                    else if (eax_25 == 0x32595559)
                                        eax_30 = (edi_3 + 1) u>> 1 << 2
                                        ecx_11 = eax_30 * ebx_7
                                    else if (eax_25 != 0x33545844)
                                        eax_30 = (*(eax_20 + 8) u>> 3) * edi_3
                                        ecx_11 = eax_30 * ebx_7
                                    else
                                        eax_30 = (edi_3 + 3) u>> 2 << 4
                                        ecx_11 = ((ebx_7 + 3) u>> 2) * eax_30
                                    
                                    esi_2[0xe] = 0
                                    esi_2[0xf] = 0
                                    int32_t edx_4 = ecx_11 * arg2
                                    *esi_2 = eax_19
                                    esi_2[0xc] = eax_30
                                    esi_2[1] = var_8_1
                                    esi_2[5] = arg2
                                    esi_2[0xd] = ecx_11
                                    esi_2[3] = edi_3
                                    esi_2[4] = var_10_1
                                    esi_2[2] = var_2c_2
                                    
                                    if (arg3 u< edx_4)
                                        return 0x80004005
                                    
                                    var_8_1 += edx_4
                                    arg3 -= edx_4
                                    
                                    if (edi_3 != 1)
                                        edi_3 u>>= 1
                                    else
                                        edi_3 = 1
                                    
                                    if (var_10_1 != 1)
                                        ebx_7 = var_10_1 u>> 1
                                    else
                                        ebx_7 = 1
                                    
                                    var_10_1 = ebx_7
                                    
                                    if (arg2 != 1)
                                        arg2 u>>= 1
                                    else
                                        arg2 = 1
                                    
                                    var_14_1 += 1
                                while (var_14_1 u< var_24_1)
                                
                                ebx = var_28
                            
                            var_18_2 += 1
                        while (var_18_2 u< var_1c_1)
                    
                    return 0
                
                if (arg3 u>= 0x400)
                    void* ecx_3 = var_8_1
                    var_8_1 += 0x400
                    arg3 -= 0x400
                    var_2c_2 = ecx_3
                    goto label_41847e
        else if (eax_8 == 0)
            var_1c_1 = 1
            goto label_41835e

return 0x80004005
