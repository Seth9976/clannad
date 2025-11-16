// 函数: sub_4459a4
// 地址: 0x4459a4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t* esi = arg2
int32_t* eax = *esi
int32_t edx = *eax
int32_t edi
int32_t var_18 = edi
int32_t ecx = eax[1]

if (ecx s>= 0)
    if (ecx s<= 1)
        int32_t* i = *arg3
        int32_t* edi_7 = *arg4
        int32_t eax_52 = eax[5]
        
        for (void* ecx_21 = &i[arg5 * 4]; i u< ecx_21; i = &i[4 - eax_52])
            if (eax_52 u> 0)
                arg5 = eax_52
                int32_t j
                
                do
                    *i = *edi_7
                    i = &i[1]
                    edi_7 = &edi_7[1]
                    j = arg5
                    arg5 -= 1
                while (j != 1)
        
        *arg3 = i
        *arg4 = edi_7
        *arg2 += 0x1c
        return 0
    
    if (ecx s<= 3)
        void* j_7 = eax[5]
        int32_t edi_6 = eax[6]
        arg6 = j_7
        
        if (edx == 1)
            if (arg5 u> 0)
                int32_t edx_12 = (edi_6 * j_7) << 2
                int32_t i_11 = arg5
                int32_t i_1
                
                do
                    arg5 = 0
                    
                    if (edi_6 u> 0)
                        do
                            if (j_7 u> 0)
                                int32_t ecx_16 = arg5 << 4
                                int32_t esi_10 = arg5 << 2
                                void* j_5 = j_7
                                void* j_1
                                
                                do
                                    int32_t ebx_5
                                    ebx_5.b = *(esi_10 + *arg4) != 0
                                    *(ecx_16 + *arg3) = ebx_5
                                    ecx_16 += 4
                                    esi_10 += edi_6 << 2
                                    j_1 = j_5
                                    j_5 -= 1
                                while (j_1 != 1)
                                j_7 = arg6
                            
                            arg5 += 1
                        while (arg5 u< edi_6)
                    
                    *arg3 += 0x40
                    *arg4 += edx_12
                    i_1 = i_11
                    i_11 -= 1
                while (i_1 != 1)
        else if (edx == 2)
            if (arg5 u> 0)
                int32_t edx_9 = (edi_6 * j_7) << 2
                int32_t i_10 = arg5
                int32_t i_2
                
                do
                    arg5 = 0
                    
                    if (edi_6 u> 0)
                        do
                            if (j_7 u> 0)
                                int32_t ecx_14 = arg5 << 4
                                int32_t esi_8 = arg5 << 2
                                void* j_4 = j_7
                                void* j_2
                                
                                do
                                    *(ecx_14 + *arg3) = *(esi_8 + *arg4)
                                    ecx_14 += 4
                                    esi_8 += edi_6 << 2
                                    j_2 = j_4
                                    j_4 -= 1
                                while (j_2 != 1)
                                j_7 = arg6
                            
                            arg5 += 1
                        while (arg5 u< edi_6)
                    
                    *arg3 += 0x40
                    *arg4 += edx_9
                    i_2 = i_10
                    i_10 -= 1
                while (i_2 != 1)
        else if (edx == 3 && arg5 u> 0)
            int32_t edx_6 = (edi_6 * j_7) << 2
            int32_t i_9 = arg5
            int32_t i_3
            
            do
                arg5 = 0
                
                if (edi_6 u> 0)
                    do
                        if (j_7 u> 0)
                            int32_t ecx_12 = arg5 << 4
                            int32_t esi_6 = arg5 << 2
                            void* j_6 = j_7
                            void* j_3
                            
                            do
                                *(ecx_12 + *arg3) = fconvert.s(fconvert.t(*(esi_6 + *arg4)))
                                ecx_12 += 4
                                esi_6 += edi_6 << 2
                                j_3 = j_6
                                j_6 -= 1
                            while (j_3 != 1)
                            j_7 = arg6
                        
                        arg5 += 1
                    while (arg5 u< edi_6)
                
                *arg3 += 0x40
                *arg4 += edx_6
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
        
        *arg2 += 0x1c
        return 0
    
    int32_t result
    
    if (ecx == 4)
        if (edx == 4)
            if (arg5 != 0)
                int32_t i_4
                
                do
                    result = sub_444948(arg1, **arg4, **arg3, 
                        *(*(*(arg1 + 0xb0) + (*(arg6 + 0x14) << 2)) + 0x40))
                    
                    if (result s< 0)
                        return result
                    
                    *arg3 += 4
                    *arg4 += 4
                    i_4 = arg5
                    arg5 -= 1
                while (i_4 != 1)
                esi = arg2
        else if (edx s> 4)
            if (edx s<= 9)
                if (arg5 != 0)
                    int32_t i_5
                    
                    do
                        sub_4448a4(arg1, **arg4, **arg3, 
                            *(*(*(arg1 + 0xb0) + (*(arg6 + 0x14) << 2)) + 0x40))
                        *arg3 += 4
                        *arg4 += 4
                        i_5 = arg5
                        arg5 -= 1
                    while (i_5 != 1)
                    esi = arg2
            else if (edx == 0xf)
                if (arg5 != 0)
                    int32_t i_6
                    
                    do
                        sub_4447ec(arg1, **arg4, **arg3, 
                            *(*(*(arg1 + 0xb0) + (*(arg6 + 0x14) << 2)) + 0x40))
                        *arg3 += 4
                        *arg4 += 4
                        i_6 = arg5
                        arg5 -= 1
                    while (i_6 != 1)
                    esi = arg2
            else if (edx == 0x10 && arg5 != 0)
                int32_t i_7
                
                do
                    sub_4447ec(arg1, **arg4, **arg3, 
                        *(*(*(arg1 + 0xb0) + (*(arg6 + 0x14) << 2)) + 0x40))
                    *arg3 += 4
                    *arg4 += 4
                    i_7 = arg5
                    arg5 -= 1
                while (i_7 != 1)
                esi = arg2
        
        *esi += 0x14
        return 0
    
    if (ecx == 5)
        int32_t ecx_1 = eax[5]
        *esi = &eax[6]
        
        if (arg5 != 0)
            int32_t i_8
            
            do
                arg2 = nullptr
                *esi = &eax[6]
                
                if (ecx_1 u> 0)
                    do
                        int32_t eax_2 = *(*esi + 0x10)
                        
                        if (eax_2 u< 1)
                            eax_2 = 1
                        
                        result = sub_4459a4(esi, arg3, arg4, eax_2, arg6)
                        
                        if (result s< 0)
                            return result
                        
                        arg2 += 1
                    while (arg2 u< ecx_1)
                
                i_8 = arg5
                arg5 -= 1
            while (i_8 != 1)
        
        return 0

return 0x80004005
