// 函数: sub_4548a6
// 地址: 0x4548a6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t result = 0

if (arg4 != 0)
    int32_t edi
    int32_t var_14_1 = edi
    
    if (arg3 == 0)
        result = 0x8876086c
    else
        int32_t eax_1 = sub_4538a9(arg1, arg2, 1, 0)
        
        if (eax_1 == 0)
            result = 0x8876086c
        else
            int32_t* ecx_2 = *(eax_1 + 4)
            int32_t edx_1 = ecx_2[4]
            
            if (edx_1 == 0 || *(eax_1 + 8) != 0xffffffff || arg4 u> edx_1 || ecx_2[1] != 1)
                result = 0x8876086c
            else
                void* edx_4 = ecx_2[5]
                int32_t esi_1 = *ecx_2
                arg2 = *eax_1
                arg1 = 4
                
                if (edx_4 u<= 4)
                    arg1 = edx_4
                
                int32_t ecx_4 = arg4 << 4
                __builtin_memset(__builtin_memset(arg3, 0, ecx_4 u>> 2 << 2), 0, ecx_4 & 3)
                
                if (esi_1 == 1)
                    int32_t i_3 = arg4
                    int32_t i
                    
                    do
                        void* j_5 = arg1
                        
                        if (j_5 u> 0)
                            float* eax_5 = arg3
                            void* ecx_13 = arg2 - eax_5
                            void* j
                            
                            do
                                int32_t ebx_2
                                ebx_2.b = *(eax_5 + ecx_13) != 0
                                *eax_5 = fconvert.s(float.t(ebx_2))
                                eax_5 = &eax_5[1]
                                j = j_5
                                j_5 -= 1
                            while (j != 1)
                        
                        arg2 = &arg2[edx_4 << 2]
                        arg3 = &arg3[4]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                else if (esi_1 == 2)
                    int32_t i_5 = arg4
                    int32_t i_1
                    
                    do
                        void* j_4 = arg1
                        
                        if (j_4 u> 0)
                            float* eax_4 = arg3
                            void* ecx_11 = arg2 - eax_4
                            void* j_1
                            
                            do
                                *eax_4 = fconvert.s(float.t(*(eax_4 + ecx_11)))
                                eax_4 = &eax_4[1]
                                j_1 = j_4
                                j_4 -= 1
                            while (j_1 != 1)
                        
                        arg2 = &arg2[edx_4 << 2]
                        arg3 = &arg3[4]
                        i_1 = i_5
                        i_5 -= 1
                    while (i_1 != 1)
                else if (esi_1 != 3)
                    result = 0x8876086c
                else
                    int32_t i_4 = arg4
                    int32_t i_2
                    
                    do
                        void* j_3 = arg1
                        
                        if (j_3 u> 0)
                            float* eax_3 = arg3
                            void* ecx_9 = arg2 - eax_3
                            void* j_2
                            
                            do
                                *eax_3 = fconvert.s(fconvert.t(*(ecx_9 + eax_3)))
                                eax_3 = &eax_3[1]
                                j_2 = j_3
                                j_3 -= 1
                            while (j_2 != 1)
                        
                        arg2 = &arg2[edx_4 << 2]
                        arg3 = &arg3[4]
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)

return result
