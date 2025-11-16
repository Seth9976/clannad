// 函数: sub_5be740
// 地址: 0x5be740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
void* ebx = arg1
void* var_c = ebx

if (arg3 s< result)
    int32_t ecx = arg3 * 0x16c
    arg4 = result - arg3
    int32_t var_10_1 = ecx
    void* i
    
    do
        int32_t* ebx_2 = *(ebx + 0xa4) + ecx
        int32_t edi_1 = ebx_2[0x59]
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* ecx_2 = *arg2
        
        if (ecx_2 == arg2[1])
            ecx_2 = nullptr
        
        *(ecx_2 + arg2[3]) = edi_1
        arg2[3] += 4
        int32_t edi_2 = ebx_2[0x5a]
        sub_5979b0(arg2, arg2[3] + 4)
        int32_t* edx_1 = *arg2
        
        if (edx_1 == arg2[1])
            edx_1 = nullptr
        
        *(edx_1 + arg2[3]) = edi_2
        arg2[3] += 4
        result = sub_5f9c40(ebx_2, arg2)
        ebx = var_c
        ecx = var_10_1 + 0x16c
        i = arg4
        arg4 -= 1
        var_10_1 = ecx
    while (i != 1)

return result
