// 函数: sub_40cf70
// 地址: 0x40cf70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *arg2
int32_t eax = ecx[3]
int32_t ebp = *arg2[4]
int32_t esi = ecx[2]
int32_t var_40c = ebp
int32_t edx_3 = divs.dp.d(sx.q(ecx[1] - *ecx), esi)
int32_t var_200[0x80]
__builtin_memset(&var_200, 0, 0x200)
int32_t var_400[0x80]
__builtin_memset(&var_400, 0, 0x200)
int32_t var_42c = 0
int32_t var_420 = edx_3

if (arg2[2] s> 0)
    bool cond:2_1
    
    do
        int32_t esi_1 = 0
        int32_t var_41c_1 = 0
        
        if (edx_3 s> 0)
            do
                if (var_42c == 0 && arg4 s> 0)
                    int32_t var_428_1 = arg4
                    int32_t* var_430_1 = arg5
                    bool cond:6_1
                    
                    do
                        int32_t ecx_2 = 1
                        int32_t edx_5 = *var_430_1
                        int32_t eax_8 = *(edx_5 + (esi_1 << 2))
                        
                        if (ebp s> 1)
                            int32_t edx_6 = edx_5 + (esi_1 << 2) + 4
                            
                            do
                                eax_8 *= eax
                                
                                if (ecx_2 + esi_1 s< var_420)
                                    eax_8 += *edx_6
                                
                                ecx_2 += 1
                                edx_6 += 4
                            while (ecx_2 s< ebp)
                        
                        void* ecx_3 = arg2[4]
                        
                        if (eax_8 s< *(ecx_3 + 4))
                            int32_t eax_9 = sub_407f90(ecx_3, eax_8, arg1)
                            arg2[9] += eax_9
                        
                        cond:6_1 = var_428_1 != 1
                        var_430_1 = &var_430_1[1]
                        var_428_1 -= 1
                    while (cond:6_1)
                
                int32_t var_430_2 = 0
                
                if (ebp s> 0)
                    int32_t edi_2 = esi_1 << 2
                    int32_t eax_13 = esi_1 * esi
                    int32_t var_414_1 = eax_13
                    bool cond:5_1
                    
                    do
                        edx_3 = var_420
                        
                        if (esi_1 s>= edx_3)
                            goto label_40d1bb
                        
                        int32_t ecx_9 = eax_13 + *ecx
                        
                        if (arg4 s> 0)
                            int32_t* esi_2 = arg5
                            int32_t* eax_15 = arg3 - esi_2
                            int32_t var_428_2 = arg4
                            bool cond:8_1
                            
                            do
                                int32_t __saved_edi
                                
                                if (var_42c == 0)
                                    int32_t ecx_11 = *(edi_2 + *esi_2)
                                    (&__saved_edi)[ecx_11 + 0x10] = var_400[ecx_11] + esi
                                
                                int32_t ecx_14 = *(*esi_2 + edi_2)
                                
                                if ((ecx[ecx_14 + 5] & 1 << var_42c.b) != 0)
                                    int32_t eax_23 = *(*(arg2[5] + (ecx_14 << 2)) + (var_42c << 2))
                                    
                                    if (eax_23 != 0)
                                        int32_t eax_26 = arg6(arg1, 
                                            *(eax_15 + esi_2) + (ecx_9 << 2), esi, eax_23, 0)
                                        arg2[8] += eax_26
                                        int32_t edx_15 = *(edi_2 + *esi_2)
                                        (&__saved_edi)[edx_15 + 0x90] = var_200[edx_15] + eax_26
                                
                                esi_2 = &esi_2[1]
                                cond:8_1 = var_428_2 != 1
                                var_428_2 -= 1
                            while (cond:8_1)
                            ebp = var_40c
                            esi_1 = var_41c_1
                            eax_13 = var_414_1
                        
                        esi_1 += 1
                        eax_13 += esi
                        edi_2 += 4
                        cond:5_1 = var_430_2 + 1 s< ebp
                        var_430_2 += 1
                        var_41c_1 = esi_1
                        var_414_1 = eax_13
                    while (cond:5_1)
                
                edx_3 = var_420
            while (esi_1 s< edx_3)
        
    label_40d1bb:
        cond:2_1 = var_42c + 1 s< arg2[2]
        var_42c += 1
    while (cond:2_1)

return 0
