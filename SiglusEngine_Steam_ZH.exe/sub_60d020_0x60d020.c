// 函数: sub_60d020
// 地址: 0x60d020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
int32_t ebx_1 = arg2 - arg3

if (arg3 u> arg2)
    ebx_1 = 0

char* result = arg4

if (ebx_1 != 0)
    char* edi_2 = arg3 - result
    
    do
        if (result != 0)
            arg3.b = *(edi_2 + result)
            *result = arg3.b
        
        esi += 1
        result = &result[1]
    while (esi != ebx_1)

return result
