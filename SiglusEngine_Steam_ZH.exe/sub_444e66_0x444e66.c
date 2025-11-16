// 函数: sub_444e66
// 地址: 0x444e66
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t k_7 = arg1[5]
int32_t edx = *arg1
int32_t* eax_1 = arg1[6]
int32_t edi
int32_t var_20 = edi
int32_t k_6 = 4

if (k_7 u<= 4)
    k_6 = k_7

arg1 = 4

if (eax_1 u<= 4)
    arg1 = eax_1

if (edx == 1)
    int32_t ecx_13 = arg4 << 6
    __builtin_memset(__builtin_memset(arg3, 0, ecx_13 u>> 2 << 2), 0, ecx_13 & 3)
    
    if (arg4 != 0)
        int32_t* i_4 = arg4
        int32_t* i
        
        do
            if (arg1 u> 0)
                int32_t* edx_7 = arg3
                int32_t* edi_9 = arg2
                arg4 = arg1
                int32_t* j
                
                do
                    int32_t k_5 = k_6
                    
                    if (k_5 u> 0)
                        int32_t* ecx_17 = edi_9
                        int32_t* eax_6 = edx_7
                        int32_t k
                        
                        do
                            int32_t ebx_2
                            ebx_2.b = *ecx_17 != 0
                            ecx_17 = &ecx_17[1]
                            *eax_6 = fconvert.s(float.t(ebx_2))
                            eax_6 = &eax_6[4]
                            k = k_5
                            k_5 -= 1
                        while (k != 1)
                    
                    edi_9 = &edi_9[4]
                    edx_7 = &edx_7[1]
                    j = arg4
                    arg4 -= 1
                while (j != 1)
            
            arg2 = &arg2[0x10]
            arg3 = &arg3[0x10]
            i = i_4
            i_4 -= 1
        while (i != 1)
else if (edx == 2)
    int32_t ecx_7 = arg4 << 6
    __builtin_memset(__builtin_memset(arg3, 0, ecx_7 u>> 2 << 2), 0, ecx_7 & 3)
    
    if (arg4 != 0)
        int32_t* i_1
        
        do
            int32_t* j_3 = arg1
            
            if (j_3 u> 0)
                int32_t* edi_6 = arg3
                int32_t* esi_4 = arg2
                int32_t* j_1
                
                do
                    int32_t k_4 = k_6
                    
                    if (k_4 u> 0)
                        int32_t* ecx_11 = esi_4
                        int32_t* eax_4 = edi_6
                        int32_t k_1
                        
                        do
                            long double x87_r7_1 = float.t(*ecx_11)
                            ecx_11 = &ecx_11[1]
                            *eax_4 = fconvert.s(x87_r7_1)
                            eax_4 = &eax_4[4]
                            k_1 = k_4
                            k_4 -= 1
                        while (k_1 != 1)
                    
                    esi_4 = &esi_4[4]
                    edi_6 = &edi_6[1]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
            
            arg2 = &arg2[0x10]
            arg3 = &arg3[0x10]
            i_1 = arg4
            arg4 -= 1
        while (i_1 != 1)
else
    if (edx != 3)
        return 0x8876086c
    
    int32_t ecx_1 = arg4 << 6
    __builtin_memset(__builtin_memset(arg3, 0, ecx_1 u>> 2 << 2), 0, ecx_1 & 3)
    
    if (arg4 != 0)
        int32_t* i_3 = arg4
        int32_t* i_2
        
        do
            if (arg1 u> 0)
                int32_t* edi_3 = arg3
                int32_t* esi_2 = arg2
                arg4 = arg1
                int32_t* j_2
                
                do
                    int32_t k_3 = k_6
                    
                    if (k_3 u> 0)
                        int32_t* ecx_5 = esi_2
                        int32_t* eax_3 = edi_3
                        int32_t k_2
                        
                        do
                            *eax_3 = *ecx_5
                            eax_3 = &eax_3[4]
                            ecx_5 = &ecx_5[1]
                            k_2 = k_3
                            k_3 -= 1
                        while (k_2 != 1)
                    
                    esi_2 = &esi_2[4]
                    edi_3 = &edi_3[1]
                    j_2 = arg4
                    arg4 -= 1
                while (j_2 != 1)
            
            arg2 = &arg2[0x10]
            arg3 = &arg3[0x10]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

return 0
