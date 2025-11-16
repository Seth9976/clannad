// 函数: sub_4ba510
// 地址: 0x4ba510
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_1cd6410

if (arg3[2] != 0)
    int32_t edi_2 = result - arg3[0x6a]
    
    if (edi_2 u>= 0xfa)
        edi_2 = 0xfa
    
    int32_t var_10_1 = edi_2
    
    if (data_12dc610 != 0)
        if (data_703840 != 0)
            edi_2 = 0
            var_10_1 = 0
    else if (data_1392700 != 0 || data_703840 != 0)
        edi_2 = 0
        var_10_1 = 0
    
    int32_t eax_9
    int32_t eax_15
    int32_t ecx_4
    int32_t edi_3
    
    if (arg3[0x24] != 0)
        switch (arg3[0x22] - 1)
            case 0
                int32_t eax_2 = arg3[0x23]
                
                if (eax_2 u> 5)
                    arg3[0x25] = 0
                else
                    int32_t eax_7
                    int32_t edx
                    edx:eax_7 = muls.dp.d(0x51eb851f, *(eax_2 * 0x90 + 0x20740e8) * edi_2 * 0x3e8)
                    int32_t edx_1 = edx s>> 5
                    eax_9 = arg3[0x25] - ((edx_1 u>> 0x1f) + edx_1)
                label_4ba5c2:
                    int32_t eax_10
                    int32_t edx_2
                    edx_2:eax_10 = sx.q(eax_9)
                    ecx_4 = 0
                    edi_3 = divs.dp.d(edx_2:eax_10, arg3[0x24])
                    arg3[0x25] = mods.dp.d(edx_2:eax_10, arg3[0x24])
                label_4ba6f1:
                    
                    if (edi_3 != 0)
                        arg3[0x2d]
                        arg3[0x26] = mods.dp.d(sx.q(arg3[0x26] + edi_3), arg3[0x2d])
                    
                    if (ecx_4 != 0)
                        arg3[0x2e]
                        arg3[0x27] = mods.dp.d(sx.q(arg3[0x27] + ecx_4), arg3[0x2e])
            case 1
                int32_t eax_12 = arg3[0x23]
                
                if (eax_12 u<= 5)
                    eax_15 = *(eax_12 * 0x90 + 0x20740e8)
                label_4ba60c:
                    eax_9 = eax_15 * edi_2 * 0x3e8 s/ 0x64 + arg3[0x25]
                    goto label_4ba5c2
                
                arg3[0x25] = 0
            case 2
                int32_t eax_21 = arg3[0x23]
                
                if (eax_21 u<= 5)
                    eax_15 = *(eax_21 * 0x90 + 0x20740ec)
                    goto label_4ba60c
                
                arg3[0x25] = 0
            case 3
                int32_t eax_24 = arg3[0x23]
                int32_t var_8_1
                
                if (eax_24 u> 5)
                    var_8_1 = 0
                    arg3[0x25] = 0
                else
                    int32_t eax_29
                    int32_t edx_6
                    edx_6:eax_29 =
                        muls.dp.d(0x51eb851f, *(eax_24 * 0x90 + 0x20740ec) * edi_2 * 0x3e8)
                    int32_t edx_7 = edx_6 s>> 5
                    int32_t eax_34
                    int32_t edx_8
                    edx_8:eax_34 = sx.q((edx_7 u>> 0x1f) + edx_7 + arg3[0x25])
                    var_8_1 = divs.dp.d(edx_8:eax_34, arg3[0x24])
                    arg3[0x25] = mods.dp.d(edx_8:eax_34, arg3[0x24])
                
                int32_t eax_36 = arg3[0x23]
                
                if (arg3[0x24] == 0 || eax_36 u> 5)
                    ecx_4 = 0
                    arg3[0x25] = 0
                else
                    int32_t eax_41
                    int32_t edx_10
                    edx_10:eax_41 =
                        muls.dp.d(0x51eb851f, *(eax_36 * 0x90 + 0x2074134) * edi_2 * 0x3e8)
                    int32_t edx_11 = edx_10 s>> 5
                    int32_t eax_46
                    int32_t edx_12
                    edx_12:eax_46 = sx.q((edx_11 u>> 0x1f) + edx_11 + arg3[0x25])
                    ecx_4 = divs.dp.d(edx_12:eax_46, arg3[0x24])
                    arg3[0x25] = mods.dp.d(edx_12:eax_46, arg3[0x24])
                
                edi_3 = var_8_1
                goto label_4ba6f1
    sub_4b9b10(arg3, arg4)
    int32_t* edi_4 = arg3[2]
    int32_t* eax_56 = arg3
    int32_t i = 0
    
    if (*eax_56 s> 0)
        do
            if (edi_4[0x1a] == 0)
                sub_4b9de0(eax_56, edi_4, i, &arg3[3], var_10_1)
            else
                sub_4b8940(eax_56, edi_4, i, &arg3[3], 2, 0)
            
            eax_56 = arg3
            i += 1
            edi_4 = &edi_4[0x6d]
        while (i s< *eax_56)
    
    sub_4b9bb0(arg3, arg4)
    arg3[0x6a] = result

return result
