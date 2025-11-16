// 函数: sub_5b84a0
// 地址: 0x5b84a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t* result = arg3
void* edx = arg1
void* var_c = edx

if (result s< arg4)
    int32_t ecx = result * 0xb4
    void* i_1 = arg4 - result
    int32_t var_8_1 = ecx
    void* i
    
    do
        int32_t eax = *(edx + 0xa4)
        int128_t xmm0_1 = *(eax + ecx + 0xa0)
        int32_t edi_1 = *(eax + ecx + 0xb0)
        sub_5979b0(arg2, arg2[3] + 0x14)
        int32_t ecx_2 = *arg2
        edx = var_c
        
        if (ecx_2 == arg2[1])
            ecx_2 = 0
        
        result = arg2[3]
        *(result + ecx_2) = xmm0_1
        *(result + ecx_2 + 0x10) = edi_1
        arg2[3] += 0x14
        ecx = var_8_1 + 0xb4
        var_8_1 = ecx
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
