// 函数: sub_5f38a0
// 地址: 0x5f38a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = sub_5f3680(arg1)

if (result != 3 && result != 4)
    result = data_bac458
    
    if (*(result + 0x37c) == 0)
        if (*(arg1 + 0x2ac) s>= 0)
            void* eax
            int32_t edx_1
            eax, edx_1 = sub_5f3d30(arg1)
            char eax_1
            
            if (eax != 0)
                eax_1 = sub_5dbda0(eax)
            
            if (eax == 0 || eax_1 != 0)
                int32_t* edi_1
                
                if (sub_5b26f0(arg1 + 0x159c) == 0)
                    edi_1 = data_bac430
                else if (eax == 0)
                    if (*(arg1 + 0x2b0) s>= 0)
                        goto label_5f3923
                    
                    edi_1 = data_bac430
                else if (*(arg1 + 0x2b4) == *(eax + 0x1c4) || *(arg1 + 0x2b0) s< 0)
                    edi_1 = data_bac430
                else
                label_5f3923:
                    edi_1 = data_bac430
                    int32_t eax_6
                    int32_t edx_2
                    edx_2:eax_6 = muls.dp.d(0x2aaaaaab, edi_1[1] - *edi_1)
                    int32_t ecx_4 = *(arg1 + 0x2b0)
                    edx_1 = edx_2 s>> 1
                    
                    if (ecx_4 s< (edx_1 u>> 0x1f) + edx_1)
                        sub_676ac0(*(*edi_1 + ecx_4 * 0xc))
                        edi_1 = data_bac430
                
                if (eax != 0)
                    char eax_12
                    eax_12, edx_1 = sub_5dbd10(arg1 + 0x159c)
                    
                    if (eax_12 != 0)
                        *(eax + 0x1cc) = *(arg1 + 0x2b4)
                
                if (sub_5dbd70(arg1 + 0x159c) != 0
                        && (eax == 0 || *(arg1 + 0x2b4) != *(eax + 0x1c8))
                        && *(arg1 + 0x2b0) s>= 0)
                    int32_t eax_18
                    int32_t edx_3
                    edx_3:eax_18 = muls.dp.d(0x2aaaaaab, edi_1[1] - *edi_1)
                    int32_t ecx_9 = *(arg1 + 0x2b0)
                    edx_1 = edx_3 s>> 1
                    
                    if (ecx_9 s< (edx_1 u>> 0x1f) + edx_1)
                        sub_676ac0(*(*edi_1 + ecx_9 * 0xc + 4))
                        edi_1 = data_bac430
                
                if (eax != 0)
                    char eax_24
                    eax_24, edx_1 = sub_5dbd40(arg1 + 0x159c)
                    
                    if (eax_24 != 0)
                        *(eax + 0x1d0) = *(arg1 + 0x2b4)
                
                if (sub_5b2720(arg1 + 0x159c) != 0)
                    int32_t eax_28 = *(arg1 + 0x2b0)
                    
                    if (eax_28 s>= 0)
                        int32_t eax_29
                        int32_t edx_4
                        edx_4:eax_29 = muls.dp.d(0x2aaaaaab, edi_1[1] - *edi_1)
                        int32_t ecx_14 = *(arg1 + 0x2b0)
                        edx_1 = edx_4 s>> 1
                        eax_28 = (edx_1 u>> 0x1f) + edx_1
                        
                        if (ecx_14 s< eax_28)
                            eax_28, edx_1 = sub_676ac0(*(*edi_1 + ecx_14 * 0xc + 8))
                    
                    if (eax != 0)
                        eax_28, edx_1 = sub_5c13e0(eax, *(arg1 + 0x2b4))
                    
                    int32_t ecx_19 = *(arg1 + 0x348)
                    
                    if (ecx_19 s< 0)
                    label_5f3a9e:
                        int32_t* eax_33 = *(arg1 + 0x2a4)
                        
                        switch (eax_33)
                            case 1
                                int32_t var_10_7 = ecx_19
                                edx_1.b = eax_33.b
                                ecx_19.b = 0
                                sub_6603b0(ecx_19.b, edx_1.b)
                            case 2
                                ecx_19.b = 0
                                sub_6605b0(ecx_19)
                            case 3
                                char* ecx_18 = data_bac498
                                
                                if (*(arg1 + 0x340) != 0)
                                    *ecx_18 = 0
                                else
                                    *ecx_18 = 1
                                
                                char eax_34 = sub_660000()
                                
                                if (eax_34 == 0)
                                    *ecx_18 = eax_34
                            case 4
                                ecx_19.b = *(arg1 + 0x340) == 0
                                *(data_bac4e4 + 0x141) = ecx_19.b
                            case 5
                                if (sub_60e120(data_bac510 + 0x10b58) != IDNO)
                                    *(data_bac4a0 + 0x1e4) = 0
                                    sub_676610(9)
                                    sub_676610(4)
                                    int32_t var_10_8 = sub_676610(2)
                                    sub_6018e0(data_bac468 + 0x304, 7)
                            case 6
                                *(data_bac498 + 2) = 1
                            case 7
                                sub_6600d0()
                            case 8
                                sub_661200()
                            case 9
                                edx_1.b = 1
                                sub_660820(eax_33, edx_1.b, *(arg1 + 0x2a8), 1)
                            case 0xa
                                edx_1.b = 1
                                sub_6609a0(eax_33, edx_1.b, *(arg1 + 0x2a8), 1, 1)
                            case 0xb
                                sub_661290()
                            case 0xc
                                int32_t ecx_27 = *(arg1 + 0x2a8)
                                
                                if (*(arg1 + 0x340) != 0)
                                    if (ecx_27 u<= 3)
                                        *(ecx_27 * 3 + data_bac498 + 0x24) = 0
                                else if (ecx_27 u<= 3)
                                    *(ecx_27 * 3 + data_bac498 + 0x24) = 1
                            case 0xd
                                sub_661370(*(arg1 + 0x2a8))
                            case 0xe
                                int32_t ecx_29 = *(arg1 + 0x2a8)
                                
                                if (ecx_29 s>= 0)
                                    void* edx_5 = data_bac4e4
                                    
                                    if (ecx_29 s< *(edx_5 + 0x180) - *(edx_5 + 0x17c))
                                        char* ecx_30 = ecx_29 + *(edx_5 + 0x17c)
                                        int32_t eax_44
                                        eax_44.b = *ecx_30 == 0
                                        *ecx_30 = eax_44.b
                            case 0xf
                                int32_t ecx_31 = *(arg1 + 0x2a8)
                                
                                if (ecx_31 s>= 0)
                                    void* edx_6 = data_bac4e4
                                    
                                    if (ecx_31 s< (*(edx_6 + 0x18c) - *(edx_6 + 0x188)) s>> 2)
                                        int32_t eax_48 = *(edx_6 + 0x188)
                                        *(eax_48 + (ecx_31 << 2)) += 1
                                        int32_t ecx_32 = *(arg1 + 0x2a8)
                                        int32_t esi_2 = ecx_32 * 0xe4
                                        int32_t* edi_2 = *(edx_6 + 0x188) + (ecx_32 << 2)
                                        int32_t ecx_33 = data_bac510
                                        *(esi_2 + ecx_33 + 0x10534)
                                        *edi_2 =
                                            mods.dp.d(sx.q(*edi_2), *(esi_2 + ecx_33 + 0x10534))
                    else
                        edx_1 = *(arg1 + 0x34c)
                        
                        if (edx_1 s< 0)
                            if (ecx_19 s< 0)
                                goto label_5f3a9e
                            
                            edx_1 = *(arg1 + 0x350)
                            
                            if (edx_1 s< 0)
                                goto label_5f3a9e
                            
                            sub_65d5c0(eax_28, edx_1, ecx_19, 0, 1, 0)
                        else
                            sub_65d760(eax_28, edx_1, ecx_19, 0, 1, 0)
        
        int32_t ecx_35 = *(arg1 + 0x1438) - *(arg1 + 0x1434)
        int32_t edx_9
        edx_9:result = muls.dp.d(0xba506bb7, ecx_35)
        int32_t i_1 = ecx_35 s/ 0x15fc
        
        if (i_1 s> 0)
            int32_t esi_3 = 0
            int32_t i
            
            do
                *(arg1 + 0x1434)
                result = sub_5f38a0()
                esi_3 += 0x15fc
                i = i_1
                i_1 -= 1
            while (i != 1)

return result
