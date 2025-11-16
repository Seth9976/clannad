// 函数: sub_6b1cd0
// 地址: 0x6b1cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t edi = arg2
int32_t var_8_1 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(edi - 1)
int32_t result = eax_1 - edx
int32_t edx_1 = arg5
int32_t ebx_1 = result s>> 1

if (arg4 s< edi)
    do
        int32_t esi_2 = ebx_1 * 0x11c + arg3
        result = arg6(esi_2, edx_1)
        
        if (result.b == 0)
            break
        
        int32_t eax_3
        int32_t edx_2
        edx_2:eax_3 = sx.q(ebx_1 - 1)
        result = eax_3 - edx_2
        edx_1 = arg5
        __builtin_memcpy(edi * 0x11c + var_8_1, esi_2, 0x11c)
        arg3 = var_8_1
        edi = ebx_1
        ebx_1 = result s>> 1
    while (arg4 s< edi)
    
    arg3 = var_8_1
    edx_1 = arg5

__builtin_memcpy(edi * 0x11c + arg3, edx_1, 0x11c)
return result
