// 函数: sub_72eac0
// 地址: 0x72eac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = arg1
void* var_34 = eax_2
void* ecx_1 = *(eax_2 + 0x1b0)
void* var_44 = ecx_1

if (*(eax_2 + 0xfc) != 0 && *(ecx_1 + 0x28) == 0)
    char eax_3 = sub_72dc30(eax_2)
    
    if (eax_3 == 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    eax_2 = var_34
    ecx_1 = var_44

if (*(ecx_1 + 0x24) == 0)
    int128_t xmm0_1 = *(ecx_1 + 0x10)
    int32_t ebx_1 = *(ecx_1 + 0x20)
    int32_t edi_1 = *(ecx_1 + 8)
    void* var_20_1 = eax_2
    int32_t* eax_4 = *(eax_2 + 0x18)
    int128_t var_1c = xmm0_1
    int32_t edx_1 = *eax_4
    int32_t esi_1 = eax_4[1]
    eax_2 = *(ecx_1 + 0xc)
    int32_t var_50_1 = 0
    int32_t var_30 = edx_1
    int32_t ecx_6 = 0
    
    if (*(var_34 + 0x14c) s> 0)
        void* var_3c_1 = var_34 + 0x150
        void* edx_5 = var_44 + 0x88
        void* var_40_1 = edx_5
        
        while (true)
            int32_t esi_2 = *(edx_5 - 0x28)
            int16_t* ecx_7 = *(arg2 + (ecx_6 << 2))
            int32_t var_28
            void* var_24
            int32_t ecx_9
            
            if (eax_2 s>= 8)
            label_72ebc2:
                uint32_t edx_9 = zx.d((edi_1 s>> (eax_2.b - 8)).b)
                int32_t ecx_11 = *(esi_2 + (edx_9 << 2) + 0x90)
                uint32_t ebx_3
                
                if (ecx_11 == 0)
                    ecx_9 = 9
                label_72ebf1:
                    ebx_3 = sub_72db60(eax_2, edi_1, &var_30, eax_2, esi_2, ecx_9)
                    
                    if (ebx_3 s>= 0)
                        edi_1 = var_28
                        eax_2 = var_24
                        goto label_72ec07
                else
                    ebx_3 = zx.d(*(edx_9 + esi_2 + 0x490))
                    eax_2 -= ecx_11
                label_72ec07:
                    int32_t i = 1
                    int32_t ecx_13 = *var_40_1
                    int32_t ecx_14 = *(var_40_1 + 0x28)
                    
                    if (ecx_14 == 0)
                        if (ebx_3 == 0)
                            goto label_72ee5a
                        
                        if (eax_2 s>= ebx_3)
                            goto label_72ed9c
                        
                        if (sub_72da40(eax_2, edi_1, &var_30, eax_2, ebx_3).b != 0)
                            edi_1 = var_28
                            eax_2 = var_24
                        label_72ed9c:
                            eax_2 -= ebx_3
                        label_72ee5a:
                            
                            do
                                int32_t ecx_34
                                int32_t ebx_11
                                
                                if (eax_2 s< 8)
                                    if (sub_72da40(eax_2, edi_1, &var_30, eax_2, 0).b == 0)
                                        goto label_72eecc
                                    
                                    eax_2 = var_24
                                    edi_1 = var_28
                                    
                                    if (eax_2 s>= 8)
                                        goto label_72edd2
                                    
                                    ebx_11 = ecx_13
                                    ecx_34 = 1
                                    goto label_72ee0b
                                
                            label_72edd2:
                                ebx_11 = ecx_13
                                uint32_t edx_28 = zx.d((edi_1 s>> (eax_2.b - 8)).b)
                                int32_t ecx_36 = *(ebx_11 + (edx_28 << 2) + 0x90)
                                uint32_t ebx_12
                                
                                if (ecx_36 == 0)
                                    ecx_34 = 9
                                label_72ee0b:
                                    ebx_12 =
                                        sub_72db60(eax_2, edi_1, &var_30, eax_2, ebx_11, ecx_34)
                                    
                                    if (ebx_12 s< 0)
                                        goto label_72eecc
                                    
                                    edi_1 = var_28
                                    eax_2 = var_24
                                else
                                    ebx_12 = zx.d(*(edx_28 + ebx_11 + 0x490))
                                    eax_2 -= ecx_36
                                
                                int32_t ecx_39 = ebx_12 s>> 4
                                int32_t ebx_13 = ebx_12 & 0xf
                                int32_t esi_4
                                
                                if (ebx_13 == 0)
                                    if (ecx_39 != 0xf)
                                        break
                                    
                                    esi_4 = i + ecx_39
                                else
                                    esi_4 = i + ecx_39
                                    
                                    if (eax_2 s< ebx_13)
                                        if (sub_72da40(eax_2, edi_1, &var_30, eax_2, ebx_13).b == 0)
                                            goto label_72eecc
                                        
                                        edi_1 = var_28
                                        eax_2 = var_24
                                    
                                    eax_2 -= ebx_13
                                
                                i = esi_4 + 1
                            while (i s< 0x40)
                            
                        label_72ee66:
                            ecx_6 = var_50_1 + 1
                            var_3c_1 += 4
                            edx_5 = var_40_1 + 4
                            var_50_1 = ecx_6
                            var_40_1 = edx_5
                            
                            if (ecx_6 s>= *(var_34 + 0x14c))
                                break
                            
                            continue
                    else
                        if (ebx_3 == 0)
                        label_72ec64:
                            int32_t ecx_19 = *var_3c_1
                            *(&var_1c:4 + (ecx_19 << 2)) += ebx_3
                            *ecx_7 = (*(&var_1c:4 + (ecx_19 << 2))).w
                            
                            if (ecx_14 s> 1)
                                while (true)
                                    int32_t ecx_22
                                    int32_t ebx_7
                                    
                                    if (eax_2 s< 8)
                                        if (sub_72da40(eax_2, edi_1, &var_30, eax_2, 0).b == 0)
                                            goto label_72eecc
                                        
                                        eax_2 = var_24
                                        edi_1 = var_28
                                        
                                        if (eax_2 s>= 8)
                                            goto label_72ecb2
                                        
                                        ebx_7 = ecx_13
                                        ecx_22 = 1
                                        goto label_72eceb
                                    
                                label_72ecb2:
                                    ebx_7 = ecx_13
                                    uint32_t edx_18 = zx.d((edi_1 s>> (eax_2.b - 8)).b)
                                    int32_t ecx_24 = *(ebx_7 + (edx_18 << 2) + 0x90)
                                    uint32_t ebx_8
                                    
                                    if (ecx_24 == 0)
                                        ecx_22 = 9
                                    label_72eceb:
                                        ebx_8 =
                                            sub_72db60(eax_2, edi_1, &var_30, eax_2, ebx_7, ecx_22)
                                        
                                        if (ebx_8 s< 0)
                                            goto label_72eecc
                                        
                                        edi_1 = var_28
                                        eax_2 = var_24
                                    else
                                        ebx_8 = zx.d(*(edx_18 + ebx_7 + 0x490))
                                        eax_2 -= ecx_24
                                    
                                    int32_t ecx_27 = ebx_8 s>> 4
                                    int32_t ebx_9 = ebx_8 & 0xf
                                    int32_t esi_3
                                    
                                    if (ebx_9 == 0)
                                        if (ecx_27 != 0xf)
                                            goto label_72ee66
                                        
                                        esi_3 = i + ecx_27
                                    else
                                        esi_3 = i + ecx_27
                                        
                                        if (eax_2 s< ebx_9)
                                            if (sub_72da40(eax_2, edi_1, &var_30, eax_2, ebx_9).b
                                                    == 0)
                                                goto label_72eecc
                                            
                                            edi_1 = var_28
                                            eax_2 = var_24
                                        
                                        eax_2 -= ebx_9
                                        int32_t ecx_30 = *((ebx_9 << 2) + &data_ade5f0)
                                        int32_t edx_23 = edi_1 s>> eax_2.b & ecx_30
                                        
                                        if (edx_23 s<= *((ebx_9 << 2) + &data_ade5ec))
                                            edx_23 -= ecx_30
                                        
                                        ecx_7[*((esi_3 << 2) + &data_ade9e0)] = edx_23.w
                                    
                                    i = esi_3 + 1
                                    
                                    if (i s>= ecx_14)
                                        if (i s>= 0x40)
                                            goto label_72ee66
                                        
                                        break
                            
                            goto label_72ee5a
                        
                        if (eax_2 s>= ebx_3)
                            goto label_72ec44
                        
                        if (sub_72da40(eax_2, edi_1, &var_30, eax_2, ebx_3).b != 0)
                            edi_1 = var_28
                            eax_2 = var_24
                        label_72ec44:
                            eax_2 -= ebx_3
                            int32_t* edx_13 = (ebx_3 << 2) + &data_ade5f0
                            int32_t ecx_17 = *edx_13
                            ebx_3 = edi_1 s>> eax_2.b & ecx_17
                            
                            if (ebx_3 s<= edx_13[-1])
                                ebx_3 -= ecx_17
                            
                            goto label_72ec64
            else if (sub_72da40(eax_2, edi_1, &var_30, eax_2, 0).b != 0)
                eax_2 = var_24
                edi_1 = var_28
                
                if (eax_2 s>= 8)
                    goto label_72ebc2
                
                ecx_9 = 1
                goto label_72ebf1
        label_72eecc:
            uint32_t eax_5
            eax_5.b = 0
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_5
        
        edx_1 = var_30
        xmm0_1 = var_1c
    
    **(var_34 + 0x18) = edx_1
    *(*(var_34 + 0x18) + 4) = esi_1
    ecx_1 = var_44
    *(ecx_1 + 0x10) = xmm0_1
    *(ecx_1 + 8) = edi_1
    *(ecx_1 + 0xc) = eax_2
    *(ecx_1 + 0x20) = ebx_1

*(ecx_1 + 0x28) -= 1
eax_2.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
