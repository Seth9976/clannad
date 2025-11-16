// 函数: sub_485056
// 地址: 0x485056
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg3 != 0)
    if (arg2 == 0)
    label_48507c:
        char* esi_1 = *(arg1 + 0x34)
        
        if (esi_1 == 0)
            if (*arg3 u> esi_1 && arg2 != 0)
                *arg2 = 0
            
            *arg3 = 0
            return 0
        
        char* eax_3 = esi_1
        void* edx_1 = &eax_3[1]
        char i
        
        do
            i = *eax_3
            eax_3 = &eax_3[1]
        while (i != 0)
        
        if (arg2 == 0)
            *arg3 = eax_3 - edx_1 + 1
            return 0
        
        if (eax_3 - edx_1 + 1 u<= *arg3)
            int32_t esi_2
            int32_t edi_2
            edi_2, esi_2 = __builtin_memcpy(arg2, esi_1, (eax_3 - edx_1 + 1) u>> 2 << 2)
            __builtin_memcpy(edi_2, esi_2, (eax_3 - edx_1 + 1) & 3)
            *arg3 = eax_3 - edx_1 + 1
            return 0
    else if (IsBadWritePtr(arg2, *arg3) == 0)
        goto label_48507c

return 0x88760385
