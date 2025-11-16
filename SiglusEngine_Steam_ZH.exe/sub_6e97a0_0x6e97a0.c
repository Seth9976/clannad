// 函数: sub_6e97a0
// 地址: 0x6e97a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = sub_6e9430(arg1)

if (eax s>= 0)
    int32_t ecx
    
    if (arg1[4] == 0)
        ecx = (arg1[3] s>> 3) - arg1[1] + *arg1
    else
        ecx = 0xffffffff
    
    if (eax s<= ecx)
        uint8_t* eax_2 = _malloc(&eax[1])
        arg2[3] = eax_2
        
        if (eax_2 == 0)
            return 0xffffffff
        
        sub_6e93e0(eax_2.b, eax_2, arg1, eax)
        eax[arg2[3]] = 0
        int32_t eax_4 = sub_6e9430(arg1)
        arg2[2] = eax_4
        
        if (eax_4 u<= 0x1fffffff && eax_4 << 2 s<= sub_6ec8f0(arg1))
            int32_t esi_1 = eax_4 << 2
            int32_t eax_6 = _malloc(esi_1)
            arg2[1] = eax_6
            int32_t eax_8 = _malloc(esi_1)
            *arg2 = eax_8
            
            if (eax_6 == 0 || eax_8 == 0)
                arg2[2] = 0
                return 0xffffffff
            
            int32_t i_1 = 0
            
            if (eax_4 s> 0)
                int32_t i
                
                do
                    char* eax_10 = sub_6e9430(arg1)
                    int32_t eax_11
                    
                    if (eax_10 s>= 0)
                        eax_11 = sub_6ec8f0(arg1)
                    
                    if (eax_10 s< 0 || eax_10 s> eax_11)
                        arg2[2] = i_1
                        return 0xffffffec
                    
                    int32_t ecx_12 = i_1 << 2
                    uint8_t** var_c_1 = ecx_12
                    *(ecx_12 + arg2[1]) = eax_10
                    *(var_c_1 + *arg2) = _malloc(&eax_10[1])
                    int32_t eax_16 = *arg2
                    uint8_t* edx_3 = *(var_c_1 + eax_16)
                    
                    if (edx_3 == 0)
                        arg2[2] = i_1
                        return 0xffffffff
                    
                    sub_6e93e0(eax_16.b, edx_3, arg1, eax_10)
                    eax_10[*(var_c_1 + *arg2)] = 0
                    i = i_1 + 1
                    i_1 = i
                while (i s< arg2[2])
            
            if (sub_6ec8f0(arg1) s< 0)
                return 0xffffffec
            
            return 0
        
        arg2[2] = 0

return 0xffffffec
