// 函数: sub_46c240
// 地址: 0x46c240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
int32_t result_1 = result

if (result s>= 0 && result s< data_7031bc)
    int32_t eax = arg2 + (result << 1)
    int32_t edi_1 = arg4
    
    if (edi_1 s< 4)
        edi_1 = 4
    else if (edi_1 s> 0x40)
        edi_1 = 0x40
    
    int32_t ecx = arg8
    
    if (ecx s< 0 || ecx s>= 0x100)
        ecx = 0
        arg8 = 0
    
    int32_t ebx_1 = arg9
    
    if (ebx_1 s< 0xffffffff)
        ebx_1 = 0xffffffff
    else if (ebx_1 s>= 0x100)
        ebx_1 = 0xff
    
    result = arg10
    
    if (result s< 0xffffffff)
        result = 0
    else if (result s> 2)
        result = 0
    
    void* edx_5
    
    if (*(eax * 0x650 + 0x72d750) == edi_1 && *(eax * 0x650 + 0x72d754) == arg5
            && *(eax * 0x650 + 0x72d758) == arg6)
        edx_5 = eax * 0x7a0 + 0x98c184
    
    if (*(eax * 0x650 + 0x72d750) != edi_1 || *(eax * 0x650 + 0x72d754) != arg5
            || *(eax * 0x650 + 0x72d758) != arg6 || *(eax * 0x650 + 0x72d75c) != arg7
            || *(eax * 0x650 + 0x72d760) != ecx || *(eax * 0x650 + 0x72d764) != ebx_1
            || *(eax * 0x650 + 0x72d768) != result)
        sub_467910(result_1, arg2)
        ecx = arg8
        edx_5 = eax * 0x7a0 + 0x98c184
    
    *(edx_5 + 0x74) += 1
    *(eax * 0x650 + 0x72d750) = edi_1
    *(eax * 0x650 + 0x72d754) = arg5
    *(eax * 0x650 + 0x72d758) = arg6
    *(eax * 0x650 + 0x72d75c) = arg7
    *(eax * 0x650 + 0x72d764) = ebx_1
    *(eax * 0x650 + 0x72d760) = ecx
    *(eax * 0x650 + 0x72d768) = result

return result
