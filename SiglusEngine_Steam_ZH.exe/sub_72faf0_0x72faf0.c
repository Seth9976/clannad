// 函数: sub_72faf0
// 地址: 0x72faf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *(arg1 + 0x1c0)
int32_t esi = *(arg1 + 0x64)
int32_t result = *(arg1 + 0x5c)
int32_t var_10 = esi
int32_t result_1 = result

if (arg4 s> 0)
    int32_t* edi_1 = arg3
    arg2 -= edi_1
    int32_t i
    
    do
        _memset(*edi_1, 0, result)
        void* ecx_1 = ecx
        int32_t ebx_1 = 0
        int32_t var_c_1 = 0
        int32_t edx_1 = *(ecx_1 + 0x30)
        
        if (esi s> 0)
            int32_t* eax_1 = arg3
            
            do
                void* esi_1 = *eax_1
                char* edi_3 = *(arg2 + eax_1) + ebx_1
                void* edx_5 = *(ecx_1 + (ebx_1 << 2) + 0x34) + (edx_1 << 6)
                int32_t eax_3 = *(*(ecx_1 + 0x18) + (ebx_1 << 2))
                int32_t eax_4 = 0
                void* edx_7 = edx_5
                
                if (result_1 != 0)
                    int32_t j_1 = result_1
                    int32_t j
                    
                    do
                        esi_1 += 1
                        uint32_t ecx_2 = zx.d(*edi_3)
                        edi_3 = &edi_3[var_10]
                        char* edx_9 = *(edx_7 + (eax_4 << 2)) + ecx_2
                        eax_4 = (eax_4 + 1) & 0xf
                        int32_t ecx_3
                        ecx_3.b = edx_9[eax_3]
                        *(esi_1 - 1) += ecx_3.b
                        edx_7 = edx_5
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    ebx_1 = var_c_1
                    ecx_1 = ecx
                
                esi = var_10
                ebx_1 += 1
                eax_1 = arg3
                var_c_1 = ebx_1
            while (ebx_1 s< esi)
            
            edi_1 = eax_1
        
        edi_1 = &edi_1[1]
        arg3 = edi_1
        i = arg4
        arg4 -= 1
        *(ecx_1 + 0x30) = (edx_1 + 1) & 0xf
        result = result_1
    while (i != 1)

return result
