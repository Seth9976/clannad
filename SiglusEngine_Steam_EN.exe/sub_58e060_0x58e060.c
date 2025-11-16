// 函数: sub_58e060
// 地址: 0x58e060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg2
void* result_1 = result

if (arg9 != 0 && arg21 != 0 && result != 0 && arg10 != 0 && arg19 != 0 && arg4 != 0 && arg11 != 0
        && arg20 != 0)
    int32_t edx = arg13
    int32_t ecx = arg15
    
    if (edx s> ecx)
        arg15 = edx
        edx = ecx
        arg13 = edx
    
    int32_t esi_1 = arg14
    int32_t edi_1 = arg16
    
    if (esi_1 s> edi_1)
        int32_t eax = esi_1
        esi_1 = edi_1
        edi_1 = eax
    
    int32_t eax_1 = arg5
    
    if (eax_1 s> arg7)
        arg5 = arg7
        arg7 = eax_1
    
    int32_t ecx_2 = arg8
    int32_t ebx_1 = arg6
    
    if (ebx_1 s> ecx_2)
        int32_t eax_2 = ebx_1
        ebx_1 = ecx_2
        ecx_2 = eax_2
        arg8 = ecx_2
    
    int32_t arg_48
    int32_t arg_4c
    int32_t arg_50
    int32_t arg_54
    sub_4d2170(&arg_48, arg4, result_1, &arg_48, &arg_4c, &arg_50, &arg_54)
    int32_t eax_15 = arg19 - 1 + arg17
    int32_t var_38
    int32_t var_30
    int32_t var_24
    int32_t var_1c
    result = sub_58c910(eax_15, arg7 - arg5 + 1, arg15 - edx + 1, arg13, arg15, arg5, arg7, arg17, 
        eax_15, arg_48, arg_50, &var_1c, &var_30, &var_38, &var_24)
    
    if (result != 0)
        int32_t eax_18 = arg20 - 1 + arg18
        int32_t var_34
        int32_t var_2c
        int32_t var_28
        int32_t var_20
        result = sub_58c910(eax_18, ecx_2 - ebx_1 + 1, edi_1 - esi_1 + 1, esi_1, edi_1, ebx_1, 
            arg8, arg18, eax_18, arg_4c, arg_54, &var_20, &var_2c, &var_34, &var_28)
        
        if (result != 0)
            data_1c4ce44 = var_1c
            data_1c4552c = var_20
            data_1c4555c = var_24
            data_1ccce84 = var_28
            int32_t eax_24 = var_2c * arg19
            data_1c45558 = arg19
            uint32_t ecx_11 = zx.d(arg21)
            data_1ccce7c = edi_1 - esi_1 + 1
            data_1ccce58 = eax_24 + var_30 + arg9
            int32_t eax_28 = var_34 * result_1
            data_1c45970 = ecx_2 - ebx_1 + 1
            data_1c45554 = arg3 + ((eax_28 + var_38) << 2)
            data_1c45520 = result_1 << 2
            data_1c45980 = arg15 - edx + 1
            data_1c05514 = arg7 - arg5 + 1
            data_1c45994 = arg12
            data_1cd43ac = ecx_11 << 2
            data_1cd43a8 = 0xff - ecx_11
            data_1cd43a4 = *(data_1cd4328 + (ecx_11 << 2))
            
            if (arg21 != 0xff)
                return sub_58d910()
            
            return sub_58d480()

return result
