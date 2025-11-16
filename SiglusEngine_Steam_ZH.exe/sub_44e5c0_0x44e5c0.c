// 函数: sub_44e5c0
// 地址: 0x44e5c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_18 = edi
int32_t result = 0
int32_t* var_8 = nullptr
int32_t* eax = sub_745f3f(0x1c)
int32_t* ebx

if (eax == 0)
    ebx = nullptr
else
    ebx = sub_446745(eax)

if (ebx != 0)
    if (arg3 == 0)
    label_44e64d:
        int32_t* eax_8 = sub_745f3f(0xc)
        int32_t* eax_9
        
        if (eax_8 == 0)
            eax_9 = nullptr
        else
            *eax_8 = 1
            sub_61cdd0(&eax_8[1], 8, 1, sub_446a00)
            eax_9 = &eax_8[1]
        
        if (eax_9 == 0)
            goto label_44e5f3
        
        *eax_9 = 4
        eax_9[1] = var_8
        var_8 = nullptr
        ebx[5] = eax_9
        *ebx = 0xb
        ebx[1] = arg2
        ebx[4] = 1
        (*(arg1 + 0xfc))[6] = ebx
        *(arg1 + 0xfc) = ebx
        ebx = nullptr
        goto label_44e6b1
    
    char* eax_2 = arg3
    void* edx_1 = &eax_2[1]
    char i
    
    do
        i = *eax_2
        eax_2 = &eax_2[1]
    while (i != 0)
    int32_t** var_20_1 = &var_8
    void* var_24_1 = eax_2 - edx_1 + 1
    int32_t result_1 = sub_458de2()
    result = result_1
    
    if (result_1 s>= 0)
        int32_t* eax_5 = var_8
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 =
            __builtin_memcpy((*(*eax_5 + 0xc))(eax_5), arg3, (eax_2 - edx_1 + 1) u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, (eax_2 - edx_1 + 1) & 3)
        goto label_44e64d
    
    var_8 = nullptr
else
label_44e5f3:
    result = 0x8007000e
label_44e6b1:
    int32_t* eax_12 = var_8
    
    if (eax_12 != 0)
        (*(*eax_12 + 8))(eax_12)
        var_8 = nullptr

if (ebx != 0)
    sub_44ce0e(ebx, 1)

return result
