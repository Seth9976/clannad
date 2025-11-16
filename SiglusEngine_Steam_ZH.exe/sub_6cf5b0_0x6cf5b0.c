// 函数: sub_6cf5b0
// 地址: 0x6cf5b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
uint32_t result = zx.d(*(arg2 + 9))
uint32_t edi = zx.d(*(arg1 + 0x140))

if (edi s< 1 << result.b && edi.w != 0)
    int32_t edi_1 = *(arg1 + 0x124)
    int32_t edx_1 = result - 1
    result = arg2[1] + edi_1
    char ecx_4 = (neg.d(zx.d(*(arg2 + 0xb)) * *arg2)).b & 7
    
    switch (edx_1)
        case 0
            if (result u> edi_1)
                do
                    edx_1.b = *result
                    edx_1.b u>>= ecx_4
                    
                    if (edx_1.b != 0)
                        *(arg1 + 0x144) = 1
                    
                    result -= 1
                    ecx_4 = 0
                while (result u> edi_1)
        case 1
            if (result u> edi_1)
                uint32_t esi_1 = *(arg1 + 0x144)
                
                do
                    uint32_t edx_3 = zx.d(*result) u>> ecx_4
                    uint32_t ecx_6 = edx_3 & 3
                    
                    if (ecx_6 s> esi_1)
                        esi_1 = ecx_6
                    
                    uint32_t ecx_9 = edx_3 u>> 2 & 3
                    
                    if (ecx_9 s> esi_1)
                        esi_1 = ecx_9
                    
                    uint32_t ecx_12 = edx_3 u>> 4 & 3
                    
                    if (ecx_12 s> esi_1)
                        esi_1 = ecx_12
                    
                    uint32_t edx_4 = edx_3 u>> 6
                    
                    if (edx_4 s> esi_1)
                        esi_1 = edx_4
                    
                    result -= 1
                    ecx_4 = 0
                while (result u> edi_1)
                
                *(arg1 + 0x144) = esi_1
        case 3
            if (result u> edi_1)
                uint32_t esi_2 = *(arg1 + 0x144)
                
                do
                    uint32_t edx_6 = zx.d(*result) u>> ecx_4
                    uint32_t ecx_14 = edx_6 & 0xf
                    
                    if (ecx_14 s> esi_2)
                        esi_2 = ecx_14
                    
                    uint32_t edx_7 = edx_6 u>> 4
                    
                    if (edx_7 s> esi_2)
                        esi_2 = edx_7
                    
                    result -= 1
                    ecx_4 = 0
                while (result u> edi_1)
                
                *(arg1 + 0x144) = esi_2
        case 7
            if (result u> edi_1)
                uint32_t edx_8 = *(arg1 + 0x144)
                
                do
                    uint32_t ecx_15 = zx.d(*result)
                    
                    if (ecx_15 s> edx_8)
                        edx_8 = ecx_15
                    
                    result -= 1
                while (result u> edi_1)
                
                *(arg1 + 0x144) = edx_8

return result
