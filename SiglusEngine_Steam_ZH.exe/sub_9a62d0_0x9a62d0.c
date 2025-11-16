// 函数: sub_9a62d0
// 地址: 0x9a62d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
int32_t* ecx = *ebx
int32_t* var_8 = ebx
int32_t eax = ecx[3]
int32_t esi = ecx[2]
int32_t var_1c = esi
int32_t eax_2 = *ebx[4]
int32_t temp0 = divs.dp.d(sx.q(ecx[1] - *ecx), esi)
char var_438[0x200]
_memset(&var_438, 0, 0x200)
char var_238[0x200]
_memset(&var_238, 0, 0x200)
int32_t i = 0
int32_t i_1 = 0

if (ebx[2] s> 0)
    int32_t edx_2 = arg5
    int32_t eax_7 = temp0
    
    do
        int32_t edi_1 = 0
        
        if (eax_7 s> 0)
            do
                if (i == 0)
                    int32_t eax_8 = 0
                    int32_t var_14_1 = 0
                    
                    if (edx_2 s> 0)
                        do
                            int32_t eax_9 = arg6[eax_8]
                            int32_t ecx_2 = 1
                            int32_t esi_1 = *(eax_9 + (edi_1 << 2))
                            
                            if (eax_2 s> 1)
                                int32_t edx_4 = eax_9 + ((edi_1 + 1) << 2)
                                
                                do
                                    esi_1 *= eax
                                    
                                    if (ecx_2 + edi_1 s< temp0)
                                        esi_1 += *edx_4
                                    
                                    ecx_2 += 1
                                    edx_4 += 4
                                while (ecx_2 s< eax_2)
                                
                                ebx = var_8
                                edx_2 = arg5
                            
                            void* ebx_2 = ebx[4]
                            
                            if (esi_1 s>= *(ebx_2 + 4))
                                ebx = var_8
                            else
                                void* eax_11
                                
                                if (esi_1 s>= 0)
                                    eax_11 = *(ebx_2 + 0xc)
                                
                                if (esi_1 s< 0 || esi_1 s>= *(eax_11 + 4))
                                    ebx = var_8
                                    edx_2 = arg5
                                    ebx[9] = ebx[9]
                                else
                                    sub_742d70(arg3, *(*(ebx_2 + 0x14) + (esi_1 << 2)), 
                                        sx.d(*(*(eax_11 + 8) + esi_1)))
                                    ebx = var_8
                                    edx_2 = arg5
                                    ebx[9] += sx.d(*(*(*(ebx_2 + 0xc) + 8) + esi_1))
                            
                            eax_8 = var_14_1 + 1
                            var_14_1 = eax_8
                        while (eax_8 s< edx_2)
                        
                        i = i_1
                        esi = var_1c
                    
                    eax_7 = temp0
                
                int32_t var_14_2 = 0
                
                if (eax_2 s> 0)
                    int32_t ebx_3 = eax_2
                    int32_t edx_6 = edi_1 * esi
                    int32_t var_28_1 = edx_6
                    
                    while (edi_1 s< eax_7)
                        int32_t eax_21 = *ecx + edx_6
                        
                        if (arg5 s> 0)
                            int32_t* esi_2 = arg6
                            int32_t j_1 = arg5
                            int32_t edx_7 = rol.d(1, i.b)
                            int32_t* eax_23 = arg4 - esi_2
                            int32_t var_30_1 = edx_7
                            int32_t j
                            
                            do
                                if (i == 0)
                                    int32_t eax_25 = *(*esi_2 + (edi_1 << 2))
                                    *(&var_238 + (eax_25 << 2)) += var_1c
                                
                                int32_t ecx_4 = *(*esi_2 + (edi_1 << 2))
                                
                                if ((ecx[ecx_4 + 6] & edx_7) == 0)
                                    i = i_1
                                else
                                    i = i_1
                                    int32_t eax_31 = *(*(var_8[5] + (ecx_4 << 2)) + (i << 2))
                                    
                                    if (eax_31 != 0)
                                        int32_t eax_35 = sub_9a6910(arg3, 
                                            *(eax_23 + esi_2) + (eax_21 << 2), var_1c, eax_31)
                                        edx_7 = var_30_1
                                        var_8[8] += eax_35
                                        int32_t ecx_8 = *(*esi_2 + (edi_1 << 2))
                                        *(&var_438 + (ecx_8 << 2)) += eax_35
                                        i = i_1
                                
                                esi_2 = &esi_2[1]
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            edx_6 = var_28_1
                            ebx_3 = eax_2
                            esi = var_1c
                        
                        edx_6 += esi
                        int32_t eax_37 = var_14_2 + 1
                        var_28_1 = edx_6
                        edi_1 += 1
                        var_14_2 = eax_37
                        eax_7 = temp0
                        
                        if (eax_37 s>= ebx_3)
                            goto label_9a64e6
                    
                    break
                
            label_9a64e6:
                ebx = var_8
                edx_2 = arg5
            while (edi_1 s< eax_7)
            
            ebx = var_8
            edx_2 = arg5
        
        i += 1
        i_1 = i
    while (i s< ebx[2])

return 0
