// 函数: sub_498570
// 地址: 0x498570
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* result = arg1 + (arg2 << 2)
int32_t* edx_1 = arg3 + (arg4 << 2)

if (arg5 s> 0)
    arg2 = arg5
    int32_t edi
    int32_t var_10_1 = edi
    bool cond:0_1
    
    do
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(*edx_1, *result, arg6 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, arg6 & 3)
        result = &result[1]
        edx_1 = &edx_1[1]
        cond:0_1 = arg2 != 1
        arg2 -= 1
    while (cond:0_1)

return result
