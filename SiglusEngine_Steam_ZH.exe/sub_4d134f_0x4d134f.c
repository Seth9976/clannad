// 函数: sub_4d134f
// 地址: 0x4d134f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg3
int32_t i_5 = *ebx & 0xfffff
void* var_8 = arg1
int32_t i_4 = i_5

if (i_5 != 0)
    uint32_t edx_2 = divu.dp.d(0:(ebx[1]), i_5)
    
    if (edx_2 u> 0)
        int32_t* var_10_1 = nullptr
        int32_t edi
        int32_t var_2c_1 = edi
        int32_t* edi_1 = arg4
        uint32_t var_18_1 = edx_2
        
        while (true)
            void* edx_5 = *(*(arg1 + 0x14) + (*(var_10_1 + ebx[2]) << 2))
            int32_t ebx_2 = *(edx_5 + 0x54)
            int32_t edx_6 = *(edx_5 + 0x48)
            
            if (edx_6 == 0xffffffff)
                *edi_1 = 0
            else
                int32_t* ebx_3 = *(*(arg1 + 0x18) + (edx_6 << 2))
                *edi_1 = ebx_3
                
                if (i_5 u> 0)
                    int32_t* ecx_1 = var_10_1
                    int32_t i_2 = i_5
                    int32_t i
                    
                    do
                        void* esi_3 = *(*(var_8 + 0x14) + (*(ecx_1 + arg3[2]) << 2))
                        
                        if (*(var_8 + 0x88) != *(esi_3 + 4))
                            *edi_1 = 0
                        
                        if (*(esi_3 + 0x3c) != 0)
                            *edi_1 = 0
                        
                        int32_t eax_9 = *(esi_3 + 0x50)
                        
                        if (eax_9 u> edx_6 && eax_9 u< ebx_2)
                            *edi_1 = 0
                        
                        if (*(esi_3 + 0x54) != *(esi_3 + 0x58))
                            *edi_1 = 0
                        
                        ecx_1 = &ecx_1[1]
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                if (*edi_1 != 0)
                    if (arg2 != *ebx_3)
                        *edi_1 = 0
                    else
                        if (i_4 u> 0)
                            int32_t* eax_12 = var_10_1
                            int32_t i_3 = i_4
                            int32_t i_1
                            
                            do
                                if (*(*(*(var_8 + 0x14) + (*(eax_12 + arg3[2]) << 2)) + 0x48)
                                        != edx_6)
                                    *edi_1 = 0
                                
                                eax_12 = &eax_12[1]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                        
                        if (*edi_1 != 0)
                            int32_t edx_8 = *ebx_3 & 0xfffff
                            
                            if (ebx_3[3] != edx_8 || ebx_3[1] u> edx_8 * arg5)
                                *edi_1 = 0
                            else
                                int32_t eax_14 = arg3[1]
                                int32_t esi_6 = 0
                                
                                if (eax_14 u> 0)
                                    int32_t* edx_11 = arg3[2]
                                    
                                    while (*edx_11 != *ebx_3[4])
                                        esi_6 += 1
                                        edx_11 = &edx_11[1]
                                        
                                        if (esi_6 u>= eax_14)
                                            break
                                
                                if (esi_6 == eax_14)
                                    *edi_1 = 0
                                else
                                    int32_t edx_12 = ebx_3[3]
                                    
                                    if (edx_12 u> 1)
                                        if (edx_12 != i_4 || esi_6 + i_4 u> eax_14)
                                            *edi_1 = 0
                                        
                                        int32_t eax_15 = 0
                                        
                                        if (i_4 u> 0)
                                            int32_t edx_15 = esi_6 << 2
                                            
                                            do
                                                if (*(ebx_3[4] + (eax_15 << 2))
                                                        != *(edx_15 + arg3[2]))
                                                    *edi_1 = 0
                                                
                                                eax_15 += 1
                                                edx_15 += 4
                                            while (eax_15 u< i_4)
            
            i_5 = i_4
            var_10_1 = &var_10_1[i_5]
            edi_1 = &edi_1[1]
            uint32_t temp3_1 = var_18_1
            var_18_1 -= 1
            
            if (temp3_1 == 1)
                break
            
            arg1 = var_8
            ebx = arg3
    
    int32_t eax_18 = 0
    
    if (edx_2 u> 0)
        do
            if (arg4[eax_18] != 0)
                return 0
            
            eax_18 += 1
        while (eax_18 u< edx_2)

return 1
