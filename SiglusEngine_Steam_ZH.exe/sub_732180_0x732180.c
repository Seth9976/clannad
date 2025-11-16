// 函数: sub_732180
// 地址: 0x732180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t edx_1 = arg5 - 1
bool cond:0 = arg5 - 1 s< 0
arg5 = edx_1
void* result = *(arg1 + 0x5c)
arg1 = result

if (not(cond:0))
    int32_t esi_1 = arg3 << 2
    int32_t temp1_1
    
    do
        int32_t edi_1 = *(esi_1 + *arg2)
        result = *(esi_1 + arg2[1])
        int32_t ebx_1 = *(esi_1 + arg2[2])
        esi_1 += 4
        int32_t* ecx_3 = arg4
        arg4 = &arg4[1]
        
        if (arg1 u> 0)
            void* i_1 = arg1
            void* edx_2 = *ecx_3 + 2
            char* edi_2 = edi_1 - result
            void* ebx_2 = ebx_1 - result
            void* i
            
            do
                edx_2 += 3
                *(edx_2 - 5) = *(edi_2 + result)
                result += 1
                *(edx_2 - 4) = *(result - 1)
                *(edx_2 - 3) = *(ebx_2 + result - 1)
                i = i_1
                i_1 -= 1
            while (i != 1)
            edx_1 = arg5
        
        temp1_1 = edx_1
        edx_1 -= 1
        arg5 = edx_1
    while (temp1_1 - 1 s>= 0)

return result
