// 函数: sub_4029e0
// 地址: 0x4029e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

while (true)
    if (*(arg1 + 0x58) == 4)
        while (true)
            void* edi_1 = arg2
            void var_20
            
            if (edi_1 == 0)
                edi_1 = &var_20
            int32_t eax_2 = sub_4107e0(arg1 + 0x78, edi_1)
            arg2 = 0
            
            if (eax_2 == 0xffffffff)
                return 0xfffffffd
            
            if (eax_2 s<= 0)
                break
            
            int32_t ebx_1 = *(edi_1 + 0x10)
            int32_t ebp_1 = *(edi_1 + 0x14)
            
            if (sub_404740(arg1 + 0x250, edi_1) == 0)
                if (sub_4046b0(arg1 + 0x1e0, nullptr) != 0)
                    return 0xffffff7f
                
                sub_404060(arg1 + 0x1e0, arg1 + 0x250)
                *(arg1 + 0x70) = fconvert.d(float.t(sub_4046b0(arg1 + 0x1e0, nullptr))
                    + fconvert.t(*(arg1 + 0x70)))
                *(arg1 + 0x68) = fconvert.d(float.t(*(edi_1 + 4) << 3) + fconvert.t(*(arg1 + 0x68)))
                
                if ((ebx_1 & ebp_1) != 0xffffffff && *(edi_1 + 0xc) == 0)
                    int32_t eax_25 = *(arg1 + 4)
                    int32_t i_2
                    
                    if (eax_25 == 0)
                        i_2 = 0
                    else
                        i_2 = *(arg1 + 0x60)
                    
                    if (eax_25 != 0 && i_2 s> 0)
                        int32_t* eax_28 = (i_2 << 4) + *(arg1 + 0x44)
                        int32_t ecx_7 = *eax_28
                        int32_t temp3_1 = ebx_1
                        ebx_1 -= ecx_7
                        ebp_1 = sbb.d(ebp_1, eax_28[1], temp3_1 u< ecx_7)
                    
                    if (ebp_1 s<= 0 && (ebp_1 s< 0 || ebx_1 u< 0))
                        ebx_1 = 0
                        ebp_1 = 0
                    
                    int32_t eax_31
                    int32_t edx_11
                    edx_11:eax_31 = sx.q(sub_4046b0(arg1 + 0x1e0, nullptr))
                    int32_t ebx_2 = ebx_1 - eax_31
                    int32_t ebp_2 = sbb.d(ebp_1, edx_11, ebx_1 u< eax_31)
                    
                    if (i_2 s> 0)
                        int32_t* eax_33 = *(arg1 + 0x44) + 8
                        int32_t i
                        
                        do
                            int32_t ecx_8 = *eax_33
                            int32_t temp4_1 = ebx_2
                            ebx_2 += ecx_8
                            ebp_2 = adc.d(ebp_2, eax_33[1], temp4_1 + ecx_8 u< temp4_1)
                            eax_33 = &eax_33[4]
                            i = i_2
                            i_2 -= 1
                        while (i != 1)
                    
                    *(arg1 + 0x50) = ebx_2
                    *(arg1 + 0x54) = ebp_2
                
                return 1
    
    void var_30
    
    if (*(arg1 + 0x58) s>= 2)
        if (arg3 == 0)
            return 0
        
        int32_t eax_6
        int32_t edx_1
        eax_6, edx_1 = sub_4013c0(arg1, &var_30, 0xffffffff, 0xffffffff)
        
        if (edx_1 s< 0 || (edx_1 s<= 0 && eax_6 u< 0))
            return 0xfffffffe
        
        bool cond:2_1 = *(arg1 + 0x58) != 4
        int32_t var_2c
        *(arg1 + 0x68) = fconvert.d(float.t(var_2c << 3) + fconvert.t(*(arg1 + 0x68)))
        
        if (not(cond:2_1))
            int32_t eax_9 = sub_40ffd0(&var_30)
            
            if (*(arg1 + 0x5c) != eax_9)
                if (arg4 == 0)
                    return 0xfffffffe
                
                sub_401ca0(arg1)
                
                if (*(arg1 + 4) == 0)
                    sub_403140(*(arg1 + 0x48))
                    sub_403080(*(arg1 + 0x4c))
    
    int32_t eax_13 = *(arg1 + 0x58)
    
    if (eax_13 != 4)
        int32_t result
        
        if (eax_13 s< 3)
            if (*(arg1 + 4) == 0)
                result = sub_401270(arg1, *(arg1 + 0x48), *(arg1 + 0x4c), arg1 + 0x5c, &var_30)
                
                if (result != 0)
                    return result
                
                *(arg1 + 0x60) += 1
            else
                int32_t i_1 = sub_40ffd0(&var_30)
                int32_t edx_4 = *(arg1 + 0x34)
                int32_t ecx_2 = 0
                *(arg1 + 0x5c) = i_1
                
                if (edx_4 s> 0)
                    int32_t* edi_2 = *(arg1 + 0x40)
                    
                    while (*edi_2 != i_1)
                        ecx_2 += 1
                        edi_2 = &edi_2[1]
                        
                        if (ecx_2 s>= edx_4)
                            break
                
                if (ecx_2 == edx_4)
                    return 0xffffff77
                
                *(arg1 + 0x60) = ecx_2
                sub_4107c0(arg1 + 0x78, i_1)
                *(arg1 + 0x58) = 3
        
        result = sub_402960(arg1)
        
        if (result s< 0)
            return result
    
    sub_410460(arg1 + 0x78, &var_30)
