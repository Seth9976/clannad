// 函数: sub_65cb10
// 地址: 0x65cb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx_2 = (arg2 - arg3) s/ 0xe
int32_t eax_2
int32_t edx_3
edx_3:eax_2 = sx.q(ebx_2)
int32_t result = eax_2 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* edx_4 = (i << 1) + 2
    void* ecx_2 = arg3 + i * 0xe
    
    do
        int32_t var_1c_1 = *(ecx_2 - 6)
        void* ebx_3 = i - 1
        void* esi_4 = edx_4 - 2
        int32_t eax_3
        eax_3.w = *(ecx_2 - 2)
        int32_t ecx_4 = ebx_2
        int64_t var_24 = *(ecx_2 - 0xe)
        int16_t var_18_1 = eax_3.w
        
        if (edx_4 - 2 s< ecx_4)
            do
                void* eax_5 = esi_4 * 7
                int16_t ecx_5 = *(arg3 + (eax_5 << 1))
                int16_t edx_6 = *(arg3 + (eax_5 << 1) - 0xe)
                
                if (ecx_5 u< edx_6)
                    esi_4 -= 1
                else if (ecx_5 u<= edx_6)
                    int16_t ecx_6 = *(arg3 + (eax_5 << 1) + 2)
                    int16_t edx_7 = *(arg3 + (eax_5 << 1) - 0xc)
                    
                    if (ecx_6 u< edx_7)
                        esi_4 -= 1
                    else if (ecx_6 u<= edx_7)
                        int16_t ecx_7 = *(arg3 + (eax_5 << 1) + 4)
                        int16_t edx_8 = *(arg3 + (eax_5 << 1) - 0xa)
                        
                        if (ecx_7 u< edx_8)
                            esi_4 -= 1
                        else if (ecx_7 u<= edx_8)
                            int16_t ecx_8 = *(arg3 + (eax_5 << 1) + 6)
                            int16_t edx_9 = *(arg3 + (eax_5 << 1) - 8)
                            
                            if (ecx_8 u< edx_9)
                                esi_4 -= 1
                            else if (ecx_8 u<= edx_9)
                                int16_t ecx_9 = *(arg3 + (eax_5 << 1) + 8)
                                int16_t edx_10 = *(arg3 + (eax_5 << 1) - 6)
                                
                                if (ecx_9 u< edx_10)
                                    esi_4 -= 1
                                else if (ecx_9 u<= edx_10)
                                    int16_t ecx_10 = *(arg3 + (eax_5 << 1) + 0xa)
                                    int16_t edx_11 = *(arg3 + (eax_5 << 1) - 4)
                                    
                                    if (ecx_10 u< edx_11)
                                        esi_4 -= 1
                                    else if (ecx_10 u<= edx_11 && *(arg3 + (eax_5 << 1) + 0xc)
                                            u< *(arg3 + (eax_5 << 1) - 2))
                                        esi_4 -= 1
                
                void* eax_8 = esi_4 * 7
                void* edx_12 = arg3 + (eax_8 << 1)
                void* eax_10 = ebx_3 * 7
                ebx_3 = esi_4
                int64_t* ecx_12 = arg3 + (eax_10 << 1)
                *ecx_12 = *(arg3 + (eax_8 << 1))
                esi_4 = (esi_4 << 1) + 2
                ecx_12[1].d = *(edx_12 + 8)
                int32_t eax_11
                eax_11.w = *(edx_12 + 0xc)
                *(ecx_12 + 0xc) = eax_11.w
                ecx_4 = ebx_2
            while (esi_4 s< ecx_4)
        
        if (esi_4 == ecx_4)
            int32_t eax_13 = ecx_4 * 7
            void* edx_13 = arg3 + (eax_13 << 1)
            int64_t* ecx_13 = arg3 + ebx_3 * 0xe
            ebx_3 = ebx_2 - 1
            *ecx_13 = *(arg3 + (eax_13 << 1) - 0xe)
            ecx_13[1].d = *(edx_13 - 6)
            int32_t eax_16
            eax_16.w = *(edx_13 - 2)
            *(ecx_13 + 0xc) = eax_16.w
        
        int32_t var_34_1 = arg4
        i -= 1
        result = sub_65d220(&var_24, ebx_3, arg3, i, &var_24)
        ecx_2 -= 0xe
        edx_4 -= 2
    while (i s> 0)

return result
