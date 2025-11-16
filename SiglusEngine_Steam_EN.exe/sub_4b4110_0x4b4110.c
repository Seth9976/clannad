// 函数: sub_4b4110
// 地址: 0x4b4110
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg8
int32_t eax_1 = arg9
int32_t i_7
int32_t arg_30
int32_t eax_3 = sub_4d2220(&arg8, data_7030b0, data_7030ac, data_7030b4, data_7030b8, &arg8, &arg9, 
    &i_7, &arg_30)

if (eax_3 != 0)
    int32_t edx_1 = arg10
    int32_t eax_4 = 0
    int32_t esi_1 = 0
    int32_t edi_1 = 0
    int32_t i = 0
    
    if (edx_1 s>= 2)
        int32_t edx_2 = 0
        edi_1 = 0
        
        do
            int32_t eax_7 = edx_2
            edx_2 += data_1bfe2e8 * 2
            int32_t var_30_1 = edx_2
            esi_1 += eax_7 * i
            int32_t eax_10 = (i + 1) * (i + 1)
            i += 2
            edi_1 += eax_10 * data_1bfe2e8
        while (i s< arg10 - 1)
        
        edx_1 = arg10
        eax_4 = 0
    
    if (i s< edx_1)
        eax_4 = data_1bfe2e8 * i * i
    
    int32_t i_35 = arg8
    int32_t ecx_1 = arg9
    int32_t esi_4 = (esi_1 + edi_1 + eax_4) s>> 8
    int32_t edx_5 = arg_30 - ecx_1 + 1
    int32_t var_2c_1 = edx_5
    int32_t i_10
    int32_t i_11
    int32_t i_4
    int32_t i_14
    
    if (data_1bfe2e0 == 0)
        i_4 = i_7
        i_11 = i_7
        i_10 = i_7
        i_14 = i_7
    else
        int32_t ecx_2 = data_1bfe2e0
        int32_t eax_19
        int32_t edx_6
        edx_6:eax_19 = sx.q(i_7 - i_35 + 1)
        int32_t esi_6 = (eax_19 - edx_6) s>> 1
        int32_t temp0_1 = divs.dp.d(sx.q(ecx_2 - 1 + esi_6), ecx_2)
        int32_t i_20 = esi_4 + data_1bfe2e0
        i_10 = i_20
        i_11 = esi_6 - ecx_2 * temp0_1 + arg2
        int32_t eax_29
        int32_t edx_9
        edx_9:eax_29 = sx.q(esi_4)
        i_14 = ((eax_29 - edx_9) s>> 1) - i_20 * temp0_1 + esi_6 + i_35
        ecx_1 = arg9
        edx_5 = var_2c_1
        i_4 = temp0_1 + divs.dp.d(sx.q(data_1bfe2e0 - esi_6 + i_7 - i_35), data_1bfe2e0)
    
    int32_t i_12
    int32_t i_13
    int32_t i_5
    int32_t i_17
    
    if (data_1bfe2e4 == 0)
        i_17 = i_7
        i_5 = i_7
        i_13 = i_7
        i_12 = i_7
    else
        int32_t ecx_10 = data_1bfe2e4
        int32_t eax_45
        int32_t edx_11
        edx_11:eax_45 = sx.q(edx_5)
        int32_t edi_3 = (eax_45 - edx_11) s>> 1
        int32_t temp0_3 = divs.dp.d(sx.q(ecx_10 - 1 + edi_3), ecx_10)
        i_13 = edi_3 - ecx_10 * temp0_3 + arg4
        int32_t i_21 = data_1bfe2e4 + esi_4
        i_12 = i_21
        int32_t eax_56
        int32_t edx_14
        edx_14:eax_56 = sx.q(esi_4)
        data_1bfe2e4
        ecx_1 = arg9
        i_17 = ((eax_56 - edx_14) s>> 1) - i_21 * temp0_3 + edi_3 + ecx_1
        i_5 = temp0_3 + divs.dp.d(sx.q(data_1bfe2e4 - edi_3 + var_2c_1 - 1), data_1bfe2e4)
        i_35 = arg8
    
    int32_t var_44_1 = 0xff
    int32_t var_48_1 = arg_30
    int32_t i_8 = i_7
    int32_t var_50_1 = ecx_1
    sub_584e80(arg5 << 5, data_702fec, data_702fe8, data_702ff0, (&data_976b54)[arg5 * 8], 
        (&data_976b58)[arg5 * 8], (&data_976b5c)[arg5 * 8], arg6, arg7, 0, eax, eax_1, i_35.b)
    eax_3 = data_1bfe2e0
    
    if (eax_3 != 0)
        if (data_1bfe2e4 != 0)
            if (i_5 s> 0)
                int32_t i_25 = i_14
                int32_t i_30 = i_13
                int32_t i_1
                
                do
                    int32_t i_19 = i_11
                    int32_t i_36 = i_25
                    
                    if (i_4 s> 0)
                        int32_t j_1 = i_4
                        int32_t j
                        
                        do
                            int32_t i_26 = eax_3 - 1 + i_36
                            int32_t edx_26 = data_1bfe2e4 - 1 + i_17
                            
                            if (i_36 s<= i_7 && i_26 s>= arg8 && i_17 s<= arg_30 && edx_26 s>= arg9)
                                char edx_27 = i_36.b
                                int32_t i_15 = i_26
                                int32_t i_27 = i_17
                                
                                if (i_36 s< arg8)
                                    edx_27 = arg8.b
                                
                                int32_t var_44_4 = arg11
                                
                                if (i_17 s< arg9)
                                    i_27 = arg9
                                
                                if (i_15 s> i_7)
                                    i_15 = i_7
                                
                                int32_t eax_72 = edx_26
                                
                                if (eax_72 s> arg_30)
                                    eax_72 = arg_30
                                
                                int32_t var_48_4 = eax_72
                                int32_t i_18 = i_15
                                int32_t i_32 = i_27
                                sub_584e80(arg3 << 5, data_702fec, data_702fe8, data_702ff0, 
                                    (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                    (&data_976b5c)[arg3 * 8], i_19, i_13, 0, i_36, i_17, edx_27)
                                eax_3 = data_1bfe2e0
                            
                            i_19 += eax_3
                            i_36 += i_10
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        i_25 = i_14
                        i_30 = i_13
                    
                    i_30 += data_1bfe2e4
                    i_17 += i_12
                    i_1 = i_5
                    i_5 -= 1
                    i_13 = i_30
                while (i_1 != 1)
        else if (i_4 s> 0)
            int32_t i_16 = i_7
            int32_t i_29 = i_14
            int32_t i_2
            
            do
                int32_t esi_12 = eax_3 - 1 + i_29
                arg8 = esi_12
                
                if (i_29 s<= i_16 && esi_12 s>= i_35)
                    int32_t edx_22 = arg9
                    int32_t esi_13 = arg_30
                    
                    if (edx_22 s<= esi_13)
                        int32_t var_44_3 = arg11
                        int32_t i_23 = i_14
                        int32_t var_48_3 = esi_13
                        
                        if (i_23 s< i_35)
                            i_23 = i_35
                        
                        int32_t i_24 = arg8
                        
                        if (i_24 s> i_16)
                            i_24 = i_16
                        
                        int32_t i_33 = i_24
                        int32_t var_50_2 = edx_22
                        arg8 = i_24
                        sub_584e80(i_23, data_702fec, data_702fe8, data_702ff0, 
                            (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                            (&data_976b5c)[arg3 * 8], i_11, arg4, 0, i_14, edx_22, i_23.b)
                        eax_3 = data_1bfe2e0
                        i_16 = i_7
                    
                    i_29 = i_14
                
                i_29 += i_10
                i_11 += eax_3
                i_2 = i_4
                i_4 -= 1
                i_14 = i_29
            while (i_2 != 1)
    else if (i_5 s> eax_3)
        int32_t eax_68 = data_1bfe2e4
        int32_t i_28 = i_12
        int32_t i_6 = i_5
        int32_t i_3
        
        do
            int32_t eax_70 = eax_68 - 1 + i_17
            arg8 = eax_70
            
            if (i_35 s<= i_7)
                int32_t edx_20 = arg_30
                
                if (i_17 s<= edx_20)
                    int32_t i_34 = arg9
                    
                    if (eax_70 s>= i_34)
                        int32_t var_44_2 = arg11
                        int32_t i_22 = i_17
                        
                        if (i_17 s< i_34)
                            i_22 = i_34
                        
                        int32_t ecx_16 = arg8
                        
                        if (ecx_16 s> edx_20)
                            ecx_16 = edx_20
                        
                        void* edx_21 = data_702fec
                        arg8 = ecx_16
                        int32_t var_48_2 = arg8
                        int32_t i_9 = i_7
                        int32_t i_31 = i_22
                        sub_584e80(i_22, edx_21, data_702fe8, data_702ff0, 
                            (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                            (&data_976b5c)[arg3 * 8], arg2, i_13, 0, i_35, i_17, i_35.b)
                    
                    i_6 = i_5
                
                i_28 = i_12
            
            eax_68 = data_1bfe2e4
            i_17 += i_28
            i_13 += eax_68
            i_3 = i_6
            i_6 -= 1
            i_5 = i_6
        while (i_3 != 1)
        return eax_68

return eax_3
