// 函数: sub_421950
// 地址: 0x421950
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = arg9
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(esi)
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(esi)
int32_t eax_8 = ((eax_5 + (edx_1 & 7)) s>> 3) + esi

if (arg2 == 0)
    goto label_4219c2

sub_4d6c40(&arg3[0x11], &arg3[0x12])
void** result = arg3

if (result[0x14] s> 0)
    result = result[0x13]
    
    if (result s> 0)
        sub_4d6960(result, &arg3[0x12], &arg3[0x11], result, "FULLSCREEN_MSGBK_MOJI_DATA")
        esi = arg9
    label_4219c2:
        int32_t ecx_2 = data_1299994
        int32_t eax_10 = data_1299990 * esi
        int32_t eax_13
        int32_t edx_5
        edx_5:eax_13 = sx.q(arg8 - arg4)
        int32_t eax_15 = (eax_13 - edx_5) s>> 1
        int32_t var_60_1 = eax_15
        
        if (ecx_2 s> 0)
            var_60_1 = ecx_2 * esi
        
        int32_t edx_8 = arg3
        int32_t eax_16 = 0
        int32_t ecx_3 = 0
        int32_t var_24_1 = 0
        int32_t edi_2 = 0
        int32_t var_50_1 = 0
        int32_t var_5c_1 = 0
        char* esi_2 = *(edx_8 + 8)
        uint32_t var_68
        uint32_t var_64
        uint32_t var_58
        uint32_t var_38
        uint32_t result_3
        int32_t var_1c
        uint32_t var_10
        
        if (esi_2 != 0 && *esi_2 != 0 && *(edx_8 + 0x10) != 0)
            eax_16.b = *esi_2
            
            if (eax_16.b == 0)
                eax_16 = 0
            else
                do
                    int32_t edi_3 = 0
                    var_38 = 0
                    
                    if (eax_16.b u< 0x80)
                    label_421a74:
                        esi_2 = &esi_2[1]
                        result_3 = zx.d(eax_16.b)
                        edi_3 = 1
                    else
                        if (eax_16.b u< 0xa0)
                            if (eax_16.b u>= 0xfe)
                                goto label_421a74
                        else if (eax_16.b u<= 0xdf || eax_16.b u>= 0xfe)
                            goto label_421a74
                        
                        sub_4eba80(&result_3, edx_8, esi_2, &result_3, &var_68, &var_64, &var_10, 
                            &var_1c, &var_58, &var_38)
                        
                        if (var_38 != 0)
                            esi_2 = &esi_2[8]
                        else
                            esi_2 = &esi_2[2]
                    
                    var_24_1 += 1
                    edx_8 = eax_3
                    ecx_3 = edx_8
                    
                    if (edi_3 == 0)
                        ecx_3 = arg9
                    
                    var_50_1 += ecx_3
                    
                    if (edi_3 == 0)
                        edx_8 = arg9
                    
                    var_5c_1 = edx_8
                    
                    edi_2 = edi_3 != 0 ? 0 : 0
                    
                    eax_16.b = *esi_2
                while (eax_16.b != 0)
                
                eax_16 = var_50_1
        
        edx_8.b = var_24_1 s> 0
        char var_9_1 = edx_8.b
        char var_6_1
        
        if (data_13126ec == 0 && eax_16 s< var_60_1)
            var_6_1 = 0
        
        void* edi_8
        
        if (data_13126ec != 0 || eax_16 s>= var_60_1 || eax_16 s>= eax_15)
            var_6_1 = 1
            edi_8 = ecx_3
        else if (eax_16 s>= eax_10)
            edi_8 = ecx_3
        else
            int32_t edi_6 = edi_2 - eax_16 + eax_10
            int32_t eax_20
            edx_8:eax_20 = sx.q(edi_6)
            int32_t eax_21 = eax_20 - edx_8
            edx_8.b = var_9_1
            edi_8 = edi_6 - (eax_21 s>> 1) + var_5c_1
        
        int32_t* ecx_5 = arg3
        int32_t esi_4
        
        if (arg2 != 0)
            esi_4 = arg5
        else
            ecx_5[0xb] = 0
            
            if (edx_8.b == 0)
                int16_t eax_24 = *(*ecx_5 + 8)
                
                if (eax_24 != 0x8175 && eax_24 != 0x8177 && eax_24 != 0x8169)
                    ecx_5[0xb] = 1
            
            esi_4 = arg5
            
            if (arg10 == 0)
                int32_t eax_26
                int32_t edx_9
                edx_9:eax_26 = sx.q(arg9)
                esi_4 += ((eax_26 + (edx_9 & 3)) s>> 2) + eax_3
                arg5 = esi_4
                
                if (arg7 != 0xffffffff && arg7 != ecx_5[0xb])
                    esi_4 += eax_3
                    arg5 = esi_4
        
        int32_t edx_12 = arg4
        int32_t var_3c_1 = esi_4
        void** result_1 = ecx_5[0x12]
        int32_t var_70_1 = edx_12
        void* var_30_1 = nullptr
        void* result_2 = nullptr
        void* var_14_1 = nullptr
        int32_t var_4c_2 = 0
        int32_t var_60_2 = edx_12
        int32_t var_34_1 = edx_12
        void* var_5c_2 = (((arg9 + 2) * (arg9 + 2)) << 3) + 0x2c
        int32_t var_54_1
        
        if (var_9_1 != 0)
            char* esi_7 = ecx_5[2]
            int32_t var_50_2 = 0
            void* eax_34
            eax_34.b = *esi_7
            
            if (eax_34.b != 0)
                do
                    int32_t var_54_2 = 0
                    int32_t var_18_1 = 0
                    var_38 = 0
                    var_1c = 0
                    int32_t edx_13
                    
                    if (eax_34.b u< 0x80)
                    label_421c54:
                        esi_7 = &esi_7[1]
                        result_3 = zx.d(eax_34.b)
                        edx_13 = 1
                    else
                        if (eax_34.b u< 0xa0)
                            if (eax_34.b u>= 0xfe)
                                goto label_421c54
                        else if (eax_34.b u<= 0xdf || eax_34.b u>= 0xfe)
                            goto label_421c54
                        
                        sub_4eba80(&result_3, edx_12, esi_7, &result_3, &var_68, &var_64, &var_10, 
                            &var_1c, &var_58, &var_38)
                        edx_13 = var_54_2
                        
                        if (var_38 != 0)
                            esi_7 = &esi_7[8]
                            int32_t ecx_7
                            ecx_7.b = var_58 != 0
                            var_18_1 = ecx_7 + 1
                        else
                            esi_7 = &esi_7[2]
                    
                    int32_t eax_38 = var_50_2 + 1
                    var_50_2 = eax_38
                    int32_t ecx_9
                    
                    if (eax_38 s>= var_24_1)
                        ecx_9 = edi_8
                        var_54_1 = edi_8
                    else
                        ecx_9 = eax_3
                        
                        if (edx_13 == 0)
                            ecx_9 = arg9
                        
                        var_54_1 = ecx_9
                    
                    eax_34 = var_30_1
                    
                    if (eax_34 s< 0x200)
                        if (arg2 == 0)
                            result_2 += var_5c_2
                        else
                            uint32_t var_80_3 = zx.d(arg3[0xd].b)
                            int32_t var_84_4 = arg3[0xc]
                            result_1 = sub_421830(arg3, edx_13, var_18_1, result_3.w, var_1c, 
                                arg3[3], result_1, arg9, arg4, arg5, ecx_9, eax_8, &data_13127b0, 
                                &data_13127b4)
                            eax_34 = var_30_1
                        
                        var_30_1 = eax_34 + 1
                    
                    edx_12 = arg4 + var_54_1
                    eax_34.b = *esi_7
                    arg4 = edx_12
                while (eax_34.b != 0)
                
                ecx_5 = arg3
            
            if (var_6_1 != 0)
                arg5 += eax_8
                edx_12 = var_34_1 + arg9
                arg4 = edx_12
            
            if (data_129999c != 0xffffffff)
                var_60_2 = edx_12
                var_34_1 = edx_12
        
        uint32_t result_4 = ecx_5[1]
        result = nullptr
        void* esi_8 = *ecx_5
        char var_8_1 = 0
        uint8_t var_7_1 = 0
        var_58 = 0xffffffff
        var_54_1.b = 0
        uint32_t var_50_3 = 0xffffffff
        char var_9_2 = 0
        result_3 = result_4
        var_1c = 0
        int32_t ecx_12
        
        if (ecx_5[0xb] != 0)
            ecx_12 = data_1299998
        
        int32_t edi_12
        
        if (ecx_5[0xb] == 0 || ecx_12 == 1)
            edi_12 = arg4
        else
            if (var_30_1 s< 0x200)
                if (arg2 == 0)
                    result_2 += var_5c_2
                else
                    int32_t var_80_4 = 0
                    void* eax_44 = arg9
                    int32_t var_84_5 = 0xffffffff
                    result, edx_12 = sub_421830(eax_44, 1, 0, 0x20, 0, 0xffffffff, result_1, 
                        eax_44, edx_12, arg5, eax_44, eax_8, &data_13127b0, &data_13127b4)
                    ecx_12 = data_1299998
                    result_1 = result
                
                var_30_1 += 1
            
            result.b = *(esi_8 + 8)
            edi_12 = arg4 + eax_3
            
            if (result.b u>= 0x80 && (result.b u< 0xa0 || result.b u> 0xdf))
                if (result.b u>= 0xfe && result.b == 0x20)
                    goto label_421dd1
                
                result = nullptr
            else if (result.b != 0x20)
                result = nullptr
            else
            label_421dd1:
                uint32_t eax_45 = *(esi_8 + 0xc)
                
                if (eax_45 != 0xffffffff)
                    edx_12.b = *(esi_8 + 0x10)
                    var_58 = eax_45
                    var_9_2 = edx_12.b
                    var_54_1.b = edx_12.b
                    var_50_3 = eax_45
                
                result = 1
                esi_8 += 0x14
                var_1c = 1
                var_7_1 = 1
            
            if (ecx_12 == 0)
                var_60_2 = edi_12
                var_34_1 = edi_12
        
        if (result s< result_3)
            result = result_3
            void* ecx_13 = esi_8 + 8
            int32_t esi_9 = var_1c
            int16_t* var_18_2 = ecx_13
            var_64 = 0x8140
            
            do
                ecx_13:1.b = *(ecx_13 - 8)
                char var_a_1 = ecx_13:1.b
                int16_t* ecx_25
                
                if (ecx_13:1.b == 3)
                    ecx_25 = var_18_2
                else
                    int32_t esi_10 = 0
                    var_38.b = 0
                    uint32_t eax_47 = *(var_18_2 + 4)
                    int32_t edx_16 = 1
                    var_68 = eax_47
                    
                    if (eax_47 != 0xffffffff)
                        var_58 = eax_47
                        ecx_13.b = var_18_2[4].b
                        var_54_1.b = ecx_13.b
                        
                        if (var_50_3 == 0xffffffff)
                            var_50_3 = var_68
                            var_9_2 = ecx_13.b
                    
                    int32_t eax_55
                    int32_t var_24_2
                    
                    if (ecx_13:1.b != 0)
                    label_421fff:
                        eax_55 = 0
                        var_24_2 = 0
                        
                        if (edx_16 == 0)
                            goto label_421ed4
                        
                        if (data_108febc != 0)
                            eax_55 = 1
                    else
                        edx_16 = 0
                        ecx_13.b = *(var_18_2 + 1)
                        
                        if (ecx_13.b u< 0x80 || (ecx_13.b u>= 0xa0 && ecx_13.b u<= 0xdf)
                                || ecx_13.b u>= 0xfe)
                            esi_10 = 1
                            uint8_t eax_60 = var_38.b
                            
                            if (ecx_13.b == 0x20)
                                eax_60 = 1
                            
                            var_38.b = eax_60
                            goto label_421fff
                        
                        int16_t eax_51 = *var_18_2
                        uint32_t ecx_15 = zx.d(var_38.b)
                        
                        if (eax_51 == var_64.w)
                            ecx_15 = 1
                        
                        var_38 = ecx_15
                        
                        if (var_1c != 0)
                            if (var_14_1 != 1 && var_14_1 != 2)
                                goto label_421fff
                            
                            if (var_4c_2 == 0)
                                if (eax_51 == 0x8175)
                                    var_10 += 1
                                else if (eax_51 == 0x8176)
                                    uint32_t temp7_1 = var_10
                                    var_10 -= 1
                                    void* eax_58 = var_14_1
                                    
                                    if (temp7_1 == 1)
                                        eax_58 = 3
                                    
                                    var_14_1 = eax_58
                            else if (var_4c_2 != 1)
                                if (var_4c_2 != 2)
                                    goto label_421fff
                                
                                if (eax_51 == 0x8169)
                                    var_10 += 1
                                else if (eax_51 == 0x816a)
                                    uint32_t temp9_1 = var_10
                                    var_10 -= 1
                                    void* eax_56 = var_14_1
                                    
                                    if (temp9_1 == 1)
                                        eax_56 = 3
                                    
                                    var_14_1 = eax_56
                            else if (eax_51 == 0x8177)
                                var_10 += 1
                            else if (eax_51 == 0x8178)
                                uint32_t temp8_1 = var_10
                                var_10 -= 1
                                void* eax_57 = var_14_1
                                
                                if (temp8_1 == 1)
                                    eax_57 = 3
                                
                                var_14_1 = eax_57
                        else if (eax_51 == 0x8175)
                            var_14_1 = 1
                            var_4c_2 = 0
                            var_10 = 1
                        else if (eax_51 == 0x8177)
                            var_14_1 = 1
                            var_4c_2 = 1
                            var_10 = 1
                        else if (eax_51 == 0x8169)
                            var_14_1 = 1
                            var_4c_2 = 2
                            var_10 = 1
                        
                        var_24_2 = 0
                    label_421ed4:
                        ecx_13.w = *var_18_2
                        
                        if (sub_4cf900(ecx_13.w, esi_10) == 0)
                            eax_55 = var_24_2
                        else
                            int32_t eax_54
                            eax_54.b = esi_10 != 0
                            eax_55 = eax_54 + 1
                    char var_6_2 = 0
                    int32_t eax_65
                    
                    if (eax_55 == 0)
                        if (esi_10 != 0)
                            eax_65 = eax_3 + edi_12 + arg9
                        else
                            eax_65 = edi_12 + (arg9 << 1)
                        
                        goto label_42204c
                    
                    uint8_t eax_69
                    
                    if (eax_55 == 1)
                        eax_65 = edi_12 + arg9
                    label_42204c:
                        
                        if (eax_65 s< arg8)
                            goto label_422060
                        
                        edi_12 = var_34_1
                        arg5 += eax_8
                        var_6_2 = 1
                    label_422066:
                        eax_69 = var_38.b
                        
                        if (eax_69 == 0)
                            goto label_422072
                    else
                        if (eax_55 == 2)
                            eax_65 = eax_3 + edi_12
                            goto label_42204c
                        
                    label_422060:
                        
                        if (var_8_1 != 0)
                            goto label_422066
                        
                        eax_69 = var_38.b
                    label_422072:
                        
                        if (var_7_1 == 0 || eax_69 == 0)
                            void* eax_70 = var_30_1
                            
                            if (eax_70 s< 0x200)
                                if (arg2 == 0)
                                    result_2 += var_5c_2
                                else
                                    int32_t var_80_5 = var_54_1
                                    uint32_t var_84_6 = var_58
                                    uint32_t eax_72 = zx.d(*var_18_2)
                                    result_1 = sub_421830(eax_72, esi_10, zx.d(var_a_1), eax_72.w, 
                                        zx.d(var_18_2[1].b), *(var_18_2 - 4), result_1, arg9, 
                                        edi_12, arg5, arg9, eax_8, &data_13127b0, &data_13127b4)
                                    eax_70 = var_30_1
                                
                                var_30_1 = eax_70 + 1
                            
                            int32_t eax_75 = eax_3
                            
                            if (esi_10 == 0)
                                eax_75 = arg9
                            
                            edi_12 += eax_75
                            eax_69 = var_38.b
                    
                    if (var_14_1 == 1)
                        int32_t ecx_24 = var_34_1
                        
                        if (data_129999c == 1)
                            ecx_24 = edi_12
                        
                        var_14_1 = 2
                        var_34_1 = ecx_24
                    else if (var_14_1 == 3)
                        var_14_1 = 4
                        var_34_1 = var_60_2
                    
                    ecx_25 = var_18_2
                    var_7_1 = eax_69
                    var_8_1 = 0
                    
                    if (var_6_2 != 0 || ecx_25[-4].b != 0)
                        esi_9 = var_1c
                    else
                        eax_69 = *ecx_25
                        
                        if (eax_69 u< 0x80)
                            if (eax_69 != 0x20)
                                esi_9 = var_1c
                            else
                            label_422144:
                                int32_t edx_19 = 0
                                void* ecx_26 = &ecx_25[6]
                                int32_t esi_11 = var_1c + 1
                                
                                if (esi_11 s>= result_3)
                                    ecx_25 = var_18_2
                                    esi_9 = var_1c
                                else
                                    while (*ecx_26 == 0)
                                        int32_t eax_76
                                        eax_76.b = *(ecx_26 + 8)
                                        
                                        if (eax_76.b u>= 0x80
                                                && (eax_76.b u< 0xa0 || eax_76.b u> 0xdf)
                                                && eax_76.b u< 0xfe)
                                            break
                                        
                                        if (eax_76.b == 0x20)
                                            break
                                        
                                        esi_11 += 1
                                        edx_19 += 1
                                        ecx_26 += 0x14
                                        
                                        if (esi_11 s>= result_3)
                                            break
                                    
                                    ecx_25 = var_18_2
                                    
                                    if (edx_19 s<= 0)
                                        esi_9 = var_1c
                                    else
                                        esi_9 = var_1c
                                        
                                        if (edx_19 * eax_3 + edi_12 + arg9 s>= arg8)
                                            edi_12 = var_34_1
                                            arg5 += eax_8
                                            var_8_1 = 1
                        else if (eax_69 u< 0xa0)
                            if (eax_69 u>= 0xfe && eax_69 == 0x20)
                                goto label_422144
                            
                            esi_9 = var_1c
                        else
                            if ((eax_69 u<= 0xdf || eax_69 u>= 0xfe) && eax_69 == 0x20)
                                goto label_422144
                            
                            esi_9 = var_1c
                    
                    result = result_3
                
                esi_9 += 1
                ecx_13 = &ecx_25[0xa]
                var_18_2 = ecx_13
                var_1c = esi_9
            while (esi_9 s< result)
        
        if (arg2 == 0)
            int32_t esi_13 = arg9 + arg5 + 2
            int32_t* edx_25 = arg3
            int32_t edi_13 = esi_13
            int32_t ecx_27 = var_3c_1
            edx_25[0xc] = 0xffffffff
            edx_25[0xe] = 0xffffffff
            
            if (var_50_3 != 0xffffffff)
                edx_25[0xc] = var_50_3
                edx_25[0xd] = zx.d(var_9_2)
                
                if (data_1312740 != 0)
                    edx_25[0xe] = 0
                    edx_25[0xf] = var_70_1 - data_1312744 - 4
                    int32_t eax_83 = data_1312748
                    
                    if (eax_83 s> esi_13 - var_3c_1)
                        esi_13 = var_3c_1 + eax_83
                    
                    int32_t eax_85
                    int32_t edx_27
                    edx_27:eax_85 = sx.q(eax_83 - (arg9 + 2))
                    edx_25 = arg3
                    int32_t eax_87 = (eax_85 - edx_27) s>> 1
                    ecx_27 = var_3c_1 - eax_87
                    esi_13 -= eax_87
                    edx_25[0x10] = ecx_27
                    
                    if (ecx_27 s> var_3c_1)
                        ecx_27 = var_3c_1
                    
                    if (esi_13 s< edi_13)
                        esi_13 = edi_13
                    
                    if (arg6 s>= ecx_27)
                        int32_t eax_90 = arg6 - ecx_27 + 1
                        var_3c_1 += eax_90
                        ecx_27 += eax_90
                        esi_13 += eax_90
                        edi_13 += eax_90
                        edx_25[0x10] += eax_90
            
            edx_25[9] = var_3c_1
            edx_25[0x14] = var_30_1
            result = result_2
            edx_25[7] = ecx_27
            edx_25[8] = esi_13
            edx_25[0xa] = edi_13
            edx_25[0x13] = result

return result
