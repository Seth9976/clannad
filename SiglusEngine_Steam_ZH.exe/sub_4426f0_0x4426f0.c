// 函数: sub_4426f0
// 地址: 0x4426f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi
int32_t result

if (*(arg1 + 0xb4) == 0)
    int32_t* ecx_6 = *(*(arg1 + 0xb0) + (arg2[5] << 2))
    void* eax_12 = ecx_6[0xd]
    arg2 = ecx_6
    
    if (eax_12 != 0)
        int32_t* ebx_2 = *(eax_12 + 0x18)
        
        if ((*(arg1 + 0x119) & 1) != 0)
            while (true)
                ebx_2 = ebx_2[7]
                int32_t eax_16 = zx.d(ebx_2[5].w) * 0x64
                int32_t edi_4 = zx.d(*(ebx_2 + 0x16)) * 0x64
                *ebx_2 = 1
                int32_t* edi_5 = edi_4 + *(eax_16 + *(arg1 + 0x2c) + 4)
                bool cond:3_1 = (edi_5[0xc].b & 2) != 0
                *edi_5 = 1
                
                if (not(cond:3_1))
                    int32_t edx_5
                    
                    if (*(arg1 + 0x10c) u>= *(arg1 + 0x110))
                        result, edx_5 = sub_442686(arg1)
                        
                        if (result s< 0)
                            return result
                    
                    edx_5.w = ebx_2[5].w
                    *(*(arg1 + 0x108) + (*(arg1 + 0x10c) << 2)) = edx_5.w
                    edx_5.w = *(ebx_2 + 0x16)
                    *(*(arg1 + 0x108) + (*(arg1 + 0x10c) << 2) + 2) = edx_5.w
                    edi_5[0xc] |= 2
                    *(arg1 + 0x10c) += 1
                    ecx_6 = arg2
                
                if (ebx_2[7] == ecx_6[0xd])
                    return 0
        else
            int32_t* ebx_3 = &ebx_2[7]
            
            do
                int32_t* eax_13 = *ebx_3
                int32_t edx_3 = zx.d(eax_13[5].w) * 0x64
                int32_t* ebx_5 = zx.d(*(eax_13 + 0x16)) * 0x64
                *eax_13 = 1
                *(ebx_5 + *(edx_3 + *(arg1 + 0x2c) + 4)) = 1
                ebx_3 = &eax_13[7]
            while (*ebx_3 != ecx_6[0xd])
else
    char* eax = arg2[5]
    
    if (eax u< *(arg1 + 0xac))
        eax[*(arg1 + 0xbc)] = 1
        int32_t* edi_1 = *(*(arg1 + 0xb8) + (arg2[5] << 2))
        
        if (edi_1 != 0)
            if ((*(arg1 + 0x119) & 1) != 0)
                while (true)
                    int32_t* ebx_1 = *edi_1
                    
                    if (ebx_1 == 0)
                        break
                    
                    int32_t* eax_5 = ebx_1[2]
                    *ebx_1 = 1
                    bool cond:4_1 = (eax_5[0xc].b & 2) != 0
                    *eax_5 = 1
                    
                    if (not(cond:4_1))
                        int32_t edx_1
                        
                        if (*(arg1 + 0x10c) u>= *(arg1 + 0x110))
                            result, edx_1 = sub_442686(arg1)
                            
                            if (result s< 0)
                                return result
                        
                        edx_1.w = ebx_1[5].w
                        *(*(arg1 + 0x108) + (*(arg1 + 0x10c) << 2)) = edx_1.w
                        edx_1.w = *(ebx_1 + 0x16)
                        *(*(arg1 + 0x108) + (*(arg1 + 0x10c) << 2) + 2) = edx_1.w
                        eax_5[0xc] |= 2
                        *(arg1 + 0x10c) += 1
                    
                    edi_1 = &edi_1[1]
            else
                while (true)
                    int32_t* eax_4 = *edi_1
                    
                    if (eax_4 == 0)
                        break
                    
                    *eax_4 = 1
                    **(*edi_1 + 8) = 1
                    edi_1 = &edi_1[1]
return 0
