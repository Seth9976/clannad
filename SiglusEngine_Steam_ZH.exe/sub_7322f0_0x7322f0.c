// 函数: sub_7322f0
// 地址: 0x7322f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* result = arg1
int32_t ebx_1 = arg5 - 1
int32_t esi = *(result + 0x5c)

if (arg5 - 1 s>= 0)
    int32_t ecx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        void** edx_1 = arg4
        int32_t edi_1 = *(ecx_1 + *arg2)
        ecx_1 += 4
        result = *edx_1
        arg4 = &edx_1[1]
        char* edx_3 = nullptr
        arg1 = ecx_1
        
        if (esi != 0)
            result += 1
            
            do
                ecx_1.b = edx_3[edi_1]
                result += 3
                edx_3 = &edx_3[1]
                *(result - 2) = ecx_1.b
                *(result - 3) = ecx_1.b
                *(result - 4) = ecx_1.b
            while (edx_3 u< esi)
            
            ecx_1 = arg1
        
        temp1_1 = ebx_1
        ebx_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
