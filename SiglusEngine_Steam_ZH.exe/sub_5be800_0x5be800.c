// 函数: sub_5be800
// 地址: 0x5be800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
void* edx = arg1
void* var_c = edx

if (result s< arg4)
    int32_t ecx = result * 0x16c
    int32_t i_1 = arg4 - result
    int32_t var_10_1 = ecx
    int32_t i
    
    do
        int32_t* edi_2 = *(edx + 0xa4) + ecx
        int32_t* ecx_1 = *arg2
        
        if (ecx_1 == arg2[1])
            ecx_1 = nullptr
        
        edi_2[0x59] = *(ecx_1 + arg2[3])
        arg2[3] += 4
        int32_t eax_2 = *arg2
        
        if (eax_2 == arg2[1])
            eax_2 = 0
        
        edi_2[0x5a] = *(arg2[3] + eax_2)
        arg2[3] += 4
        result = sub_5f9e80(edi_2, arg2)
        edx = var_c
        ecx = var_10_1 + 0x16c
        var_10_1 = ecx
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
