// 函数: sub_58c210
// 地址: 0x58c210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *data_bac428 + *(arg1 + 0x414) * 0x24
int32_t eax_6 = (*(edi + 0x1c) - *(edi + 0x18)) s/ 0xb8

if (arg2 s< eax_6)
    void* esi_2 = arg2 * 0xb8 + *(edi + 0x18)
    int32_t eax_24
    int32_t* ecx_7
    int32_t ecx_21
    int32_t ebx_1
    int32_t edi_2
    
    if (*(esi_2 + 0xa8) == 0)
        eax_6 = *(esi_2 + 0x7c)
        
        if (eax_6 s>= 3)
            eax_6 = sub_54b180(0)
            
            if (eax_6 != 0)
                int32_t ecx_23 = *(eax_6 + 0x80)
                
                if (ecx_23 == 0xb)
                    edi_2 = eax_6 - 4
                    
                    if (edi_2 != 0)
                        eax_6 = *(esi_2 + 0x7c)
                        ebx_1 = *(esi_2 + (eax_6 << 2) - 4)
                        
                        if (ebx_1 s>= 0)
                            int32_t ecx_24 = *(esi_2 + 0xb4)
                            eax_6 = divs.dp.d(sx.q((*(edi_2 + 0xa8) - *(edi_2 + 0xa4)) s>> 2 << 5), 
                                ecx_24)
                            
                            if (ebx_1 s< eax_6)
                                eax_6 = ecx_24 - 1
                                
                                if (eax_6 u<= 0x1f)
                                    eax_6 = zx.d(lookup_table_58c548[eax_6])
                                    
                                    switch (eax_6)
                                        case 0
                                            return sub_5c1ee0(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                        case 1
                                            return sub_5c20e0(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                        case 2
                                            return sub_5c22f0(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                        case 3
                                            return sub_5c2500(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                        case 4
                                            return sub_5c2710(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                        case 5
                                        label_58c33e:
                                            int32_t* esi_3 = *(edi_2 + 0xa4) + (ebx_1 << 2)
                                            int32_t eax_16 = sub_6ae470(arg3, 0)
                                            *esi_3 = eax_16
                                            return eax_16
                else if (ecx_23 == 0x15 && eax_6 != 4)
                    ecx_21 = *(esi_2 + (*(esi_2 + 0x7c) << 2) - 4) * 3
                    eax_24 = *(eax_6 + 0xa0)
                label_58c4d2:
                    ecx_7 = eax_24 + (ecx_21 << 3)
                    goto label_58c4d5
    else
        void* ecx_4 = data_bac45c
        eax_6 = sub_697e70(ecx_4, *(ecx_4 + 0x64), esi_2 + 0x98)
        
        if (eax_6 s>= 0)
            eax_6 = sub_621ac0(eax_6)
            int32_t edi_1 = eax_6
            
            if (edi_1 != 0)
                eax_6 = *(edi_1 + 4)
                
                if (eax_6 == 0xa)
                    int32_t eax_8 = sub_6ae470(arg3, 0)
                    *(edi_1 + 8) = eax_8
                    return eax_8
                
                if (eax_6 == 0x14)
                    ecx_7 = edi_1 + 0xc
                label_58c4d5:
                    eax_6 = arg3
                    
                    if (ecx_7 != eax_6)
                        return sub_52e3c0(ecx_7, eax_6, 0, 0xffffffff)
                else
                    void var_c
                    
                    if (eax_6 == 0xb)
                        edi_2 = *sub_58c590(&var_c, edi_1 + 0x160)
                        eax_6 = sub_54b010(&var_c)
                        
                        if (edi_2 != 0)
                            ebx_1 = *(esi_2 + 0xb0)
                            
                            if (ebx_1 s>= 0)
                                int32_t ecx_10 = *(esi_2 + 0xb4)
                                eax_6 = divs.dp.d(
                                    sx.q((*(edi_2 + 0xa8) - *(edi_2 + 0xa4)) s>> 2 << 5), ecx_10)
                                
                                if (ebx_1 s< eax_6)
                                    eax_6 = ecx_10 - 1
                                    
                                    if (eax_6 u<= 0x1f)
                                        eax_6 = zx.d(lookup_table_58c50c[eax_6])
                                        
                                        switch (eax_6)
                                            case 0
                                                return sub_5c1ee0(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                            case 1
                                                return sub_5c20e0(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                            case 2
                                                return sub_5c22f0(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                            case 3
                                                return sub_5c2500(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                            case 4
                                                return sub_5c2710(edi_2, ebx_1, sub_6ae470(arg3, 0))
                                            case 5
                                                goto label_58c33e
                    else if (eax_6 == 0x15)
                        void* edi_3 = *sub_58c640(&var_c, edi_1 + 0x160)
                        eax_6 = sub_54b010(&var_c)
                        
                        if (edi_3 != 0)
                            int32_t esi_4 = *(esi_2 + 0xb0)
                            
                            if (esi_4 s>= 0)
                                eax_6 = sub_55aeb0(edi_3 + 4)
                                
                                if (esi_4 s< eax_6)
                                    eax_24 = *(edi_3 + 0xa4)
                                    ecx_21 = esi_4 * 3
                                    goto label_58c4d2

return eax_6
