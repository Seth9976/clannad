// 函数: sub_481670
// 地址: 0x481670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = *arg5
int32_t edi_1 = *arg6
int32_t eax_10
int32_t result

if (*arg3 != 7)
    int32_t eax_6 = arg4[1]
    
    if (esi_1 s>= eax_6)
        edi_1 = 0
    label_481717:
        esi_1 = 0
        eax_10 = 1
        result = 1
    else
        void* ecx_4 = arg4[esi_1 + 2] * 0x68 + *(arg2 + 0x38)
        int32_t ebx_2 = *(ecx_4 + 4)
        
        if (edi_1 s>= ebx_2)
            esi_1 += 1
            edi_1 = 0
            
            if (esi_1 s>= eax_6)
                goto label_481717
            
            eax_10 = 0
            result = 1
        else if (*(*(ecx_4 + (edi_1 << 2) + 8) * 0x60 + *(arg2 + 0x34) + 0x38) != 0)
            eax_10 = 0
            result = 1
        else if (edi_1 != ebx_2 - 1)
            eax_10 = 0
            result = 0
        else
            eax_10 = 0
            result = 1
else
    esi_1 = *arg4
    
    if (esi_1 s>= arg4[1])
        edi_1 = 0
        eax_10 = 1
        result = 1
    else
        void* eax_2 = arg4[esi_1 + 2] * 0x68 + *(arg2 + 0x38)
        int32_t ebx_1 = *(eax_2 + 4)
        
        if (edi_1 s>= ebx_1)
            edi_1 = 0
            eax_10 = 0
            result = 1
        else if (*(*(eax_2 + (edi_1 << 2) + 8) * 0x60 + *(arg2 + 0x34) + 0x38) != 0
                || edi_1 == ebx_1 - 1)
            eax_10 = 0
            result = 1
        else
            eax_10 = 0
            result = 0

*arg7 = eax_10
*arg5 = esi_1
*arg6 = edi_1
return result
