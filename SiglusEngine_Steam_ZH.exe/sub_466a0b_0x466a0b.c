// 函数: sub_466a0b
// 地址: 0x466a0b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t esi_1 = arg2 * arg3
int32_t result_1 = sub_498671(arg1, esi_1)
int32_t result = 0

if (result_1 != 0)
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result_2 = result_1
    uint32_t ecx_1
    
    if (esi_1 u<= 0x8000)
        ecx_1 = esi_1
    else
        __builtin_memset(result_2, 0, 0x8000)
        ecx_1 = esi_1 - 0x8000
        result_2 = result_1 + 0x8000
    
    __builtin_memset(__builtin_memset(result_2, 0, ecx_1 u>> 2 << 2), 0, ecx_1 & 3)
    result = result_1

return result
