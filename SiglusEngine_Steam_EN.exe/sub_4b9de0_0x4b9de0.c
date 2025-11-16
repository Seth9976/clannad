// 函数: sub_4b9de0
// 地址: 0x4b9de0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = arg2[0x1b]
int32_t* eax_1

if (eax == 0)
    arg2[0xe] += arg5
    arg2[0xf] += arg5
    arg2[0x10] += arg5
    arg2[0x11] += arg5
    arg2[0x12] += arg5
    arg2[0x13] += arg5
    arg2[0x14] += arg5
    arg2[0x16] += arg5
    int32_t edx_3 = arg2[0xe]
    arg2[0x28] = 1
    int32_t eax_9 = arg4[4]
    
    switch (eax_9)
        case 1
            int32_t ecx_2 = arg2[4]
            
            if (ecx_2 != 0)
                if (edx_3 s>= ecx_2)
                    int32_t eax_11
                    int32_t edx_4
                    edx_4:eax_11 = sx.q(edx_3)
                    eax_9 = divs.dp.d(edx_4:eax_11, ecx_2)
                    arg2[0xe] = mods.dp.d(edx_4:eax_11, ecx_2)
                
                arg2[0x29] = sub_4d2110(eax_9, arg2[0xe], 0, ecx_2, 0, arg4[0x2c]) + arg4[5]
        case 2
            int32_t eax_14 = arg2[4]
            
            if (eax_14 != 0 && edx_3 s>= eax_14)
                arg2[0xe] = 0
                int32_t esi_1 = arg4[5]
                
                if (arg4[0x2c] s> 1)
                    esi_1 += modu.dp.d(0:(sub_4d18c0(2)), arg4[0x2c])
                    
                    if (esi_1 == arg2[0x29])
                        esi_1 = modu.dp.d(0:(sub_4d18c0(2)), arg4[0x2c]) + arg4[5]
                
                arg2[0x29] = esi_1
        default
            arg2[0x29] = arg4[5]
    
    arg2[0x27] = 0x3e8
    
    if (*arg4 == 1)
        int32_t eax_19
        
        if (arg4[0x17] != 0)
            int32_t ecx_3 = arg2[5]
            
            if (ecx_3 s> 0)
                int32_t edx_14 = arg2[0xf]
                
                if (edx_14 s< ecx_3)
                    arg2[5]
                    eax_19 = divs.dp.d(sx.q((arg2[0x1d] - arg2[0x1c]) * (ecx_3 - edx_14)), arg2[5])
                        + arg2[0x1c]
                else
                    eax_19 = arg2[0x1c]
            else
                eax_19 = arg2[0x1c]
        else
            int32_t esi_3 = arg2[5]
            eax_19 = arg2[0x1d]
            
            if (esi_3 s> 0)
                int32_t edx_11 = arg2[0xf]
                
                if (edx_11 s< esi_3)
                    eax_19 = divs.dp.d(sx.q((eax_19 - arg2[0x1c]) * edx_11), esi_3) + arg2[0x1c]
        
        arg2[0x27] = eax_19
    
    if (arg2[0x27] s<= 0)
        arg2[0x28] = 0
    
    int32_t ecx_5 = arg2[5]
    int32_t var_10
    int32_t var_c
    
    if (ecx_5 != 0)
        int32_t* eax_28 = *arg4
        int32_t var_48_1
        int32_t var_44_1
        int32_t ecx_8
        int32_t edx_22
        
        if (eax_28 == 0)
            int32_t eax_29 = arg2[0xf]
            
            if (eax_29 s>= ecx_5)
                int32_t eax_30
                int32_t edx_17
                edx_17:eax_30 = sx.q(eax_29)
                eax_29 = divs.dp.d(edx_17:eax_30, ecx_5)
                arg2[0xf] = mods.dp.d(edx_17:eax_30, ecx_5)
            
            int32_t eax_32
            int32_t edx_20
            edx_20:eax_32 = muls.dp.d(0x10624dd3, 
                sub_4d2110(eax_29, arg2[0xf], 0, ecx_5, 0, 0x3e8) * arg2[0x19])
            int32_t edx_21 = edx_20 s>> 6
            
            if (arg4[0x17] != 0)
                var_44_1 = arg2[1]
                edx_22 = arg2[3]
                var_48_1 = *arg2
                ecx_8 = arg2[2]
            else
                var_44_1 = arg2[3]
                edx_22 = arg2[1]
                var_48_1 = arg2[2]
                ecx_8 = *arg2
            
            sub_4d2390(&var_c, edx_22, ecx_8, var_48_1, var_44_1, &var_c, &var_10, 
                (edx_21 u>> 0x1f) + edx_21)
        else if (eax_28 == 1)
            int32_t edx_23 = arg2[0xf]
            int32_t eax_41
            
            if (edx_23 s>= ecx_5)
                eax_41 = arg2[0x19]
            else
                int32_t eax_38
                int32_t edx_24
                edx_24:eax_38 = muls.dp.d(0x10624dd3, 
                    sub_4d2110(eax_28, edx_23, 0, ecx_5, 0, 0x3e8) * arg2[0x19])
                int32_t edx_25 = edx_24 s>> 6
                eax_41 = (edx_25 u>> 0x1f) + edx_25
            
            ecx_8 = arg2[2] - *arg2
            edx_22 = arg2[3] - arg2[1]
            
            if (arg4[0x17] != 0)
                var_44_1 = 0
                var_48_1 = 0
            else
                var_44_1 = edx_22
                var_48_1 = ecx_8
                edx_22 = 0
                ecx_8 = 0
            
            sub_4d2390(&var_c, edx_22, ecx_8, var_48_1, var_44_1, &var_c, &var_10, eax_41)
    
    int32_t ecx_12 = arg2[6]
    int32_t esi_4
    
    if (ecx_12 != 0)
        esi_4 = arg2[0x17]
    
    int32_t var_14_1
    
    if (ecx_12 == 0 || esi_4 == 0)
        var_14_1 = 0
    else
        int32_t eax_42 = arg2[0x10]
        
        if (eax_42 s>= ecx_12)
            int32_t eax_43
            int32_t edx_27
            edx_27:eax_43 = sx.q(eax_42)
            eax_42 = divs.dp.d(edx_27:eax_43, ecx_12)
            arg2[0x10] = mods.dp.d(edx_27:eax_43, ecx_12)
        
        var_14_1 =
            divs.dp.d(sx.q(sub_4d1650(sub_4d2110(eax_42, arg2[0x10], 0, ecx_12, 0, 0x167))), esi_4)
    
    int32_t* eax_48 = *arg4
    int32_t var_8_1
    
    if (eax_48 == 0)
        var_8_1 = 0
    else if (eax_48 != 1)
        var_8_1 = arg3
    else
        int32_t ecx_14 = arg2[7]
        
        if (ecx_14 == 0)
            var_8_1 = 0
        else
            int32_t esi_5 = arg2[0x18]
            
            if (esi_5 == 0)
                var_8_1 = 0
            else
                int32_t eax_49 = arg2[0x11]
                
                if (eax_49 s>= ecx_14)
                    int32_t eax_50
                    int32_t edx_32
                    edx_32:eax_50 = sx.q(eax_49)
                    eax_49 = divs.dp.d(edx_32:eax_50, ecx_14)
                    arg2[0x11] = mods.dp.d(edx_32:eax_50, ecx_14)
                
                var_8_1 = divs.dp.d(
                    sx.q(sub_4d1650(sub_4d2110(eax_49, arg2[0x11], 0, ecx_14, 0, 0x167))), esi_5)
    
    int32_t esi_6
    
    if (arg4[0x1c] != 0)
        int32_t ecx_16 = arg4[0x1b]
        esi_6 = arg4[0x1a]
        int32_t var_18_1 = ecx_16
        
        if (esi_6 != ecx_16)
            int32_t eax_55 = arg2[0x16]
            
            if (eax_55 s>= arg2[0xc])
                arg2[0xc]
                arg2[0x16] = mods.dp.d(sx.q(eax_55), arg2[0xc])
                int32_t eax_58 = sub_4b88a0(arg4)
                arg2[0xd] = eax_58
                int32_t ecx_19 = arg4[0x1c] + eax_58
                int32_t eax_59 = arg2[0x16]
                arg2[0xc] = ecx_19
                
                if (eax_59 s>= ecx_19)
                    arg2[0x16] = mods.dp.d(sx.q(eax_59), ecx_19)
                
                ecx_16 = var_18_1
            
            int32_t edx_41 = arg2[0x16]
            
            if (edx_41 s> arg2[0xd])
                int32_t eax_63
                
                if (esi_6 s>= ecx_16)
                    eax_63 = esi_6 - ecx_16
                else
                    eax_63 = ecx_16 - esi_6
                
                int32_t eax_65 = eax_63 * 2
                int32_t eax_66 = sub_4d2110(eax_65, edx_41 - arg2[0xd], 0, arg4[0x1c], 0, eax_65)
                
                if (eax_66 s> eax_63)
                    eax_66 = eax_65 - eax_66
                
                if (esi_6 s>= var_18_1)
                    esi_6 -= eax_66
                else
                    esi_6 += eax_66
        
        if (esi_6 s< 0)
            esi_6 = 0
        else if (esi_6 s> 0xff)
            esi_6 = 0xff
    else
        esi_6 = 0xff
    
    int32_t edx_43 = arg2[0x12]
    int32_t eax_67 = arg2[8]
    int32_t var_1c_2
    
    if (edx_43 s<= eax_67)
        var_1c_2 = sub_4d2110(eax_67, edx_43, 0, eax_67, 0, 0xff)
    else
        arg2[0x12] = eax_67
        var_1c_2 = 0xff
    
    int32_t eax_69 = arg4[2]
    
    if (arg3 s>= eax_69 && *arg4 == 0)
        int32_t ecx_25 = arg2[0xa]
        int32_t edx_46 = (arg3 - eax_69 + 1) s/ 0xa * 0x12c
        
        if (arg2[0x14] + edx_46 s< ecx_25)
            arg2[0x14] = ecx_25 - edx_46
    
    int32_t eax_76 = arg2[0xa]
    
    if (arg2[0x14] s> eax_76)
        bool cond:3_1 = arg2[9] != 0
        arg2[0x14] = eax_76
        
        if (not(cond:3_1))
            int32_t* eax_77 = *arg4
            
            if (eax_77 == 0)
                arg2[0x13] = eax_77
                arg2[9] = 0x3e8
            else if (eax_77 == 1)
                arg2[0x13] = 0x3e8
                arg2[9] = 0x3e8
    
    int32_t eax_78 = arg2[9]
    int32_t var_18_2
    
    if (eax_78 == 0)
        var_18_2 = 0xff
    else
        int32_t edx_47 = arg2[0x13]
        
        if (edx_47 s< eax_78)
            var_18_2 = sub_4d2110(eax_78, edx_47, 0, eax_78, 0xff, 0)
        else
            arg2[0x13] = eax_78
            var_18_2 = 0
            arg2[0x1a] = 1
    
    int32_t edx_48 = 0xff
    
    if (*arg4 == 1)
        int32_t eax_81 = arg2[5] - arg2[0xf]
        
        if (eax_81 s< 0x12c)
            edx_48 = eax_81 * 0xff s/ 0x12c
    
    int32_t ecx_28
    
    if (var_18_2 s<= 0)
        ecx_28 = 0
    else if (var_18_2 s>= 0xff)
        ecx_28 = var_1c_2
    else
        ecx_28 = *(*(data_1cd4328 + (var_18_2 << 2)) + (var_1c_2 << 2))
    
    if (edx_48 s<= 0)
        ecx_28 = 0
    else if (edx_48 s< 0xff)
        ecx_28 = *(*(data_1cd4328 + (edx_48 << 2)) + (ecx_28 << 2))
    
    arg2[0x26] = ecx_28
    
    if (esi_6 s<= 0)
        ecx_28 = 0
    else if (esi_6 s< 0xff)
        ecx_28 = *(*(data_1cd4328 + (esi_6 << 2)) + (ecx_28 << 2))
    
    arg2[0x25] = ecx_28
    eax_1 = *arg4
    
    if (eax_1 == 0)
        arg2[0x23] = arg4[0x23] + var_14_1 + var_c
        int32_t eax_97 = arg4[0x24] + var_8_1 + var_10
        arg2[0x24] = eax_97
        return eax_97
    
    if (eax_1 == 1)
        int32_t ebx_2 = arg2[0x1d]
        int32_t esi_7 = arg2[0x1c]
        int32_t var_14_2
        int32_t var_8_2
        int32_t edx_55
        int32_t esi_8
        
        if (ebx_2 s< esi_7)
            if (esi_7 == 0)
                edx_55 = 0
                var_8_2 = 0
                var_14_2 = 0
                esi_8 = 0
            else
                int32_t ecx_34 = esi_7 - arg2[0x27]
                var_8_2 = divs.dp.d(sx.q(ecx_34 * var_8_1), esi_7)
                var_14_2 = divs.dp.d(sx.q(ecx_34 * var_c), esi_7)
                esi_8 = divs.dp.d(sx.q(ecx_34 * var_14_1), esi_7)
                edx_55 = divs.dp.d(sx.q(ecx_34 * var_10), esi_7)
        else if (ebx_2 == 0)
            esi_8 = 0
            edx_55 = 0
            var_8_2 = 0
            var_14_2 = 0
        else
            int32_t ecx_31 = arg2[0x27]
            esi_8 = divs.dp.d(sx.q(ecx_31 * var_14_1), ebx_2)
            var_8_2 = divs.dp.d(sx.q(ecx_31 * var_8_1), ebx_2)
            var_14_2 = divs.dp.d(sx.q(ecx_31 * var_c), ebx_2)
            edx_55 = divs.dp.d(sx.q(ecx_31 * var_10), ebx_2)
        
        int32_t ecx_37 = var_14_2 + *arg2 + esi_8
        eax_1 = arg2[1] + var_8_2
        void* edx_60 = edx_55 + eax_1
        arg2[0x23] = ecx_37
        bool cond:5_1 = arg2[0x22] != 0
        arg2[0x24] = edx_60
        
        if (not(cond:5_1))
            int32_t eax_131 = arg2[0x20]
            
            if (eax_131 != 1)
                if (eax_131 != 2)
                    if (eax_131 == 3)
                        arg2[0x1a] = 1
                else if (ecx_37 s> arg2[0x1e])
                    arg2[0x22] = 1
            else if (ecx_37 s< arg2[0x1e])
                arg2[0x22] = eax_131
            
            eax_1 = arg2[0x21]
            
            if (eax_1 != 1)
                if (eax_1 != 2)
                    if (eax_1 == 3)
                        arg2[0x1a] = 1
                else if (edx_60 s> arg2[0x1f])
                    arg2[0x22] = 1
            else if (edx_60 s< arg2[0x1f])
                arg2[0x22] = eax_1
            
            if (arg2[0x22] != 0 && arg2[9] == 0)
                arg2[9] = 0x12c
                arg2[0x13] = 0
else
    arg2[0x28] = 0
    
    if (eax != 0xffffffff)
        arg2[0x15] += arg5
        eax_1 = arg2[0xb]
        
        if (arg2[0x15] s> eax_1)
        label_4b9e6d:
            arg2[0x15] = eax_1
            arg2[0x1b] = 0
            arg2[0x12] = 0
    else
        eax_1 = arg4
        int32_t ecx = eax_1[2]
        
        if (arg3 s< ecx)
            if (ecx == arg3)
                eax_1 = arg2[0xb]
                goto label_4b9e6d
            
            int32_t eax_2 = *eax_1
            
            if (eax_2 == 0 || eax_2 == 1)
                eax_2 = (ecx - arg3) s/ 0xa * 0x12c
                arg2[0xb] = eax_2
            
            arg2[0x15] = 0
            arg2[0x1b] = 1
            return eax_2

return eax_1
