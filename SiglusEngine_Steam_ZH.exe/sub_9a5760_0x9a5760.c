// 函数: sub_9a5760
// 地址: 0x9a5760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edx = *arg2
int32_t ebx = edx[2]
int32_t esi = *arg2[4]
int32_t eax_4 = (*(arg1 + 0x24) * arg5) s>> 1

if (edx[1] s< eax_4)
    eax_4 = edx[1]

int32_t eax_5 = eax_4 - *edx

if (eax_5 s> 0)
    int32_t temp0_1 = divs.dp.d(sx.q(eax_5), ebx)
    int32_t* esi_1 = sub_99cca0(arg1, divs.dp.d(sx.q(temp0_1 - 1 + esi), esi) << 2)
    int32_t ecx_2 = 0
    int32_t* var_20_1 = esi_1
    
    if (arg5 s> 0)
        while (*(arg4 + (ecx_2 << 2)) == 0)
            ecx_2 += 1
            
            if (ecx_2 s>= arg5)
                break
    
    if (ecx_2 != arg5)
        int32_t* ebx_1 = arg2
        int32_t i = 0
        int32_t i_1 = 0
        
        if (ebx_1[2] s> 0)
            int32_t edx_5 = temp0_1
            
            do
                int32_t edi_1 = 0
                
                if (edx_5 s> 0)
                    int32_t* eax_15 = esi_1
                    int32_t* var_c_1 = esi_1
                    
                    do
                        if (i == 0)
                            void* esi_2 = ebx_1[4]
                            
                            if (*(esi_2 + 8) s<= i)
                                return 0
                            
                            int32_t eax_16 = sub_99e900(esi_2, arg1 + 4)
                            
                            if (eax_16 s< 0)
                                return 0
                            
                            int32_t ecx_5 = *(*(esi_2 + 0x18) + (eax_16 << 2))
                            
                            if (ecx_5 == 0xffffffff)
                                return 0
                            
                            if (ecx_5 s>= edx[4])
                                return 0
                            
                            int32_t eax_19 = *(ebx_1[7] + (ecx_5 << 2))
                            *var_c_1 = eax_19
                            
                            if (eax_19 == 0)
                                return 0
                            
                            i = i_1
                            eax_15 = var_c_1
                            edx_5 = temp0_1
                        
                        int32_t esi_3 = 0
                        
                        if (esi s> 0)
                            int32_t ebx_3 = edi_1 * ebx
                            
                            while (edi_1 s< edx_5)
                                int32_t edx_8 = *(*eax_15 + (esi_3 << 2))
                                bool cond:0_1 = (edx[edx_8 + 6] & 1 << i.b) == 0
                                i = i_1
                                
                                if (not(cond:0_1))
                                    int32_t* ecx_8 = *(*(arg2[5] + (edx_8 << 2)) + (i << 2))
                                    
                                    if (ecx_8 != 0)
                                        int32_t eax_29 = *edx + ebx_3
                                        
                                        if (sub_99df00(eax_29, arg3, ecx_8, eax_29, arg5, arg1 + 4, 
                                                ebx) == 0xffffffff)
                                            return 0
                                    
                                    i = i_1
                                
                                ebx_3 += ebx
                                esi_3 += 1
                                eax_15 = var_c_1
                                edi_1 += 1
                                edx_5 = temp0_1
                                
                                if (esi_3 s>= esi)
                                    break
                            
                            ebx_1 = arg2
                        
                        eax_15 = &eax_15[1]
                        var_c_1 = eax_15
                    while (edi_1 s< edx_5)
                    
                    esi_1 = var_20_1
                
                i += 1
                i_1 = i
            while (i s< ebx_1[2])

return 0
