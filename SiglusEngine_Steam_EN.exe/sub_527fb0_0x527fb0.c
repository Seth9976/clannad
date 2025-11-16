// 函数: sub_527fb0
// 地址: 0x527fb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_4 = arg1
uint32_t eax = data_1bfdd30
int32_t var_18_2
int32_t var_14_3
int32_t var_10_1
char** var_c_1
char** eax_4
int32_t ecx_12

if (eax s> 0x12c)
    int32_t var_c_5
    int32_t edx_3
    
    if (eax s<= 0x7d1)
        if (eax == 0x7d1)
        label_5284b8:
            int32_t eax_56 = data_1af4e84
            
            if (eax_56 == 0)
                int32_t ecx_100
                eax_4, ecx_100 =
                    sub_4ef190(eax_56, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
                
                if (data_702fc0 == 0)
                    return eax_4
                
                int32_t eax_88
                int32_t edx_36
                edx_36:eax_88 = muls.dp.d(0x10624dd3, data_1bfdd30)
                int32_t edx_37 = edx_36 s>> 6
                
                if ((edx_37 u>> 0x1f) + edx_37 != 2)
                    eax_4 = data_1b8a734
                    int32_t var_8_19 = 0xffffffff
                    var_c_1 = eax_4
                    var_10_1 = 0
                    var_14_3 = ecx_100
                    var_18_2 = 0
                else
                    eax_4 = data_1b8a734 * 0x3e8
                    int32_t var_8_18 = 0xffffffff
                    var_c_1 = eax_4
                    var_10_1 = 0
                    var_14_3 = ecx_100
                    data_1b8a734 = eax_4
                    var_18_2 = 0
                
                goto label_5280d7
            
            if (eax_56 == 1)
                int32_t ecx_97
                eax_4, ecx_97 =
                    sub_4ef190(eax_56 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
                
                if (data_702fc0 == 0)
                    return eax_4
                
                int32_t eax_84
                int32_t edx_33
                edx_33:eax_84 = muls.dp.d(0x10624dd3, data_1bfdd30)
                int32_t edx_34 = edx_33 s>> 6
                
                if ((edx_34 u>> 0x1f) + edx_34 != 2)
                    eax_4 = data_1b8a734
                    int32_t var_8_17 = 0xffffffff
                    var_c_1 = eax_4
                    var_10_1 = 0
                    var_14_3 = ecx_97
                    var_18_2 = data_1b8a748
                else
                    eax_4 = data_1b8a734 * 0x3e8
                    int32_t var_8_16 = 0xffffffff
                    var_c_1 = eax_4
                    var_10_1 = 0
                    var_14_3 = ecx_97
                    var_18_2 = data_1b8a748
                    data_1b8a734 = eax_4
                
                goto label_5280d7
            
            eax_4 = eax_56 - 2
            
            if (eax_56 != 2)
                return eax_4
            
            int32_t ecx_80
            eax_4, ecx_80 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t eax_59
            int32_t edx_21
            edx_21:eax_59 = muls.dp.d(0x10624dd3, data_1bfdd30)
            int32_t edx_22 = edx_21 s>> 6
            
            if ((edx_22 u>> 0x1f) + edx_22 != 2)
                eax_4 = data_1b8a734
            else
                eax_4 = data_1b8a734 * 0x3e8
                data_1b8a734 = eax_4
            
            int32_t var_8_15 = 0xffffffff
            var_c_1 = eax_4
            var_10_1 = data_1b8a75c
            var_14_3 = ecx_80
            var_18_2 = data_1b8a748
            goto label_5280d7
        
        if (eax s<= 0x3ea)
            if (eax == 0x3ea)
                goto label_5288c5
            
            int32_t eax_55 = eax - 0x3e8
            
            if (eax != 0x3e8)
                if (eax_55 == 1)
                    goto label_5284b8
                
                data_1b8b06c = 1
                return eax_55 - 1
        else if (eax != 0x7d0)
            data_1b8b06c = 1
            return eax
        
        int32_t eax_63 = data_1af4e84
        
        if (eax_63 == 0)
            eax_4, ecx_12 = sub_4ef190(eax_63, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t eax_80
            int32_t edx_30
            edx_30:eax_80 = muls.dp.d(0x10624dd3, data_1bfdd30)
            int32_t edx_31 = edx_30 s>> 6
            
            if ((edx_31 u>> 0x1f) + edx_31 != 2)
                eax_4 = data_1b8a734
                edx_3 = 0
                int32_t var_8_14 = 0xffffffff
                var_c_5 = eax_4
            else
                eax_4 = data_1b8a734 * 0x3e8
                edx_3 = 0
                int32_t var_8_13 = 0xffffffff
                data_1b8a734 = eax_4
                var_c_5 = eax_4
            
            return sub_49f8d0(eax_4, edx_3, data_1b8a728, 0, ecx_12, 0, var_c_5)
        
        if (eax_63 == 1)
            int32_t ecx_88
            eax_4, ecx_88 =
                sub_4ef190(eax_63 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t eax_72
                int32_t edx_27
                edx_27:eax_72 = muls.dp.d(0x10624dd3, data_1bfdd30)
                int32_t edx_28 = edx_27 s>> 6
                
                if ((edx_28 u>> 0x1f) + edx_28 != 2)
                    int32_t eax_78 = data_1b8a734
                    int32_t var_8_12 = 0xffffffff
                    return sub_49f8d0(eax_78, 0, data_1b8a728, data_1b8a748, ecx_88, 0, eax_78)
                
                int32_t eax_76 = data_1b8a734 * 0x3e8
                int32_t var_8_11 = 0xffffffff
                int32_t var_18_6 = data_1b8a748
                char* ecx_89 = data_1b8a728
                data_1b8a734 = eax_76
                return sub_49f8d0(eax_76, 0, ecx_89, var_18_6, ecx_88, 0, eax_76)
        else
            eax_4 = eax_63 - 2
            
            if (eax_63 == 2)
                int32_t ecx_83
                eax_4, ecx_83 =
                    sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720)
                
                if (data_702fc0 != 0)
                    int32_t eax_66
                    int32_t edx_24
                    edx_24:eax_66 = muls.dp.d(0x10624dd3, data_1bfdd30)
                    int32_t edx_25 = edx_24 s>> 6
                    int32_t eax_70
                    
                    if ((edx_25 u>> 0x1f) + edx_25 != 2)
                        eax_70 = data_1b8a734
                    else
                        eax_70 = data_1b8a734 * 0x3e8
                        data_1b8a734 = eax_70
                    
                    int32_t var_8_10 = 0xffffffff
                    return sub_49f8d0(eax_70, 0, data_1b8a728, data_1b8a748, ecx_83, data_1b8a75c, 
                        eax_70)
        
        return eax_4
    
    int32_t ecx_115
    
    if (eax s> 0xbb9)
        if (eax != 0xbba)
            data_1b8b06c = 1
            return eax
        
        int32_t eax_118 = data_1af4e84
        
        if (eax_118 == 0)
            eax_4, ecx_12 = sub_4ef190(eax_118, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t var_8_32 = data_1b8a734
            goto label_528bc0
        
        if (eax_118 == 1)
            eax_4, ecx_115 =
                sub_4ef190(eax_118 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t var_8_31 = data_1b8a734
            return sub_49f8d0(eax_4, 1, data_1b8a728, data_1b8a748, ecx_115, 0, 0xffffffff)
        
        eax_4 = eax_118 - 2
        
        if (eax_118 != 2)
            return eax_4
        
        eax_4, ecx_115 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720)
        
        if (data_702fc0 == 0)
            return eax_4
        
        int32_t var_8_30 = data_1b8a734
        return sub_49f8d0(eax_4, 1, data_1b8a728, data_1b8a748, ecx_115, data_1b8a75c, 0xffffffff)
    
    if (eax == 0xbb9)
        int32_t eax_115 = data_1af4e84
        
        if (eax_115 == 0)
            int32_t ecx_133
            eax_4, ecx_133 = sub_4ef190(eax_115, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t var_8_29 = data_1b8a734
            var_c_1 = 0xffffffff
            var_10_1 = 0
            var_14_3 = ecx_133
            var_18_2 = 0
            goto label_5280d7
        
        if (eax_115 == 1)
            int32_t ecx_130
            eax_4, ecx_130 =
                sub_4ef190(eax_115 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t var_8_28 = data_1b8a734
            var_c_1 = 0xffffffff
            var_10_1 = 0
            var_14_3 = ecx_130
            var_18_2 = data_1b8a748
            goto label_5280d7
        
        eax_4 = eax_115 - 2
        
        if (eax_115 != 2)
            return eax_4
        
        int32_t ecx_127
        eax_4, ecx_127 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720)
        
        if (data_702fc0 == 0)
            return eax_4
        
        int32_t var_8_27 = data_1b8a734
        var_c_1 = 0xffffffff
        var_10_1 = data_1b8a75c
        var_14_3 = ecx_127
        var_18_2 = data_1b8a748
        goto label_5280d7
    
    if (eax != 0x7d2)
        if (eax != 0xbb8)
            data_1b8b06c = 1
            return eax
        
        int32_t eax_92 = data_1af4e84
        
        if (eax_92 == 0)
            eax_4, ecx_12 = sub_4ef190(eax_92, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            
            if (data_702fc0 == 0)
                return eax_4
            
            int32_t var_8_22 = data_1b8a734
            return sub_49f8d0(eax_4, 0, data_1b8a728, 0, ecx_12, 0, 0xffffffff)
        
        if (eax_92 == 1)
            int32_t ecx_108
            eax_4, ecx_108 =
                sub_4ef190(eax_92 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
            
            if (data_702fc0 != 0)
                int32_t var_8_21 = data_1b8a734
                return sub_49f8d0(eax_4, 0, data_1b8a728, data_1b8a748, ecx_108, 0, 0xffffffff)
        else
            eax_4 = eax_92 - 2
            
            if (eax_92 == 2)
                int32_t ecx_103
                eax_4, ecx_103 =
                    sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720)
                
                if (data_702fc0 != 0)
                    int32_t var_8_20 = data_1b8a734
                    return sub_49f8d0(eax_4, 0, data_1b8a728, data_1b8a748, ecx_103, data_1b8a75c, 
                        0xffffffff)
        
        return eax_4
    
label_5288c5:
    int32_t eax_97 = data_1af4e84
    
    if (eax_97 == 0)
        eax_4, ecx_12 = sub_4ef190(eax_97, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
        
        if (data_702fc0 == 0)
            return eax_4
        
        int32_t eax_111
        int32_t edx_48
        edx_48:eax_111 = muls.dp.d(0x10624dd3, data_1bfdd30)
        int32_t edx_49 = edx_48 s>> 6
        
        if ((edx_49 u>> 0x1f) + edx_49 != 2)
            eax_4 = data_1b8a734
            edx_3 = 1
            int32_t var_8_26 = 0xffffffff
            var_c_5 = eax_4
        else
            eax_4 = data_1b8a734 * 0x3e8
            edx_3 = 1
            int32_t var_8_25 = 0xffffffff
            data_1b8a734 = eax_4
            var_c_5 = eax_4
        
        return sub_49f8d0(eax_4, edx_3, data_1b8a728, 0, ecx_12, 0, var_c_5)
    
    if (eax_97 == 1)
        int32_t ecx_120
        eax_4, ecx_120 = sub_4ef190(eax_97 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
        
        if (data_702fc0 == 0)
            return eax_4
        
        int32_t eax_105
        int32_t edx_45
        edx_45:eax_105 = muls.dp.d(0x10624dd3, data_1bfdd30)
        int32_t edx_46 = edx_45 s>> 6
        int32_t eax_109
        
        if ((edx_46 u>> 0x1f) + edx_46 != 2)
            eax_109 = data_1b8a734
        else
            eax_109 = data_1b8a734 * 0x3e8
            data_1b8a734 = eax_109
        
        int32_t var_8_24 = 0xffffffff
        return sub_49f8d0(eax_109, 1, data_1b8a728, data_1b8a748, ecx_120, 0, eax_109)
    
    eax_4 = eax_97 - 2
    
    if (eax_97 != 2)
        return eax_4
    
    eax_4, ecx_115 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$$", &data_1b8a720)
    
    if (data_702fc0 == 0)
        return eax_4
    
    int32_t eax_100
    int32_t edx_42
    edx_42:eax_100 = muls.dp.d(0x10624dd3, data_1bfdd30)
    int32_t edx_43 = edx_42 s>> 6
    
    if ((edx_43 u>> 0x1f) + edx_43 != 2)
        eax_4 = data_1b8a734
    else
        eax_4 = data_1b8a734 * 0x3e8
        data_1b8a734 = eax_4
    
    int32_t var_8_23 = 0xffffffff
    return sub_49f8d0(eax_4, 1, data_1b8a728, data_1b8a748, ecx_115, data_1b8a75c, eax_4)

if (eax == 0x12c)
    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
    return sub_4a0300(data_1b8a728)

if (eax u> 0xc8)
    data_1b8b06c = 1
    return eax

eax = zx.d(lookup_table_528c2c[eax])
int32_t eax_20

switch (eax)
    case 0
        int32_t eax_1 = data_1af4e84
        
        if (eax_1 == 0)
            eax_4, ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            int32_t var_8_3 = 0xffffffff
            return sub_49f8d0(eax_4, 0, data_1b8a728, 0, ecx_12, 0, 0xffffffff)
        
        if (eax_1 == 1)
            char** eax_7
            int32_t ecx_7
            eax_7, ecx_7 = sub_4ef190(eax_1 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            int32_t var_8_2 = 0xffffffff
            return sub_49f8d0(eax_7, 0, data_1b8a728, data_1b8a734, ecx_7, 0, 0xffffffff)
        
        eax_4 = eax_1 - 2
        
        if (eax_1 != 2)
            return eax_4
        
        char** eax_5
        int32_t ecx_2
        eax_5, ecx_2 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
        int32_t var_8_1 = 0xffffffff
        return sub_49f8d0(eax_5, 0, data_1b8a728, data_1b8a734, ecx_2, data_1b8a748, 0xffffffff)
    case 1
        int32_t eax_9 = data_1af4e84
        
        if (eax_9 == 0)
            int32_t ecx_22
            eax_4, ecx_22 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            int32_t var_8_6 = 0xffffffff
            var_c_1 = 0xffffffff
            var_10_1 = 0
            var_14_3 = ecx_22
            var_18_2 = 0
        label_5280d7:
            char* eax_12 = sub_49f8d0(eax_4, 1, data_1b8a728, var_18_2, var_14_3, var_10_1, var_c_1)
            data_71929c = 0x3a
            data_7192a0 = 0
            data_7192e0 = 0
            return eax_12
        
        int32_t ecx_15
        
        if (eax_9 == 1)
            eax_4, ecx_15 = sub_4ef190(eax_9 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            int32_t var_8_5 = 0xffffffff
            var_c_1 = 0xffffffff
            var_10_1 = 0
        else
            eax_4 = eax_9 - 2
            
            if (eax_9 != 2)
                return eax_4
            
            eax_4, ecx_15 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
            int32_t var_8_4 = 0xffffffff
            var_c_1 = 0xffffffff
            var_10_1 = data_1b8a748
        
        var_14_3 = ecx_15
        var_18_2 = data_1b8a734
        goto label_5280d7
    case 2
        int32_t eax_13 = data_1af4e84
        
        if (eax_13 == 0)
            eax_4, ecx_12 = sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            int32_t var_8_9 = 0xffffffff
        label_528bc0:
            return sub_49f8d0(eax_4, 1, data_1b8a728, 0, ecx_12, 0, 0xffffffff)
        
        if (eax_13 == 1)
            char** eax_18
            int32_t ecx_30
            eax_18, ecx_30 =
                sub_4ef190(eax_13 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$", &data_1b8a720)
            int32_t var_8_8 = 0xffffffff
            return sub_49f8d0(eax_18, 1, data_1b8a728, data_1b8a734, ecx_30, 0, 0xffffffff)
        
        eax_4 = eax_13 - 2
        
        if (eax_13 != 2)
            return eax_4
        
        char** eax_16
        int32_t ecx_25
        eax_16, ecx_25 = sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "S$$", &data_1b8a720)
        int32_t var_8_7 = 0xffffffff
        return sub_49f8d0(eax_16, 1, data_1b8a728, data_1b8a734, ecx_25, data_1b8a748, 0xffffffff)
    case 3
        data_71929c = 0x3a
        data_7192a0 = 0
        data_7192e0 = 0
        return eax
    case 4
        int32_t ecx_36
        eax_20, ecx_36 = sub_4a0aa0(arg1)
        
        if (eax_20 == 0)
            data_715e98 = 0
            return eax_20
        
        int32_t eax_21 = sub_4a0d80(ecx_36)
        int32_t eax_22 = neg.d(eax_21)
        data_715e98 = sbb.d(eax_22, eax_22, eax_21 != 0) + 1
        return sbb.d(eax_22, eax_22, eax_21 != 0) + 1
    case 5
        return sub_4a0b50(0)
    case 6
        int32_t ecx_49
        eax_20, ecx_49 = sub_4a0aa0(arg1)
        
        if (eax_20 == 0)
            data_715e98 = 0
            return eax_20
        
        int32_t eax_30 = sub_4a0d80(ecx_49)
        int32_t eax_31 = neg.d(eax_30)
        data_715e98 = neg.d(sbb.d(eax_31, eax_31, eax_30 != 0)) + 1
        return neg.d(sbb.d(eax_31, eax_31, eax_30 != 0)) + 1
    case 7
        return sub_4a0df0()
    case 8
        return sub_4a0e40()
    case 9
        return sub_4a0f10()
    case 0xa
        int32_t eax_38 = data_92b930
        data_715e98 = eax_38
        return eax_38
    case 0xb
        int32_t eax_39 = data_1af4e84
        
        if (eax_39 == 0)
            sub_4ef190(eax_39, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4a0fe0(data_1b8a720, 0)
        
        eax_4 = eax_39 - 1
        
        if (eax_39 != 1)
            return eax_4
        
        sub_4ef190(eax_4, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        return sub_4a0fe0(data_1b8a720, data_1b8a734)
    case 0xc
        int32_t eax_43 = data_1af4e84
        
        if (eax_43 == 0)
            sub_4ef190(eax_43, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4a0fe0(0xff, data_1b8a720)
        
        if (eax_43 == 1)
            return sub_4a0fe0(0xff, 0)
        
        return eax_43 - 1
    case 0xd
        int32_t eax_47 = data_1af4e84
        
        if (eax_47 == 0)
            sub_4ef190(eax_47, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4a0fe0(0, data_1b8a720)
        
        if (eax_47 == 1)
            return sub_4a0fe0(0, 0)
        
        return eax_47 - 1
    case 0xe
        return sub_4a0af0(0xffffffff)
    case 0xf
        return sub_4a0af0(0)
    case 0x10
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_4a0b50(data_1b8a720)
    case 0x11
        int32_t eax_27 = data_1af4e84
        
        if (eax_27 == 0)
            sub_4ef190(eax_27, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t ecx_47 = data_1b8a720
            
            if (data_1b1bcd8 != 0)
                ecx_47 = 0
            
            data_1b8a720 = ecx_47
            eax_4 = sub_4a0b50(ecx_47)
            
            if (data_1b8a720 s<= 0)
                return eax_4
            
            data_71929c = 0x3b
            data_7192a0 = 0
            data_7192e0 = 0
            return eax_4
        
        eax_4 = eax_27 - 1
        
        if (eax_27 != 1)
            return eax_4
        
        if (data_1b1bcd8 == eax_4)
            int32_t eax_29 = sub_4a0d80(arg1)
            
            if (eax_29 != 0)
                data_71929c = 0x3b
                data_7192a0 = 0
                data_7192e0 = 0
                return eax_29
        
        return sub_4a0b50(0)
    case 0x12
        int32_t eax_53 = sub_4a0f60()
        data_715e98 = eax_53
        return eax_53
    case 0x13
        data_1b8b06c = 1
        return eax
