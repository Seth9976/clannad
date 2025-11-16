// 函数: sub_648bd0
// 地址: 0x648bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax_9

if (arg5 != 0)
    if (arg2 s> 0)
        arg3[3] = arg2
        arg3[4] = 1
        sub_5979b0(arg3, arg2 << 2)
        int32_t eax_20 = arg3[3] - 1
        int32_t eax_22 = arg3[4] - 1
        int32_t eax_23 = *arg3
        
        if (eax_23 == arg3[1])
            eax_23 = 0
        
        uint32_t ecx_6 = arg6 * 2
        int32_t eax_25
        int32_t edx_7
        edx_7:eax_25 = sx.q(arg2)
        int32_t temp0_2 = divs.dp.d(edx_7:eax_25, ecx_6)
        int32_t var_10_1 = temp0_2
        int32_t ecx_7 = temp0_2
        
        if (mods.dp.d(edx_7:eax_25, ecx_6) != 0)
            ecx_7 += 1
            var_10_1 = ecx_7
        
        arg5 = 0
        int32_t edi_3 = 0
        uint32_t var_8_2 = arg6 - 1
        
        if (ecx_7 s> 0)
            int32_t esi_2 = ecx_7 - 1
            
            do
                int32_t eax_27 = edi_3
                char ebx_4
                
                if (esi_2 != 0)
                    if (esi_2 s<= 0)
                        if (esi_2 s< 0)
                            if (edi_3 s< esi_2)
                                eax_27 = esi_2
                            else if (edi_3 s> 0)
                                eax_27 = 0
                    else if (edi_3 s< 0)
                        eax_27 = 0
                    else if (edi_3 s> esi_2)
                        eax_27 = esi_2
                    
                    ebx_4 = (divs.dp.d(sx.q(eax_27 * 0xff), esi_2)).b
                else
                    ebx_4 = -1
                
                int32_t var_2c_3 = eax_22
                ecx_7.b = 0xff
                int32_t var_30_2 = eax_20
                ecx_7.b = 0xff - ebx_4
                int32_t var_34_2 = 0
                int32_t var_38_2 = 0
                sub_64d0a0(arg3, arg3[3], eax_23, arg3[4], arg5, 0, var_8_2, 0, ecx_7.b, 0)
                int32_t var_58_2 = eax_22
                int32_t var_5c_2 = eax_20
                arg5 += arg6
                uint32_t ecx_10 = var_8_2 + arg6
                int32_t var_60_2 = 0
                int32_t var_64_2 = 0
                sub_64d0a0(arg3, arg3[3], eax_23, arg3[4], arg5, 0, ecx_10, 0, ebx_4, 0)
                edi_3 += 1
                var_8_2 = ecx_10 + arg6
                arg5 += arg6
            while (edi_3 s< var_10_1)
        
        eax_9.b = 1
        return eax_9
else if (arg4 s> 0)
    arg3[3] = 1
    arg3[4] = arg4
    sub_5979b0(arg3, arg4 << 2)
    int32_t eax_2 = arg3[3] - 1
    int32_t eax_4 = arg3[4] - 1
    int32_t eax_5 = *arg3
    
    if (eax_5 == arg3[1])
        eax_5 = 0
    
    uint32_t ecx = arg6 * 2
    int32_t eax_7
    int32_t edx
    edx:eax_7 = sx.q(arg4)
    int32_t temp0 = divs.dp.d(edx:eax_7, ecx)
    int32_t var_1c = temp0
    int32_t ecx_1 = temp0
    
    if (mods.dp.d(edx:eax_7, ecx) != 0)
        ecx_1 += 1
        var_1c = ecx_1
    
    arg5 = 0
    int32_t edi_2 = 0
    uint32_t var_8 = arg6 - 1
    
    if (ecx_1 s<= 0)
        eax_9.b = 1
        return eax_9
    
    int32_t esi_1 = ecx_1 - 1
    
    do
        int32_t eax_10 = edi_2
        char ebx_1
        
        if (esi_1 != 0)
            if (esi_1 s<= 0)
                if (esi_1 s< 0)
                    if (edi_2 s< esi_1)
                        eax_10 = esi_1
                    else if (edi_2 s> 0)
                        eax_10 = 0
            else if (edi_2 s< 0)
                eax_10 = 0
            else if (edi_2 s> esi_1)
                eax_10 = esi_1
            
            ebx_1 = (divs.dp.d(sx.q(eax_10 * 0xff), esi_1)).b
        else
            ebx_1 = -1
        
        int32_t var_2c_1 = eax_4
        ecx_1.b = 0xff
        int32_t var_30_1 = eax_2
        ecx_1.b = 0xff - ebx_1
        int32_t var_34_1 = 0
        int32_t var_38_1 = 0
        uint32_t eax_14 = zx.d(ecx_1.b)
        sub_64d0a0(eax_14, arg3[3], eax_5, arg3[4], 0, arg5, 0, var_8, eax_14.b, 0)
        int32_t var_58_1 = eax_4
        int32_t var_5c_1 = eax_2
        arg5 += arg6
        uint32_t ecx_4 = var_8 + arg6
        int32_t var_60_1 = 0
        int32_t var_64_1 = 0
        sub_64d0a0(arg3, arg3[3], eax_5, arg3[4], 0, arg5, 0, ecx_4, ebx_1, 0)
        edi_2 += 1
        var_8 = ecx_4 + arg6
        arg5 += arg6
    while (edi_2 s< var_1c)
    
    uint32_t eax_17
    eax_17.b = 1
    return eax_17
arg1.b = 0
return arg1
