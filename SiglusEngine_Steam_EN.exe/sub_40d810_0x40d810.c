// 函数: sub_40d810
// 地址: 0x40d810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
int32_t* ebx = *esi
int32_t ecx = *esi[4]
int32_t ebp = ebx[2]
int32_t edi_1 = divs.dp.d(sx.q(ebx[1] - *ebx), ebp)
int32_t var_c = edi_1
int32_t* eax_9 = sub_4038a0(arg1, divs.dp.d(sx.q(edi_1 + ecx - 1), ecx) << 2)
int32_t eax_10 = 0

if (arg5 s> 0)
    int32_t* edx_3 = arg4
    
    while (*edx_3 == 0)
        eax_10 += 1
        edx_3 = &edx_3[1]
        
        if (eax_10 s>= arg5)
            break

if (eax_10 != arg5)
    int32_t var_14_1 = 0
    
    if (esi[2] s> 0)
        bool cond:1_1
        
        do
            arg4 = nullptr
            
            if (edi_1 s> 0)
                int32_t* var_10_1 = eax_9
                
                do
                    if (var_14_1 == 0)
                        int32_t eax_15 = sub_407fd0(esi[4], arg1 + 4)
                        
                        if (eax_15 == 0xffffffff)
                            return 0
                        
                        int32_t eax_16 = *(esi[7] + (eax_15 << 2))
                        *var_10_1 = eax_16
                        
                        if (eax_16 == 0)
                            return 0
                    
                    int32_t edi_2 = 0
                    
                    if (ecx s> 0)
                        int32_t esi_2 = arg4 * ebp
                        
                        while (arg4 s< var_c)
                            int32_t eax_20 = *(*var_10_1 + (edi_2 << 2))
                            
                            if ((ebx[eax_20 + 5] & 1 << var_14_1.b) != 0)
                                int32_t* eax_22 = *(*(arg2[5] + (eax_20 << 2)) + (var_14_1 << 2))
                                
                                if (eax_22 != 0 &&
                                        sub_408810(eax_22, arg3, *ebx + esi_2, arg5, arg1 + 4, ebp)
                                        == 0xffffffff)
                                    return 0
                            
                            edi_2 += 1
                            esi_2 += ebp
                            arg4 += 1
                            
                            if (edi_2 s>= ecx)
                                break
                        
                        esi = arg2
                    
                    var_10_1 = &var_10_1[1]
                while (arg4 s< var_c)
                
                edi_1 = var_c
            
            cond:1_1 = var_14_1 + 1 s< esi[2]
            var_14_1 += 1
        while (cond:1_1)

return 0
