// 函数: sub_4b3970
// 地址: 0x4b3970
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg9
int32_t esi = arg8
int32_t arg_2c
int32_t arg_30
int32_t i
int32_t ecx_1
i, ecx_1 = sub_4d2220(&arg8, data_7030b0, data_7030ac, data_7030b4, data_7030b8, &arg8, &arg9, 
    &arg_2c, &arg_30)

if (i != 0)
    int32_t edx_1 = arg_2c
    int32_t edi_1 = arg9
    int32_t var_c_1 = edi_1
    int32_t var_8_1
    
    if (arg12 == 0)
        int32_t var_3c_2 = 0xff
        int32_t var_40_2 = arg_30
        int32_t ecx_5 = arg8
        int32_t var_44_2 = edx_1
        int32_t var_48_2 = edi_1
        var_8_1 = ecx_5
        sub_584e80(arg5 << 5, data_702fec, data_702fe8, data_702ff0, (&data_976b54)[arg5 * 8], 
            (&data_976b58)[arg5 * 8], (&data_976b5c)[arg5 * 8], arg6, arg7, 0, esi, eax, ecx_5.b)
    else
        int32_t var_3c_1 = 0
        int32_t var_40_1 = 0xff
        int32_t var_44_1 = 0
        int32_t var_48_1 = 0
        int32_t eax_2 = arg8
        var_8_1 = eax_2
        int32_t var_6c_1 = 0
        int32_t var_70_1 = 0
        int32_t var_74_1 = 0
        int32_t var_78_1 = 0
        int32_t ecx_2 = arg_30
        sub_586580(eax_2, data_702fec, data_702fe8, data_702ff0, eax_2, edi_1, edx_1, ecx_2, 0, 0, 
            0, eax_2, edi_1.b, edx_1, ecx_2, ecx_1, 0, 0, 0, 0)
    
    int32_t esi_1 = arg14
    int32_t edx_4 = 0
    int32_t var_18_1 = 0
    
    if (esi_1 s<= 0x7d0)
        int32_t eax_6
        int32_t edx_5
        edx_5:eax_6 = sx.q(esi_1)
        int32_t eax_8 = (eax_6 + (edx_5 & 0xf)) s>> 4
        
        if (esi_1 s<= 0x258)
            esi_1 -= eax_8 * 0xf
            edx_4 = 0
        else if (esi_1 s<= 0x320)
            esi_1 -= eax_8 * 0xe
            edx_4 = 0
        else if (esi_1 s<= 0x3e8)
            esi_1 -= eax_8 * 0xd
            edx_4 = 0
        else if (esi_1 s<= 0x4b0)
            esi_1 -= eax_8 * 0xc
            edx_4 = 0
        else if (esi_1 s<= 0x578)
            esi_1 -= eax_8 * 0xb
            edx_4 = 0
        else if (esi_1 s<= 0x640)
            esi_1 -= eax_8 * 0xa
            edx_4 = 0
        else if (esi_1 s> 0x708)
            esi_1 -= eax_8 << 3
            edx_4 = 0
        else
            esi_1 -= eax_8 * 9
            edx_4 = 0
    else if (esi_1 s> 0xe10)
        if (esi_1 s<= 0xe74)
            int32_t eax_52
            int32_t edx_21
            edx_21:eax_52 = sx.q(esi_1)
            esi_1 += (eax_52 + (edx_21 & 3)) s>> 2
            edx_4 = 0
        else if (esi_1 s<= 0xed8)
            int32_t eax_56
            int32_t edx_23
            edx_23:eax_56 = sx.q(esi_1)
            edx_4 = 0
            esi_1 += (eax_56 + (edx_23 & 3)) s>> 2 << 1
        else if (esi_1 s<= 0xf3c)
            int32_t eax_60
            int32_t edx_25
            edx_25:eax_60 = sx.q(esi_1)
            esi_1 += ((eax_60 + (edx_25 & 3)) s>> 2) * 3
            edx_4 = 0
        else if (esi_1 s> 0xf6e)
            esi_1 *= 3
        else
            esi_1 *= 2
    else if (esi_1 s<= 0x898)
        int32_t eax_18
        int32_t edx_7
        edx_7:eax_18 = sx.q(esi_1)
        esi_1 -= ((eax_18 + (edx_7 & 0xf)) s>> 4) * 7
        edx_4 = 0
    else if (esi_1 s<= 0x960)
        int32_t eax_22
        int32_t edx_9
        edx_9:eax_22 = sx.q(esi_1)
        esi_1 -= ((eax_22 + (edx_9 & 0xf)) s>> 4) * 6
        edx_4 = 0
    else if (esi_1 s<= 0xa28)
        int32_t eax_28
        int32_t edx_11
        edx_11:eax_28 = sx.q(esi_1)
        esi_1 -= ((eax_28 + (edx_11 & 0xf)) s>> 4) * 5
        edx_4 = 0
    else if (esi_1 s<= 0xaf0)
        int32_t eax_33
        int32_t edx_13
        edx_13:eax_33 = sx.q(esi_1)
        esi_1 -= (eax_33 + (edx_13 & 0xf)) s>> 4 << 2
        edx_4 = 0
    else if (esi_1 s<= 0xbb8)
        int32_t eax_38
        int32_t edx_15
        edx_15:eax_38 = sx.q(esi_1)
        esi_1 -= ((eax_38 + (edx_15 & 0xf)) s>> 4) * 3
        edx_4 = 0
    else if (esi_1 s<= 0xc80)
        int32_t eax_43
        int32_t edx_17
        edx_17:eax_43 = sx.q(esi_1)
        esi_1 -= ((eax_43 + (edx_17 & 0xf)) s>> 4) * 2
        edx_4 = 0
    else if (esi_1 s<= 0xd48)
        int32_t eax_48
        int32_t edx_19
        edx_19:eax_48 = sx.q(esi_1)
        esi_1 -= (eax_48 + (edx_19 & 0xf)) s>> 4
        edx_4 = 0
    
    if (esi_1 s< 0x64)
        esi_1 = 0x64
    
    arg14 = esi_1
    
    if (arg11 == 0)
        i = 0
        int32_t i_2 = 0
        
        if (data_1bfe2f0:4 s> 0)
            int32_t edi_6 = arg8 - 1 + data_1bfe2dc
            
            do
                int32_t var_30_1
                
                if (arg10 != 0)
                    var_30_1 = 1
                
                if (arg10 == 0 || (i.b & 1) == 0)
                    var_30_1 = 0
                
                int32_t temp0_2 = divs.dp.d(sx.q(sub_4d1650(arg13 + (edx_4 s>> 8))), esi_1)
                int32_t ecx_23 = arg9
                int32_t esi_6 = arg_30 + temp0_2
                esi_1 = arg14
                int32_t eax_86 = neg.d(temp0_2)
                arg8 = temp0_2 + ecx_23
                int32_t edx_41 = eax_86 + ecx_23
                int32_t eax_87 = eax_86 + arg_30
                int32_t edx_42 = var_8_1
                var_18_1 += data_1bfe2d8
                int32_t eax_90 = arg_2c
                
                if (eax_90 s>= edx_42)
                    if (eax_90 s< edi_6)
                        edi_6 = eax_90
                    
                    if (ecx_23 s<= esi_6)
                        int32_t eax_91 = arg_30
                        
                        if (eax_91 s>= arg8 && ecx_23 s<= eax_87 && eax_91 s>= edx_41)
                            int32_t var_3c_4 = arg15
                            int32_t eax_92
                            int32_t edx_43
                            int32_t esi_7
                            
                            if (var_30_1 != 0)
                                eax_92 = edx_41
                                edx_43 = eax_92
                                esi_7 = eax_87
                            else
                                eax_92 = arg8
                                edx_43 = eax_92
                                esi_7 = esi_6
                            
                            if (ecx_23 s> edx_43)
                                edx_43 = ecx_23
                            
                            if (arg_30 s< esi_7)
                                esi_7 = arg_30
                            
                            int32_t var_40_4 = esi_7
                            int32_t var_44_5 = edi_6
                            int32_t var_48_5 = edx_43
                            sub_584e80(eax_92, data_702fec, data_702fe8, data_702ff0, 
                                (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                (&data_976b5c)[arg3 * 8], arg2, arg4, 0, esi, eax_92, var_8_1.b)
                            edx_42 = var_8_1
                            esi_1 = arg14
                    
                    edi_6 += data_1bfe2dc
                    var_8_1 = edx_42 + data_1bfe2dc
                
                edx_4 = var_18_1
                i = i_2 + 1
                i_2 = i
            while (i s< data_1bfe2f0:4)
    else
        int32_t edi_2 = edi_1 + data_1bfe2dc - 1
        i = 0
        int32_t i_1 = 0
        
        if (data_1bfe2f0:4 s> 0)
            do
                int32_t var_24_1
                
                if (arg10 != 0)
                    var_24_1 = 3
                
                if (arg10 == 0 || (i.b & 1) == 0)
                    var_24_1 = 2
                
                int32_t temp0_1 = divs.dp.d(sx.q(sub_4d1650(arg13 + (edx_4 s>> 8))), esi_1)
                int32_t ecx_17 = arg8
                int32_t esi_4 = arg_2c + temp0_1
                esi_1 = arg14
                int32_t eax_70 = neg.d(temp0_1)
                arg9 = temp0_1 + ecx_17
                int32_t edx_29 = eax_70 + ecx_17
                int32_t eax_71 = eax_70 + arg_2c
                int32_t edx_30 = var_c_1
                var_18_1 += data_1bfe2d8
                int32_t eax_74 = arg_30
                
                if (eax_74 s>= edx_30)
                    if (eax_74 s< edi_2)
                        edi_2 = eax_74
                    
                    if (ecx_17 s<= esi_4)
                        int32_t eax_75 = arg_2c
                        
                        if (eax_75 s>= arg9 && ecx_17 s<= eax_71 && eax_75 s>= edx_29)
                            int32_t var_3c_3 = arg15
                            int32_t var_40_3 = edi_2
                            char var_4c_2
                            int32_t eax_77
                            
                            if (var_24_1 != 2)
                                int32_t edx_34 = edx_29
                                eax_77 = edx_29 - esi
                                
                                if (ecx_17 s> edx_34)
                                    edx_34 = ecx_17
                                
                                int32_t edx_35 = eax_71
                                
                                if (arg_2c s< edx_35)
                                    edx_35 = arg_2c
                                
                                int32_t var_44_4 = edx_35
                                int32_t var_48_4 = var_c_1
                                var_4c_2 = edx_34.b
                            else
                                int32_t edx_31 = arg9
                                eax_77 = arg9 - esi
                                
                                if (ecx_17 s> edx_31)
                                    edx_31 = ecx_17
                                
                                arg9 = edx_31
                                int32_t edx_32 = esi_4
                                
                                if (arg_2c s< edx_32)
                                    edx_32 = arg_2c
                                
                                int32_t var_44_3 = edx_32
                                int32_t var_48_3 = var_c_1
                                var_4c_2 = arg9.b
                            
                            int32_t eax_79 = eax_77 + esi
                            sub_584e80(eax_79, data_702fec, data_702fe8, data_702ff0, 
                                (&data_976b54)[arg3 * 8], (&data_976b58)[arg3 * 8], 
                                (&data_976b5c)[arg3 * 8], arg2, arg4, 0, eax_79, eax, var_4c_2)
                            edx_30 = var_c_1
                    
                    edi_2 += data_1bfe2dc
                    var_c_1 = edx_30 + data_1bfe2dc
                
                edx_4 = var_18_1
                i = i_1 + 1
                i_1 = i
            while (i s< data_1bfe2f0:4)

return i
