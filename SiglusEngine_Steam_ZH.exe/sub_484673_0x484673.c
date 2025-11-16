// 函数: sub_484673
// 地址: 0x484673
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx

if (arg5 != 0)
    if (arg6 == 0)
        return 0x88760385
else if (arg6 != 0)
    return 0x88760385

int32_t edi
int32_t var_14_1 = edi
int32_t var_8_1 = 0
int32_t result

if (arg5 == 0)
label_4846cd:
    int32_t ebx_1 = 0
    
    if (arg3 == 0)
    label_48470f:
        void*** eax_7 = sub_745f3f(0x40)
        void*** eax_8
        
        if (eax_7 == 0)
            eax_8 = nullptr
        else
            eax_8 = sub_4845c9(eax_7, arg1, arg2, ebx_1, arg4, arg5, var_8_1)
        
        *arg7 = eax_8
        
        if (eax_8 == 0)
            if (arg5 != 0)
                _free(var_8_1)
            
            if (ebx_1 == 0)
                result = 0x8007000e
            else
                _free(ebx_1)
                result = 0x8007000e
        else if (eax_8[0xe] == 0 || eax_8[0xf] != 0)
            result = 0
        else
            eax_8[1][2](1)
            *arg7 = nullptr
            result = 0x8007000e
    else
        char* eax_3 = arg3
        void* edx_1 = &eax_3[1]
        
        do
            ecx.b = *eax_3
            eax_3 = &eax_3[1]
        while (ecx.b != 0)
        
        ebx_1 = _malloc(eax_3 - edx_1 + 1)
        
        if (ebx_1 != 0)
            int32_t esi_5
            int32_t edi_4
            edi_4, esi_5 = __builtin_memcpy(ebx_1, arg3, (eax_3 - edx_1 + 1) u>> 2 << 2)
            __builtin_memcpy(edi_4, esi_5, (eax_3 - edx_1 + 1) & 3)
            goto label_48470f
        
        _free(var_8_1)
        result = 0x8007000e
else
    int32_t eax_1 = _malloc(arg5)
    var_8_1 = eax_1
    
    if (eax_1 != 0)
        int32_t esi_2
        int32_t edi_2
        edi_2, esi_2 = __builtin_memcpy(eax_1, arg6, arg5 u>> 2 << 2)
        __builtin_memcpy(edi_2, esi_2, arg5 & 3)
        goto label_4846cd
    
    result = 0x8007000e

return result
