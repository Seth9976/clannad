// 函数: sub_5fcb10
// 地址: 0x5fcb10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
void* var_8 = arg1

if (result s< arg4)
    int32_t ebx_1 = result * 0xe8
    int32_t i_1 = arg4 - result
    int32_t i
    
    do
        void* eax_1 = *(arg1 + 0xa4) + ebx_1
        int128_t xmm0_1 = *(eax_1 + 0xa0)
        int128_t xmm0_2 = *(eax_1 + 0xb0)
        int128_t xmm0_3 = *(eax_1 + 0xc0)
        int64_t xmm0_4 = *(eax_1 + 0xd0)
        sub_5979b0(arg2, arg2[3] + 0x38)
        result = *arg2
        
        if (result == arg2[1])
            result = 0
        
        int128_t* ecx_2 = arg2[3] + result
        ebx_1 += 0xe8
        *ecx_2 = xmm0_1
        ecx_2[1] = xmm0_2
        ecx_2[2] = xmm0_3
        ecx_2[3].q = xmm0_4
        arg2[3] += 0x38
        arg1 = var_8
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
