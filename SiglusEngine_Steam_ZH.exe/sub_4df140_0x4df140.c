// 函数: sub_4df140
// 地址: 0x4df140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
void* edi_1 = arg1
int32_t eax = *(edi_1 + 0x198)
void* esi = *(edi_1 + 0x1c0)
char ecx = (*(edi_1 + 0x1a0)).b

if (*(edi_1 + 0x118) != 0 && *(esi + 0x28) == 0 && sub_4deea0() == 0)
    return 0

if (*(esi + 8) == 0)
    int32_t ecx_1 = *(esi + 0x14)
    int32_t var_8_1 = ecx_1
    
    if (ecx_1 u<= 0)
        int32_t* eax_5 = *(edi_1 + 0x18)
        void* var_20_1 = edi_1
        int32_t var_30 = *eax_5
        int32_t edx_3 = *arg2
        int32_t eax_6 = eax_5[1]
        int32_t ebx_2 = *(esi + 0xc)
        int32_t eax_7 = *(esi + 0x10)
        void* edx_4 = *(esi + 0x3c)
        arg2 = *(edi_1 + 0x194)
        
        if (arg2 s<= eax)
            bool cond:4_1
            
            do
                int32_t var_28
                int32_t var_24
                int32_t ecx_2
                void* esi_1
                
                if (eax_7 s< 8)
                    if (sub_4de6a0(&var_30, ebx_2, eax_7, 0) == 0)
                        return 0
                    
                    eax_7 = var_24
                    ebx_2 = var_28
                    
                    if (eax_7 s>= 8)
                        goto label_4df20f
                    
                    esi_1 = edx_4
                    ecx_2 = 1
                    goto label_4df248
                
            label_4df20f:
                esi_1 = edx_4
                uint32_t edx_9 = zx.d((ebx_2 s>> (eax_7.b - 8)).b)
                int32_t ecx_4 = *(esi_1 + (edx_9 << 2) + 0x90)
                uint32_t esi_2
                
                if (ecx_4 == 0)
                    ecx_2 = 9
                label_4df248:
                    esi_2 = sub_4de7c0(&var_30, ebx_2, eax_7, esi_1, ecx_2)
                    
                    if (esi_2 s< 0)
                        return 0
                    
                    ebx_2 = var_28
                    eax_7 = var_24
                else
                    esi_2 = zx.d(*(edx_9 + esi_1 + 0x490))
                    eax_7 -= ecx_4
                
                int32_t edi_4 = esi_2 s>> 4
                int32_t esi_3 = esi_2 & 0xf
                
                if (esi_3 == 0)
                    if (edi_4 != 0xf)
                        int32_t esi_7 = 1 << edi_4.b
                        
                        if (edi_4 != 0)
                            if (eax_7 s< edi_4)
                                if (sub_4de6a0(&var_30, ebx_2, eax_7, edi_4) == 0)
                                    return 0
                                
                                ebx_2 = var_28
                                eax_7 = var_24
                            
                            eax_7 -= edi_4
                            esi_7 += ebx_2 s>> eax_7.b & (esi_7 - 1)
                        
                        var_8_1 = esi_7 - 1
                        break
                    
                    arg2 += edi_4
                else
                    arg2 += edi_4
                    
                    if (eax_7 s< esi_3)
                        if (sub_4de6a0(&var_30, ebx_2, eax_7, esi_3) == 0)
                            return 0
                        
                        ebx_2 = var_28
                        eax_7 = var_24
                    
                    eax_7 -= esi_3
                    int32_t edx_14 = ((1 << esi_3.b) - 1) & ebx_2 s>> eax_7.b
                    int32_t esi_5
                    
                    if (edx_14 s>= *((esi_3 << 2) + &data_acdde0))
                        esi_5 = edx_14
                    else
                        esi_5 = *((esi_3 << 2) + &data_acde20) + edx_14
                    
                    *(edx_3 + (*((arg2 << 2) + &data_ac7e28) << 1)) = (esi_5 << ecx).w
                
                cond:4_1 = arg2 + 1 s<= eax
                arg2 += 1
            while (cond:4_1)
            edi_1 = arg1
            ecx_1 = var_8_1
        
        int32_t* edi_8 = *(edi_1 + 0x18)
        *edi_8 = var_30
        edi_8[1] = eax_6
        *(esi + 0xc) = ebx_2
        *(esi + 0x10) = eax_7
    else
        ecx_1 -= 1
    
    *(esi + 0x14) = ecx_1

*(esi + 0x28) -= 1
return 1
