// 函数: sub_4392fd
// 地址: 0x4392fd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_5c = edi

if (arg4 != 0)
    if (arg2 == 0)
        return 1
    
    goto label_43931d

if (arg2 != 0)
label_43931d:
    
    if (arg3 != 0)
        void** var_50
        sub_46bb94(&var_50)
        void** var_2c
        sub_46bb94(&var_2c)
        void*** edi_2
        
        if (arg2[1] != 9)
            edi_2 = &var_50
            int32_t var_40_1 = 4
            int32_t var_38_1 = 1
            int32_t var_34_1 = sub_4377a1(arg1, arg2)
            
            if (arg4 != 0 && sub_43772a(arg1, arg2) != 0)
                int32_t var_40_2 = 1
        else
            edi_2 = arg2
        
        void*** esi_1
        
        if (arg3[1] != 9)
            esi_1 = &var_2c
            int32_t var_1c_1 = 4
            int32_t var_14_1 = 1
            int32_t var_10_1 = sub_4377a1(arg1, arg3)
            
            if (arg4 != 0 && sub_43772a(arg1, arg3) != 0)
                int32_t var_1c_2 = 1
        else
            esi_1 = arg3
        
        int32_t ecx_6 = edi_2[4]
        int32_t eax_7
        
        if (ecx_6 != 4)
            eax_7 = esi_1[4]
        
        if (ecx_6 == 4 || eax_7 == 4)
            int32_t ebx_2 = edi_2[7] * edi_2[6]
            int32_t eax_15 = esi_1[7] * esi_1[6]
            
            if (arg4 == 0)
                if (ecx_6 == esi_1[4] && ebx_2 == eax_15)
                    uint32_t esi_5 = 0
                    
                    if (ebx_2 u> 0)
                        while (true)
                            if (sub_437bdc(arg1, arg2, esi_5, &var_50) s< 0)
                                return 0
                            
                            if (sub_437bdc(arg1, arg3, esi_5, &var_2c) s< 0)
                                return 0
                            
                            if (sub_43782f(&var_50, &var_2c) == 0)
                                return 0
                            
                            esi_5 += 1
                            
                            if (esi_5 u>= ebx_2)
                                return 1
                    
                    return 1
            else if (ebx_2 u<= eax_15)
                uint32_t esi_4 = 0
                
                if (ebx_2 u> 0)
                    while (true)
                        if (sub_437bdc(arg1, arg2, esi_4, &var_50) s< 0)
                            return 0
                        
                        if (sub_437bdc(arg1, arg3, esi_4, &var_2c) s< 0)
                            return 0
                        
                        if (sub_4392fd(&var_50, &var_2c, 1) == 0)
                            return 0
                        
                        esi_4 += 1
                        
                        if (esi_4 u>= ebx_2)
                            return 1
                
                return 1
        else if (ecx_6 != 0)
            bool cond:4_1
            
            if (ecx_6 == 1)
                if (eax_7 == 0)
                    return 1
                
                if (eax_7 == 1)
                label_4394ab:
                    
                    if (edi_2[7] u<= esi_1[7])
                        return 1
                else if (eax_7 != 2)
                label_4394b9:
                    
                    if (eax_7 != 3)
                        return 1
                else
                    int32_t eax_8 = esi_1[6]
                    
                    if (eax_8 != 1 || edi_2[7] u<= esi_1[7])
                        int32_t esi_2 = esi_1[7]
                        
                        if (esi_2 != 1 || edi_2[7] u<= eax_8)
                            if (eax_8 == 1 || esi_2 == 1)
                                return 1
                            
                            cond:4_1 = eax_8 * esi_2 == edi_2[7]
                            goto label_439547
            else if (ecx_6 != 2)
                if (ecx_6 != 3)
                    return 1
                
                if (eax_7 == ecx_6)
                    int32_t esi_3 = esi_1[5]
                    
                    if (esi_3 == 0xd)
                        return 1
                    
                    if (esi_3 == 0xf)
                        int32_t edi_4 = edi_2[5]
                        
                        if (edi_4 == esi_3 || edi_4 == 0x10 || edi_4 == 0x11 || edi_4 == 0x12)
                            return 1
                        
                        cond:4_1 = edi_4 == 0x13
                        goto label_439547
                    
                    if (esi_3 == 0x14)
                        int32_t edi_5 = edi_2[5]
                        
                        if (edi_5 == esi_3 || edi_5 == 0x15 || edi_5 == 0x16 || edi_5 == 0x17)
                            return 1
                        
                        cond:4_1 = edi_5 == 0x18
                        goto label_439547
                    
                    cond:4_1 = edi_2[5] == esi_3
                label_439547:
                    
                    if (cond:4_1)
                        return 1
            else
                if (eax_7 == 0)
                    return 1
                
                if (eax_7 != 1)
                    if (eax_7 != 2)
                        goto label_4394b9
                    
                    if (edi_2[6] u<= esi_1[6])
                        goto label_4394ab
                else
                    int32_t eax_10 = edi_2[6]
                    
                    if (eax_10 != 1 || edi_2[7] u<= esi_1[7])
                        int32_t edi_3 = edi_2[7]
                        
                        if (edi_3 != 1 || eax_10 u<= esi_1[7])
                            if (eax_10 == 1 || edi_3 == 1)
                                return 1
                            
                            cond:4_1 = eax_10 * edi_3 == esi_1[7]
                            goto label_439547
        else if (eax_7 != 3)
            return 1
else if (arg3 == 0)
    return 1

return 0
