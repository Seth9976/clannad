// 函数: sub_9a6050
// 地址: 0x9a6050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = *arg2
int32_t ebx = edx[2]
int32_t esi = *arg2[4]
int32_t eax_3 = *(arg3 + 0x24) s>> 1

if (edx[1] s< eax_3)
    eax_3 = edx[1]

int32_t eax_4 = eax_3 - *edx

if (eax_4 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(eax_4), ebx)
    int32_t ebx_1 = arg5
    __alloca_probe_16(ebx_1 << 2)
    int32_t edi_1 = 0
    int32_t __saved_edi
    int32_t* var_20_1 = &__saved_edi
    
    if (ebx_1 s> 0)
        void* edx_4 = arg3
        void* esi_3 = ((divs.dp.d(sx.q(temp0_1 - 1 + esi), esi) << 2) + 7) & 0xfffffff8
        
        do
            if (*(edx_4 + 0x48) + esi_3 s> *(edx_4 + 0x4c))
                if (*(edx_4 + 0x44) != 0)
                    int32_t* eax_14 = _malloc(8)
                    edx_4 = arg3
                    *(edx_4 + 0x50) += *(edx_4 + 0x48)
                    eax_14[1] = *(edx_4 + 0x54)
                    *eax_14 = *(edx_4 + 0x44)
                    *(edx_4 + 0x54) = eax_14
                
                *(edx_4 + 0x4c) = esi_3
                edx_4 = arg3
                *(edx_4 + 0x44) = _malloc(esi_3)
                *(edx_4 + 0x48) = 0
            
            void* eax_16 = *(edx_4 + 0x48)
            void* ecx_6 = *(edx_4 + 0x44) + eax_16
            *(edx_4 + 0x48) = eax_16 + esi_3
            var_20_1[edi_1] = ecx_6
            edi_1 += 1
        while (edi_1 s< ebx_1)
    
    int32_t* eax_19 = arg2
    int32_t i = 0
    int32_t i_1 = 0
    
    if (eax_19[2] s> 0)
        int32_t edi_2 = temp0_1
        
        do
            int32_t esi_4 = 0
            int32_t var_28_1 = 0
            
            if (edi_2 s> 0)
                int32_t* edx_5 = nullptr
                int32_t* var_c_1 = nullptr
                
                do
                    if (i == 0)
                        int32_t edi_3 = 0
                        
                        if (ebx_1 s> 0)
                            while (true)
                                void* esi_5 = eax_19[4]
                                
                                if (*(esi_5 + 8) s<= 0)
                                    return 0
                                
                                int32_t eax_20 = sub_99e900(esi_5, arg3 + 4)
                                
                                if (eax_20 s< 0)
                                    return 0
                                
                                int32_t edx_8 = *(*(esi_5 + 0x18) + (eax_20 << 2))
                                
                                if (edx_8 == 0xffffffff)
                                    return 0
                                
                                if (edx_8 s>= edx[4])
                                    return 0
                                
                                edx_5 = var_c_1
                                *(edx_5 + var_20_1[edi_3]) = *(arg2[7] + (edx_8 << 2))
                                
                                if (*(edx_5 + var_20_1[edi_3]) == 0)
                                    return 0
                                
                                edi_3 += 1
                                
                                if (edi_3 s>= ebx_1)
                                    break
                                
                                eax_19 = arg2
                            
                            esi_4 = var_28_1
                        
                        edi_2 = temp0_1
                    
                    int32_t ebx_2 = 0
                    int32_t var_2c_1 = 0
                    
                    if (esi s> 0)
                        int32_t ecx_10 = arg5
                        int32_t eax_27 = esi_4 * ebx
                        int32_t edx_9 = ebx
                        int32_t var_30_1 = eax_27
                        
                        while (esi_4 s< edi_2)
                            int32_t edi_4 = 0
                            
                            if (ecx_10 s> 0)
                                int32_t* esi_7 = var_20_1
                                int32_t* ecx_13 = arg4 - esi_7
                                
                                do
                                    int32_t edx_12 = *(*(var_c_1 + *esi_7) + (ebx_2 << 2))
                                    ebx_2 = var_2c_1
                                    
                                    if ((edx[edx_12 + 6] & 1 << i_1.b) != 0)
                                        int32_t edx_14 = *(*(arg2[5] + (edx_12 << 2)) + (i_1 << 2))
                                        
                                        if (edx_14 != 0 && arg6(edx_14, 
                                                *(ecx_13 + esi_7) + ((*edx + eax_27) << 2), 
                                                arg3 + 4, ebx) == 0xffffffff)
                                            return 0
                                    
                                    eax_27 = var_30_1
                                    edi_4 += 1
                                    esi_7 = &esi_7[1]
                                while (edi_4 s< arg5)
                                
                                ecx_10 = arg5
                                esi_4 = var_28_1
                                edx_9 = ebx
                            
                            edi_2 = temp0_1
                            ebx_2 += 1
                            esi_4 += 1
                            var_2c_1 = ebx_2
                            eax_27 += edx_9
                            var_28_1 = esi_4
                            var_30_1 = eax_27
                            
                            if (ebx_2 s>= esi)
                                break
                        
                        edx_5 = var_c_1
                    
                    ebx_1 = arg5
                    edx_5 = &edx_5[1]
                    eax_19 = arg2
                    i = i_1
                    var_c_1 = edx_5
                while (esi_4 s< edi_2)
            
            i += 1
            i_1 = i
        while (i s< eax_19[2])

return 0
