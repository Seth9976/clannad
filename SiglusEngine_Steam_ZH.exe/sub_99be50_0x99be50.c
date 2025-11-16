// 函数: sub_99be50
// 地址: 0x99be50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2
void* edi = arg1
void* eax = *(edi + 4)
void* ebx = *(edi + 0x68)
int32_t* eax_1 = *(eax + 0x1c)
int32_t eax_2 = eax_1[0x392]

if (esi != 0)
    int32_t eax_4 = *(edi + 0x18)
    
    if (*(edi + 0x14) s<= eax_4 || eax_4 == 0xffffffff)
        int32_t edx = *(edi + 0x40)
        int32_t ecx = *(edi + 0x44)
        *(edi + 0x24) = *(edi + 0x28)
        *(edi + 0x28) = esi[7]
        *(edi + 0x2c) = 0xffffffff
        
        if ((edx & ecx) == 0xffffffff || edx + 1 != esi[0xe]
                || adc.d(ecx, 0, edx u>= 0xffffffff) != esi[0xf])
            *(edi + 0x38) = 0xffffffff
            *(edi + 0x3c) = 0xffffffff
            *(ebx + 0x80) = 0xffffffff
            *(ebx + 0x84) = 0xffffffff
        
        *(edi + 0x40) = esi[0xe]
        *(edi + 0x44) = esi[0xf]
        
        if (*esi != 0)
            int32_t eax_13 = eax_1[*(edi + 0x28)] s>> (eax_2.b + 1)
            int32_t i_17 = eax_1[1] s>> (eax_2.b + 1)
            int32_t eax_16
            int32_t edx_3
            edx_3:eax_16 = sx.q(esi[0x16])
            int32_t i_21 = *eax_1 s>> (eax_2.b + 1)
            int32_t temp1_1 = *(edi + 0x48)
            *(edi + 0x48) += eax_16
            int32_t i_16 = i_21
            *(edi + 0x4c) = adc.d(*(edi + 0x4c), edx_3, temp1_1 + eax_16 u< temp1_1)
            int32_t eax_18
            int32_t edx_4
            edx_4:eax_18 = sx.q(esi[0x17])
            int32_t temp2_1 = *(edi + 0x50)
            *(edi + 0x50) += eax_18
            *(edi + 0x54) = adc.d(*(edi + 0x54), edx_4, temp2_1 + eax_18 u< temp2_1)
            int32_t eax_20
            int32_t edx_5
            edx_5:eax_20 = sx.q(esi[0x18])
            int32_t temp3_1 = *(edi + 0x58)
            *(edi + 0x58) += eax_20
            *(edi + 0x5c) = adc.d(*(edi + 0x5c), edx_5, temp3_1 + eax_20 u< temp3_1)
            int32_t eax_22
            int32_t edx_6
            edx_6:eax_22 = sx.q(esi[0x19])
            int32_t temp4_1 = *(edi + 0x60)
            *(edi + 0x60) += eax_22
            *(edi + 0x64) = adc.d(*(edi + 0x64), edx_6, temp4_1 + eax_22 u< temp4_1)
            int32_t i_20 = i_17
            int32_t i_22
            int32_t i_23
            
            if (*(edi + 0x30) == 0)
                i_22 = 0
                i_23 = i_20
            else
                i_22 = i_20
                i_23 = 0
            
            int32_t ecx_4 = 0
            int32_t var_10_1 = 0
            
            if (*(eax + 4) s> 0)
                while (true)
                    if (*(edi + 0x24) == 0)
                        int32_t eax_53 = *(ebx + 4) - eax_2
                        
                        if (*(edi + 0x28) == 0)
                            int32_t ebx_13 = (&data_ae5530)[eax_53]
                            int32_t* ecx_21 = *(*(edi + 8) + (ecx_4 << 2)) + (i_23 << 2)
                            
                            if (i_16 s> 0)
                                int32_t i_14 = i_16
                                int32_t eax_86 = *(*esi + (var_10_1 << 2)) - ebx_13
                                int32_t var_44_3 = eax_86
                                float* edx_27 = ebx_13 + ((i_16 - 1) << 2)
                                void* ebx_14 = ebx_13 - ecx_21
                                int32_t i
                                
                                do
                                    void* eax_87 = ebx_14 + ecx_21
                                    float xmm0_8 = *ecx_21 * *edx_27
                                    edx_27 -= 4
                                    *ecx_21 = *(eax_87 + eax_86) f* *eax_87 + xmm0_8
                                    ecx_21 = &ecx_21[1]
                                    i = i_14
                                    i_14 -= 1
                                while (i != 1)
                                edi = arg1
                        else
                            int32_t eax_54 = (&data_ae5530)[eax_53]
                            int32_t* esi_1 = *(*(edi + 8) + (ecx_4 << 2)) + (i_23 << 2)
                            int32_t eax_58
                            int32_t edx_16
                            edx_16:eax_58 = sx.q(i_20)
                            int32_t eax_61
                            int32_t edx_17
                            edx_17:eax_61 = sx.q(i_21)
                            int32_t i_24 = 0
                            int32_t ecx_15 = (eax_58 - edx_16) s>> 1
                            int32_t eax_63 = (eax_61 - edx_17) s>> 1
                            int32_t i_18 = 0
                            int32_t eax_67 = *(*arg2 + (var_10_1 << 2)) + ((ecx_15 - eax_63) << 2)
                            
                            if (i_16 s> 0)
                                int32_t* ecx_17 = esi_1
                                float* edx_21 = eax_54 + ((i_16 - 1) << 2)
                                i_18 = i_16
                                int32_t i_12 = i_16
                                int32_t i_1
                                
                                do
                                    void* eax_70 = eax_54 - esi_1 + ecx_17
                                    float xmm0_6 = *ecx_17 * *edx_21
                                    edx_21 -= 4
                                    *ecx_17 = *(eax_70 + eax_67 - eax_54) f* *eax_70 + xmm0_6
                                    ecx_17 = &ecx_17[1]
                                    i_1 = i_12
                                    i_12 -= 1
                                while (i_1 != 1)
                                edi = arg1
                                i_24 = i_18
                            
                            int32_t esi_3 = eax_63 + ecx_15
                            
                            if (i_24 s< esi_3)
                                if (esi_3 - i_24 s>= 4)
                                    void* edx_23 = eax_67 + 0xc + (i_24 << 2)
                                    void* ecx_18 = &esi_1[i_24 + 1]
                                    int32_t i_9 = ((esi_3 - i_18 - 4) u>> 2) + 1
                                    int32_t i_25 = i_18 + (i_9 << 2)
                                    int32_t i_2
                                    
                                    do
                                        ecx_18 += 0x10
                                        *(ecx_18 - 0x14) = *(edx_23 - 0xc)
                                        edx_23 += 0x10
                                        *(ecx_18 - 0x10) = *(eax_67 - esi_1 + ecx_18 - 0x10)
                                        *(ecx_18 - 0xc) = *(edx_23 - 0x14)
                                        *(ecx_18 - 8) = *(edx_23 - 0x10)
                                        i_2 = i_9
                                        i_9 -= 1
                                    while (i_2 != 1)
                                    edi = arg1
                                    i_24 = i_25
                                
                                if (i_24 s< esi_3)
                                    int32_t i_13 = esi_3 - i_24
                                    int32_t* ecx_19 = &esi_1[i_24]
                                    int32_t i_3
                                    
                                    do
                                        int32_t eax_81 = *(ecx_19 + eax_67 - esi_1)
                                        ecx_19 = &ecx_19[1]
                                        ecx_19[-1] = eax_81
                                        i_3 = i_13
                                        i_13 -= 1
                                    while (i_3 != 1)
                                    edi = arg1
                    else if (*(edi + 0x28) == 0)
                        int32_t ebx_4 = (&data_ae5530)[*(ebx + 4) - eax_2]
                        int32_t eax_40
                        int32_t edx_10
                        edx_10:eax_40 = sx.q(i_20)
                        int32_t eax_43
                        int32_t edx_11
                        edx_11:eax_43 = sx.q(i_16)
                        int32_t* ecx_11 = *(*(edi + 8) + (var_10_1 << 2))
                            + ((((eax_40 - edx_10) s>> 1) - ((eax_43 - edx_11) s>> 1) + i_23) << 2)
                        
                        if (i_16 s> 0)
                            int32_t i_11 = i_16
                            int32_t eax_50 = *(*esi + (var_10_1 << 2)) - ebx_4
                            int32_t var_34_2 = eax_50
                            float* edx_15 = ebx_4 + ((i_16 - 1) << 2)
                            int32_t* ecx_12 = ecx_11
                            int32_t i_4
                            
                            do
                                void* eax_51 = ebx_4 - ecx_11 + ecx_12
                                float xmm0_4 = *ecx_12 * *edx_15
                                edx_15 -= 4
                                *ecx_12 = *(eax_51 + eax_50) f* *eax_51 + xmm0_4
                                ecx_12 = &ecx_12[1]
                                i_4 = i_11
                                i_11 -= 1
                            while (i_4 != 1)
                            edi = arg1
                    else
                        int32_t ebx_2 = (&data_ae5530)[*(ebx + 8) - eax_2]
                        float* ecx_6 = *(*(edi + 8) + (ecx_4 << 2)) + (i_23 << 2)
                        int32_t i_10 = i_17
                        
                        if (i_10 s> 0)
                            int32_t eax_35 = *(*esi + (var_10_1 << 2)) - ebx_2
                            int32_t* edx_9 = ebx_2 + ((i_10 - 1) << 2)
                            int32_t var_34_1 = eax_35
                            void* ebx_3 = ebx_2 - ecx_6
                            int32_t i_5
                            
                            do
                                float xmm0_1 = *edx_9
                                int32_t* eax_36 = ebx_3 + ecx_6
                                edx_9 -= 4
                                *ecx_6 = *(eax_36 + eax_35) f* *eax_36 + xmm0_1 * *ecx_6
                                ecx_6 = &ecx_6[1]
                                i_5 = i_10
                                i_10 -= 1
                            while (i_5 != 1)
                            edi = arg1
                    
                    int32_t edx_28 = eax_13
                    void* esi_5 = *(*(edi + 8) + (var_10_1 << 2)) + (i_22 << 2)
                    int32_t eax_91 = 0
                    void* ebx_16 = *(*arg2 + (var_10_1 << 2)) + (eax_13 << 2)
                    
                    if (edx_28 s>= 4)
                        void* ecx_23 = esi_5 + 4
                        void* eax_93 = ebx_16 - esi_5
                        void* edx_29 = ebx_16 + 0xc
                        void* var_44_4 = eax_93
                        int32_t i_15 = ((eax_13 - 4) u>> 2) + 1
                        int32_t eax_94 = i_15 << 2
                        int32_t i_6
                        
                        do
                            ecx_23 += 0x10
                            *(ecx_23 - 0x14) = *(edx_29 - 0xc)
                            edx_29 += 0x10
                            *(ecx_23 - 0x10) = *(eax_93 + ecx_23 - 0x10)
                            *(ecx_23 - 0xc) = *(edx_29 - 0x14)
                            *(ecx_23 - 8) = *(edx_29 - 0x10)
                            i_6 = i_15
                            i_15 -= 1
                        while (i_6 != 1)
                        edi = arg1
                        eax_91 = eax_94
                        edx_28 = eax_13
                    
                    if (eax_91 s< edx_28)
                        int32_t* ecx_24 = esi_5 + (eax_91 << 2)
                        int32_t i_8 = edx_28 - eax_91
                        int32_t i_7
                        
                        do
                            int32_t eax_99 = *(ecx_24 + ebx_16 - esi_5)
                            ecx_24 = &ecx_24[1]
                            ecx_24[-1] = eax_99
                            i_7 = i_8
                            i_8 -= 1
                        while (i_7 != 1)
                    
                    ecx_4 = var_10_1 + 1
                    i_21 = i_16
                    var_10_1 = ecx_4
                    
                    if (ecx_4 s>= *(eax + 4))
                        break
                    
                    esi = arg2
                    i_20 = i_17
            
            int32_t i_19 = i_17
            
            if (*(edi + 0x30) != 0)
                i_19 = 0
            
            bool cond:1_1 = *(edi + 0x18) != 0xffffffff
            *(edi + 0x30) = i_19
            
            if (cond:1_1)
                int32_t eax_102 = *(edi + 0x28)
                *(edi + 0x18) = i_23
                int32_t eax_104
                int32_t edx_30
                edx_30:eax_104 = sx.q(eax_1[eax_102])
                int32_t eax_107
                int32_t edx_32
                edx_32:eax_107 = sx.q(eax_1[*(edi + 0x24)])
                *(edi + 0x14) = (((((edx_30 & 3) + eax_104) s>> 2)
                    + ((eax_107 + (edx_32 & 3)) s>> 2)) s>> eax_2.b) + i_23
            else
                *(edi + 0x18) = i_22
                *(edi + 0x14) = i_22
        
        int32_t esi_14 = *(ebx + 0x80)
        int32_t ebx_19 = *(ebx + 0x84)
        
        if ((esi_14 & ebx_19) != 0xffffffff)
            int32_t eax_114
            int32_t edx_34
            edx_34:eax_114 = sx.q(eax_1[*(edi + 0x28)])
            int32_t eax_117
            int32_t edx_37
            edx_37:eax_117 = sx.q(eax_1[*(edi + 0x24)])
            int32_t eax_121
            int32_t edx_39
            edx_39:eax_121 =
                sx.q(((eax_117 + (edx_37 & 3)) s>> 2) + (((edx_34 & 3) + eax_114) s>> 2))
            *(ebx + 0x80) = eax_121 + esi_14
            *(ebx + 0x84) = adc.d(edx_39, ebx_19, eax_121 + esi_14 u< eax_121)
        else
            *(ebx + 0x80) = 0
            *(ebx + 0x84) = 0
        
        int32_t esi_15 = *(edi + 0x38)
        int32_t ebx_20 = *(edi + 0x3c)
        int32_t* ebx_21
        
        if ((esi_15 & ebx_20) != 0xffffffff)
            int32_t eax_134
            int32_t edx_44
            edx_44:eax_134 = sx.q(eax_1[*(edi + 0x28)])
            int32_t eax_137
            int32_t edx_47
            edx_47:eax_137 = sx.q(eax_1[*(edi + 0x24)])
            int32_t eax_141
            int32_t edx_49
            edx_49:eax_141 =
                sx.q(((eax_137 + (edx_47 & 3)) s>> 2) + (((edx_44 & 3) + eax_134) s>> 2))
            *(edi + 0x38) = eax_141 + esi_15
            ebx_21 = arg2
            *(edi + 0x3c) = adc.d(edx_49, ebx_20, eax_141 + esi_15 u< eax_141)
            int32_t esi_20 = ebx_21[0xc]
            int32_t edx_51 = ebx_21[0xd]
            
            if ((esi_20 & edx_51) != 0xffffffff)
                int32_t ecx_39 = *(edi + 0x38)
                int32_t eax_145 = *(edi + 0x3c)
                
                if (ecx_39 != esi_20 || eax_145 != edx_51)
                    if (eax_145 s>= edx_51 && (eax_145 s> edx_51 || ecx_39 u> esi_20))
                        int32_t esi_22 = ecx_39 - ebx_21[0xc]
                        
                        if (ecx_39 != ebx_21[0xc] && ebx_21[0xb] != 0)
                            int32_t edx_52 = *(edi + 0x14)
                            char ecx_40 = eax_2.b
                            int32_t eax_148 = (edx_52 - *(edi + 0x18)) << ecx_40
                            
                            if (esi_22 s> eax_148)
                                esi_22 = eax_148
                            
                            if (esi_22 s< 0)
                                esi_22 = 0
                            
                            *(edi + 0x14) = edx_52 - (esi_22 s>> ecx_40)
                    
                    *(edi + 0x38) = ebx_21[0xc]
                    *(edi + 0x3c) = ebx_21[0xd]
        else
            ebx_21 = arg2
            int32_t ecx_33 = ebx_21[0xc]
            int32_t edx_41 = ebx_21[0xd]
            
            if ((ecx_33 & edx_41) != 0xffffffff)
                *(edi + 0x38) = ecx_33
                *(edi + 0x3c) = edx_41
                int32_t temp7_1 = *(ebx + 0x84)
                
                if (temp7_1 s>= edx_41 && (temp7_1 s> edx_41 || *(ebx + 0x80) u> *(edi + 0x38)))
                    int32_t esi_16 = *(ebx + 0x80)
                    int32_t esi_17 = esi_16 - ebx_21[0xc]
                    char ecx_35 = eax_2.b
                    
                    if (esi_16 - ebx_21[0xc] s< 0)
                        esi_17 = 0
                    
                    if (ebx_21[0xb] == 0)
                        int32_t eax_131 = *(edi + 0x14)
                        *(edi + 0x18) += esi_17 s>> ecx_35
                        
                        if (*(edi + 0x18) s> eax_131)
                            *(edi + 0x18) = eax_131
                    else
                        int32_t edx_42 = *(edi + 0x14)
                        int32_t eax_130 = (edx_42 - *(edi + 0x18)) << ecx_35
                        
                        if (esi_17 s> eax_130)
                            esi_17 = eax_130
                        
                        *(edi + 0x14) = edx_42 - (esi_17 s>> ecx_35)
        
        if (ebx_21[0xb] != 0)
            *(edi + 0x20) = 1
        
        return 0

return 0xffffff7d
