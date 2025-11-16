// 函数: sub_72dee0
// 地址: 0x72dee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg1
void* ebx = *(eax + 0x1b0)

if (*(eax + 0xfc) != 0 && *(ebx + 0x28) == 0)
    char eax_1 = sub_72dc30(eax)
    
    if (eax_1 == 0)
        return eax_1
    
    eax = arg1

if (*(ebx + 0x24) == 0)
    int32_t ecx_2 = *(eax + 0x17c)
    int32_t edi_1 = *(ebx + 0x10)
    char ecx_3 = (*(eax + 0x184)).b
    int32_t ecx_4 = *(eax + 0x18c)
    
    if (edi_1 != 0)
        eax.b = 1
        *(ebx + 0x28) -= 1
        *(ebx + 0x10) = edi_1 - 1
        return eax
    
    int32_t* ecx_5 = *(eax + 0x18)
    int32_t edx_1 = *(ebx + 8)
    int32_t esi_1 = *(ebx + 0xc)
    int32_t var_2c_1 = eax
    int32_t var_3c = *ecx_5
    int32_t eax_3 = ecx_5[1]
    int32_t var_c_1 = edx_1
    int32_t eax_5 = *arg2
    int32_t eax_6 = *(ebx + 0x3c)
    int32_t eax_8 = *(arg1 + 0x178)
    int32_t var_8_1 = eax_8
    
    if (eax_8 s<= ecx_2)
        while (true)
            uint32_t eax_9
            int32_t var_34
            int32_t var_30
            int32_t eax_10
            int32_t ebx_1
            
            if (esi_1 s>= 8)
            label_72dfc6:
                ebx_1 = eax_6
                eax_9 = zx.d((edx_1 s>> (esi_1.b - 8)).b)
                int32_t ecx_8 = *(ebx_1 + (eax_9 << 2) + 0x90)
                uint32_t edi_3
                
                if (ecx_8 == 0)
                    eax_10 = 9
                label_72dff7:
                    eax_9 = sub_72db60(eax_10, edx_1, &var_3c, esi_1, ebx_1, eax_10)
                    edi_3 = eax_9
                    
                    if (edi_3 s>= 0)
                        edx_1 = var_34
                        esi_1 = var_30
                        var_c_1 = edx_1
                        goto label_72e014
                else
                    edi_3 = zx.d(*(eax_9 + ebx_1 + 0x490))
                    esi_1 -= ecx_8
                label_72e014:
                    int32_t ebx_3 = edi_3 s>> 4
                    int32_t edi_4 = edi_3 & 0xf
                    int32_t eax_16
                    
                    if (edi_4 != 0)
                        int32_t eax_14 = var_8_1 + ebx_3
                        int32_t var_8_2 = eax_14
                        
                        if (esi_1 s>= edi_4)
                            goto label_72e049
                        
                        if (sub_72da40(eax_14, edx_1, &var_3c, esi_1, edi_4).b != 0)
                            edx_1 = var_34
                            esi_1 = var_30
                            eax_14 = var_8_2
                            var_c_1 = edx_1
                        label_72e049:
                            int32_t ebx_4 = *((edi_4 << 2) + &data_ade5f0)
                            esi_1 -= edi_4
                            int32_t edx_3 = edx_1 s>> esi_1.b & ebx_4
                            
                            if (edx_3 s<= *((edi_4 << 2) + &data_ade5ec))
                                edx_3 -= ebx_4
                            
                            edx_3.w <<= ecx_3
                            *(eax_5 + (*(ecx_4 + (eax_14 << 2)) << 1)) = edx_3.w
                            eax_16 = var_8_2
                            goto label_72e085
                    else if (ebx_3 != 0xf)
                        if (ebx_3 == 0)
                            break
                        
                        if (esi_1 s>= ebx_3)
                            goto label_72e0f3
                        
                        if (sub_72da40(eax_9, edx_1, &var_3c, esi_1, ebx_3).b != 0)
                            edx_1 = var_34
                            esi_1 = var_30
                            var_c_1 = edx_1
                        label_72e0f3:
                            esi_1 -= ebx_3
                            edi_1 = (1 << ebx_3.b) - 1
                                + (edx_1 s>> esi_1.b & *((ebx_3 << 2) + &data_ade5f0))
                            break
                    else
                        eax_16 = var_8_1 + ebx_3
                    label_72e085:
                        eax_8 = eax_16 + 1
                        var_8_1 = eax_8
                        
                        if (eax_8 s> ecx_2)
                            break
                        
                        edx_1 = var_c_1
                        continue
            else if (sub_72da40(eax_8, edx_1, &var_3c, esi_1, 0).b != 0)
                esi_1 = var_30
                edx_1 = var_34
                var_c_1 = edx_1
                
                if (esi_1 s>= 8)
                    goto label_72dfc6
                
                ebx_1 = eax_6
                eax_10 = 1
                goto label_72dff7
            eax_9.b = 0
            return eax_9
    
    **(arg1 + 0x18) = var_3c
    *(*(arg1 + 0x18) + 4) = eax_3
    *(ebx + 8) = var_c_1
    *(ebx + 0xc) = esi_1
    *(ebx + 0x10) = edi_1

*(ebx + 0x28) -= 1
eax.b = 1
return eax
