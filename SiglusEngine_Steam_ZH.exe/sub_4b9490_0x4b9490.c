// 函数: sub_4b9490
// 地址: 0x4b9490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_14 = edi
void* esi = arg1
void* var_8_1 = esi

if (arg6 == 0)
    int32_t eax_1 = 0
    arg6 = 0
    
    if (arg5 u> 0)
        while (true)
            int32_t* edi_2 = arg4 + (eax_1 << 2)
            int32_t* edx_1 = *edi_2
            int32_t eax_4 = *edx_1 & 0xfff00000
            
            if (eax_4 != 0x11000000 && eax_4 != 0x72100000)
                int32_t ecx_1 = *edx_1[2]
                void* eax_7 = *(*(esi + 0x14) + (ecx_1 << 2))
                
                if ((*(*(*(esi + 0x10) + (*(eax_7 + 4) << 2)) + 4) & 0x840) != 0)
                    int32_t eax_8 = *(eax_7 + 0xc)
                    
                    if (eax_8 u>= 6)
                        return 0
                    
                    int32_t** esi_4 = arg2 + (eax_8 << 2)
                    
                    if (*esi_4 != 0)
                        return 0
                    
                    int32_t* eax_10 = &arg3[eax_8]
                    int32_t ebx_3 = *eax_10
                    
                    if (ebx_3 == 0xffffffff)
                        *eax_10 = ecx_1
                    else if (ebx_3 != ecx_1)
                        return 0
                    
                    *esi_4 = edx_1
                    *edi_2 = 0
                    *eax_10 = *edx_1[2]
            
            eax_1 = arg6 + 1
            arg6 = eax_1
            
            if (eax_1 u>= arg5)
                return 1
            
            esi = var_8_1
else if (arg6 == 1)
    int32_t eax_12 = 0
    arg6 = 0
    
    if (arg5 u> 0)
        int32_t* esi_5 = arg3
        
        while (true)
            int32_t* edx_2 = arg4 + (eax_12 << 2)
            int32_t* eax_13 = *edx_2
            
            if (eax_13 != 0)
                int32_t ecx_6 = *eax_13 & 0xfff00000
                
                if (ecx_6 != 0x11000000 && ecx_6 != 0x72100000)
                    int32_t ecx_7 = 0
                    void* edi_4 = arg2 - esi_5
                    void* var_8_2 = edi_4
                    
                    while (true)
                        if (*(edi_4 + esi_5) == 0)
                            int32_t edi_5 = *esi_5
                            
                            if (edi_5 == *eax_13[2])
                                break
                            
                            if (edi_5 == 0xffffffff)
                                break
                        
                        ecx_7 += 1
                        esi_5 = &esi_5[1]
                        
                        if (ecx_7 u>= 6)
                            break
                        
                        edi_4 = var_8_2
                    
                    if (ecx_7 == 6)
                        return 0
                    
                    esi_5 = arg3
                    int32_t* ecx_8 = ecx_7 << 2
                    *(ecx_8 + esi_5) = *eax_13[2]
                    *(ecx_8 + arg2) = eax_13
                    *edx_2 = 0
            
            eax_12 = arg6 + 1
            arg6 = eax_12
            
            if (eax_12 u>= arg5)
                return 1
else if (arg6 == 2)
    int32_t eax_15 = 0
    arg6 = 0
    
    if (arg5 u> 0)
        do
            int32_t* edx_3 = arg4 + (eax_15 << 2)
            int32_t* ecx_10 = *edx_3
            
            if (ecx_10 != 0)
                int32_t eax_17 = *ecx_10 & 0xfff00000
                
                if (eax_17 == 0x11000000 || eax_17 == 0x72100000)
                    int32_t eax_18 = 0
                    
                    while (*(arg2 + (eax_18 << 2)) != 0)
                        eax_18 += 1
                        
                        if (eax_18 u>= 6)
                            break
                    
                    if (eax_18 == 6)
                        return 0
                    
                    int32_t* eax_19 = eax_18 << 2
                    *(eax_19 + arg3) = *ecx_10[2]
                    *(eax_19 + arg2) = ecx_10
                    *edx_3 = 0
            
            eax_15 = arg6 + 1
            arg6 = eax_15
        while (eax_15 u< arg5)

return 1
