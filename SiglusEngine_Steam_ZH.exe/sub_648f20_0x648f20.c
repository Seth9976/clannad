// 函数: sub_648f20
// 地址: 0x648f20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi_1 = arg6 * 2
int32_t eax_8

if (arg5 != 0)
    if (arg2 s> 0 && esi_1 s> 0)
        arg3[3] = arg2
        arg3[4] = esi_1
        sub_5979b0(arg3, (esi_1 * arg2) << 2)
        int32_t eax_20 = arg3[4] - 1
        int32_t ecx_5 = arg3[3] - 1
        int32_t eax_21 = *arg3
        int32_t var_c_1 = ecx_5
        
        if (eax_21 == arg3[1])
            eax_21 = 0
        
        int32_t esi_3 = 0
        
        if (arg2 s> 0)
            do
                int32_t eax_24 = esi_3
                int32_t ebx_2
                
                if (arg2 != 1)
                    if (arg2 - 1 s<= 0)
                        if (arg2 - 1 s< 0)
                            if (esi_3 s< arg2 - 1)
                                eax_24 = arg2 - 1
                            else if (esi_3 s> 0)
                                eax_24 = 0
                    else if (esi_3 s< 0)
                        eax_24 = 0
                    else if (esi_3 s> arg2 - 1)
                        eax_24 = arg2 - 1
                    
                    ebx_2 = divs.dp.d(sx.q(eax_24 * 0xff), arg2 - 1)
                else
                    ebx_2 = 0xff
                
                int32_t var_2c_3 = eax_20
                int32_t var_30_2 = ecx_5
                int32_t var_34_2 = 0
                int32_t var_38_2 = 0
                ecx_5.b = 0xff
                int32_t var_3c_2 = 0
                ecx_5.b = 0xff - ebx_2.b
                uint32_t var_40_2 = zx.d(ecx_5.b)
                int32_t var_44_2 = arg6 - 1
                int32_t var_48_2 = esi_3
                sub_64ce10(arg3, arg3[3], eax_21, arg3[4], esi_3.b, 0)
                int32_t var_58_2 = eax_20
                int32_t var_5c_2 = var_c_1
                int32_t var_60_2 = 0
                int32_t var_64_2 = 0
                int32_t var_68_2 = 0
                int32_t var_6c_2 = ebx_2
                int32_t var_70_2 = esi_1 - 1
                int32_t var_74_2 = esi_3
                sub_64ce10(arg3, arg3[3], eax_21, arg3[4], esi_3.b, arg6.b)
                ecx_5 = var_c_1
                esi_3 += 1
            while (esi_3 s< arg2)
        
        eax_8.b = 1
        return eax_8
else if (esi_1 s> 0 && arg4 s> 0)
    arg3[3] = esi_1
    arg3[4] = arg4
    sub_5979b0(arg3, (esi_1 * arg4) << 2)
    int32_t eax_4 = arg3[4] - 1
    int32_t ecx_1 = arg3[3] - 1
    int32_t eax_5 = *arg3
    int32_t var_10 = ecx_1
    
    if (eax_5 == arg3[1])
        eax_5 = 0
    
    int32_t esi_2 = 0
    
    if (arg4 s<= 0)
        eax_8.b = 1
        return eax_8
    
    do
        int32_t eax_9 = esi_2
        int32_t ebx_1
        
        if (arg4 != 1)
            if (arg4 - 1 s<= 0)
                if (arg4 - 1 s< 0)
                    if (esi_2 s< arg4 - 1)
                        eax_9 = arg4 - 1
                    else if (esi_2 s> 0)
                        eax_9 = 0
            else if (esi_2 s< 0)
                eax_9 = 0
            else if (esi_2 s> arg4 - 1)
                eax_9 = arg4 - 1
            
            ebx_1 = divs.dp.d(sx.q(eax_9 * 0xff), arg4 - 1)
        else
            ebx_1 = 0xff
        
        int32_t var_2c_1 = eax_4
        int32_t var_30_1 = ecx_1
        int32_t var_34_1 = 0
        int32_t var_38_1 = 0
        ecx_1.b = 0xff
        int32_t var_3c_1 = 0
        ecx_1.b = 0xff - ebx_1.b
        uint32_t eax_13 = zx.d(ecx_1.b)
        uint32_t var_40_1 = eax_13
        int32_t var_44_1 = esi_2
        int32_t var_48_1 = arg6 - 1
        sub_64ce10(eax_13, arg3[3], eax_5, arg3[4], 0, esi_2.b)
        int32_t var_58_1 = eax_4
        int32_t var_5c_1 = var_10
        int32_t var_60_1 = 0
        int32_t var_64_1 = 0
        int32_t var_68_1 = 0
        int32_t var_6c_1 = ebx_1
        int32_t var_70_1 = esi_2
        int32_t var_74_1 = esi_1 - 1
        sub_64ce10(arg3, arg3[3], eax_5, arg3[4], arg6.b, esi_2.b)
        ecx_1 = var_10
        esi_2 += 1
    while (esi_2 s< arg4)
    
    int32_t eax_15
    eax_15.b = 1
    return eax_15
arg1.b = 0
return arg1
