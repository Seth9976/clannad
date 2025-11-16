// 函数: sub_4b2e40
// 地址: 0x4b2e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg9
int32_t edi = arg8
int32_t i_6
int32_t arg_30
int32_t i = sub_4d2220(&arg8, data_7030b0, data_7030ac, data_7030b4, data_7030b8, &arg8, &arg9, 
    &i_6, &arg_30)

if (i != 0)
    int32_t ecx_1 = arg8
    int32_t edx_1 = arg9
    int32_t eax_4 = i_6 - ecx_1 + 1
    int32_t esi_1 = arg_30
    int32_t var_10_1 = ecx_1
    int32_t eax_7 = esi_1 - edx_1 + 1
    int32_t var_1c_1 = edx_1
    
    if (arg10 != 0xf0)
        int32_t var_38_1 = 0xff
        int32_t var_3c_1 = esi_1
        int32_t i_8 = i_6
        int32_t var_44_1 = edx_1
        sub_584e80(arg5 << 5, data_702fec, data_702fe8, data_702ff0, (&data_976b54)[arg5 * 8], 
            (&data_976b58)[arg5 * 8], (&data_976b5c)[arg5 * 8], arg6, arg7, 0, edi, eax, ecx_1.b)
        edx_1 = arg9
        ecx_1 = arg8
    
    int32_t* edi_1 = data_1bfe2f0.d
    
    if (arg12 u> 1)
        i = 0
        int32_t* var_28_2 = edi_1
        int32_t esi_15 = data_1bfe2dc - 1 + edx_1
        int32_t i_4 = 0
        
        if (data_1bfe2f0:4 s> 0)
            do
                int32_t eax_34
                
                if (arg11 == 0 || (i.b & 1) == 0)
                    eax_34 = arg12
                else
                    int32_t eax_33
                    eax_33.b = arg12 == 2
                    eax_34 = eax_33 + 2
                
                int32_t edi_10 = *edi_1
                arg9 = eax_34
                int32_t i_11 = ecx_1 - edi_10 + arg13
                int32_t edi_12 = edi_10 - arg13 + i_6
                
                if (arg_30 s>= var_1c_1)
                    int32_t var_5c_7
                    int32_t var_58_7
                    int32_t var_50_7
                    int32_t var_4c_7
                    char var_48_7
                    int32_t eax_42
                    int32_t eax_43
                    int32_t eax_47
                    int32_t ecx_21
                    int32_t edi_19
                    
                    if (arg9 != 2)
                        int32_t i_12 = i_6
                        
                        if (arg_30 s< esi_15)
                            esi_15 = arg_30
                        
                        if (i_12 s>= edi_12)
                            if (ecx_1 s> edi_12)
                                edi_12 = ecx_1
                            
                            if (arg10 == 0xc8)
                                eax_47 = arg3
                                int32_t var_38_20 = 0xff
                                int32_t var_3c_20 = esi_15
                                int32_t i_19 = i_12
                                int32_t var_44_18 = var_1c_1
                                var_48_7 = edi_12.b
                                var_4c_7 = eax
                                var_50_7 = edi
                                int32_t var_54_8 = 0
                                var_58_7 = arg4
                                var_5c_7 = arg2
                                goto label_4b3516
                            
                            if (arg10 == 0xdc)
                                eax_47 = arg3
                                int32_t var_38_19 = 0xff
                                int32_t var_3c_19 = esi_15
                                int32_t i_18 = i_12
                                int32_t var_44_17 = var_1c_1
                                var_48_7 = edi_12.b
                                var_4c_7 = eax
                                var_50_7 = edi_12
                                int32_t var_54_7 = 0
                                var_58_7 = arg4
                                var_5c_7 = arg2
                                goto label_4b3516
                            
                            if (arg10 == 0xf0)
                                int32_t var_38_17 = 0xff
                                int32_t var_3c_17 = esi_15
                                int32_t i_17 = i_12
                                int32_t var_44_15 = var_1c_1
                                sub_584e80(arg3 << 5, data_702fec, data_702fe8, data_702ff0, 
                                    (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                    (&data_976b5c)[arg3 * 8], arg2, arg4, 0, edi_12, eax, edi_12.b)
                                ecx_1 = arg8
                                
                                if (edi_12 - 1 s>= ecx_1)
                                    edi_19 = edi_12 - i_6
                                    int32_t var_38_18 = 0xff
                                    int32_t var_3c_18 = esi_15
                                    int32_t var_40_8 = edi_12 - 1
                                    int32_t var_44_16 = var_1c_1
                                    var_48_7 = arg8.b
                                    ecx_21 = arg5 << 5
                                    eax_42 = edi - 1
                                label_4b337d:
                                    var_4c_7 = eax
                                    eax_43 = eax_42 + edi_19
                                    var_50_7 = eax_43
                                    int32_t var_54_4 = 0
                                    var_58_7 = arg7
                                    var_5c_7 = arg6
                                    goto label_4b338b
                        else if (arg10 == 0xf0)
                            int32_t var_38_21 = 0xff
                            int32_t var_3c_21 = esi_15
                            int32_t i_20 = i_12
                        label_4b3501:
                            int32_t var_44_19 = var_1c_1
                            eax_47 = arg5
                            var_48_7 = ecx_1.b
                            var_4c_7 = eax
                            var_50_7 = edi
                            int32_t var_54_9 = 0
                            var_58_7 = arg7
                            var_5c_7 = arg6
                        label_4b3516:
                            eax_43 = eax_47 << 5
                            sub_584e80(eax_43, data_702fec, data_702fe8, data_702ff0, 
                                *(eax_43 + &data_976b54), *(eax_43 + &data_976b58), 
                                *(eax_43 + &data_976b5c), var_5c_7, var_58_7, 0, var_50_7, 
                                var_4c_7, var_48_7)
                            ecx_1 = arg8
                    else
                        if (arg_30 s< esi_15)
                            esi_15 = arg_30
                        
                        if (ecx_1 s<= i_11)
                            if (i_6 s< i_11)
                                i_11 = i_6
                            
                            arg9 = i_11
                            
                            if (arg10 == 0xc8)
                                eax_47 = arg3
                                int32_t var_38_15 = 0xff
                                int32_t var_3c_15 = esi_15
                                int32_t i_16 = i_11
                                int32_t var_44_14 = var_1c_1
                                var_48_7 = ecx_1.b
                                var_4c_7 = eax
                                var_50_7 = edi
                                int32_t var_54_6 = 0
                                var_58_7 = arg4
                                var_5c_7 = arg2
                                goto label_4b3516
                            
                            if (arg10 == 0xdc)
                                int32_t var_38_14 = 0xff
                                int32_t var_3c_14 = esi_15
                                int32_t i_15 = i_11
                                int32_t var_44_13 = var_1c_1
                                int32_t eax_44 = arg8
                                var_48_7 = eax_44.b
                                var_4c_7 = eax
                                ecx_21 = arg3 << 5
                                eax_43 = edi + 1 + i_11 - eax_4 - eax_44
                                var_50_7 = eax_43
                                int32_t var_54_5 = 0
                                var_58_7 = arg4
                                var_5c_7 = arg2
                            label_4b338b:
                                sub_584e80(eax_43, data_702fec, data_702fe8, data_702ff0, 
                                    *(ecx_21 + &data_976b54), *(ecx_21 + &data_976b58), 
                                    *(ecx_21 + &data_976b5c), var_5c_7, var_58_7, 0, var_50_7, 
                                    var_4c_7, var_48_7)
                                ecx_1 = arg8
                            else if (arg10 == 0xf0)
                                int32_t var_38_12 = 0xff
                                int32_t var_3c_12 = esi_15
                                int32_t i_13 = i_11
                                int32_t var_44_11 = var_1c_1
                                int32_t edi_18 = i_11 - ecx_1
                                edi_19 = edi
                                int32_t eax_40 = edi_18 - eax_4 + 1 + edi_19
                                sub_584e80(eax_40, data_702fec, data_702fe8, data_702ff0, 
                                    (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                    (&data_976b5c)[arg3 * 8], arg2, arg4, 0, eax_40, eax, arg8.b)
                                int32_t i_10 = i_6
                                
                                if (arg9 + 1 s<= i_10)
                                    int32_t var_38_13 = 0xff
                                    int32_t var_3c_13 = esi_15
                                    int32_t i_14 = i_10
                                    int32_t var_44_12 = var_1c_1
                                    ecx_21 = arg5 << 5
                                    eax_42 = edi_18 + 1
                                    var_48_7 = (arg9 + 1).b
                                    goto label_4b337d
                                
                                ecx_1 = arg8
                        else if (arg10 == 0xf0)
                            int32_t var_38_16 = 0xff
                            int32_t var_3c_16 = esi_15
                            int32_t i_9 = i_6
                            goto label_4b3501
                    int32_t eax_57 = data_1bfe2dc
                    var_1c_1 += eax_57
                    esi_15 += eax_57
                
                i = i_4 + 1
                edi_1 = &var_28_2[1]
                i_4 = i
                var_28_2 = edi_1
            while (i s< data_1bfe2f0:4)
    else
        int32_t* var_2c_2 = edi_1
        i = data_1bfe2dc - 1 + ecx_1
        int32_t i_5 = 0
        int32_t ecx_3 = arg8
        
        if (data_1bfe2f0:4 s> 0)
            int32_t i_1
            
            do
                if (arg11 != 0)
                    ecx_3 = var_10_1
                
                int32_t var_24_1
                
                if (arg11 == 0 || (i_5.b & 1) == 0)
                    var_24_1 = arg12
                else
                    int32_t edx_3
                    edx_3.b = arg12 == 0
                    var_24_1 = edx_3
                    edx_1 = var_1c_1
                
                int32_t esi_3 = *edi_1
                int32_t edi_4 = edx_1 - esi_3 + arg13
                int32_t esi_5 = esi_3 - arg13 + arg_30
                
                if (i_6 s>= ecx_3)
                    if (i_6 s< i)
                        i = i_6
                    
                    arg8 = i
                    int32_t edi_5
                    char var_48_3
                    int32_t eax_17
                    int32_t ecx_10
                    
                    if (var_24_1 != 0)
                        int32_t edi_9 = arg_30
                        int32_t var_68_3
                        int32_t var_64_3
                        int32_t var_60_3
                        int32_t var_5c_3
                        int32_t var_58_3
                        int32_t var_50_3
                        int32_t var_4c_4
                        int32_t eax_22
                        
                        if (edi_9 s>= esi_5)
                            if (edx_1 s> esi_5)
                                esi_5 = edx_1
                            
                            if (arg10 == 0xc8)
                                int32_t var_38_10 = 0xff
                                int32_t var_3c_10 = edi_9
                                edi_5 = arg8
                                int32_t var_40_7 = edi_5
                                int32_t var_44_10 = esi_5
                            label_4b31f5:
                                var_48_3 = ecx_3.b
                                var_4c_4 = eax
                            label_4b31f9:
                                var_50_3 = edi
                                eax_22 = arg3
                                int32_t var_54_3 = 0
                                var_58_3 = arg4
                                var_5c_3 = arg2
                                goto label_4b3207
                            
                            if (arg10 == 0xdc)
                                int32_t var_38_9 = 0xff
                                int32_t var_3c_9 = edi_9
                                edi_5 = arg8
                                int32_t var_40_6 = edi_5
                                int32_t var_44_9 = esi_5
                                var_48_3 = ecx_3.b
                                var_4c_4 = esi_5
                                goto label_4b31f9
                            
                            if (arg10 != 0xf0)
                                edi_5 = arg8
                            else
                                int32_t var_38_7 = 0xff
                                int32_t var_3c_7 = edi_9
                                edi_5 = arg8
                                int32_t var_40_4 = edi_5
                                int32_t var_44_7 = esi_5
                                sub_584e80(arg3 << 5, data_702fec, data_702fe8, data_702ff0, 
                                    (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                    (&data_976b5c)[arg3 * 8], arg2, arg4, 0, edi, esi_5, ecx_3.b)
                                edx_1 = arg9
                                
                                if (esi_5 - 1 s>= edx_1)
                                    int32_t var_38_8 = 0xff
                                    int32_t var_3c_8 = esi_5 - 1
                                    int32_t var_40_5 = edi_5
                                    int32_t var_44_8 = edx_1
                                    var_48_3 = var_10_1.b
                                    ecx_10 = arg5 << 5
                                    eax_17 = eax - 1 + esi_5 - arg_30
                                label_4b3047:
                                    var_4c_4 = eax_17
                                    var_50_3 = edi
                                    int32_t var_54_1 = 0
                                    var_58_3 = arg7
                                    var_5c_3 = arg6
                                    var_60_3 = *(ecx_10 + &data_976b5c)
                                    var_64_3 = *(ecx_10 + &data_976b58)
                                    var_68_3 = *(ecx_10 + &data_976b54)
                                    goto label_4b322e
                                
                                ecx_3 = var_10_1
                        else if (arg10 != 0xf0)
                            edi_5 = arg8
                        else
                            int32_t var_38_11 = 0xff
                            int32_t var_3c_11 = edi_9
                            edi_5 = arg8
                        label_4b3122:
                            eax_22 = arg5
                            int32_t var_40_3 = edi_5
                            int32_t var_44_6 = edx_1
                            var_48_3 = ecx_3.b
                            var_4c_4 = eax
                            var_50_3 = edi
                            int32_t var_54_2 = 0
                            var_58_3 = arg7
                            var_5c_3 = arg6
                        label_4b3207:
                            eax_17 = eax_22 << 5
                            var_60_3 = *(eax_17 + &data_976b5c)
                            var_64_3 = *(eax_17 + &data_976b58)
                            var_68_3 = *(eax_17 + &data_976b54)
                        label_4b322e:
                            sub_584e80(eax_17, data_702fec, data_702fe8, data_702ff0, var_68_3, 
                                var_64_3, var_60_3, var_5c_3, var_58_3, 0, var_50_3, var_4c_4, 
                                var_48_3)
                            edx_1 = arg9
                            ecx_3 = var_10_1
                    else if (edx_1 s> edi_4)
                        edi_5 = arg8
                        
                        if (arg10 == 0xf0)
                            int32_t var_38_6 = 0xff
                            int32_t var_3c_6 = arg_30
                            goto label_4b3122
                    else
                        if (arg_30 s< edi_4)
                            edi_4 = arg_30
                        
                        if (arg10 == 0xc8)
                            int32_t var_38_5 = 0xff
                            int32_t var_3c_5 = edi_4
                            edi_5 = arg8
                            int32_t var_40_2 = edi_5
                            int32_t var_44_5 = edx_1
                            goto label_4b31f5
                        
                        if (arg10 == 0xdc)
                            int32_t var_38_4 = 0xff
                            int32_t var_3c_4 = edi_4
                            int32_t i_3 = i
                            int32_t var_44_4 = edx_1
                            int32_t eax_21 = eax + 1 + edi_4 - eax_7 - edx_1
                            sub_584e80(eax_21, data_702fec, data_702fe8, data_702ff0, 
                                (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                (&data_976b5c)[arg3 * 8], arg2, arg4, 0, edi, eax_21, var_10_1.b)
                            edx_1 = arg9
                            ecx_3 = var_10_1
                            edi_5 = arg8
                        else if (arg10 != 0xf0)
                            edi_5 = arg8
                        else
                            char esi_10 = var_10_1.b
                            int32_t var_38_2 = 0xff
                            int32_t var_3c_2 = edi_4
                            int32_t i_2 = i
                            int32_t var_44_2 = edx_1
                            int32_t ecx_5 = edi_4 - edx_1
                            int32_t eax_14 = ecx_5 - eax_7 + eax + 1
                            sub_584e80(eax_14, data_702fec, data_702fe8, data_702ff0, 
                                (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                (&data_976b5c)[arg3 * 8], arg2, arg4, 0, edi, eax_14, esi_10)
                            int32_t eax_15 = arg_30
                            edi_5 = arg8
                            
                            if (edi_4 + 1 s<= eax_15)
                                int32_t var_38_3 = 0xff
                                int32_t var_3c_3 = eax_15
                                int32_t var_40_1 = edi_5
                                int32_t var_44_3 = edi_4 + 1
                                ecx_10 = arg5 << 5
                                var_48_3 = esi_10
                                eax_17 = eax + ecx_5 + 1
                                goto label_4b3047
                            
                            edx_1 = arg9
                            ecx_3 = var_10_1
                    ecx_3 += data_1bfe2dc
                    int32_t i_7 = edi_5 + data_1bfe2dc
                    var_10_1 = ecx_3
                    i = i_7
                    arg8 = i_7
                
                i_1 = i_5 + 1
                edi_1 = &var_2c_2[1]
                i_5 = i_1
                var_2c_2 = edi_1
            while (i_1 s< data_1bfe2f0:4)

return i
