// 函数: sub_464530
// 地址: 0x464530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_c = 0

if (arg2 == 0 || *arg2 == 0)
    int32_t ecx_8 = 0xfffffffe
    
    if (arg3 == 0)
        ecx_8 = 0xffffff9d
    
    *arg6 = ecx_8
else
    *arg6 = 0xffffffff
    uint32_t var_8_1
    uint32_t ecx_1
    int32_t ebx_1
    
    if (arg8 != 0)
        ebx_1 = arg4
        ecx_1 = sub_463ef0(arg2, ebx_1)
        var_8_1 = ecx_1
    else if (arg7 != 0 || arg3 == 5 || arg3 == 8)
        ebx_1 = arg4
        uint32_t eax_4 = sub_464100(arg2, ebx_1)
        ecx_1 = eax_4
        var_8_1 = eax_4
    else
        ebx_1 = arg4
        ecx_1 = sub_463cb0(&var_c, ebx_1, arg2, &var_c)
        var_8_1 = ecx_1
    
    if (ecx_1 == 1)
        int32_t var_20_6 = 0
        *arg6 = sub_4254a0(ecx_1 - 1, arg2, ecx_1, ebx_1, 0, 1, 0, 1)
        ecx_1 = var_8_1
    else if (ecx_1 == 2)
        uint32_t var_20_5 = ecx_1
        int32_t var_24_1 = ebx_1
        *arg6 = sub_482060(ecx_1 - 2, arg2, ecx_1)
        ecx_1 = var_8_1
    else if (ecx_1 == 7)
        uint32_t ecx_4 = var_c
        *arg6 = 0xfffffffd
        bool cond:2_1 = data_7037e8 == 0
        var_c = ecx_4 * 0xa8 + data_1320e8c
        *arg9 = ecx_4
        arg9[1] = 0xffffffff
        arg9[2] = 0xffffffff
        arg9[3] = 0xffffffff
        
        if (not(cond:2_1))
            ecx_4 = sub_419520(arg2, 1)
        
        uint32_t eax_14 = var_c
        uint32_t* edi_1
        
        if (*(eax_14 + 0x27) == 0)
            edi_1 = arg9
        else
            int32_t var_20_2 = 0
            int32_t* eax_13
            eax_13, ecx_4 = sub_4254a0(eax_14, eax_14 + 0x27, ecx_4, ebx_1, 0, 1, 0, 1)
            edi_1 = arg9
            edi_1[1] = eax_13
            eax_14 = var_c
        
        if (*(eax_14 + 0x4b) != 0)
            int32_t var_20_3 = 0
            int32_t* eax_15
            eax_15, ecx_4 = sub_4254a0(eax_14, eax_14 + 0x4b, ecx_4, ebx_1, 0, 1, 0, 1)
            edi_1[2] = eax_15
            eax_14 = var_c
        
        if (*(eax_14 + 0x78) != 0)
            int32_t var_20_4 = 0
            edi_1[3] = sub_4254a0(eax_14, eax_14 + 0x78, ecx_4, ebx_1, 0, 1, 0, 1)
        
        ecx_1 = var_8_1
    
    if (arg3 s< 5)
        *arg5 = ecx_1
        return arg5
    
    if (arg3 s> 6 && arg3 != 8)
        *arg5 = ecx_1
        return arg5

*arg5 = arg3
return arg5
