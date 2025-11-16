// 函数: sub_41995a
// 地址: 0x41995a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = *arg1
int32_t ecx = *(esi + 0x40)
int32_t edi
int32_t var_24 = edi
int32_t edi_1 = *(esi + 0x3c)

if ((((*(esi + 0x48)).b | (*(esi + 0x44)).b | edi_1.b | ecx.b) & 3) != 0)
    return 0x80004005

void* edx_4 = arg1[1]

if ((((*(edx_4 + 0x48)).b | (*(edx_4 + 0x44)).b | (*(edx_4 + 0x40)).b | (*(edx_4 + 0x3c)).b) & 3)
        == 0)
    int32_t edx_6 = *(arg1[1] + 4)
    int32_t var_8_1
    
    if (edx_6 == 0x31545844)
        var_8_1 = 8
    label_4199e7:
        void* eax_2 = arg1[1]
        int32_t edx_9 = (*(eax_2 + 0x68) u>> 2) * var_8_1
        int32_t i = 0
        int32_t edx_15 = (*(eax_2 + 0x40) u>> 2) * *(eax_2 + 0x60)
            + *(eax_2 + 0x64) * *(eax_2 + 0x4c) + (*(eax_2 + 0x3c) u>> 2) * var_8_1
            + *(eax_2 + 0x20)
        int32_t var_c_1 = (ecx u>> 2) * *(esi + 0x60) + *(esi + 0x64) * *(esi + 0x4c)
            + (edi_1 u>> 2) * var_8_1 + *(esi + 0x20)
        void* ecx_6 = arg1[1]
        
        if (*(ecx_6 + 0x70) u> 0)
            int32_t ecx_7 = *(ecx_6 + 0x6c)
            void* esi_4
            
            do
                int32_t esi_1 = var_c_1
                int32_t var_8_2 = 0
                int32_t edi_4 = edx_15
                int32_t var_14_1 = edi_4
                int32_t var_18_1 = esi_1
                
                if (ecx_7 u> 0)
                    do
                        var_8_2 += 4
                        int32_t esi_2
                        int32_t edi_5
                        edi_5, esi_2 = __builtin_memcpy(edi_4, esi_1, edx_9 u>> 2 << 2)
                        __builtin_memcpy(edi_5, esi_2, edx_9 & 3)
                        void* ecx_12 = arg1[1]
                        edi_4 = var_14_1 + *(ecx_12 + 0x60)
                        esi_1 = var_18_1 + *(*arg1 + 0x60)
                        ecx_7 = *(ecx_12 + 0x6c)
                        var_14_1 = edi_4
                        var_18_1 = esi_1
                    while (var_8_2 u< ecx_7)
                
                esi_4 = arg1[1]
                var_c_1 += *(*arg1 + 0x64)
                edx_15 += *(esi_4 + 0x64)
                i += 1
            while (i u< *(esi_4 + 0x70))
        
        return 0
    
    if (edx_6 == 0x32545844 || edx_6 == 0x33545844 || edx_6 == 0x34545844 || edx_6 == 0x35545844)
        var_8_1 = 0x10
        goto label_4199e7

return 0x80004005
