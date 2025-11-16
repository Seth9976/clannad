// 函数: sub_5b8540
// 地址: 0x5b8540
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = arg3
void* var_8_1 = arg1

if (result s< arg4)
    int32_t ebx_1 = result * 0xb4
    int32_t i_1 = arg4 - result
    int32_t i
    
    do
        int32_t edx_1 = *(arg1 + 0xa4)
        ebx_1 += 0xb4
        int32_t eax = *arg2
        
        if (eax == arg2[1])
            eax = 0
        
        int128_t* ecx = arg2[3]
        *(edx_1 + ebx_1 - 0x14) = *(ecx + eax)
        result = *(ecx + eax + 0x10)
        arg1 = var_8_1
        *(edx_1 + ebx_1 - 4) = result
        arg2[3] += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
