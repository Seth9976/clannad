// 函数: sub_4838f8
// 地址: 0x4838f8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_10 = edi

if (arg3 != 0)
    if (arg2 == 0)
    label_483921:
        int32_t ecx_1 = *(arg1 + 0xc)
        
        if (ecx_1 == 1)
            if (*arg3 u> 0 && arg2 != 0)
                *arg2 = 0
            
            *arg3 = 0
            return 0
        
        if (arg2 == 0)
            *arg3 = *(arg1 + 0xc)
            return 0
        
        if (ecx_1 u<= *arg3)
            int32_t esi_3
            int32_t edi_2
            edi_2, esi_3 = __builtin_memcpy(arg2, *(arg1 + 8) + 0x38, ecx_1 u>> 2 << 2)
            __builtin_memcpy(edi_2, esi_3, ecx_1 & 3)
            *arg3 = *(arg1 + 0xc)
            return 0
    else if (IsBadWritePtr(arg2, *arg3) == 0)
        goto label_483921

return 0x88760385
