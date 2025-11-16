// 函数: sub_595430
// 地址: 0x595430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = 0
uint32_t edi_3 = (arg2 - arg3 + 3) u>> 2

if (arg3 u> arg2)
    edi_3 = 0

int32_t* result = arg4

if (edi_3 != 0)
    int32_t* ebx_1 = arg3 - result
    
    do
        if (result != 0)
            *result = *(ebx_1 + result)
        
        esi += 1
        result = &result[1]
    while (esi != edi_3)

return result
