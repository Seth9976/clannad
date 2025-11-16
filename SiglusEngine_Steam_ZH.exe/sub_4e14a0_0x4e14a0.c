// 函数: sub_4e14a0
// 地址: 0x4e14a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t edi_1 = *(arg1 + 0x70)
void* result = arg5 - 1

if (arg5 - 1 s>= 0)
    int32_t* ebx_1 = *arg2 + (arg3 << 2)
    arg1 = result + 1
    void* i
    
    do
        void** ecx_3 = arg4
        int32_t esi_1 = *ebx_1
        result = *ecx_3
        ebx_1 = &ebx_1[1]
        char* edx_2 = nullptr
        arg4 = &ecx_3[1]
        
        if (edi_1 u> 0)
            do
                void* ecx_4
                ecx_4.b = edx_2[esi_1]
                *(result + 2) = ecx_4.b
                *(result + 1) = ecx_4.b
                *result = ecx_4.b
                result += 3
                edx_2 = &edx_2[1]
            while (edx_2 u< edi_1)
        
        i = arg1
        arg1 -= 1
    while (i != 1)

return result
