// 函数: sub_432924
// 地址: 0x432924
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    int32_t j_7 = *(arg1 + 0x14)
    void* k_4 = *(arg1 + 0x18)
    int32_t j_8 = j_7
    void* k_5 = k_4
    int32_t j_9 = 4
    
    if (j_7 u<= 4)
        j_9 = j_7
    
    arg1 = 4
    
    if (k_4 u<= 4)
        arg1 = k_4
    
    int32_t edi
    int32_t var_20_1 = edi
    void* edi_1 = arg2
    
    do
        void* j_3 = arg3
        
        if (*j_3 != 0)
            void* edx_1 = nullptr
            arg2 = nullptr
            
            if (j_9 u> 0)
                do
                    int32_t ebx_1 = 0
                    
                    if (arg1 u> 0)
                        int32_t esi_2 = edx_1 << 4
                        
                        do
                            void* j_6 = j_3
                            int32_t result_1 =
                                sub_43250c(edi_1, fconvert.s(fconvert.t(*(esi_2 + *arg3))))
                            result = result_1
                            
                            if (result_1 s< 0)
                                return result
                            
                            edi_1 = *(edi_1 + 0xc)
                            ebx_1 += 1
                            esi_2 += 4
                        while (ebx_1 u< arg1)
                        
                        j_7 = j_8
                        k_4 = k_5
                    
                    if (ebx_1 u< k_4)
                        j_3 = k_4 - ebx_1
                        void* j
                        
                        do
                            j = j_3
                            j_3 -= 1
                            edi_1 = *(edi_1 + 0xc)
                        while (j != 1)
                    
                    edx_1 = arg2 + 1
                    arg2 = edx_1
                while (edx_1 u< j_9)
            
            if (edx_1 u< j_7)
                void* j_4 = j_7 - edx_1
                void* j_1
                
                do
                    if (k_4 u> 0)
                        void* k_3 = k_4
                        void* k
                        
                        do
                            k = k_3
                            k_3 -= 1
                            edi_1 = *(edi_1 + 0xc)
                        while (k != 1)
                    
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
        else if (j_7 u> 0)
            int32_t j_5 = j_7
            int32_t j_2
            
            do
                if (k_4 u> 0)
                    void* k_2 = k_4
                    void* k_1
                    
                    do
                        k_1 = k_2
                        k_2 -= 1
                        edi_1 = *(edi_1 + 0xc)
                    while (k_1 != 1)
                
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
        
        arg4 -= 1
        arg3 += 4
    while (arg4 != 0)

return result
