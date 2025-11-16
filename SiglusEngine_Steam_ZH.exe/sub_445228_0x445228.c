// 函数: sub_445228
// 地址: 0x445228
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t edx = *arg1
int32_t j_7 = arg1[5]
int32_t* eax_1 = arg1[6]
int32_t edi
int32_t var_18 = edi
arg1 = 4

if (eax_1 u<= 4)
    arg1 = eax_1

int32_t j_6 = 4

if (j_7 u<= 4)
    j_6 = j_7

if (edx == 1)
    if (arg4 != 0)
        int32_t* edx_6 = arg3
        int32_t ebx_3 = arg2
        int32_t i
        
        do
            int32_t edi_5 = *edx_6
            
            if (edi_5 != 0)
                __builtin_memset(edi_5, 0, 0x40)
                int32_t edi_6 = 0
                
                if (arg1 u> 0)
                    do
                        int32_t j_5 = j_6
                        
                        if (j_5 u> 0)
                            float* eax_10 = edi_6 << 4
                            int32_t j
                            
                            do
                                int32_t* ecx_1
                                ecx_1.b = *(eax_10 + ebx_3) != 0
                                *(eax_10 + *edx_6) = fconvert.s(float.t(ecx_1))
                                eax_10 = &eax_10[1]
                                j = j_5
                                j_5 -= 1
                            while (j != 1)
                        
                        edi_6 += 1
                    while (edi_6 u< arg1)
            
            ebx_3 += 0x40
            edx_6 = &edx_6[1]
            i = arg4
            arg4 -= 1
        while (i != 1)
else if (edx != 2)
    if (edx != 3)
        return 0x8876086c
    
    if (arg4 != 0)
        int32_t* edx_4 = arg3
        int32_t ebx_1 = arg2
        int32_t i_1
        
        do
            int32_t edi_1 = *edx_4
            
            if (edi_1 != 0)
                __builtin_memset(edi_1, 0, 0x40)
                int32_t edi_2 = 0
                
                if (arg1 u> 0)
                    do
                        int32_t j_3 = j_6
                        
                        if (j_3 u> 0)
                            int32_t eax_4 = edi_2 << 4
                            int32_t j_1
                            
                            do
                                *(eax_4 + *edx_4) = fconvert.s(fconvert.t(*(eax_4 + ebx_1)))
                                eax_4 += 4
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                        
                        edi_2 += 1
                    while (edi_2 u< arg1)
            
            ebx_1 += 0x40
            edx_4 = &edx_4[1]
            i_1 = arg4
            arg4 -= 1
        while (i_1 != 1)
else if (arg4 != 0)
    int32_t* edx_5 = arg3
    int32_t esi_2 = arg2
    int32_t i_2
    
    do
        int32_t edi_3 = *edx_5
        
        if (edi_3 != 0)
            __builtin_memset(edi_3, 0, 0x40)
            int32_t edi_4 = 0
            
            if (arg1 u> 0)
                do
                    int32_t j_4 = j_6
                    
                    if (j_4 u> 0)
                        int32_t eax_7 = edi_4 << 4
                        int32_t j_2
                        
                        do
                            *(eax_7 + *edx_5) = fconvert.s(float.t(*(eax_7 + esi_2)))
                            eax_7 += 4
                            j_2 = j_4
                            j_4 -= 1
                        while (j_2 != 1)
                    
                    edi_4 += 1
                while (edi_4 u< arg1)
        
        esi_2 += 0x40
        edx_5 = &edx_5[1]
        i_2 = arg4
        arg4 -= 1
    while (i_2 != 1)

return 0
