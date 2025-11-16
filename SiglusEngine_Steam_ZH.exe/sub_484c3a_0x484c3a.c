// 函数: sub_484c3a
// 地址: 0x484c3a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (arg5 == 0 && *(arg2 + 0x1c) != 0)
    return nullptr

int32_t ebx_1 = 0

if (arg3 == 0)
label_484ca6:
    void*** eax_7 = sub_745f3f(0x44)
    void*** result
    
    if (eax_7 == 0)
        result = nullptr
    else
        result = sub_48485b(eax_7, arg1, arg2, ebx_1, arg4, arg5)
    
    if (result != 0)
        if (sub_4840b7(result) == 0)
            return result
        
        (*result)[2](result)
    else
        if (arg5 != 0)
            sub_48491c(arg5, 1)
        
        if (ebx_1 != 0)
            _free(ebx_1)
else
    char* eax_3 = arg3
    void* edx_1 = &eax_3[1]
    char i
    
    do
        i = *eax_3
        eax_3 = &eax_3[1]
    while (i != 0)
    ebx_1 = _malloc(eax_3 - edx_1 + 1)
    
    if (ebx_1 != 0)
        int32_t esi_3
        int32_t edi_2
        edi_2, esi_3 = __builtin_memcpy(ebx_1, arg3, (eax_3 - edx_1 + 1) u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_3, (eax_3 - edx_1 + 1) & 3)
        goto label_484ca6
    
    if (arg5 != 0)
        sub_48491c(arg5, 1)

return nullptr
