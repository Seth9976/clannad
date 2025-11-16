// 函数: sub_4acfc0
// 地址: 0x4acfc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_6 = data_1bfe300:0xc
int32_t i_5 = i_6

if (i_6 s<= 0 || arg4 == 0 || arg4 - 1 u> 0x16)
    return 

int32_t var_c
int32_t var_8

switch (arg4 + &jump_table_4ad590[4]:3)
    case &lookup_table_4ad5a4, &lookup_table_4ad5a4[1], &lookup_table_4ad5a4[2], 
            &lookup_table_4ad5a4[3], &lookup_table_4ad5a4[4], &lookup_table_4ad5a4[5], 
            &lookup_table_4ad5a4[6], &lookup_table_4ad5a4[7], &lookup_table_4ad5a4[8]
        int32_t eax_2 = data_7030b8 + arg2
        int32_t edx_1 = arg3 + data_7030b4
        int32_t ecx_2 = data_7030ac - arg3
        int32_t eax_5
        int32_t edx_2
        edx_2:eax_5 = sx.q(edx_1 - ecx_2)
        int32_t esi_2 = data_7030b0 - arg2
        var_8 = ecx_2
        var_c = esi_2
        int32_t edi_2 = (eax_5 - edx_2) s>> 1
        int32_t eax_9
        int32_t edx_3
        edx_3:eax_9 = sx.q(eax_2 - esi_2)
        arg1 = (eax_9 - edx_3) s>> 1
        
        if (arg4 - 1 u> 8)
            var_8 = var_c
            var_c = var_8
        else
            switch (arg4)
                case 1
                    var_8 = ecx_2 + edi_2
                    var_c = esi_2 + arg1
                case 3
                    var_8 = edx_1
                    var_c = esi_2
                case 4
                    goto label_4ad071
                case 5
                    ecx_2 = edx_1
                label_4ad071:
                    var_8 = ecx_2
                    var_c = eax_2
                case 6
                    var_c = esi_2
                    var_8 = ecx_2 + edi_2
                case 7
                    var_8 = ecx_2 + edi_2
                    var_c = eax_2
                case 8
                    var_8 = ecx_2
                    var_c = esi_2 + arg1
                case 9
                    var_8 = edx_1
                    var_c = esi_2 + arg1
        
        if (i_6 s> 0)
            void* edi_4 = &data_1bfe300:8[1]
            int32_t i
            
            do
                int32_t eax_12 = *(edi_4 + 8)
                edi_4 += 0x28
                int32_t eax_14
                int32_t edx_6
                edx_6:eax_14 = sx.q(eax_12 - *(edi_4 - 0x28))
                int32_t eax_18
                int32_t edx_7
                edx_7:eax_18 = sx.q(*(edi_4 - 0x1c) - *(edi_4 - 0x24))
                *(edi_4 - 0x18) = var_8 - (((eax_14 - edx_6) s>> 1) + *(edi_4 - 0x28))
                *(edi_4 - 0x14) = var_c - (((eax_18 - edx_7) s>> 1) + *(edi_4 - 0x24))
                i = i_6
                i_6 -= 1
            while (i != 1)
    case &lookup_table_4ad5a4[9], &lookup_table_4ad5a4[0xa], &lookup_table_4ad5a4[0xb], 
            &lookup_table_4ad5a4[0xc]
        int32_t eax_23 = data_7030ac - arg3
        int32_t eax_25 = data_7030b0 - arg2
        int32_t eax_27 = data_7030b4 + arg3
        arg1 = data_7030b8 + arg2
        
        if (i_6 s> 0)
            void* esi_8 = data_1bfe300:8
            var_c = var_c
            void* esi_9 = esi_8 + 0x10
            var_8 = var_8
            int32_t i_1
            
            do
                int32_t eax_33
                int32_t edx_8
                edx_8:eax_33 = sx.q(*(esi_9 + 8) - *esi_9)
                int32_t eax_37
                int32_t edx_9
                edx_9:eax_37 = sx.q(*(esi_9 + 0xc) - *(esi_9 + 4))
                int32_t edi_7 = ((eax_33 - edx_8) s>> 1) + *esi_9
                int32_t edx_12 = ((eax_37 - edx_9) s>> 1) + *(esi_9 + 4)
                int32_t eax_41
                
                if (arg4 - 0xa u> 3)
                    eax_41 = var_c
                else
                    switch (arg4)
                        case 0xa
                            eax_41 = edi_7
                            var_c = eax_41
                            var_8 = eax_25
                        case 0xb
                            eax_41 = edi_7
                            var_c = eax_41
                            var_8 = arg1
                        case 0xc
                            eax_41 = eax_23
                            var_c = eax_41
                            var_8 = edx_12
                        case 0xd
                            eax_41 = eax_27
                            var_c = eax_41
                            var_8 = edx_12
                
                *(esi_9 + 0x10) = eax_41 - edi_7
                *(esi_9 + 0x14) = var_8 - edx_12
                esi_9 += 0x28
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
    case &lookup_table_4ad5a4[0xd], &lookup_table_4ad5a4[0xe], &lookup_table_4ad5a4[0xf], 
            &lookup_table_4ad5a4[0x10]
        int32_t eax_46 = data_7030ac - arg3
        int32_t eax_48 = data_7030b0 - arg2
        int32_t eax_50 = data_7030b4 + arg3
        var_c = data_7030b8 + arg2
        
        if (i_6 s> 0)
            int32_t edi_8 = var_c
            int32_t* esi_11 = &data_1bfe300:8[1]
            int32_t ebx = var_8
            int32_t* var_18_2 = esi_11
            int32_t i_2
            
            do
                int32_t ecx_16 = *esi_11
                int32_t eax_54
                int32_t edx_13
                edx_13:eax_54 = sx.q(esi_11[2] - ecx_16)
                int32_t esi_14 = ((eax_54 - edx_13) s>> 1) + ecx_16
                int32_t ecx_17 = var_18_2[1]
                int32_t eax_59
                int32_t edx_14
                edx_14:eax_59 = sx.q(var_18_2[3] - ecx_17)
                int32_t edx_17 = ((eax_59 - edx_14) s>> 1) + ecx_17
                int32_t eax_69
                
                if (arg4 - 0xe u<= 3)
                    switch (arg4)
                        case 0xe
                            if (data_7030bc s>= data_7030c0)
                                int32_t eax_66 = edx_17 - eax_48
                                edi_8 = esi_14 - eax_66
                                ebx = edx_17 - eax_66
                            else
                                int32_t eax_64 = esi_14 - eax_46
                                edi_8 = esi_14 - eax_64
                                ebx = edx_17 - eax_64
                        case 0xf
                            if (data_7030bc s>= data_7030c0)
                                eax_69 = edx_17 - eax_48
                                ebx = edx_17 - eax_69
                            else
                                eax_69 = eax_50 - esi_14
                                ebx = edx_17 - eax_69
                            
                            edi_8 = eax_69 + esi_14
                        case 0x10
                            if (data_7030bc s>= data_7030c0)
                                int32_t eax_75 = var_c - edx_17
                                edi_8 = esi_14 - eax_75
                                ebx = eax_75 + edx_17
                            else
                                int32_t eax_73 = esi_14 - eax_46
                                edi_8 = esi_14 - eax_73
                                ebx = eax_73 + edx_17
                        case 0x11
                            if (data_7030bc s>= data_7030c0)
                                eax_69 = var_c - edx_17
                            else
                                eax_69 = eax_50 - esi_14
                            
                            ebx = eax_69 + edx_17
                            edi_8 = eax_69 + esi_14
                var_18_2[4] = edi_8 - esi_14
                var_18_2[5] = ebx - edx_17
                esi_11 = &var_18_2[0xa]
                i_2 = i_5
                i_5 -= 1
                var_18_2 = esi_11
            while (i_2 != 1)
    case &lookup_table_4ad5a4[0x11], &lookup_table_4ad5a4[0x12], &lookup_table_4ad5a4[0x13], 
            &lookup_table_4ad5a4[0x14]
        int32_t esi_16 = data_7030b4
        int32_t ecx_18 = data_7030ac
        int32_t eax_85
        int32_t edx_18
        edx_18:eax_85 = sx.q(esi_16 - ecx_18)
        int32_t edx_19 = data_7030b0
        var_c = edx_19
        int32_t ecx_19 = data_7030b8
        var_8 = ((eax_85 - edx_18) s>> 1) + ecx_18
        int32_t eax_91
        int32_t edx_20
        edx_20:eax_91 = sx.q(ecx_19 - edx_19)
        int32_t var_14_4 = ecx_18 - arg3
        int32_t eax_94 = ((eax_91 - edx_20) s>> 1) + var_c
        var_c -= arg2
        
        if (i_6 s> 0)
            int32_t edi_13 = var_c
            int32_t* esi_18 = &data_1bfe300:8[1]
            int32_t ebx_5 = var_8
            int32_t* var_18_3 = esi_18
            int32_t i_3
            
            do
                int32_t ecx_20 = *esi_18
                int32_t eax_100
                int32_t edx_22
                edx_22:eax_100 = sx.q(esi_18[2] - ecx_20)
                int32_t esi_21 = ((eax_100 - edx_22) s>> 1) + ecx_20
                int32_t ecx_21 = var_18_3[1]
                int32_t eax_105
                int32_t edx_23
                edx_23:eax_105 = sx.q(var_18_3[3] - ecx_21)
                int32_t edx_26 = ((eax_105 - edx_23) s>> 1) + ecx_21
                
                if (arg4 - 0x12 u<= 3)
                    switch (arg4)
                        case 0x12
                            edi_13 = esi_21
                            
                            if (edx_26 s> eax_94)
                                ebx_5 = ecx_19 + arg2
                            else
                                ebx_5 = var_c
                        case 0x13
                            ebx_5 = edx_26
                            
                            if (esi_21 s> var_8)
                                edi_13 = esi_16 + arg3
                            else
                                edi_13 = var_14_4
                        case 0x14
                            edi_13 = esi_21
                            
                            if (edx_26 s< eax_94)
                                ebx_5 = ecx_19 + arg2
                            else
                                ebx_5 = var_c
                        case 0x15
                            ebx_5 = edx_26
                            edi_13 = var_14_4
                            
                            if (esi_21 s< var_8)
                                edi_13 = esi_16 + arg3
                
                var_18_3[4] = edi_13 - esi_21
                var_18_3[5] = ebx_5 - edx_26
                esi_18 = &var_18_3[0xa]
                i_3 = i_5
                i_5 -= 1
                var_18_3 = esi_18
            while (i_3 != 1)
    case &lookup_table_4ad5a4[0x15], &lookup_table_4ad5a4[0x16]
        int32_t eax_112 = data_7030b4
        int32_t ecx_22 = data_7030ac
        int32_t eax_114
        int32_t edx_27
        edx_27:eax_114 = sx.q(eax_112 - ecx_22)
        int32_t edx_28 = data_7030b0
        int32_t eax_117 = ((eax_114 - edx_27) s>> 1) + ecx_22
        int32_t eax_118 = data_7030b8
        int32_t eax_120
        int32_t edx_29
        edx_29:eax_120 = sx.q(eax_118 - edx_28)
        int32_t ecx_24 = ecx_22 - eax_117 - arg3
        int32_t edx_32 = ((eax_120 - edx_29) s>> 1) + edx_28
        int32_t eax_124 = edx_28 - edx_32 - arg2
        int32_t eax_127 = eax_112 - eax_117 + arg3
        int32_t var_14_6 = eax_118 - edx_32 + arg2
        
        if (i_6 s> 0)
            int32_t* esi_24 = &data_1bfe300:8[1]
            int32_t* var_28_4 = esi_24
            int32_t i_4
            
            do
                int32_t eax_132
                int32_t edx_33
                edx_33:eax_132 = sx.q(esi_24[2] - *esi_24)
                int32_t var_30 = 0
                int32_t var_2c = 0
                int32_t edi_16 = ((eax_132 - edx_33) s>> 1) + *esi_24
                int32_t eax_136
                int32_t edx_34
                edx_34:eax_136 = sx.q(esi_24[3] - esi_24[1])
                int32_t ecx_26 = edi_16 - eax_117
                int32_t eax_139 = ((eax_136 - edx_34) s>> 1) + esi_24[1]
                int32_t edx_36 = eax_139 - edx_32
                int32_t esi_26 = sbb.d(esi_24, esi_24, 2 u< ecx_26 + 1) & ecx_26
                int32_t ecx_28 = sbb.d(ecx_26, ecx_26, 2 u< edx_36 + 1) & edx_36
                
                if (esi_26 == 0 && ecx_28 == 0)
                    ecx_28 = 0xffffffff
                
                if (arg4 == 0x17)
                    esi_26 = neg.d(esi_26)
                    ecx_28 = neg.d(ecx_28)
                
                int32_t edi_17
                
                if (esi_26 s< 0)
                    edi_17 = divs.dp.d(sx.q(ecx_24 + esi_26), esi_26)
                else if (esi_26 s<= 0)
                    edi_17 = 0xf423f
                else
                    edi_17 = divs.dp.d(sx.q(eax_127 + esi_26), esi_26)
                
                int32_t edx_42
                
                if (ecx_28 s< 0)
                    edx_42 = divs.dp.d(sx.q(eax_124 + ecx_28), ecx_28)
                else if (ecx_28 s<= 0)
                    edx_42 = 0xf423f
                else
                    edx_42 = divs.dp.d(sx.q(var_14_6 + ecx_28), ecx_28)
                
                int32_t eax_159
                
                if (edi_17 s>= edx_42)
                    eax_159 = edx_42 * esi_26
                    var_8 = edx_42 * ecx_28
                else
                    eax_159 = edi_17 * esi_26
                    var_8 = edi_17 * ecx_28
                
                var_c = eax_159
                sub_4c08c0(&var_c, &var_2c, &var_30, &var_c, &var_8, ecx_24, eax_124, eax_127, 
                    var_14_6)
                int32_t ecx_32 = var_8 + edx_32 - eax_139
                var_28_4[4] = var_c + eax_117 - edi_16
                var_28_4[5] = ecx_32
                esi_24 = &var_28_4[0xa]
                var_28_4 = esi_24
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
