// 函数: sub_5ef270
// 地址: 0x5ef270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

arg1.b = data_1ccce88
int32_t ebx = data_1ccce70
int32_t esi = arg3
char var_5 = arg1.b

if (arg6 != 0 && arg1.b != 0)
    int32_t eax = arg10
    int32_t eax_1 = arg11
    int32_t eax_2 = arg12
    int32_t edi_1 = arg9
    int32_t arg_28
    int32_t arg_2c
    int32_t arg_30
    int32_t arg_34
    sub_4d2170(&arg_28, arg8, arg7, &arg_28, &arg_2c, &arg_30, &arg_34)
    arg1 = sub_4c08c0(&arg11, &arg10, &arg9, &arg11, &arg12, arg_28, arg_2c, arg_30, arg_34)
    
    if (arg1 != 0)
        int32_t eax_6 = eax_2 - eax
        int32_t ecx_3 = eax_1 - edi_1
        
        if (eax_1 - edi_1 s< 0)
            ecx_3 = neg.d(ecx_3)
        
        if (eax_6 s< 0)
            eax_6 = neg.d(eax_6)
        
        int32_t ecx_4
        int32_t i_1
        bool cond:1_1
        
        if (ecx_3 s<= eax_6)
            ecx_4 = eax_6 + 1
            i_1 = eax - arg10
            cond:1_1 = eax - arg10 s>= 0
        else
            ecx_4 = ecx_3 + 1
            i_1 = edi_1 - arg9
            cond:1_1 = edi_1 - arg9 s>= 0
        
        data_1ccd294 = ecx_4
        
        if (not(cond:1_1))
            i_1 = neg.d(i_1)
        
        int32_t eax_8 = neg.d(ecx_4)
        data_1c4599c = eax_8
        
        if (i_1 s> 0)
            int32_t i
            
            do
                int32_t temp7_1 = eax_8
                eax_8 += arg2
                data_1c4599c = eax_8
                
                if (temp7_1 + arg2 s>= 0)
                    int32_t temp11_1
                    
                    do
                        esi += 1
                        temp11_1 = eax_8
                        eax_8 -= ecx_4
                    while (temp11_1 - ecx_4 s>= 0)
                    data_1c4599c = eax_8
                
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        int32_t edx_4 = arg11
        int32_t edx_5 = edx_4 - arg9
        int32_t var_c_2
        
        if (edx_4 - arg9 s>= 0)
            var_c_2 = 1
        else
            edx_5 = neg.d(edx_5)
            var_c_2 = 0xffffffff
        
        int32_t edi_3 = arg12
        int32_t edi_4 = edi_3 - arg10
        int32_t ecx_5 = arg7
        
        if (edi_3 - arg10 s< 0)
            edi_4 = neg.d(edi_4)
            ecx_5 = neg.d(ecx_5)
        
        int32_t ecx_6 = neg.d(ecx_5)
        data_1c05510 = arg2
        data_1c45544 = arg4
        data_1c05508 = arg5
        data_1c4556c = esi
        int32_t eax_13 = arg7 * arg10
        data_1c05518 = arg7
        data_1c4ce28 = edx_5
        data_1c4ce48 = edi_4
        data_1c45568 = eax_13 + arg6 + arg9
        data_1c45550 = arg8
        data_1ccce68 = var_c_2
        int32_t ecx_7
        
        if (edx_5 s<= edi_4)
            data_1c45978 = edi_4
            data_1c4ce3c = var_c_2
            data_1ccce5c = neg.d(edi_4)
            ecx_7 = neg.d(ecx_6)
            data_1ccce80 = ecx_7
            data_1c4ce38 = edx_5 * 2
            arg1 = edi_4 * 2
        else
            data_1c45978 = edx_5
            data_1ccce80 = var_c_2
            data_1ccce5c = neg.d(edx_5)
            ecx_7 = neg.d(ecx_6)
            data_1c4ce3c = ecx_7
            data_1c4ce38 = edi_4 * 2
            arg1 = edx_5 * 2
        
        data_1ccce74 = ecx_7
        data_1cd4324 = arg1
        
        if (var_5 != 0xff)
            if (ebx == 0)
                return sub_5ef8b0()
            
            if (ebx == 1)
                return sub_5efd60()
            
            if (ebx == 3)
                return sub_5f02b0()
        else
            if (ebx == 0)
                sub_5ef670()
                return arg1
            
            if (ebx == 1)
                return sub_5efaf0()
            
            if (ebx == 3)
                return sub_5efff0()

return arg1
