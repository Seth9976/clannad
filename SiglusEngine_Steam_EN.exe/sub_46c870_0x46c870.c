// 函数: sub_46c870
// 地址: 0x46c870
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
void* result = arg2

if (arg3 s>= 0 && arg3 s< data_7031bc)
    int32_t edi_1
    
    if (arg4 != 0xffffffff || arg6 != 0xffffffff)
        edi_1 = 0
    else
        edi_1 = arg6 + 2
    
    int32_t var_8_1
    
    if (arg5 == 0xffffffff)
        var_8_1 = 1
    
    if (arg5 != 0xffffffff || arg7 != 0xffffffff)
        var_8_1 = 0
    
    void* eax = result + (arg3 << 1)
    result = eax * 0x7a0 + 0x98c184
    *(eax * 0x650 + 0x72d7a4) = edi_1
    *(result + 0x74) += 1
    *(eax * 0x650 + 0x72d7ac) = arg4
    *(eax * 0x650 + 0x72d7a8) = var_8_1
    *(eax * 0x650 + 0x72d7b0) = arg5
    *(eax * 0x650 + 0x72d7b8) = arg7
    *(eax * 0x650 + 0x72d7b4) = arg6

return result
