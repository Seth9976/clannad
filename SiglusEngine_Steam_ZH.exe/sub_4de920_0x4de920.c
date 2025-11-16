// 函数: sub_4de920
// 地址: 0x4de920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t edi
int32_t var_4c = edi
void* edi_1 = *(esi + 0x1c0)

if (*(esi + 0x118) != 0 && *(edi_1 + 0x24) == 0)
    int32_t result = sub_4de8b0(esi)
    
    if (result == 0)
        return result

if (*(edi_1 + 8) == 0)
    int32_t* eax_3 = *(esi + 0x18)
    int32_t edx_1 = eax_3[1]
    int32_t eax_4 = *(edi_1 + 0x10)
    int32_t var_44 = *eax_3
    int32_t var_30 = *(edi_1 + 0x14)
    int32_t ebx_2 = *(edi_1 + 0x18)
    int32_t ebx_3 = *(edi_1 + 0x1c)
    int32_t ecx_3 = *(edi_1 + 0x20)
    int32_t edx_2 = *(edi_1 + 0xc)
    void* var_34_1 = esi
    int32_t var_10_1 = 0
    
    if (*(esi + 0x168) s> 0)
        void* ecx_5 = edi_1 + 0x70
        void* var_14_1 = esi + 0x16c
        void* var_8_1 = ecx_5
        
        while (true)
            int16_t* esi_3 = *(arg2 + (var_10_1 << 2))
            void* ebx_4 = *ecx_5
            void* esi_4 = *(ecx_5 - 0x28)
            void* var_c_1 = ebx_4
            int32_t var_3c
            int32_t var_38
            int32_t ecx_6
            
            if (eax_4 s< 8)
                if (sub_4de6a0(&var_44, edx_2, eax_4, 0) == 0)
                    return 0
                
                eax_4 = var_38
                edx_2 = var_3c
                
                if (eax_4 s>= 8)
                    goto label_4dea07
                
                ecx_6 = 1
                goto label_4dea36
            
        label_4dea07:
            uint32_t edi_7 = zx.d((edx_2 s>> (eax_4.b - 8)).b)
            int32_t ecx_8 = *(esi_4 + (edi_7 << 2) + 0x90)
            uint32_t edi_8
            
            if (ecx_8 == 0)
                ecx_6 = 9
            label_4dea36:
                edi_8 = sub_4de7c0(&var_44, edx_2, eax_4, esi_4, ecx_6)
                
                if (edi_8 s< 0)
                    return 0
                
                edx_2 = var_3c
                eax_4 = var_38
            else
                edi_8 = zx.d(*(edi_7 + esi_4 + 0x490))
                eax_4 -= ecx_8
            
            if (edi_8 != 0)
                if (eax_4 s< edi_8)
                    if (sub_4de6a0(&var_44, edx_2, eax_4, edi_8) == 0)
                        return 0
                    
                    edx_2 = var_3c
                    eax_4 = var_38
                
                eax_4 -= edi_8
                uint32_t esi_7 = ((1 << edi_8.b) - 1) & edx_2 s>> eax_4.b
                ebx_4 = var_c_1
                
                if (esi_7 s>= *((edi_8 << 2) + &data_acdd60))
                    edi_8 = esi_7
                else
                    edi_8 = *((edi_8 << 2) + &data_acdda0) + esi_7
            
            if (*(var_8_1 + 0x28) != 0)
                int32_t ecx_14 = *var_14_1
                (&var_30)[ecx_14] += edi_8
                int32_t __saved_ebp
                *esi_3 = ((&__saved_ebp)[ecx_14 - 0xb]).w
            
            int32_t i = 1
            
            if (*(var_8_1 + 0x50) == 0)
                do
                    int32_t ecx_27
                    
                    if (eax_4 s< 8)
                        if (sub_4de6a0(&var_44, edx_2, eax_4, 0) == 0)
                            return 0
                        
                        eax_4 = var_38
                        edx_2 = var_3c
                        
                        if (eax_4 s>= 8)
                            goto label_4debf4
                        
                        ecx_27 = 1
                        goto label_4dec23
                    
                label_4debf4:
                    uint32_t edi_20 = zx.d((edx_2 s>> (eax_4.b - 8)).b)
                    int32_t ecx_29 = *(ebx_4 + (edi_20 << 2) + 0x90)
                    uint32_t edi_21
                    
                    if (ecx_29 == 0)
                        ecx_27 = 9
                    label_4dec23:
                        edi_21 = sub_4de7c0(&var_44, edx_2, eax_4, ebx_4, ecx_27)
                        
                        if (edi_21 s< 0)
                            return 0
                        
                        edx_2 = var_3c
                        eax_4 = var_38
                    else
                        edi_21 = zx.d(*(edi_20 + ebx_4 + 0x490))
                        eax_4 -= ecx_29
                    
                    int32_t ecx_31 = edi_21 s>> 4
                    int32_t edi_22 = edi_21 & 0xf
                    int32_t esi_14
                    
                    if (edi_22 == 0)
                        if (ecx_31 != 0xf)
                            break
                        
                        esi_14 = i + ecx_31
                    else
                        esi_14 = i + ecx_31
                        
                        if (eax_4 s< edi_22)
                            if (sub_4de6a0(&var_44, edx_2, eax_4, edi_22) == 0)
                                return 0
                            
                            edx_2 = var_3c
                            eax_4 = var_38
                        
                        eax_4 -= edi_22
                    
                    i = esi_14 + 1
                while (i s< 0x40)
            else
                do
                    int32_t ecx_18
                    
                    if (eax_4 s< 8)
                        if (sub_4de6a0(&var_44, edx_2, eax_4, 0) == 0)
                            return 0
                        
                        eax_4 = var_38
                        edx_2 = var_3c
                        
                        if (eax_4 s>= 8)
                            goto label_4deaf9
                        
                        ecx_18 = 1
                        goto label_4deb28
                    
                label_4deaf9:
                    uint32_t edi_13 = zx.d((edx_2 s>> (eax_4.b - 8)).b)
                    int32_t ecx_20 = *(ebx_4 + (edi_13 << 2) + 0x90)
                    uint32_t edi_14
                    
                    if (ecx_20 == 0)
                        ecx_18 = 9
                    label_4deb28:
                        edi_14 = sub_4de7c0(&var_44, edx_2, eax_4, ebx_4, ecx_18)
                        
                        if (edi_14 s< 0)
                            return 0
                        
                        edx_2 = var_3c
                        eax_4 = var_38
                    else
                        edi_14 = zx.d(*(edi_13 + ebx_4 + 0x490))
                        eax_4 -= ecx_20
                    
                    int32_t ecx_22 = edi_14 s>> 4
                    int32_t edi_15 = edi_14 & 0xf
                    int32_t esi_13
                    
                    if (edi_15 == 0)
                        if (ecx_22 != 0xf)
                            break
                        
                        esi_13 = i + ecx_22
                    else
                        if (eax_4 s< edi_15)
                            if (sub_4de6a0(&var_44, edx_2, eax_4, edi_15) == 0)
                                return 0
                            
                            edx_2 = var_3c
                            eax_4 = var_38
                        
                        eax_4 -= edi_15
                        int32_t esi_12 = ((1 << edi_15.b) - 1) & edx_2 s>> eax_4.b
                        int16_t edi_17
                        
                        if (esi_12 s>= *((edi_15 << 2) + &data_acdd60))
                            edi_17 = esi_12.w
                        else
                            edi_17 = (*((edi_15 << 2) + &data_acdda0)).w + esi_12.w
                        
                        esi_13 = i + ecx_22
                        esi_3[*((esi_13 << 2) + &data_ac7e28)] = edi_17
                        ebx_4 = var_c_1
                    
                    i = esi_13 + 1
                while (i s< 0x40)
            
            esi = arg1
            var_8_1 += 4
            bool cond:10_1 = var_10_1 + 1 s< *(esi + 0x168)
            var_10_1 += 1
            var_14_1 += 4
            
            if (not(cond:10_1))
                break
            
            ecx_5 = var_8_1
    
    int32_t* ecx_34 = *(esi + 0x18)
    *ecx_34 = var_44
    *(edi_1 + 0xc) = edx_2
    *(edi_1 + 0x14) = var_30
    *(edi_1 + 0x10) = eax_4
    ecx_34[1] = edx_1
    *(edi_1 + 0x18) = ebx_2
    *(edi_1 + 0x1c) = ebx_3
    *(edi_1 + 0x20) = ecx_3

*(edi_1 + 0x24) -= 1
return 1
