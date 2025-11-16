// 函数: sub_6e80f0
// 地址: 0x6e80f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax_1 = arg5 * 3
char* var_10 = arg3
char* var_18 = arg3
uint32_t esi = zx.d(*(arg7 + 0xadbfac))
int32_t i_3 = 0
int32_t ebx
ebx.b = esi s< eax_1
void* ebx_3 = (neg.d(ebx) & (esi - eax_1)) + eax_1
char* ecx = arg3 - (neg.d(not.d(arg4 u>> 2) & 1) & arg2)
uint32_t eax_8 = zx.d(*(arg7 + 0xadbd34))
int32_t edi_1 = arg6
char* var_20 = ecx
int32_t eax_12 = not.d(arg4 u>> 3) & 1
char* var_8 = ecx
void var_140
void* var_14 = &var_140
int32_t i

do
    int32_t eax_16
    int32_t edx
    edx:eax_16 = sx.q(zx.d(*var_18) - zx.d(*ecx))
    int32_t ecx_3
    
    if (arg5 - (((eax_16 ^ edx) - edx) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_4
        ecx_4.b = ebx_3 s< arg5 - (((eax_16 ^ edx) - edx) << eax_8.b) + 0x20
        void* eax_23 = ((ebx_3 - (arg5 - (((eax_16 ^ edx) - edx) << eax_8.b) + 0x20))
            & neg.d(ecx_4)) + arg5 - (((eax_16 ^ edx) - edx) << eax_8.b) + 0x20
        int32_t ecx_6
        ecx_6.b = eax_23 s> 0
        ecx_3 = neg.d(neg.d(ecx_6) & neg.d(eax_23))
    else
        ecx_3 = edi_1
    
    *(var_14 - 4) = ecx_3
    int32_t eax_30
    int32_t edx_4
    edx_4:eax_30 = sx.q(zx.d(var_18[1]) - zx.d(var_8[1]))
    int32_t ecx_11
    
    if (arg5 - (((eax_30 ^ edx_4) - edx_4) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_12
        ecx_12.b = ebx_3 s< arg5 - (((eax_30 ^ edx_4) - edx_4) << eax_8.b) + 0x20
        void* eax_37 = ((ebx_3 - (arg5 - (((eax_30 ^ edx_4) - edx_4) << eax_8.b) + 0x20))
            & neg.d(ecx_12)) + arg5 - (((eax_30 ^ edx_4) - edx_4) << eax_8.b) + 0x20
        int32_t ecx_14
        ecx_14.b = eax_37 s> 0
        ecx_11 = neg.d(neg.d(ecx_14) & neg.d(eax_37))
    else
        ecx_11 = edi_1
    
    *var_14 = ecx_11
    int32_t eax_44
    int32_t edx_8
    edx_8:eax_44 = sx.q(zx.d(var_18[2]) - zx.d(var_8[2]))
    int32_t ecx_19
    
    if (arg5 - (((eax_44 ^ edx_8) - edx_8) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_20
        ecx_20.b = ebx_3 s< arg5 - (((eax_44 ^ edx_8) - edx_8) << eax_8.b) + 0x20
        void* eax_51 = ((ebx_3 - (arg5 - (((eax_44 ^ edx_8) - edx_8) << eax_8.b) + 0x20))
            & neg.d(ecx_20)) + arg5 - (((eax_44 ^ edx_8) - edx_8) << eax_8.b) + 0x20
        int32_t ecx_22
        ecx_22.b = eax_51 s> 0
        ecx_19 = neg.d(neg.d(ecx_22) & neg.d(eax_51))
    else
        ecx_19 = edi_1
    
    *(var_14 + 4) = ecx_19
    int32_t eax_58
    int32_t edx_12
    edx_12:eax_58 = sx.q(zx.d(var_18[3]) - zx.d(var_8[3]))
    int32_t ecx_27
    
    if (arg5 - (((eax_58 ^ edx_12) - edx_12) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_28
        ecx_28.b = ebx_3 s< arg5 - (((eax_58 ^ edx_12) - edx_12) << eax_8.b) + 0x20
        void* eax_65 = ((ebx_3 - (arg5 - (((eax_58 ^ edx_12) - edx_12) << eax_8.b) + 0x20))
            & neg.d(ecx_28)) + arg5 - (((eax_58 ^ edx_12) - edx_12) << eax_8.b) + 0x20
        int32_t ecx_30
        ecx_30.b = eax_65 s> 0
        ecx_27 = neg.d(neg.d(ecx_30) & neg.d(eax_65))
    else
        ecx_27 = edi_1
    
    *(var_14 + 8) = ecx_27
    int32_t eax_72
    int32_t edx_16
    edx_16:eax_72 = sx.q(zx.d(var_18[4]) - zx.d(var_8[4]))
    int32_t ecx_35
    
    if (arg5 - (((eax_72 ^ edx_16) - edx_16) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_36
        ecx_36.b = ebx_3 s< arg5 - (((eax_72 ^ edx_16) - edx_16) << eax_8.b) + 0x20
        void* eax_79 = ((ebx_3 - (arg5 - (((eax_72 ^ edx_16) - edx_16) << eax_8.b) + 0x20))
            & neg.d(ecx_36)) + arg5 - (((eax_72 ^ edx_16) - edx_16) << eax_8.b) + 0x20
        int32_t ecx_38
        ecx_38.b = eax_79 s> 0
        ecx_35 = neg.d(neg.d(ecx_38) & neg.d(eax_79))
    else
        ecx_35 = edi_1
    
    *(var_14 + 0xc) = ecx_35
    int32_t eax_86
    int32_t edx_20
    edx_20:eax_86 = sx.q(zx.d(var_18[5]) - zx.d(var_8[5]))
    int32_t ecx_43
    
    if (arg5 - (((eax_86 ^ edx_20) - edx_20) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_44
        ecx_44.b = ebx_3 s< arg5 - (((eax_86 ^ edx_20) - edx_20) << eax_8.b) + 0x20
        void* eax_93 = ((ebx_3 - (arg5 - (((eax_86 ^ edx_20) - edx_20) << eax_8.b) + 0x20))
            & neg.d(ecx_44)) + arg5 - (((eax_86 ^ edx_20) - edx_20) << eax_8.b) + 0x20
        int32_t ecx_46
        ecx_46.b = eax_93 s> 0
        ecx_43 = neg.d(neg.d(ecx_46) & neg.d(eax_93))
    else
        ecx_43 = edi_1
    
    *(var_14 + 0x10) = ecx_43
    int32_t eax_100
    int32_t edx_24
    edx_24:eax_100 = sx.q(zx.d(var_18[6]) - zx.d(var_8[6]))
    int32_t ecx_51
    
    if (arg5 - (((eax_100 ^ edx_24) - edx_24) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_52
        ecx_52.b = ebx_3 s< arg5 - (((eax_100 ^ edx_24) - edx_24) << eax_8.b) + 0x20
        void* eax_107 = ((ebx_3 - (arg5 - (((eax_100 ^ edx_24) - edx_24) << eax_8.b) + 0x20))
            & neg.d(ecx_52)) + arg5 - (((eax_100 ^ edx_24) - edx_24) << eax_8.b) + 0x20
        int32_t ecx_54
        ecx_54.b = eax_107 s> 0
        ecx_51 = neg.d(neg.d(ecx_54) & neg.d(eax_107))
    else
        ecx_51 = edi_1
    
    *(var_14 + 0x14) = ecx_51
    int32_t eax_114
    int32_t edx_28
    edx_28:eax_114 = sx.q(zx.d(var_18[7]) - zx.d(var_8[7]))
    int32_t ecx_59
    
    if (arg5 - (((eax_114 ^ edx_28) - edx_28) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_60
        ecx_60.b = ebx_3 s< arg5 - (((eax_114 ^ edx_28) - edx_28) << eax_8.b) + 0x20
        void* eax_121 = ((ebx_3 - (arg5 - (((eax_114 ^ edx_28) - edx_28) << eax_8.b) + 0x20))
            & neg.d(ecx_60)) + arg5 - (((eax_114 ^ edx_28) - edx_28) << eax_8.b) + 0x20
        int32_t ecx_62
        ecx_62.b = eax_121 s> 0
        ecx_59 = neg.d(neg.d(ecx_62) & neg.d(eax_121))
    else
        ecx_59 = edi_1
    
    int32_t eax_123
    eax_123.b = i_3 s< 7
    *(var_14 + 0x18) = ecx_59
    var_8 = var_18
    i = i_3 + 1
    var_18 = &var_18[neg.d(eax_123 | eax_12) & arg2]
    ecx = var_8
    i_3 = i
    var_14 += 0x20
while (i s< 9)
int32_t esi_5 = not.d(arg4) & 1
char* var_1c = var_10
void* esi_7 = var_10 - esi_5
char* ecx_67 = var_10
void* eax_131 = not.d(arg4 u>> 1) & 1
int32_t i_5 = 0
void var_260
void* var_8_1 = &var_260
int32_t i_1

do
    int32_t eax_134
    int32_t edx_35
    edx_35:eax_134 = sx.q(zx.d(*ecx_67) - zx.d(*esi_7))
    int32_t ecx_70
    
    if (arg5 - (((eax_134 ^ edx_35) - edx_35) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_71
        ecx_71.b = ebx_3 s< arg5 - (((eax_134 ^ edx_35) - edx_35) << eax_8.b) + 0x20
        void* eax_141 = ((ebx_3 - (arg5 - (((eax_134 ^ edx_35) - edx_35) << eax_8.b) + 0x20))
            & neg.d(ecx_71)) + arg5 - (((eax_134 ^ edx_35) - edx_35) << eax_8.b) + 0x20
        int32_t ecx_73
        ecx_73.b = eax_141 s> 0
        ecx_70 = neg.d(neg.d(ecx_73) & neg.d(eax_141))
    else
        ecx_70 = edi_1
    
    void* esi_8 = esi_7 + arg2
    void* edi_3 = &var_1c[arg2]
    *(var_8_1 - 4) = ecx_70
    int32_t eax_146
    int32_t edx_39
    edx_39:eax_146 = sx.q(zx.d(*edi_3) - zx.d(*esi_8))
    int32_t ecx_78
    
    if (arg5 - (((eax_146 ^ edx_39) - edx_39) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_79
        ecx_79.b = ebx_3 s< arg5 - (((eax_146 ^ edx_39) - edx_39) << eax_8.b) + 0x20
        void* eax_153 = ((ebx_3 - (arg5 - (((eax_146 ^ edx_39) - edx_39) << eax_8.b) + 0x20))
            & neg.d(ecx_79)) + arg5 - (((eax_146 ^ edx_39) - edx_39) << eax_8.b) + 0x20
        int32_t ecx_81
        ecx_81.b = eax_153 s> 0
        ecx_78 = neg.d(neg.d(ecx_81) & neg.d(eax_153))
    else
        ecx_78 = arg6
    
    void* esi_9 = esi_8 + arg2
    void* edi_4 = edi_3 + arg2
    *var_8_1 = ecx_78
    int32_t eax_158
    int32_t edx_43
    edx_43:eax_158 = sx.q(zx.d(*edi_4) - zx.d(*esi_9))
    int32_t ecx_86
    
    if (arg5 - (((eax_158 ^ edx_43) - edx_43) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_87
        ecx_87.b = ebx_3 s< arg5 - (((eax_158 ^ edx_43) - edx_43) << eax_8.b) + 0x20
        void* eax_165 = ((ebx_3 - (arg5 - (((eax_158 ^ edx_43) - edx_43) << eax_8.b) + 0x20))
            & neg.d(ecx_87)) + arg5 - (((eax_158 ^ edx_43) - edx_43) << eax_8.b) + 0x20
        int32_t ecx_89
        ecx_89.b = eax_165 s> 0
        ecx_86 = neg.d(neg.d(ecx_89) & neg.d(eax_165))
    else
        ecx_86 = arg6
    
    void* esi_10 = esi_9 + arg2
    void* edi_5 = edi_4 + arg2
    *(var_8_1 + 4) = ecx_86
    int32_t eax_170
    int32_t edx_47
    edx_47:eax_170 = sx.q(zx.d(*edi_5) - zx.d(*esi_10))
    int32_t ecx_94
    
    if (arg5 - (((eax_170 ^ edx_47) - edx_47) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_95
        ecx_95.b = ebx_3 s< arg5 - (((eax_170 ^ edx_47) - edx_47) << eax_8.b) + 0x20
        void* eax_177 = ((ebx_3 - (arg5 - (((eax_170 ^ edx_47) - edx_47) << eax_8.b) + 0x20))
            & neg.d(ecx_95)) + arg5 - (((eax_170 ^ edx_47) - edx_47) << eax_8.b) + 0x20
        int32_t ecx_97
        ecx_97.b = eax_177 s> 0
        ecx_94 = neg.d(neg.d(ecx_97) & neg.d(eax_177))
    else
        ecx_94 = arg6
    
    void* esi_11 = esi_10 + arg2
    void* edi_6 = edi_5 + arg2
    *(var_8_1 + 8) = ecx_94
    int32_t eax_182
    int32_t edx_51
    edx_51:eax_182 = sx.q(zx.d(*edi_6) - zx.d(*esi_11))
    int32_t ecx_102
    
    if (arg5 - (((eax_182 ^ edx_51) - edx_51) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_103
        ecx_103.b = ebx_3 s< arg5 - (((eax_182 ^ edx_51) - edx_51) << eax_8.b) + 0x20
        void* eax_189 = ((ebx_3 - (arg5 - (((eax_182 ^ edx_51) - edx_51) << eax_8.b) + 0x20))
            & neg.d(ecx_103)) + arg5 - (((eax_182 ^ edx_51) - edx_51) << eax_8.b) + 0x20
        int32_t ecx_105
        ecx_105.b = eax_189 s> 0
        ecx_102 = neg.d(neg.d(ecx_105) & neg.d(eax_189))
    else
        ecx_102 = arg6
    
    void* esi_12 = esi_11 + arg2
    void* edi_7 = edi_6 + arg2
    *(var_8_1 + 0xc) = ecx_102
    int32_t eax_194
    int32_t edx_55
    edx_55:eax_194 = sx.q(zx.d(*edi_7) - zx.d(*esi_12))
    int32_t ecx_110
    
    if (arg5 - (((eax_194 ^ edx_55) - edx_55) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_111
        ecx_111.b = ebx_3 s< arg5 - (((eax_194 ^ edx_55) - edx_55) << eax_8.b) + 0x20
        void* eax_201 = ((ebx_3 - (arg5 - (((eax_194 ^ edx_55) - edx_55) << eax_8.b) + 0x20))
            & neg.d(ecx_111)) + arg5 - (((eax_194 ^ edx_55) - edx_55) << eax_8.b) + 0x20
        int32_t ecx_113
        ecx_113.b = eax_201 s> 0
        ecx_110 = neg.d(neg.d(ecx_113) & neg.d(eax_201))
    else
        ecx_110 = arg6
    
    void* esi_13 = esi_12 + arg2
    void* edi_8 = edi_7 + arg2
    *(var_8_1 + 0x10) = ecx_110
    int32_t eax_206
    int32_t edx_59
    edx_59:eax_206 = sx.q(zx.d(*edi_8) - zx.d(*esi_13))
    int32_t ecx_118
    
    if (arg5 - (((eax_206 ^ edx_59) - edx_59) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_119
        ecx_119.b = ebx_3 s< arg5 - (((eax_206 ^ edx_59) - edx_59) << eax_8.b) + 0x20
        void* eax_213 = ((ebx_3 - (arg5 - (((eax_206 ^ edx_59) - edx_59) << eax_8.b) + 0x20))
            & neg.d(ecx_119)) + arg5 - (((eax_206 ^ edx_59) - edx_59) << eax_8.b) + 0x20
        int32_t ecx_121
        ecx_121.b = eax_213 s> 0
        ecx_118 = neg.d(neg.d(ecx_121) & neg.d(eax_213))
    else
        ecx_118 = arg6
    
    *(var_8_1 + 0x14) = ecx_118
    edi_1 = arg6
    int32_t eax_219
    int32_t edx_63
    edx_63:eax_219 = sx.q(zx.d(*(edi_8 + arg2)) - zx.d(*(esi_13 + arg2)))
    int32_t ecx_126
    
    if (arg5 - (((eax_219 ^ edx_63) - edx_63) << eax_8.b) + 0x20 s>= 0xffffffc0)
        int32_t ecx_127
        ecx_127.b = ebx_3 s< arg5 - (((eax_219 ^ edx_63) - edx_63) << eax_8.b) + 0x20
        void* eax_226 = ((ebx_3 - (arg5 - (((eax_219 ^ edx_63) - edx_63) << eax_8.b) + 0x20))
            & neg.d(ecx_127)) + arg5 - (((eax_219 ^ edx_63) - edx_63) << eax_8.b) + 0x20
        int32_t ecx_129
        ecx_129.b = eax_226 s> 0
        ecx_126 = neg.d(neg.d(ecx_129) & neg.d(eax_226))
    else
        ecx_126 = edi_1
    
    int32_t eax_228
    eax_228.b = i_5 s< 7
    *(var_8_1 + 0x18) = ecx_126
    esi_7 = var_1c
    ecx_67 = &var_1c[eax_228 | eax_131]
    var_8_1 += 0x20
    i_1 = i_5 + 1
    var_1c = ecx_67
    i_5 = i_1
while (i_1 s< 9)
void var_224
void* ecx_133 = &var_224
char* edi_9 = var_10
int32_t i_4 = 0
arg5 = &edi_9[arg2]
arg4 = &var_224
arg7 = &edi_9[2]
void var_124
void* var_8_2 = &var_124
void var_120
void* var_c_1 = &var_120
int32_t result
int32_t i_2

do
    int32_t ecx_134 = *(ecx_133 - 0x40)
    int32_t edi_13 = *(arg4 - 0x20)
    int32_t eax_246 = (zx.d(*var_10) * (0x80 - ecx_134 - *(var_8_2 - 0x20) - *var_8_2 - edi_13)
        + zx.d(*(edi_9 - esi_5)) * ecx_134 + 0x40 + zx.d(*var_20) * *(var_8_2 - 0x20)
        + zx.d(*arg5) * *var_8_2 + zx.d(var_10[1]) * edi_13) s>> 7
    char* ecx_135
    ecx_135.b = eax_246 s> 0xff
    ecx_135.b = neg.b(ecx_135.b)
    ecx_135.b |= eax_246.b
    eax_246.b = eax_246 s< 0
    eax_246.b -= 1
    ecx_135.b &= eax_246.b
    *(arg7 - 2) = ecx_135.b
    int32_t edi_15 = *arg4
    int32_t edx_81 = zx.d(*var_10) * edi_13 + 0x40 + zx.d(var_20[1]) * *(var_c_1 - 0x20)
        + zx.d(*(arg5 + 1)) * *var_c_1 + zx.d(var_10[2]) * edi_15
    int32_t eax_260 =
        (zx.d(var_10[1]) * (0x80 - edi_13 - *(var_c_1 - 0x20) - *var_c_1 - edi_15) + edx_81) s>> 7
    char* ecx_136
    ecx_136.b = eax_260 s> 0xff
    ecx_136.b = neg.b(ecx_136.b)
    ecx_136.b |= eax_260.b
    eax_260.b = eax_260 s< 0
    eax_260.b -= 1
    ecx_136.b &= eax_260.b
    *(arg7 - 1) = ecx_136.b
    int32_t edi_17 = *(arg4 + 0x20)
    int32_t edx_88 = zx.d(var_10[1]) * edi_15 + 0x40 + zx.d(var_20[2]) * *(var_c_1 - 0x1c)
        + zx.d(*(arg5 + 2)) * *(var_c_1 + 4) + zx.d(var_10[3]) * edi_17
    int32_t eax_274 = (
        zx.d(var_10[2]) * (0x80 - edi_15 - *(var_c_1 - 0x1c) - *(var_c_1 + 4) - edi_17) + edx_88) s>> 7
    char* ecx_137
    ecx_137.b = eax_274 s> 0xff
    ecx_137.b = neg.b(ecx_137.b)
    ecx_137.b |= eax_274.b
    eax_274.b = eax_274 s< 0
    eax_274.b -= 1
    ecx_137.b &= eax_274.b
    *arg7 = ecx_137.b
    int32_t edi_19 = *(arg4 + 0x40)
    int32_t edx_95 = zx.d(var_10[2]) * edi_17 + 0x40 + zx.d(var_20[3]) * *(var_c_1 - 0x18)
        + zx.d(*(arg5 + 3)) * *(var_c_1 + 8) + zx.d(var_10[4]) * edi_19
    int32_t eax_288 = (
        zx.d(var_10[3]) * (0x80 - edi_17 - *(var_c_1 - 0x18) - *(var_c_1 + 8) - edi_19) + edx_95) s>> 7
    char* ecx_138
    ecx_138.b = eax_288 s> 0xff
    ecx_138.b = neg.b(ecx_138.b)
    ecx_138.b |= eax_288.b
    eax_288.b = eax_288 s< 0
    eax_288.b -= 1
    ecx_138.b &= eax_288.b
    *(arg7 + 1) = ecx_138.b
    int32_t edi_21 = *(arg4 + 0x60)
    int32_t edx_102 = zx.d(var_10[3]) * edi_19 + 0x40 + zx.d(var_20[4]) * *(var_c_1 - 0x14)
        + zx.d(*(arg5 + 4)) * *(var_c_1 + 0xc) + zx.d(var_10[5]) * edi_21
    int32_t eax_302 = (
        zx.d(var_10[4]) * (0x80 - edi_19 - *(var_c_1 - 0x14) - *(var_c_1 + 0xc) - edi_21) + edx_102)
        s>> 7
    char* ecx_139
    ecx_139.b = eax_302 s> 0xff
    ecx_139.b = neg.b(ecx_139.b)
    ecx_139.b |= eax_302.b
    eax_302.b = eax_302 s< 0
    eax_302.b -= 1
    ecx_139.b &= eax_302.b
    *(arg7 + 2) = ecx_139.b
    int32_t edi_23 = *(arg4 + 0x80)
    int32_t edx_109 = zx.d(var_10[4]) * edi_21 + 0x40 + zx.d(var_20[5]) * *(var_c_1 - 0x10)
        + zx.d(*(arg5 + 5)) * *(var_c_1 + 0x10) + zx.d(var_10[6]) * edi_23
    int32_t eax_316 = (
        zx.d(var_10[5]) * (0x80 - edi_21 - *(var_c_1 - 0x10) - *(var_c_1 + 0x10) - edi_23)
        + edx_109) s>> 7
    char* ecx_140
    ecx_140.b = eax_316 s> 0xff
    ecx_140.b = neg.b(ecx_140.b)
    ecx_140.b |= eax_316.b
    eax_316.b = eax_316 s< 0
    eax_316.b -= 1
    ecx_140.b &= eax_316.b
    *(arg7 + 3) = ecx_140.b
    int32_t edi_25 = *(arg4 + 0xa0)
    int32_t edx_116 = zx.d(var_10[5]) * edi_23 + 0x40 + zx.d(var_20[6]) * *(var_c_1 - 0xc)
        + zx.d(*(arg5 + 6)) * *(var_c_1 + 0x14) + zx.d(var_10[7]) * edi_25
    int32_t eax_330 = (
        zx.d(var_10[6]) * (0x80 - edi_23 - *(var_c_1 - 0xc) - *(var_c_1 + 0x14) - edi_25) + edx_116)
        s>> 7
    char* ecx_141
    ecx_141.b = eax_330 s> 0xff
    ecx_141.b = neg.b(ecx_141.b)
    ecx_141.b |= eax_330.b
    eax_330.b = eax_330 s< 0
    eax_330.b -= 1
    ecx_141.b &= eax_330.b
    *(arg7 + 4) = ecx_141.b
    int32_t edx_121 = zx.d(var_10[6]) * edi_25 + 0x40 + zx.d(var_20[7]) * *(var_8_2 - 4)
    var_20 = var_10
    int32_t ecx_142 = *(arg4 + 0xc0)
    int32_t eax_344 =
        zx.d(var_10[7]) * (0x80 - edi_25 - *(var_8_2 - 4) - *(var_8_2 + 0x1c) - ecx_142) + edx_121
        + zx.d(*(arg5 + 7)) * *(var_8_2 + 0x1c) + zx.d(*(eax_131 + 7 + var_10)) * ecx_142
    int32_t eax_345 = eax_344 s>> 7
    ecx_142.b = eax_345 s> 0xff
    ecx_142.b = neg.b(ecx_142.b)
    ecx_142.b |= eax_345.b
    eax_345.b = eax_345 s< 0
    eax_345.b -= 1
    ecx_142.b &= eax_345.b
    *(arg7 + 5) = ecx_142.b
    edi_9 = arg5
    arg7 += arg2
    var_10 = edi_9
    int32_t eax_348
    eax_348.b = i_4 s< 6
    i_2 = i_4 + 1
    i_4 = i_2
    result = neg.d(eax_348 | eax_12) & arg2
    var_c_1 += 0x20
    arg5 += result
    var_8_2 += 0x20
    ecx_133 = arg4 + 4
    arg4 = ecx_133
while (i_2 s< 8)
return result
