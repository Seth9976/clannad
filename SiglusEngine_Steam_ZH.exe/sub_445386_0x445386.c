// 函数: sub_445386
// 地址: 0x445386
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t j_7 = arg1[5]
int32_t edx = *arg1
int32_t* eax_1 = arg1[6]
int32_t edi
int32_t var_1c = edi
int32_t j_6 = 4

if (j_7 u<= 4)
    j_6 = j_7

arg1 = 4

if (eax_1 u<= 4)
    arg1 = eax_1

if (edx == 1)
    if (arg4 != 0)
        int32_t* edx_6 = arg3
        float* i_5 = arg4
        float* i
        
        do
            int32_t edi_3 = *edx_6
            
            if (edi_3 != 0)
                int32_t esi_3 = 0
                __builtin_memset(edi_3, 0, 0x40)
                
                if (arg1 u> 0)
                    arg4 = arg2
                    
                    do
                        int32_t j_5 = j_6
                        
                        if (j_5 u> 0)
                            float* ecx_2 = arg4
                            float* eax_13 = esi_3 << 2
                            int32_t j
                            
                            do
                                int32_t* ebx_3
                                ebx_3.b = *ecx_2 != 0
                                *(eax_13 + *edx_6) = fconvert.s(float.t(ebx_3))
                                eax_13 = &eax_13[4]
                                ecx_2 = &ecx_2[1]
                                j = j_5
                                j_5 -= 1
                            while (j != 1)
                        
                        arg4 = &arg4[4]
                        esi_3 += 1
                    while (esi_3 u< arg1)
            
            arg2 = &arg2[0x10]
            edx_6 = &edx_6[1]
            i = i_5
            i_5 -= 1
        while (i != 1)
else if (edx != 2)
    if (edx != 3)
        return 0x8876086c
    
    if (arg4 != 0)
        int32_t* esi_1 = arg3
        float* i_3 = arg4
        float* i_1
        
        do
            int32_t edi_1 = *esi_1
            
            if (edi_1 != 0)
                int32_t edx_4 = 0
                __builtin_memset(edi_1, 0, 0x40)
                
                if (arg1 u> 0)
                    arg4 = arg2
                    
                    do
                        int32_t j_3 = j_6
                        
                        if (j_3 u> 0)
                            float* ecx = arg4
                            int32_t eax_5 = edx_4 << 2
                            int32_t j_1
                            
                            do
                                *(eax_5 + *esi_1) = fconvert.s(fconvert.t(*ecx))
                                eax_5 += 0x10
                                ecx = &ecx[1]
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                        
                        arg4 = &arg4[4]
                        edx_4 += 1
                    while (edx_4 u< arg1)
            
            arg2 = &arg2[0x10]
            esi_1 = &esi_1[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
else if (arg4 != 0)
    int32_t* esi_2 = arg3
    float* i_4 = arg4
    float* i_2
    
    do
        int32_t edi_2 = *esi_2
        
        if (edi_2 != 0)
            int32_t edx_5 = 0
            __builtin_memset(edi_2, 0, 0x40)
            
            if (arg1 u> 0)
                arg4 = arg2
                
                do
                    int32_t j_4 = j_6
                    
                    if (j_4 u> 0)
                        float* ecx_1 = arg4
                        float* eax_9 = edx_5 << 2
                        int32_t j_2
                        
                        do
                            *(eax_9 + *esi_2) = fconvert.s(float.t(*ecx_1))
                            eax_9 = &eax_9[4]
                            ecx_1 = &ecx_1[1]
                            j_2 = j_4
                            j_4 -= 1
                        while (j_2 != 1)
                    
                    arg4 = &arg4[4]
                    edx_5 += 1
                while (edx_5 u< arg1)
        
        arg2 = &arg2[0x10]
        esi_2 = &esi_2[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

return 0
