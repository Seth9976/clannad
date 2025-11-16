// 函数: sub_402cf0
// 地址: 0x402cf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x58) s< 2)
    return 0xffffff7d

int32_t i

do
    if (*(arg1 + 0x58) == 4)
        int32_t var_8
        int32_t j_5 = sub_4046b0(arg1 + 0x1e0, &var_8)
        int32_t j_4 = j_5
        
        if (j_5 != 0)
            if (j_5 s<= 0)
                return j_5
            
            int32_t ebx = *(sub_402cb0(arg1, 0xffffffff) + 4)
            int32_t ecx_3 = ebx * arg5
            int32_t j_6 = divs.dp.d(sx.q(arg3), ecx_3)
            int32_t var_10 = ebx
            
            if (j_5 s> j_6)
                j_4 = j_6
                j_5 = j_6
            
            if (j_5 s<= 0)
                return 0xffffff7d
            
            if (arg5 != 1)
                int32_t eax_11 = arg6
                int32_t edx_8 = neg.d(eax_11)
                int32_t edx_11 = (sbb.d(edx_8, edx_8, eax_11 != 0) & 0xffff8000) + 0x8000
                arg6 = edx_11
                
                if (0 != arg4)
                    int32_t edi_6 = 0
                    
                    if (arg4 == 0)
                        arg5 = 0
                        
                        if (j_5 s> 0)
                            int32_t edx_18 = arg2
                            bool cond:6_1
                            
                            do
                                int32_t ecx_13 = 0
                                
                                if (ebx s> 0)
                                    do
                                        int32_t eax_23 = int.d(fconvert.t(fconvert.d(
                                            fconvert.t(*(*(var_8 + (ecx_13 << 2)) + (arg5 << 2)))
                                            * fconvert.t(32768f))))
                                        
                                        if (eax_23 s> 0x7fff)
                                            eax_23 = 0x7fff
                                        else if (eax_23 s< 0xffff8000)
                                            eax_23 = 0xffff8000
                                        
                                        int32_t eax_24 = eax_23 + arg6
                                        *edx_18 = eax_24.b
                                        *(edx_18 + 1) = (eax_24 s>> 8).b
                                        edx_18 += 2
                                        ecx_13 += 1
                                    while (ecx_13 s< ebx)
                                
                                cond:6_1 = arg5 + 1 s< j_5
                                arg5 += 1
                            while (cond:6_1)
                    else if (j_5 s> 0)
                        int32_t esi_2 = arg2
                        
                        do
                            int32_t ecx_12 = 0
                            
                            if (ebx s> 0)
                                do
                                    int32_t eax_18 = int.d(fconvert.t(fconvert.d(
                                        fconvert.t(*(*(var_8 + (ecx_12 << 2)) + (edi_6 << 2)))
                                        * fconvert.t(32768f))))
                                    
                                    if (eax_18 s> 0x7fff)
                                        eax_18 = 0x7fff
                                    else if (eax_18 s< 0xffff8000)
                                        eax_18 = 0xffff8000
                                    
                                    int32_t eax_19 = eax_18 + edx_11
                                    *esi_2 = (eax_19 s>> 8).b
                                    edx_11 = arg6
                                    *(esi_2 + 1) = eax_19.b
                                    esi_2 += 2
                                    ecx_12 += 1
                                while (ecx_12 s< ebx)
                            
                            edi_6 += 1
                        while (edi_6 s< j_4)
                        
                        j_5 = j_4
                else if (eax_11 == 0)
                    int32_t eax_14 = 0
                    arg5 = 0
                    
                    if (ebx s> 0)
                        int32_t ecx_10 = arg2
                        arg2 = ecx_10
                        
                        do
                            float* edx_15 = *(var_8 + (eax_14 << 2))
                            
                            if (j_5 s> 0)
                                int32_t j_3 = j_4
                                int32_t j
                                
                                do
                                    int32_t eax_15 = int.d(fconvert.t(fconvert.d(fconvert.t(*edx_15)
                                        * fconvert.t(32768f))))
                                    
                                    if (eax_15 s> 0x7fff)
                                        eax_15 = 0x7fff
                                    else if (eax_15 s< 0xffff8000)
                                        eax_15 = 0xffff8000
                                    
                                    edx_15 = &edx_15[1]
                                    *ecx_10 = arg6.w + eax_15.w
                                    ecx_10 += ebx * 2
                                    j = j_3
                                    j_3 -= 1
                                while (j != 1)
                                eax_14 = arg5
                                ebx = var_10
                                j_5 = j_4
                            
                            eax_14 += 1
                            ecx_10 = arg2 + 2
                            arg5 = eax_14
                            arg2 = ecx_10
                        while (eax_14 s< ebx)
                else
                    int32_t edi_3 = 0
                    
                    if (ebx s> 0)
                        int32_t edx_12 = arg2
                        arg2 = edx_12
                        
                        do
                            float* ecx_9 = *(var_8 + (edi_3 << 2))
                            
                            if (j_5 s> 0)
                                int32_t j_2 = j_4
                                int32_t j_1
                                
                                do
                                    int32_t eax_13 = int.d(fconvert.t(fconvert.d(fconvert.t(*ecx_9)
                                        * fconvert.t(32768f))))
                                    
                                    if (eax_13 s> 0x7fff)
                                        eax_13 = 0x7fff
                                    else if (eax_13 s< 0xffff8000)
                                        eax_13 = 0xffff8000
                                    
                                    *edx_12 = eax_13.w
                                    edx_12 += ebx * 2
                                    ecx_9 = &ecx_9[1]
                                    j_1 = j_2
                                    j_2 -= 1
                                while (j_1 != 1)
                                ebx = var_10
                                j_5 = j_4
                            
                            edi_3 += 1
                            edx_12 = arg2 + 2
                            arg2 = edx_12
                        while (edi_3 s< ebx)
            else
                int32_t edx_3 = neg.d(arg6)
                int32_t edi_2 = 0
                
                if (j_5 s> 0)
                    char* esi_1 = arg2
                    
                    do
                        int32_t eax_9 = 0
                        
                        if (ebx s> 0)
                            do
                                int32_t ecx_6 = int.d(fconvert.t(fconvert.d(
                                    fconvert.t(*(*(var_8 + (eax_9 << 2)) + (edi_2 << 2)))
                                    * fconvert.t(128f))))
                                
                                if (ecx_6 s> 0x7f)
                                    ecx_6 = 0x7f
                                else if (ecx_6 s< 0xffffff80)
                                    ecx_6 = 0xffffff80
                                
                                ebx.b = ((sbb.d(edx_3, edx_3, arg6 != 0)).b & 0x80) - 0x80
                                ebx.b += ecx_6.b
                                *esi_1 = ebx.b
                                esi_1 = &esi_1[1]
                                eax_9 += 1
                            while (eax_9 s< var_10)
                            
                            ebx = var_10
                        
                        edi_2 += 1
                    while (edi_2 s< j_4)
                    
                    j_5 = j_4
            
            sub_404710(arg1 + 0x1e0, j_5)
            int32_t ecx_15 = *(arg1 + 0x50)
            int32_t eax_29
            int32_t edx_20
            edx_20:eax_29 = sx.q(j_5)
            *(arg1 + 0x50) = ecx_15 + eax_29
            *(arg1 + 0x54) = adc.d(*(arg1 + 0x54), edx_20, ecx_15 + eax_29 u< ecx_15)
            
            if (arg7 != 0)
                *arg7 = *(arg1 + 0x60)
            
            return ecx_3 * j_5
    
    i = sub_4029e0(arg1, 0, 1, 1)
    
    if (i == 0xfffffffe)
        return 0
while (i s> 0)

return i
