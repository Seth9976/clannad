// 函数: sub_5953d0
// 地址: 0x5953d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg4
int32_t esi = 0
uint32_t edi_3 = (arg2 - arg3 + 3) u>> 2

if (arg3 u> arg2)
    edi_3 = 0

if (edi_3 != 0)
    int32_t* ebx_1 = arg3 - result
    
    do
        esi += 1
        *result = *(ebx_1 + result)
        result = &result[1]
    while (esi != edi_3)

return result
