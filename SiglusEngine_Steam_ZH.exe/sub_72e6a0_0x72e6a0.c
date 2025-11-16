// 函数: sub_72e6a0
// 地址: 0x72e6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* ecx = arg1
void* var_34 = ecx
void* ebx = *(ecx + 0x1b0)
int32_t eax_2

if (*(ecx + 0xfc) != 0 && *(ebx + 0x28) == 0)
    eax_2 = sub_72dc30(ecx)
    
    if (eax_2.b == 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_2
    
    ecx = var_34

if (*(ebx + 0x24) == 0)
    int32_t eax_3 = *(ecx + 0x18c)
    int128_t xmm0_1 = *(ebx + 0x10)
    int32_t esi_1 = *(ebx + 8)
    int32_t eax_4 = *(ecx + 0x190)
    int32_t* eax_5 = *(ecx + 0x18)
    void* var_20_1 = ecx
    int32_t var_4c_1 = 0
    int32_t edx_1 = *eax_5
    int32_t edi_1 = eax_5[1]
    eax_2 = *(ebx + 0xc)
    int32_t ebx_1 = *(ebx + 0x20)
    bool cond:2_1 = *(var_34 + 0x14c) s<= 0
    int32_t ecx_4 = 0
    int32_t var_30 = edx_1
    int128_t var_1c = xmm0_1
    
    if (not(cond:2_1))
        void* var_3c_1 = var_34 + 0x150
        void* edx_5 = ebx + 0x88
        void* var_40_1 = edx_5
        
        while (true)
            int32_t edi_2 = *(edx_5 - 0x28)
            int16_t* ecx_5 = *(arg2 + (ecx_4 << 2))
            int32_t var_28
            int32_t var_24
            int32_t ecx_7
            
            if (eax_2 s>= 8)
            label_72e7a9:
                uint32_t edx_9 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                int32_t ecx_9 = *(edi_2 + (edx_9 << 2) + 0x90)
                uint32_t ebx_3
                
                if (ecx_9 == 0)
                    ecx_7 = 9
                label_72e7d8:
                    ebx_3 = sub_72db60(eax_2, esi_1, &var_30, eax_2, edi_2, ecx_7)
                    
                    if (ebx_3 s>= 0)
                        esi_1 = var_28
                        eax_2 = var_24
                        goto label_72e7ee
                else
                    ebx_3 = zx.d(*(edx_9 + edi_2 + 0x490))
                    eax_2 -= ecx_9
                label_72e7ee:
                    int32_t edi_3 = 1
                    int32_t ecx_11 = *var_40_1
                    int32_t ecx_12 = *(var_40_1 + 0x28)
                    
                    if (ecx_12 == 0)
                        if (ebx_3 == 0)
                            goto label_72e978
                        
                        if (eax_2 s>= ebx_3)
                            goto label_72e973
                        
                        if (sub_72da40(eax_2, esi_1, &var_30, eax_2, ebx_3).b != 0)
                            esi_1 = var_28
                            eax_2 = var_24
                        label_72e973:
                            eax_2 -= ebx_3
                        label_72e978:
                            
                            if (edi_3 s<= eax_4)
                                int32_t edi_5 = edi_3
                                
                                do
                                    int32_t ecx_33
                                    int32_t ebx_10
                                    
                                    if (eax_2 s< 8)
                                        if (sub_72da40(eax_2, esi_1, &var_30, eax_2, 0).b == 0)
                                            goto label_72eaae
                                        
                                        eax_2 = var_24
                                        esi_1 = var_28
                                        
                                        if (eax_2 s>= 8)
                                            goto label_72e9b2
                                        
                                        ebx_10 = ecx_11
                                        ecx_33 = 1
                                        goto label_72e9eb
                                    
                                label_72e9b2:
                                    ebx_10 = ecx_11
                                    uint32_t edx_28 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                                    int32_t ecx_35 = *(ebx_10 + (edx_28 << 2) + 0x90)
                                    uint32_t ebx_11
                                    
                                    if (ecx_35 == 0)
                                        ecx_33 = 9
                                    label_72e9eb:
                                        ebx_11 =
                                            sub_72db60(eax_2, esi_1, &var_30, eax_2, ebx_10, ecx_33)
                                        
                                        if (ebx_11 s< 0)
                                            goto label_72eaae
                                        
                                        esi_1 = var_28
                                        eax_2 = var_24
                                    else
                                        ebx_11 = zx.d(*(edx_28 + ebx_10 + 0x490))
                                        eax_2 -= ecx_35
                                    
                                    int32_t ecx_38 = ebx_11 s>> 4
                                    int32_t ebx_12 = ebx_11 & 0xf
                                    int32_t edi_6
                                    
                                    if (ebx_12 == 0)
                                        if (ecx_38 != 0xf)
                                            break
                                        
                                        edi_6 = edi_5 + ecx_38
                                    else
                                        edi_6 = edi_5 + ecx_38
                                        
                                        if (eax_2 s< ebx_12)
                                            if (sub_72da40(eax_2, esi_1, &var_30, eax_2, ebx_12).b
                                                    == 0)
                                                goto label_72eaae
                                            
                                            esi_1 = var_28
                                            eax_2 = var_24
                                        
                                        eax_2 -= ebx_12
                                    
                                    edi_5 = edi_6 + 1
                                while (edi_5 s<= eax_4)
                            
                        label_72ea46:
                            ecx_4 = var_4c_1 + 1
                            var_3c_1 += 4
                            edx_5 = var_40_1 + 4
                            var_4c_1 = ecx_4
                            var_40_1 = edx_5
                            
                            if (ecx_4 s>= *(var_34 + 0x14c))
                                break
                            
                            continue
                    else
                        if (ebx_3 == 0)
                        label_72e84b:
                            int32_t ecx_17 = *var_3c_1
                            *(&var_1c:4 + (ecx_17 << 2)) += ebx_3
                            *ecx_5 = (*(&var_1c:4 + (ecx_17 << 2))).w
                            
                            if (ecx_12 s> 1)
                                do
                                    int32_t ecx_20
                                    int32_t ebx_6
                                    
                                    if (eax_2 s< 8)
                                        if (sub_72da40(eax_2, esi_1, &var_30, eax_2, 0).b == 0)
                                            goto label_72eaae
                                        
                                        eax_2 = var_24
                                        esi_1 = var_28
                                        
                                        if (eax_2 s>= 8)
                                            goto label_72e893
                                        
                                        ebx_6 = ecx_11
                                        ecx_20 = 1
                                        goto label_72e8cc
                                    
                                label_72e893:
                                    ebx_6 = ecx_11
                                    uint32_t edx_18 = zx.d((esi_1 s>> (eax_2.b - 8)).b)
                                    int32_t ecx_22 = *(ebx_6 + (edx_18 << 2) + 0x90)
                                    uint32_t ebx_7
                                    
                                    if (ecx_22 == 0)
                                        ecx_20 = 9
                                    label_72e8cc:
                                        ebx_7 =
                                            sub_72db60(eax_2, esi_1, &var_30, eax_2, ebx_6, ecx_20)
                                        
                                        if (ebx_7 s< 0)
                                            goto label_72eaae
                                        
                                        esi_1 = var_28
                                        eax_2 = var_24
                                    else
                                        ebx_7 = zx.d(*(edx_18 + ebx_6 + 0x490))
                                        eax_2 -= ecx_22
                                    
                                    int32_t ecx_25 = ebx_7 s>> 4
                                    int32_t ebx_8 = ebx_7 & 0xf
                                    int32_t edi_4
                                    
                                    if (ebx_8 == 0)
                                        if (ecx_25 != 0xf)
                                            goto label_72ea46
                                        
                                        edi_4 = edi_3 + ecx_25
                                    else
                                        edi_4 = edi_3 + ecx_25
                                        
                                        if (eax_2 s< ebx_8)
                                            if (sub_72da40(eax_2, esi_1, &var_30, eax_2, ebx_8).b
                                                    == 0)
                                                goto label_72eaae
                                            
                                            esi_1 = var_28
                                            eax_2 = var_24
                                        
                                        eax_2 -= ebx_8
                                        int32_t ecx_28 = *((ebx_8 << 2) + &data_ade5f0)
                                        int32_t edx_23 = esi_1 s>> eax_2.b & ecx_28
                                        
                                        if (edx_23 s<= *((ebx_8 << 2) + &data_ade5ec))
                                            edx_23 -= ecx_28
                                        
                                        ecx_5[*(eax_3 + (edi_4 << 2))] = edx_23.w
                                    
                                    edi_3 = edi_4 + 1
                                while (edi_3 s< ecx_12)
                            
                            goto label_72e978
                        
                        if (eax_2 s>= ebx_3)
                            goto label_72e82b
                        
                        if (sub_72da40(eax_2, esi_1, &var_30, eax_2, ebx_3).b != 0)
                            esi_1 = var_28
                            eax_2 = var_24
                        label_72e82b:
                            eax_2 -= ebx_3
                            int32_t* edx_13 = (ebx_3 << 2) + &data_ade5f0
                            int32_t ecx_15 = *edx_13
                            ebx_3 = esi_1 s>> eax_2.b & ecx_15
                            
                            if (ebx_3 s<= edx_13[-1])
                                ebx_3 -= ecx_15
                            
                            goto label_72e84b
            else if (sub_72da40(eax_2, esi_1, &var_30, eax_2, 0).b != 0)
                eax_2 = var_24
                esi_1 = var_28
                
                if (eax_2 s>= 8)
                    goto label_72e7a9
                
                ecx_7 = 1
                goto label_72e7d8
        label_72eaae:
            uint32_t eax_6
            eax_6.b = 0
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_6
        
        edx_1 = var_30
        xmm0_1 = var_1c
    
    **(var_34 + 0x18) = edx_1
    *(*(var_34 + 0x18) + 4) = edi_1
    void* ecx_45 = ebx
    *(ecx_45 + 0x10) = xmm0_1
    *(ecx_45 + 0x20) = ebx_1
    ebx = ecx_45
    *(ecx_45 + 8) = esi_1
    *(ecx_45 + 0xc) = eax_2

*(ebx + 0x28) -= 1
eax_2.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_2
