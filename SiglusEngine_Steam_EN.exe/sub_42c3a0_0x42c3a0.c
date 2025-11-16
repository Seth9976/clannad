// 函数: sub_42c3a0
// 地址: 0x42c3a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 2)
    return 0

int32_t eax_1 = (&data_ef08e8)[arg1 * 0x60]

if (eax_1 == 0)
    return 0

if (eax_1 == 1)
    int32_t eax_6 = *(arg1 * 0x180 + 0xef08ec)
    
    if (eax_6 u> 0x1ff)
        return sub_4a8780(nullptr, 0)
    
    return sub_4a8780(eax_6 * 0x74 + 0x1374764, 0)

int32_t edi
int32_t var_20 = edi

if (eax_1 == 2)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(arg1 * 0x180 + 0xef094c) s> 0)
        int32_t* ecx_1 = *(arg1 * 0x180 + 0xef0948) + 0x174
        int32_t* var_c_1 = ecx_1
        
        do
            int32_t j = 0
            int32_t j_1 = 0
            
            if (*ecx_1 s> 0)
                int32_t* ebx_4 = ecx_1[-1] + 0x2c
                
                do
                    int32_t k = 0
                    
                    if (*ebx_4 s> 0)
                        char* esi_2 = ebx_4[-1] + 8
                        
                        do
                            if (*esi_2 != 0)
                                i.b = 1
                                void* result
                                result, i = sub_4a8780(esi_2, i.b)
                                
                                if (result != 0)
                                    return result
                            
                            k += 1
                            esi_2 = &esi_2[0xb8]
                        while (k s< *ebx_4)
                        
                        j = j_1
                        ecx_1 = var_c_1
                    
                    j += 1
                    ebx_4 = &ebx_4[0xc]
                    j_1 = j
                while (j s< *ecx_1)
                
                i = i_1
            
            i += 1
            ecx_1 = &ecx_1[0x5e]
            i_1 = i
            var_c_1 = ecx_1
        while (i s< *(arg1 * 0x180 + 0xef094c))

return nullptr
