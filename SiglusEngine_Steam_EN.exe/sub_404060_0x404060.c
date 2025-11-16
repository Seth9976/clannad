// 函数: sub_404060
// 地址: 0x404060
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = arg2
void* eax = *(arg1 + 4)
void* edi = *(arg1 + 0x68)
int32_t* ebp = *(eax + 0x1c)
void* eax_1 = ebp[0x392]

if (ebx == 0)
    return 0xffffff7d

int32_t eax_3 = *(arg1 + 0x18)

if (*(arg1 + 0x14) s> eax_3 && eax_3 != 0xffffffff)
    return 0xffffff7d

int32_t eax_5 = *(arg1 + 0x40)
*(arg1 + 0x24) = *(arg1 + 0x28)
int32_t ecx_2 = *(arg1 + 0x44)
*(arg1 + 0x28) = ebx[7]
*(arg1 + 0x2c) = 0xffffffff

if ((eax_5 & ecx_2) == 0xffffffff || eax_5 + 1 != ebx[0xe]
        || adc.d(ecx_2, 0, eax_5 u>= 0xffffffff) != ebx[0xf])
    *(arg1 + 0x38) = 0xffffffff
    *(arg1 + 0x3c) = 0xffffffff
    *(edi + 0x80) = 0xffffffff
    *(edi + 0x84) = 0xffffffff

*(arg1 + 0x40) = ebx[0xe]
*(arg1 + 0x44) = ebx[0xf]

if (*ebx != 0)
    int32_t eax_11 = ebp[*(arg1 + 0x28)] s>> (eax_1.b + 1)
    int32_t edi_2 = *ebp s>> (eax_1.b + 1)
    int32_t ebp_2 = ebp[1] s>> (eax_1.b + 1)
    int32_t ecx_6 = *(arg1 + 0x48)
    int32_t eax_13
    int32_t edx_5
    edx_5:eax_13 = sx.q(ebx[0x16])
    *(arg1 + 0x48) = ecx_6 + eax_13
    int32_t ecx_8 = *(arg1 + 0x50)
    *(arg1 + 0x4c) = adc.d(*(arg1 + 0x4c), edx_5, ecx_6 + eax_13 u< ecx_6)
    int32_t eax_17
    int32_t edx_6
    edx_6:eax_17 = sx.q(ebx[0x17])
    *(arg1 + 0x50) = ecx_8 + eax_17
    int32_t ecx_10 = *(arg1 + 0x58)
    *(arg1 + 0x54) = adc.d(*(arg1 + 0x54), edx_6, ecx_8 + eax_17 u< ecx_8)
    int32_t eax_21
    int32_t edx_7
    edx_7:eax_21 = sx.q(ebx[0x18])
    *(arg1 + 0x58) = ecx_10 + eax_21
    int32_t ecx_12 = *(arg1 + 0x60)
    *(arg1 + 0x5c) = adc.d(*(arg1 + 0x5c), edx_7, ecx_10 + eax_21 u< ecx_10)
    int32_t eax_25
    int32_t edx_8
    edx_8:eax_25 = sx.q(ebx[0x19])
    *(arg1 + 0x60) = ecx_12 + eax_25
    int32_t ecx_14 = *(arg1 + 0x30)
    *(arg1 + 0x64) = adc.d(*(arg1 + 0x64), edx_8, ecx_12 + eax_25 u< ecx_12)
    int32_t var_3c_1
    int32_t var_2c_1
    
    if (ecx_14 == 0)
        var_2c_1 = 0
        var_3c_1 = ebp_2
    else
        var_2c_1 = ebp_2
        var_3c_1 = 0
    
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(eax + 4) s> 0)
        do
            int32_t eax_30 = *(arg1 + 0x28)
            
            if (*(arg1 + 0x24) == 0)
                int32_t ecx_27 = *(edi + 4)
                
                if (eax_30 == 0)
                    int32_t eax_73 = sub_40b2b0(ecx_27 - eax_1)
                    void* ecx_49 = *(*(arg1 + 8) + (i << 2)) + (var_3c_1 << 2)
                    void* var_c_2 = ecx_49
                    
                    if (edi_2 s> 0)
                        void* edx_50 = eax_73 + (edi_2 << 2) - 4
                        int32_t ebx_15 = *(*ebx + (i << 2)) - eax_73
                        int32_t var_20_7 = edi_2
                        void* eax_74 = eax_73 - ecx_49
                        void* var_c_3 = eax_74
                        
                        while (true)
                            float* eax_75 = eax_74 + ecx_49
                            edx_50 -= 4
                            ecx_49 += 4
                            bool cond:10_1 = var_20_7 != 1
                            var_20_7 -= 1
                            *(ecx_49 - 4) = fconvert.s(
                                fconvert.t(*(eax_75 + ebx_15)) * fconvert.t(*eax_75)
                                + fconvert.t(*(edx_50 + 4)) * fconvert.t(*(ecx_49 - 4)))
                            
                            if (not(cond:10_1))
                                break
                            
                            eax_74 = var_c_3
                        
                        ebx = arg2
                else
                    int32_t eax_54 = sub_40b2b0(ecx_27 - eax_1)
                    void* ebp_3 = *(*(arg1 + 8) + (i << 2)) + (var_3c_1 << 2)
                    int32_t eax_57
                    int32_t edx_27
                    edx_27:eax_57 = sx.q(ebp_2)
                    int32_t eax_60
                    int32_t edx_28
                    edx_28:eax_60 = sx.q(edi_2)
                    int32_t ecx_31 = (eax_57 - edx_27) s>> 1
                    int32_t eax_62 = (eax_60 - edx_28) s>> 1
                    int32_t edx_31 = 0
                    int32_t ecx_33 = *(*arg2 + (i_1 << 2)) + ((ecx_31 - eax_62) << 2)
                    
                    if (edi_2 s> 0)
                        void* ecx_34 = ebp_3
                        void* eax_65 = eax_54 + (edi_2 << 2) - 4
                        void* edx_35 = eax_54 - ebp_3
                        int32_t var_24_4 = edi_2
                        void* var_18_4 = edx_35
                        
                        while (true)
                            float* edx_36 = edx_35 + ecx_34
                            eax_65 -= 4
                            ecx_34 += 4
                            bool cond:11_1 = var_24_4 != 1
                            var_24_4 -= 1
                            *(ecx_34 - 4) = fconvert.s(
                                fconvert.t(*(edx_36 + ecx_33 - eax_54)) * fconvert.t(*edx_36)
                                + fconvert.t(*(eax_65 + 4)) * fconvert.t(*(ecx_34 - 4)))
                            
                            if (not(cond:11_1))
                                break
                            
                            edx_35 = var_18_4
                        
                        edx_31 = edi_2
                    
                    int32_t ecx_36 = ecx_31 + eax_62
                    
                    if (edx_31 s< ecx_36)
                        void* eax_67 = ebp_3 + (edx_31 << 2)
                        int32_t j_1 = ecx_36 - edx_31
                        int32_t j
                        
                        do
                            *eax_67 = *(ecx_33 - ebp_3 + eax_67)
                            eax_67 += 4
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                    
                    i = i_1
                    ebx = arg2
            else if (eax_30 == 0)
                int32_t eax_41 = sub_40b2b0(*(edi + 4) - eax_1)
                int32_t eax_43
                int32_t edx_20
                edx_20:eax_43 = sx.q(ebp_2)
                int32_t eax_46
                int32_t edx_21
                edx_21:eax_46 = sx.q(edi_2)
                void* eax_51 = *(*(arg1 + 8) + (i << 2))
                    + ((((eax_43 - edx_20) s>> 1) - ((eax_46 - edx_21) s>> 1) + var_3c_1) << 2)
                ebx = arg2
                void* var_20_3 = eax_51
                
                if (edi_2 s> 0)
                    void* edx_25 = eax_41 + (edi_2 << 2) - 4
                    int32_t ebx_7 = *(*ebx + (i << 2)) - eax_41
                    int32_t var_24_3 = edi_2
                    void* ecx_23 = eax_41 - eax_51
                    void* var_20_4 = ecx_23
                    
                    while (true)
                        float* ecx_24 = ecx_23 + eax_51
                        edx_25 -= 4
                        eax_51 += 4
                        bool cond:12_1 = var_24_3 != 1
                        var_24_3 -= 1
                        *(eax_51 - 4) = fconvert.s(
                            fconvert.t(*(ecx_24 + ebx_7)) * fconvert.t(*ecx_24)
                            + fconvert.t(*(edx_25 + 4)) * fconvert.t(*(eax_51 - 4)))
                        
                        if (not(cond:12_1))
                            break
                        
                        ecx_23 = var_20_4
                    
                    ebx = arg2
            else
                int32_t eax_33 = sub_40b2b0(*(edi + 8) - eax_1)
                void* ecx_19 = *(*(arg1 + 8) + (i << 2)) + (var_3c_1 << 2)
                void* var_24_1 = ecx_19
                
                if (ebp_2 s> 0)
                    void* var_30_1 = eax_33 + (ebp_2 << 2) - 4
                    int32_t edx_16 = *(*ebx + (i << 2)) - eax_33
                    void* eax_34 = eax_33 - ecx_19
                    int32_t var_24_2 = ebp_2
                    void* var_18_1 = eax_34
                    
                    while (true)
                        float* eax_35 = eax_34 + ecx_19
                        ecx_19 += 4
                        float* eax_36 = var_30_1
                        var_30_1 = eax_36 - 4
                        bool cond:13_1 = var_24_2 != 1
                        var_24_2 -= 1
                        *(ecx_19 - 4) = fconvert.s(
                            fconvert.t(*(eax_35 + edx_16)) * fconvert.t(*eax_35)
                            + fconvert.t(*eax_36) * fconvert.t(*(ecx_19 - 4)))
                        
                        if (not(cond:13_1))
                            break
                        
                        eax_34 = var_18_1
            
            int32_t* eax_69 = *(*(arg1 + 8) + (i << 2)) + (var_2c_1 << 2)
            int32_t* var_8_2 = eax_69
            
            if (eax_11 s> 0)
                int32_t* ecx_41 = *(*ebx + (i << 2)) + (eax_11 << 2) - eax_69
                int32_t var_20_6 = eax_11
                bool cond:14_1
                
                do
                    *eax_69 = *(ecx_41 + eax_69)
                    eax_69 = &eax_69[1]
                    cond:14_1 = var_20_6 != 1
                    var_20_6 -= 1
                while (cond:14_1)
            
            i += 1
            i_1 = i
        while (i s< *(eax + 4))
    
    int32_t ecx_42 = *(arg1 + 0x30)
    int32_t ecx_43 = neg.d(ecx_42)
    bool cond:1_1 = *(arg1 + 0x18) != 0xffffffff
    *(arg1 + 0x30) = not.d(sbb.d(ecx_43, ecx_43, ecx_42 != 0)) & ebp_2
    
    if (cond:1_1)
        int32_t eax_78 = *(arg1 + 0x24)
        *(arg1 + 0x18) = var_3c_1
        int32_t eax_80
        int32_t edx_52
        edx_52:eax_80 = sx.q(ebp[eax_78])
        int32_t eax_83
        int32_t edx_55
        edx_55:eax_83 = sx.q(ebp[*(arg1 + 0x28)])
        *(arg1 + 0x14) = ((((eax_80 + (edx_52 & 3)) s>> 2) + ((eax_83 + (edx_55 & 3)) s>> 2))
            s>> eax_1.b) + var_3c_1
    else
        *(arg1 + 0x18) = var_2c_1
        *(arg1 + 0x14) = var_2c_1

if ((*(edi + 0x80) & *(edi + 0x84)) != 0xffffffff)
    int32_t eax_91
    int32_t edx_57
    edx_57:eax_91 = sx.q(ebp[*(arg1 + 0x24)])
    int32_t eax_94
    int32_t edx_60
    edx_60:eax_94 = sx.q(ebp[*(arg1 + 0x28)])
    int32_t ecx_55 = *(edi + 0x80)
    int32_t eax_98
    int32_t edx_62
    edx_62:eax_98 = sx.q(((eax_94 + (edx_60 & 3)) s>> 2) + ((eax_91 + (edx_57 & 3)) s>> 2))
    int32_t edx_63 = adc.d(edx_62, *(edi + 0x84), eax_98 + ecx_55 u< eax_98)
    *(edi + 0x80) = eax_98 + ecx_55
    *(edi + 0x84) = edx_63
else
    *(edi + 0x80) = 0
    *(edi + 0x84) = 0

int32_t ecx_57 = *(arg1 + 0x38)

if ((ecx_57 & *(arg1 + 0x3c)) != 0xffffffff)
    int32_t eax_110
    int32_t edx_73
    edx_73:eax_110 = sx.q(ebp[*(arg1 + 0x24)])
    int32_t eax_113
    int32_t edx_76
    edx_76:eax_113 = sx.q(ebp[*(arg1 + 0x28)])
    int32_t eax_117
    int32_t edx_78
    edx_78:eax_117 = sx.q(((eax_113 + (edx_76 & 3)) s>> 2) + ((eax_110 + (edx_73 & 3)) s>> 2))
    int32_t edx_79 = adc.d(edx_78, *(arg1 + 0x3c), eax_117 + ecx_57 u< eax_117)
    *(arg1 + 0x38) = eax_117 + ecx_57
    *(arg1 + 0x3c) = edx_79
    int32_t eax_119 = ebx[0xc]
    int32_t ecx_63 = ebx[0xd]
    
    if ((eax_119 & ecx_63) != 0xffffffff)
        int32_t edx_82 = *(arg1 + 0x38)
        int32_t edi_13 = *(arg1 + 0x3c)
        
        if (edx_82 != eax_119 || edi_13 != ecx_63)
            if (edi_13 s>= ecx_63 && (edi_13 s> ecx_63 || edx_82 u> eax_119))
                int32_t eax_120 = *(arg1 + 0x38)
                int32_t ecx_64 = ebx[0xc]
                
                if (eax_120 != ecx_64 && ebx[0xb] != 0)
                    *(arg1 + 0x14) -= (eax_120 - ecx_64) s>> eax_1.b
            
            *(arg1 + 0x38) = ebx[0xc]
            *(arg1 + 0x3c) = ebx[0xd]
else
    int32_t eax_101 = ebx[0xc]
    int32_t ecx_58 = ebx[0xd]
    
    if ((eax_101 & ecx_58) != 0xffffffff)
        *(arg1 + 0x38) = eax_101
        *(arg1 + 0x3c) = ecx_58
        int32_t eax_102 = *(edi + 0x80)
        int32_t edi_8 = *(edi + 0x84)
        int32_t edx_68 = *(arg1 + 0x38)
        
        if (edi_8 s>= ecx_58 && (edi_8 s> ecx_58 || eax_102 u> edx_68))
            if (ebx[0xb] == 0)
                int32_t eax_106 =
                    __allshr(eax_102 - edx_68, sbb.d(edi_8, ecx_58, eax_102 u< edx_68), eax_1.b)
                int32_t edi_10 = *(arg1 + 0x18) + eax_106
                int32_t eax_107 = *(arg1 + 0x14)
                *(arg1 + 0x18) = edi_10
                
                if (edi_10 s> eax_107)
                    *(arg1 + 0x18) = eax_107
            else
                int32_t eax_104 =
                    __allshr(eax_102 - edx_68, sbb.d(edi_8, ecx_58, eax_102 u< edx_68), eax_1.b)
                *(arg1 + 0x14) -= eax_104

if (ebx[0xb] != 0)
    *(arg1 + 0x20) = 1

return 0
