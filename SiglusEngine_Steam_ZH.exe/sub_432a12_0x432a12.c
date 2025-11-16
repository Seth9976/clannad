// 函数: sub_432a12
// 地址: 0x432a12
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = 0

if (arg4 != 0)
    void* k_4 = *(arg1 + 0x18)
    int32_t j_6 = *(arg1 + 0x14)
    int32_t j_7 = j_6
    void* k_5 = k_4
    int32_t j_8 = 4
    
    if (j_6 u<= 4)
        j_8 = j_6
    
    arg1 = 4
    
    if (k_4 u<= 4)
        arg1 = k_4
    
    int32_t esi_1 = arg2
    int32_t edi
    int32_t var_20_1 = edi
    
    do
        int32_t edi_1 = *arg3
        
        if (edi_1 != 0)
            __builtin_memset(edi_1, 0, 0x40)
            int32_t edi_2 = 0
            arg2 = 0
            
            if (j_8 u> 0)
                do
                    int32_t ebx_1 = 0
                    
                    if (arg1 u> 0)
                        int32_t edi_3 = edi_2 << 4
                        
                        do
                            int32_t result_1 = sub_432568(esi_1, *arg3 + edi_3)
                            result = result_1
                            
                            if (result_1 s< 0)
                                return result
                            
                            esi_1 = *(esi_1 + 0xc)
                            ebx_1 += 1
                            edi_3 += 4
                        while (ebx_1 u< arg1)
                        
                        k_4 = k_5
                    
                    if (ebx_1 u< k_4)
                        void* j_3 = k_4 - ebx_1
                        void* j
                        
                        do
                            j = j_3
                            j_3 -= 1
                            esi_1 = *(esi_1 + 0xc)
                        while (j != 1)
                    
                    edi_2 = arg2 + 1
                    arg2 = edi_2
                while (edi_2 u< j_8)
                
                j_6 = j_7
            
            if (edi_2 u< j_6)
                int32_t j_4 = j_6 - edi_2
                int32_t j_1
                
                do
                    if (k_4 u> 0)
                        void* k_3 = k_4
                        void* k
                        
                        do
                            k = k_3
                            k_3 -= 1
                            esi_1 = *(esi_1 + 0xc)
                        while (k != 1)
                    
                    j_1 = j_4
                    j_4 -= 1
                while (j_1 != 1)
        else if (j_6 u> 0)
            int32_t j_5 = j_6
            int32_t j_2
            
            do
                if (k_4 u> 0)
                    void* k_2 = k_4
                    void* k_1
                    
                    do
                        k_1 = k_2
                        k_2 -= 1
                        esi_1 = *(esi_1 + 0xc)
                    while (k_1 != 1)
                
                j_2 = j_5
                j_5 -= 1
            while (j_2 != 1)
        
        arg4 -= 1
        arg3 = &arg3[1]
    while (arg4 != 0)

return result
