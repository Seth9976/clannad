// 函数: sub_72f9b0
// 地址: 0x72f9b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t j_3 = *(arg1 + 0x5c)
int32_t edi = *(arg1 + 0x64)
int32_t j_4 = j_3
void** result = *(*(arg1 + 0x1c0) + 0x18)
void** result_1 = result

if (arg4 s> 0)
    result = arg3
    int32_t* ecx_2 = arg2 - result
    arg2 = ecx_2
    int32_t i
    
    do
        char* esi_1 = *(ecx_2 + result)
        int32_t j_1 = j_3
        void* ecx_3 = *result
        arg1 = ecx_3
        int32_t j_2 = j_1
        
        if (j_3 != 0)
            int32_t j
            
            do
                int32_t ebx = 0
                int32_t eax_1 = 0
                
                if (edi s> 0)
                    do
                        uint32_t edx_1 = zx.d(*esi_1)
                        esi_1 = &esi_1[1]
                        int32_t ecx_5 = result_1[eax_1]
                        eax_1 += 1
                        ebx += zx.d(*(ecx_5 + edx_1))
                    while (eax_1 s< edi)
                    
                    ecx_3 = arg1
                    j_1 = j_2
                
                *ecx_3 = ebx.b
                ecx_3 += 1
                j = j_1
                j_1 -= 1
                arg1 = ecx_3
                j_2 = j_1
            while (j != 1)
            result = arg3
            j_3 = j_4
        
        ecx_2 = arg2
        result = &result[1]
        i = arg4
        arg4 -= 1
        arg3 = result
    while (i != 1)

return result
