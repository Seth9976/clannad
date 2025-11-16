// 函数: sub_444ce7
// 地址: 0x444ce7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *arg1
int32_t k_7 = arg1[5]
int32_t* eax_1 = arg1[6]
int32_t edi
int32_t var_1c = edi
arg1 = 4

if (eax_1 u<= 4)
    arg1 = eax_1

int32_t k_6 = 4

if (k_7 u<= 4)
    k_6 = k_7

if (edx == 1)
    float* edx_6 = arg3
    int32_t ecx_15 = arg4 << 6
    __builtin_memset(__builtin_memset(edx_6, 0, ecx_15 u>> 2 << 2), 0, ecx_15 & 3)
    
    if (arg4 != 0)
        arg3 = arg4
        float* i
        
        do
            if (arg1 u> 0)
                int32_t* edi_7 = edx_6
                arg4 = arg1
                int32_t* j
                
                do
                    int32_t k_5 = k_6
                    
                    if (k_5 u> 0)
                        int32_t* eax_5 = edi_7
                        int32_t k
                        
                        do
                            int32_t ebx_4
                            ebx_4.b = *(eax_5 + arg2 - edx_6) != 0
                            *eax_5 = fconvert.s(float.t(ebx_4))
                            eax_5 = &eax_5[1]
                            k = k_5
                            k_5 -= 1
                        while (k != 1)
                    
                    edi_7 = &edi_7[4]
                    j = arg4
                    arg4 -= 1
                while (j != 1)
            
            arg2 += 0x40
            edx_6 = &edx_6[0x10]
            i = arg3
            arg3 -= 1
        while (i != 1)
else if (edx == 2)
    float* ebx_2 = arg3
    int32_t ecx_8 = arg4 << 6
    __builtin_memset(__builtin_memset(ebx_2, 0, ecx_8 u>> 2 << 2), 0, ecx_8 & 3)
    
    if (arg4 != 0)
        int32_t* i_1
        
        do
            if (arg1 u> 0)
                int32_t* j_4 = arg1
                int32_t* esi_4 = ebx_2
                int32_t* j_1
                
                do
                    int32_t k_4 = k_6
                    
                    if (k_4 u> 0)
                        int32_t* eax_3 = esi_4
                        int32_t k_1
                        
                        do
                            *eax_3 = fconvert.s(float.t(*(eax_3 + arg2 - ebx_2)))
                            eax_3 = &eax_3[1]
                            k_1 = k_4
                            k_4 -= 1
                        while (k_1 != 1)
                    
                    esi_4 = &esi_4[4]
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
            
            arg2 += 0x40
            ebx_2 = &ebx_2[0x10]
            i_1 = arg4
            arg4 -= 1
        while (i_1 != 1)
else
    if (edx != 3)
        return 0x8876086c
    
    float* ebx_1 = arg3
    int32_t ecx_1 = arg4 << 6
    __builtin_memset(__builtin_memset(ebx_1, 0, ecx_1 u>> 2 << 2), 0, ecx_1 & 3)
    
    if (arg4 != 0)
        int32_t* i_2
        
        do
            if (arg1 u> 0)
                int32_t* j_3 = arg1
                float* esi_2 = ebx_1
                int32_t* j_2
                
                do
                    int32_t k_3 = k_6
                    
                    if (k_3 u> 0)
                        float* eax_2 = esi_2
                        int32_t k_2
                        
                        do
                            *eax_2 = fconvert.s(fconvert.t(*(arg2 - ebx_1 + eax_2)))
                            eax_2 = &eax_2[1]
                            k_2 = k_3
                            k_3 -= 1
                        while (k_2 != 1)
                    
                    esi_2 = &esi_2[4]
                    j_2 = j_3
                    j_3 -= 1
                while (j_2 != 1)
            
            arg2 += 0x40
            ebx_1 = &ebx_1[0x10]
            i_2 = arg4
            arg4 -= 1
        while (i_2 != 1)

return 0
