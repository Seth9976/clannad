// 函数: sub_5b9c40
// 地址: 0x5b9c40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg4
void* ebx = arg1
void* var_c = ebx

if (arg3 s< result)
    int32_t ecx = arg3 * 0x150
    arg4 = result - arg3
    int32_t var_8_1 = ecx
    int32_t ecx_1 = ecx
    int32_t i
    
    do
        void* edi_2 = *(ebx + 0xa4) + ecx_1
        ebx.b = *(edi_2 + 0xa0)
        sub_5979b0(arg2, &arg2[3][1])
        char* ecx_3 = *arg2
        
        if (ecx_3 == arg2[1])
            ecx_3 = nullptr
        
        ecx_3[arg2[3]] = ebx.b
        arg2[3] = &arg2[3][1]
        int128_t xmm0_1 = *(edi_2 + 0xa4)
        sub_5979b0(arg2, &arg2[3][0x10])
        char* ecx_5 = *arg2
        
        if (ecx_5 == arg2[1])
            ecx_5 = nullptr
        
        *(arg2[3] + ecx_5) = xmm0_1
        arg2[3] = &arg2[3][0x10]
        int32_t edi_3 = *(edi_2 + 0xb4)
        sub_5979b0(arg2, &arg2[3][4])
        char* ecx_7 = *arg2
        ebx = var_c
        
        if (ecx_7 == arg2[1])
            ecx_7 = nullptr
        
        result = arg2[3]
        *(ecx_7 + result) = edi_3
        arg2[3] = &arg2[3][4]
        ecx_1 = var_8_1 + 0x150
        i = arg4
        arg4 -= 1
        var_8_1 = ecx_1
    while (i != 1)

return result
