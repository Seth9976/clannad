// 函数: sub_485d4c
// 地址: 0x485d4c
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0

if (arg2 == 0)
label_485d92:
    void*** eax_5 = sub_745f3f(0x50)
    void*** eax_6
    
    if (eax_5 == 0)
        eax_6 = nullptr
    else
        eax_6 = sub_485cd4(eax_5, arg1, ebx, arg3, arg4, arg5, arg6, arg7)
    
    *arg8 = eax_6
    
    if (eax_6 != 0)
        return 0
    
    if (ebx != 0)
        _free(ebx)
else
    char* eax_1 = arg2
    void* edx_1 = &eax_1[1]
    char i
    
    do
        i = *eax_1
        eax_1 = &eax_1[1]
    while (i != 0)
    ebx = _malloc(eax_1 - edx_1 + 1)
    
    if (ebx != 0)
        int32_t edi
        int32_t var_10_2 = edi
        int32_t esi_3
        int32_t edi_2
        edi_2, esi_3 = __builtin_memcpy(ebx, arg2, (eax_1 - edx_1 + 1) u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_3, (eax_1 - edx_1 + 1) & 3)
        goto label_485d92

return 0x8007000e
