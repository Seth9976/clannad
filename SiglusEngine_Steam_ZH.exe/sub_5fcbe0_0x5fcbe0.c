// 函数: sub_5fcbe0
// 地址: 0x5fcbe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = arg3
void* var_8_1 = arg1

if (result s< arg4)
    int32_t ebx_1 = result * 0xe8
    int32_t i_1 = arg4 - result
    int32_t i
    
    do
        result = *arg2
        void* edx_2 = *(arg1 + 0xa4) + ebx_1
        
        if (result == arg2[1])
            result = 0
        
        int128_t* ecx_1 = arg2[3] + result
        ebx_1 += 0xe8
        *(edx_2 + 0xa0) = *ecx_1
        *(edx_2 + 0xb0) = ecx_1[1]
        *(edx_2 + 0xc0) = ecx_1[2]
        arg1 = var_8_1
        *(edx_2 + 0xd0) = ecx_1[3].q
        arg2[3] += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
