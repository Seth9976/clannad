// 函数: sub_732000
// 地址: 0x732000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
void* result = *(arg1 + 0x5c)
arg1 = result
arg5 = esi_1

if (not(cond:0))
    int32_t ebx_1 = arg3 << 2
    int32_t temp1_1
    
    do
        int32_t ecx_1 = *(ebx_1 + *arg2)
        int32_t edx_1 = *(ebx_1 + arg2[1])
        int32_t* edi_2 = arg4
        arg4 = &arg4[1]
        result = *(ebx_1 + arg2[2])
        ebx_1 += 4
        
        if (arg1 u> 0)
            char* edx_2 = edx_1 - result
            void* esi_2 = *edi_2 + 2
            void* i_1 = arg1
            char* ecx_2 = ecx_1 - result
            char* var_c_1 = edx_2
            char* var_8_1 = ecx_2
            void* i
            
            do
                ecx_2.b = *(ecx_2 + result)
                esi_2 += 3
                char edx_3 = *(edx_2 + result)
                result += 1
                char ebx_2 = *(result - 1)
                ecx_2.b -= 0x80
                ecx_2.b += edx_3
                *(esi_2 - 4) = edx_3
                *(esi_2 - 5) = ecx_2.b
                ecx_2 = var_8_1
                edx_2 = var_c_1
                *(esi_2 - 3) = ebx_2 + edx_3 + 0x80
                i = i_1
                i_1 -= 1
            while (i != 1)
            esi_1 = arg5
        
        temp1_1 = esi_1
        esi_1 -= 1
        arg5 = esi_1
    while (temp1_1 - 1 s>= 0)

return result
