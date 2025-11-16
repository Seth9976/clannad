// 函数: sub_5f06c0
// 地址: 0x5f06c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = arg2

if (arg1 != result)
    int32_t i_1 = arg3
    
    if (i_1 != 0)
        void* edi_1 = arg1 - result
        int32_t i
        
        do
            char ecx = *result
            result = &result[1]
            char edx = *(edi_1 + result - 1)
            *(edi_1 + result - 1) = ecx
            result[0xffffffff] = edx
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
