// 函数: sub_745b90
// 地址: 0x745b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x16] s< 2)
    return 0xffffff7d

int32_t i

do
    if (arg1[0x16] == 4)
        int32_t var_c
        int32_t edi_1 = sub_99bdf0(&arg1[0x78], &var_c)
        
        if (edi_1 != 0)
            if (edi_1 s<= 0)
                return edi_1
            
            void* eax_6
            
            if (arg1[1] == 0 || arg1[0x16] s< 3)
                eax_6 = arg1[0x12]
            else
                eax_6 = (arg1[0x18] << 5) + arg1[0x12]
            
            int32_t ebx_1 = *(eax_6 + 4)
            int32_t ecx_1 = ebx_1 * arg5
            int32_t var_8 = ebx_1
            int32_t temp0 = divs.dp.d(sx.q(arg3), ecx_1)
            
            if (edi_1 s> temp0)
                edi_1 = temp0
            
            int32_t var_18 = edi_1
            
            if (edi_1 s<= 0)
                return 0xffffff7d
            
            if (arg8 != 0)
                arg8(var_c, ebx_1, edi_1, arg9)
            
            if (arg5 != 1)
                int32_t esi_2 = 0x8000
                
                if (arg6 != 0)
                    esi_2 = 0
                
                double var_30
                
                if (arg4 != 0)
                    int32_t ebx_5 = 0
                    
                    if (edi_1 s> 0)
                        char* edx_6 = arg2
                        int32_t eax_27 = var_8
                        
                        do
                            int32_t esi_5 = 0
                            
                            if (eax_27 s> 0)
                                do
                                    var_30:4.d = int.d(fconvert.t(_mm_cvtps_pd(
                                        *(*(var_c + (esi_5 << 2)) + (ebx_5 << 2)) * 32768f)))
                                    int32_t ecx_11 = var_30:4.d
                                    
                                    if (ecx_11 s> 0x7fff)
                                        ecx_11 = 0x7fff
                                    else if (ecx_11 s< 0xffff8000)
                                        ecx_11 = 0xffff8000
                                    
                                    int32_t ecx_9 = ecx_11 + esi_2
                                    esi_5 += 1
                                    *edx_6 = (ecx_9 s>> 8).b
                                    edx_6[1] = ecx_9.b
                                    edx_6 = &edx_6[2]
                                while (esi_5 s< var_8)
                                
                                edi_1 = var_18
                                eax_27 = var_8
                            
                            ebx_5 += 1
                        while (ebx_5 s< edi_1)
                else
                    int64_t var_20
                    
                    if (arg6 == 0)
                        int32_t ecx_6 = 0
                        int32_t var_18_2 = 0
                        
                        if (ebx_1 s> 0)
                            char* edx_4 = arg2
                            char* var_14_3 = edx_4
                            
                            do
                                int32_t eax_22 = *(var_c + (ecx_6 << 2))
                                int32_t ecx_7 = 0
                                
                                if (edi_1 s> 0)
                                    int32_t eax_23 = ebx_1 * 2
                                    var_30:4.d = eax_23
                                    
                                    do
                                        var_20:4.d = int.d(fconvert.t(_mm_cvtps_pd(
                                            *(eax_22 + (ecx_7 << 2)) * 32768f)))
                                        int32_t eax_25 = var_20:4.d
                                        
                                        if (eax_25 s> 0x7fff)
                                            eax_25 = 0x7fff
                                        else if (eax_25 s< 0xffff8000)
                                            eax_25 = 0xffff8000
                                        
                                        ecx_7 += 1
                                        *edx_4 = eax_25.w + esi_2.w
                                        edx_4 = &edx_4[eax_23]
                                    while (ecx_7 s< edi_1)
                                    
                                    ebx_1 = var_8
                                
                                ecx_6 = var_18_2 + 1
                                edx_4 = &var_14_3[2]
                                var_18_2 = ecx_6
                                var_14_3 = edx_4
                            while (ecx_6 s< ebx_1)
                    else
                        int32_t esi_3 = 0
                        int32_t var_14_2 = 0
                        
                        if (ebx_1 s> 0)
                            char* ecx_3 = arg2
                            char* var_18_1 = ecx_3
                            
                            do
                                char* edx_3 = ecx_3
                                int32_t ecx_4 = 0
                                int32_t eax_18 = *(var_c + (esi_3 << 2))
                                
                                if (edi_1 s> 0)
                                    int32_t eax_19 = ebx_1 * 2
                                    var_20:4.d = eax_19
                                    
                                    do
                                        var_30:4.d = int.d(fconvert.t(_mm_cvtps_pd(
                                            *(eax_18 + (ecx_4 << 2)) * 32768f)))
                                        int32_t eax_20 = var_30:4.d
                                        
                                        if (eax_20 s> 0x7fff)
                                            eax_20 = 0x7fff
                                        else if (eax_20 s< 0xffff8000)
                                            eax_20 = 0xffff8000
                                        
                                        *edx_3 = eax_20.w
                                        ecx_4 += 1
                                        edx_3 = &edx_3[eax_19]
                                    while (ecx_4 s< edi_1)
                                    
                                    ebx_1 = var_8
                                    esi_3 = var_14_2
                                
                                esi_3 += 1
                                ecx_3 = &var_18_1[2]
                                var_14_2 = esi_3
                                var_18_1 = ecx_3
                            while (esi_3 s< ebx_1)
            else
                char eax_12 = -0x80
                
                if (arg6 != 0)
                    eax_12 = 0
                
                int32_t ebx_2 = 0
                
                if (edi_1 s> 0)
                    char* esi_1 = arg2
                    int32_t eax_13 = var_8
                    
                    do
                        int32_t edx_2 = 0
                        
                        if (eax_13 s> 0)
                            do
                                int32_t ecx_2 = int.d(fconvert.t(_mm_cvtps_pd(
                                    *(*(var_c + (edx_2 << 2)) + (ebx_2 << 2)) * 128f)))
                                
                                if (ecx_2 s> 0x7f)
                                    ecx_2 = 0x7f
                                else if (ecx_2 s< 0xffffff80)
                                    ecx_2 = 0xffffff80
                                
                                int32_t eax_15
                                eax_15.b = eax_12
                                edx_2 += 1
                                eax_15.b += ecx_2.b
                                *esi_1 = eax_15.b
                                esi_1 = &esi_1[1]
                            while (edx_2 s< var_8)
                            
                            edi_1 = var_18
                            eax_13 = var_8
                        
                        ebx_2 += 1
                    while (ebx_2 s< edi_1)
            
            sub_99bdc0(&arg1[0x78], edi_1)
            int32_t eax_35
            int32_t edx_9
            edx_9:eax_35 = sx.q(edi_1 << sub_99cdb0(arg1[0x12]))
            int32_t temp3 = arg1[0x14]
            arg1[0x14] += eax_35
            arg1[0x15] = adc.d(arg1[0x15], edx_9, temp3 + eax_35 u< temp3)
            
            if (arg7 != 0)
                *arg7 = arg1[0x18]
            
            return ecx_1 * edi_1
    
    i = sub_743720(arg1, nullptr, 1, 1)
    
    if (i == 0xfffffffe)
        return 0
while (i s> 0)

return i
