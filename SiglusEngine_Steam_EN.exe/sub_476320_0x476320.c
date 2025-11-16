// 函数: sub_476320
// 地址: 0x476320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = data_7031bc
int32_t ecx = 0
void* esi = &data_98bf04

if (edi s> 0)
    void* edx_1 = &data_72d6bc
    
    do
        void* result
        
        switch (*edx_1 - 1)
            case 0, 4
                int32_t eax_3 = *esi
                
                if (eax_3 u> 0x1ff)
                    edx_1.b = 0
                    return sub_4a8780(nullptr, edx_1.b) __tailcall
                
                edx_1.b = 0
                return sub_4a8780(eax_3 * 0x74 + 0x1374764, edx_1.b) __tailcall
            case 6
                int32_t eax_6 = *(esi + 0x14)
                void* eax_7
                
                if (eax_6 u<= 0x1ff)
                    eax_7 = eax_6 * 0x74
                    result = eax_7 + 0x1374764
                
                if (eax_6 u> 0x1ff || eax_7 == 0xfec8b89c)
                    int32_t eax_8 = *(esi + 0x18)
                    void* eax_9
                    
                    if (eax_8 u<= 0x1ff)
                        eax_9 = eax_8 * 0x74
                        result = eax_9 + 0x1374764
                    
                    if (eax_8 u> 0x1ff || eax_9 == 0xfec8b89c)
                        int32_t eax_10 = *(esi + 0x1c)
                        
                        if (eax_10 u> 0x1ff)
                            break
                        
                        result = eax_10 * 0x74 + 0x1374764
                
                return result
            case 7
                int32_t eax_12 = *esi
                char* ecx_6
                
                if (eax_12 u> 0x1ff)
                    ecx_6 = nullptr
                else
                    ecx_6 = eax_12 * 0x74 + 0x1374764
                
                edx_1.b = 0
                int32_t ecx_7
                result, ecx_7 = sub_4a8780(ecx_6, edx_1.b)
                
                if (result == 0)
                    return sub_4762d0(ecx_7, esi) __tailcall
                
                return result
        
        ecx += 1
        edx_1 += 0xca0
        esi += 0xf40
    while (ecx s< edi)

return nullptr
