// 函数: sub_445d44
// 地址: 0x445d44
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_1 = *arg2
int32_t result = 0
int32_t edx = *eax_1
int32_t edi
int32_t var_20 = edi
int32_t i_11 = eax_1[4]
int32_t ecx = eax_1[1]

if (arg6 != 0 || i_11 u< 1)
    i_11 = 1

if (ecx s>= 0)
    if (ecx s<= 3)
        int32_t j_6 = eax_1[5]
        int32_t esi_6 = eax_1[6]
        int32_t eax_29
        eax_29.b = ecx != 2
        arg6 = j_6
        
        if (edx == 1)
            if (i_11 u> 0)
                int32_t edx_15 = (esi_6 * j_6) << 2
                int32_t i_10 = i_11
                int32_t i
                
                do
                    arg5 = nullptr
                    
                    if (esi_6 u> 0)
                        do
                            if (j_6 u> 0)
                                int32_t ecx_26 = arg5 << 4
                                int32_t edi_15 = arg5 << 2
                                int32_t j_4 = j_6
                                int32_t j
                                
                                do
                                    int32_t ebx_10
                                    ebx_10.b = *(ecx_26 + *arg3) != 0
                                    ecx_26 += 4
                                    *(edi_15 + *arg4) = ebx_10
                                    edi_15 += esi_6 << 2
                                    j = j_4
                                    j_4 -= 1
                                while (j != 1)
                                j_6 = arg6
                            
                            arg5 += 1
                        while (arg5 u< esi_6)
                    
                    *arg3 += ((eax_29 - 1) & 0x30) + 0x10
                    *arg4 += edx_15
                    i = i_10
                    i_10 -= 1
                while (i != 1)
            
            *arg2 += 0x1c
            return result
        
        if (edx == 2)
            if (i_11 u> 0)
                int32_t edx_12 = (esi_6 * j_6) << 2
                int32_t i_9 = i_11
                int32_t i_1
                
                do
                    arg5 = nullptr
                    
                    if (esi_6 u> 0)
                        do
                            if (j_6 u> 0)
                                int32_t ecx_23 = arg5 << 4
                                int32_t eax_38 = arg5 << 2
                                int32_t j_3 = j_6
                                int32_t j_1
                                
                                do
                                    *(eax_38 + *arg4) = *(ecx_23 + *arg3)
                                    ecx_23 += 4
                                    eax_38 += esi_6 << 2
                                    j_1 = j_3
                                    j_3 -= 1
                                while (j_1 != 1)
                                j_6 = arg6
                            
                            arg5 += 1
                        while (arg5 u< esi_6)
                    
                    *arg3 += ((eax_29 - 1) & 0x30) + 0x10
                    *arg4 += edx_12
                    i_1 = i_9
                    i_9 -= 1
                while (i_1 != 1)
            
            *arg2 += 0x1c
            return result
        
        if (edx == 3)
            if (i_11 u> 0)
                int32_t edx_9 = (esi_6 * j_6) << 2
                int32_t i_8 = i_11
                int32_t i_2
                
                do
                    arg5 = nullptr
                    
                    if (esi_6 u> 0)
                        do
                            if (j_6 u> 0)
                                int32_t ecx_20 = arg5 << 4
                                int32_t eax_34 = arg5 << 2
                                int32_t j_5 = j_6
                                int32_t j_2
                                
                                do
                                    *(eax_34 + *arg4) = fconvert.s(fconvert.t(*(ecx_20 + *arg3)))
                                    ecx_20 += 4
                                    eax_34 += esi_6 << 2
                                    j_2 = j_5
                                    j_5 -= 1
                                while (j_2 != 1)
                                j_6 = arg6
                            
                            arg5 += 1
                        while (arg5 u< esi_6)
                    
                    *arg3 += ((eax_29 - 1) & 0x30) + 0x10
                    *arg4 += edx_9
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
            
            *arg2 += 0x1c
            return result
    else if (ecx == 4)
        if (edx == 4)
            if (i_11 != 0)
                arg6 = i_11
                int32_t i_3
                
                do
                    int32_t eax_23 = **arg3
                    
                    if (arg5 != 0)
                        eax_23 = *(*(arg5 + 8) + (eax_23 << 2))
                    
                    void* eax_25 = *(arg1 + 0x18) + eax_23 * 0x18
                    int32_t eax_26
                    
                    if (*(eax_25 + 4) != 0)
                        int32_t* eax_27 = *(eax_25 + 4)
                        eax_26 = (*(*eax_27 + 0xc))(eax_27)
                    else
                        eax_26 = 0
                    
                    **arg4 = eax_26
                    *arg3 += 4
                    *arg4 += 4
                    i_3 = arg6
                    arg6 -= 1
                while (i_3 != 1)
            
            *arg2 += 0x14
            return result
        
        if (edx s> 4)
            if (edx s<= 9)
                if (i_11 != 0)
                    arg6 = i_11
                    int32_t i_4
                    
                    do
                        int32_t eax_17 = **arg3
                        
                        if (arg5 != 0)
                            eax_17 = *(*(arg5 + 8) + (eax_17 << 2))
                        
                        **arg4 = *(*(arg1 + 0x18) + eax_17 * 0x18 + 4)
                        int32_t* eax_20 = *arg4
                        
                        if (*eax_20 != 0)
                            int32_t* eax_21 = *eax_20
                            (*(*eax_21 + 4))(eax_21)
                        
                        *arg3 += 4
                        *arg4 += 4
                        i_4 = arg6
                        arg6 -= 1
                    while (i_4 != 1)
                
                *arg2 += 0x14
                return result
            
            if (edx == 0xf)
                if (i_11 != 0)
                    arg6 = i_11
                    int32_t i_5
                    
                    do
                        int32_t eax_11 = **arg3
                        
                        if (arg5 != 0)
                            eax_11 = *(*(arg5 + 8) + (eax_11 << 2))
                        
                        **arg4 = *(*(arg1 + 0x18) + eax_11 * 0x18 + 4)
                        int32_t* eax_14 = *arg4
                        
                        if (*eax_14 != 0)
                            int32_t* eax_15 = *eax_14
                            (*(*eax_15 + 4))(eax_15)
                        
                        *arg3 += 4
                        *arg4 += 4
                        i_5 = arg6
                        arg6 -= 1
                    while (i_5 != 1)
                
                *arg2 += 0x14
                return result
            
            if (edx == 0x10)
                if (i_11 != 0)
                    arg6 = i_11
                    int32_t i_6
                    
                    do
                        int32_t eax_5 = **arg3
                        
                        if (arg5 != 0)
                            eax_5 = *(*(arg5 + 8) + (eax_5 << 2))
                        
                        **arg4 = *(*(arg1 + 0x18) + eax_5 * 0x18 + 4)
                        int32_t* eax_8 = *arg4
                        
                        if (*eax_8 != 0)
                            int32_t* eax_9 = *eax_8
                            (*(*eax_9 + 4))(eax_9)
                        
                        *arg3 += 4
                        *arg4 += 4
                        i_6 = arg6
                        arg6 -= 1
                    while (i_6 != 1)
                
                *arg2 += 0x14
                return result
    else if (ecx == 5)
        int32_t ebx_1 = eax_1[5]
        *arg2 = &eax_1[6]
        
        if (i_11 != 0)
            int32_t i_7
            
            do
                arg6 = 0
                *arg2 = &eax_1[6]
                
                if (ebx_1 u> 0)
                    do
                        int32_t result_1 = sub_445d44(arg2, arg3, arg4, arg5, 0)
                        result = result_1
                        
                        if (result_1 s< 0)
                            return result
                        
                        arg6 += 1
                    while (arg6 u< ebx_1)
                
                i_7 = i_11
                i_11 -= 1
            while (i_7 != 1)
        
        return result

return 0x80004005
