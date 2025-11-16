// 函数: sub_4900de
// 地址: 0x4900de
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = *arg4
int64_t st1 = arg4[1]
int64_t var_a8 = st0
int64_t var_a0 = st1
int64_t st4 = *arg5
int64_t st5 = arg5[1]
int64_t var_98 = st4
int64_t temp0 = __pfadd_mmxq_mmxq(st0, st4)
int64_t var_90 = st5
int64_t temp0_1 = __pfadd_mmxq_mmxq(st1, st5)
int64_t temp0_2 = __pfsub_mmxq_mmxq(st0, st4)
int64_t temp0_3 = __pfmul_mmxq_mmxq(temp0, temp0)
int64_t temp0_4 = __pfsub_mmxq_mmxq(st1, st5)
int64_t temp0_5 = __pfmul_mmxq_mmxq(temp0_1, temp0_1)
int64_t temp0_6 = __pfmul_mmxq_mmxq(temp0_2, temp0_2)
int64_t temp0_7 = __pfmul_mmxq_mmxq(temp0_4, temp0_4)
int64_t temp0_8 = __pfadd_mmxq_mmxq(temp0_3, temp0_5)
int64_t temp0_9 = __pfadd_mmxq_mmxq(temp0_6, temp0_7)
int64_t st6 = *arg6
int64_t st7 = arg6[1]
int64_t var_88 = st6
int64_t var_80 = st7
int64_t temp0_10 = __pfadd_mmxq_mmxq(st4, st6)
int64_t temp0_11 = __pfadd_mmxq_mmxq(st5, st7)
int64_t temp0_12 = __pfsub_mmxq_mmxq(st4, st6)
int64_t temp0_13 = __pfsub_mmxq_mmxq(st5, st7)
int64_t temp0_14 = __pfmul_mmxq_mmxq(temp0_10, temp0_10)
int64_t temp0_15 = __pfmul_mmxq_mmxq(temp0_11, temp0_11)
int64_t temp0_16 = __pfmul_mmxq_mmxq(temp0_12, temp0_12)
int64_t temp0_17 = __pfmul_mmxq_mmxq(temp0_13, temp0_13)
int64_t temp0_18 = __pfadd_mmxq_mmxq(temp0_14, temp0_15)
int64_t temp0_19 = __pfadd_mmxq_mmxq(temp0_16, temp0_17)
int64_t temp0_20 = __pfacc_mmxq_mmxq(temp0_8, temp0_18)
int64_t temp0_22 = __pfcmpgt_mmxq_mmxq(__pfacc_mmxq_mmxq(temp0_9, temp0_19), temp0_20)
int32_t eax = _m_packsswb(temp0_22, temp0_22).d

if ((eax & 1) != 0)
    var_a8 = -0x7fffffff80000000 ^ *arg4
    var_a0 = -0x7fffffff80000000 ^ arg4[1]

if ((eax & 0x10000) != 0)
    var_88 = -0x7fffffff80000000 ^ *arg6
    var_80 = -0x7fffffff80000000 ^ arg6[1]

st1 = *arg7
st4 = arg7[1]
int64_t temp0_24 = __pfadd_mmxq_mmxq(var_88, st1)
int64_t var_78 = st1
int64_t temp0_25 = __pfadd_mmxq_mmxq(var_80, st4)
int64_t var_70 = st4
int64_t temp0_26 = __pfsub_mmxq_mmxq(var_88, st1)
int64_t temp0_27 = __pfsub_mmxq_mmxq(var_80, st4)
int64_t temp0_28 = __pfmul_mmxq_mmxq(temp0_24, temp0_24)
int64_t temp0_29 = __pfmul_mmxq_mmxq(temp0_25, temp0_25)
int64_t temp0_30 = __pfmul_mmxq_mmxq(temp0_26, temp0_26)
int64_t temp0_31 = __pfmul_mmxq_mmxq(temp0_27, temp0_27)
int64_t temp0_32 = __pfadd_mmxq_mmxq(temp0_28, temp0_29)
int64_t temp0_33 = __pfadd_mmxq_mmxq(temp0_30, temp0_31)
int64_t temp0_34 = __pfacc_mmxq_mmxq(temp0_32, temp0_32)

if ((__pfcmpgt_mmxq_mmxq(__pfacc_mmxq_mmxq(temp0_33, temp0_33), temp0_34).d & 1) != 0)
    var_78 = -0x7fffffff80000000 ^ *arg7
    var_70 = -0x7fffffff80000000 ^ arg7[1]

int64_t temp0_39 =
    __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(var_98, var_98), __pfmul_mmxq_mmxq(var_90, var_90))
int64_t temp0_40 = __pfacc_mmxq_mmxq(temp0_39, temp0_39)
int64_t temp0_41 = __pfrcp_mmxq_mmxq(st4, temp0_40)
int64_t temp0_42 = __pfcmpgt_mmxq_memq(temp0_40, 0x80000000800000)
int64_t temp0_44 = __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_40, temp0_41), temp0_41)
int64_t temp0_45 = __pfmul_mmxq_mmxq((var_98 ^ 0x8000000080000000) & temp0_42, temp0_44)
int64_t temp0_46 = __pfmul_mmxq_mmxq((var_90 ^ 0x80000000) & temp0_42, temp0_44)
int64_t temp0_47 = _m_punpckhdq(var_a8, var_a8.d)
int64_t temp0_48 = _m_punpckhdq(var_a0, var_a0.d)
st4 = _m_punpckldq(temp0_47, var_a8.d)
st5 = _m_punpckldq(temp0_48, var_a0.d)
int64_t temp0_51 = __pfmul_mmxq_mmxq(var_a8, temp0_46)
int64_t temp0_52 = __pfmul_mmxq_mmxq(var_a0, temp0_45)
int64_t temp0_53 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, temp0_45)
int64_t temp0_54 = __pfmul_mmxq_mmxq(st4, temp0_46)
int64_t temp0_55 = __pfadd_mmxq_mmxq(temp0_51 ^ 0x80000000, temp0_52)
int64_t temp0_56 = __pfsub_mmxq_mmxq(temp0_54, temp0_53)
int64_t temp0_57 = __pfmul_mmxq_mmxq(st5, temp0_46)
int64_t temp0_58 = __pfacc_mmxq_mmxq(temp0_56, temp0_55)
int64_t temp0_59 = __pfmul_mmxq_mmxq(st4 ^ 0x80000000, temp0_45)
int64_t temp0_60 = __pfmul_mmxq_mmxq(var_a8, temp0_45)
int64_t temp0_61 = __pfmul_mmxq_mmxq(var_a0 ^ 0x80000000, temp0_46)
int64_t temp0_64 =
    __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_59, temp0_57), __pfsub_mmxq_mmxq(temp0_61, temp0_60))
int64_t temp0_65 = _m_punpckhdq(var_88, var_88.d)
int64_t temp0_66 = _m_punpckhdq(var_80, var_80.d)
st4 = _m_punpckldq(temp0_65, var_88.d)
st5 = _m_punpckldq(temp0_66, var_80.d)
int64_t temp0_69 = __pfmul_mmxq_mmxq(var_88, temp0_46)
int64_t temp0_70 = __pfmul_mmxq_mmxq(var_80, temp0_45)
int64_t temp0_71 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, temp0_45)
int64_t temp0_72 = __pfmul_mmxq_mmxq(st4, temp0_46)
int64_t temp0_73 = __pfadd_mmxq_mmxq(temp0_69 ^ 0x80000000, temp0_70)
int64_t temp0_74 = __pfsub_mmxq_mmxq(temp0_72, temp0_71)
int64_t temp0_75 = __pfmul_mmxq_mmxq(st5, temp0_46)
st6 = st4 ^ 0x80000000
st4 = __pfacc_mmxq_mmxq(temp0_74, temp0_73)
int64_t temp0_77 = __pfmul_mmxq_mmxq(st6, temp0_45)
int64_t temp0_78 = __pfmul_mmxq_mmxq(var_88, temp0_45)
int64_t var_18 = st4
int64_t temp0_79 = __pfmul_mmxq_mmxq(var_80 ^ 0x80000000, temp0_46)
int64_t temp0_82 =
    __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_77, temp0_75), __pfsub_mmxq_mmxq(temp0_79, temp0_78))
st1 = temp0_58
int64_t st2 = temp0_64
int64_t temp0_83 = _m_punpckhdq(st2, st2.d)
int64_t st3
uint64_t x87_r0

if (__pfcmpge_mmxq_memq(temp0_83, 0x3f8000003f800000).d == 0)
    sub_4dc1c0(x87_r0)
    sub_4dc8a0(x87_r0)
    st1 = temp0_58
    st2 = temp0_64
    
    if (__pfcmpge_mmxq_memq(temp0_83 & 0x7fffffff7fffffff, 0x3400000034000000).d != 0)
        st3 = zx.q(temp0_83.d)
        st4 = __pfrcp_mmxq_mmxq(st4, temp0_83)
        int64_t temp0_90 = __pfmul_mmxq_mmxq(_m_punpckldq(st3, st3.d), 
            __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_83, st4), st4))
        st1 = __pfmul_mmxq_mmxq(st1, temp0_90)
        st2 = __pfmul_mmxq_mmxq(st2, temp0_90)

int64_t var_58 = st1
int64_t var_50 = st2 & 0xffffffff
st1 = var_18
st2 = temp0_82
int64_t temp0_93 = _m_punpckhdq(st2, st2.d)

if (__pfcmpge_mmxq_memq(temp0_93, 0x3f8000003f800000).d == 0)
    sub_4dc1c0(x87_r0)
    sub_4dc8a0(x87_r0)
    st1 = var_18
    st2 = temp0_82
    
    if (__pfcmpge_mmxq_memq(temp0_93 & 0x7fffffff7fffffff, 0x3400000034000000).d != 0)
        st3 = zx.q(temp0_93.d)
        int64_t temp0_96 = __pfrcp_mmxq_mmxq(st4, temp0_93)
        int64_t temp0_100 = __pfmul_mmxq_mmxq(_m_punpckldq(st3, st3.d), 
            __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_93, temp0_96), temp0_96))
        st1 = __pfmul_mmxq_mmxq(st1, temp0_100)
        st2 = __pfmul_mmxq_mmxq(st2, temp0_100)

int64_t temp0_103 = __pfadd_mmxq_memq(var_58, st1)
int64_t temp0_104 = __pfadd_mmxq_memq(var_50, st2 & 0xffffffff)
int64_t temp0_105 = __pfmul_mmxq_memq(temp0_103, -0x417fffff41800000)
int32_t var_20_1 = __pfmul_mmxq_memq(temp0_104, -0x417fffff41800000).d
st1 = zx.q(var_20_1)
int64_t temp0_107 = __pfmul_mmxq_mmxq(temp0_105, temp0_105)
int64_t temp0_108 = __pfmul_mmxq_mmxq(st1, st1)
int64_t temp0_109 = __pfadd_mmxq_mmxq(temp0_107, temp0_108)
int64_t temp0_110 = __pfacc_mmxq_mmxq(temp0_109, temp0_109)
int64_t temp0_111 = __pfrsqrt_mmxq_mmxq(temp0_108, temp0_110)
int64_t temp0_114 = __pfrcpit2_mmxq_mmxq(
    __pfrsqit1_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_111, temp0_111), temp0_110), temp0_111)
int64_t temp0_115 = __pfmul_mmxq_mmxq(temp0_110, temp0_114)
sub_4dc7a0(x87_r0)
int64_t temp0_116 = __pfcmpge_mmxq_memq(temp0_115 & 0x7fffffffffffffff, 0x3400000034000000)
int32_t ecx_7 = _m_punpckhdq(temp0_116, temp0_116.d).d
st2 = temp0_105
int64_t temp0_119 = __pfmul_mmxq_memq(_m_punpckhdq(temp0_115, temp0_115.d), temp0_114.d.q)
st3 = zx.q(var_20_1)

if ((ecx_7 & 1) != 0)
    st1 = _m_punpckldq(temp0_119, temp0_119.d)
    st3 = __pfmul_mmxq_mmxq(st3, st1)
    st2 = __pfmul_mmxq_mmxq(st2, st1)

int64_t var_30 = _m_punpckldq(st3, temp0_115.d)
int64_t temp0_124 = _m_punpckhdq(st2, st2.d)
int64_t temp0_125 = _m_punpckhdq(var_30, var_30.d)
st4 = _m_punpckldq(temp0_124, st2.d)
st5 = _m_punpckldq(temp0_125, var_30.d)
int64_t temp0_128 = __pfmul_mmxq_mmxq(st2, var_90)
int64_t temp0_129 = __pfmul_mmxq_mmxq(var_30, var_98)
int64_t temp0_130 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, var_98)
int64_t temp0_131 = __pfmul_mmxq_mmxq(st4, var_90)
int64_t temp0_132 = __pfadd_mmxq_mmxq(temp0_128 ^ 0x80000000, temp0_129)
int64_t temp0_133 = __pfsub_mmxq_mmxq(temp0_131, temp0_130)
int64_t temp0_134 = __pfmul_mmxq_mmxq(st5, var_90)
int64_t temp0_135 = __pfacc_mmxq_mmxq(temp0_133, temp0_132)
int64_t temp0_136 = __pfmul_mmxq_mmxq(st4 ^ 0x80000000, var_98)
int64_t temp0_137 = __pfmul_mmxq_mmxq(st2, var_98)
*arg1 = temp0_135
int64_t temp0_138 = __pfmul_mmxq_mmxq(var_30 ^ 0x80000000, var_90)
arg1[1] = __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_136, temp0_134), 
    __pfsub_mmxq_mmxq(temp0_138, temp0_137))
int64_t temp0_144 =
    __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(var_88, var_88), __pfmul_mmxq_mmxq(var_80, var_80))
int64_t temp0_145 = __pfacc_mmxq_mmxq(temp0_144, temp0_144)
int64_t temp0_146 = __pfrcp_mmxq_mmxq(temp0_135, temp0_145)
int64_t temp0_147 = __pfcmpgt_mmxq_memq(temp0_145, 0x80000000800000)
int64_t temp0_149 = __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_145, temp0_146), temp0_146)
int64_t temp0_150 = __pfmul_mmxq_mmxq((var_88 ^ 0x8000000080000000) & temp0_147, temp0_149)
int64_t temp0_151 = __pfmul_mmxq_mmxq((var_80 ^ 0x80000000) & temp0_147, temp0_149)
int64_t temp0_152 = _m_punpckhdq(var_98, var_98.d)
int64_t temp0_153 = _m_punpckhdq(var_90, var_90.d)
st4 = _m_punpckldq(temp0_152, var_98.d)
st5 = _m_punpckldq(temp0_153, var_90.d)
int64_t temp0_156 = __pfmul_mmxq_mmxq(var_98, temp0_151)
int64_t temp0_157 = __pfmul_mmxq_mmxq(var_90, temp0_150)
int64_t temp0_158 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, temp0_150)
int64_t temp0_159 = __pfmul_mmxq_mmxq(st4, temp0_151)
int64_t temp0_160 = __pfadd_mmxq_mmxq(temp0_156 ^ 0x80000000, temp0_157)
int64_t temp0_161 = __pfsub_mmxq_mmxq(temp0_159, temp0_158)
int64_t temp0_162 = __pfmul_mmxq_mmxq(st5, temp0_151)
int64_t temp0_163 = __pfacc_mmxq_mmxq(temp0_161, temp0_160)
int64_t temp0_164 = __pfmul_mmxq_mmxq(st4 ^ 0x80000000, temp0_150)
int64_t temp0_165 = __pfmul_mmxq_mmxq(var_98, temp0_150)
int64_t temp0_166 = __pfmul_mmxq_mmxq(var_90 ^ 0x80000000, temp0_151)
int64_t temp0_169 = __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_164, temp0_162), 
    __pfsub_mmxq_mmxq(temp0_166, temp0_165))
int64_t temp0_170 = _m_punpckhdq(var_78, var_78.d)
int64_t temp0_171 = _m_punpckhdq(var_70, var_70.d)
st4 = _m_punpckldq(temp0_170, var_78.d)
st5 = _m_punpckldq(temp0_171, var_70.d)
int64_t temp0_174 = __pfmul_mmxq_mmxq(var_78, temp0_151)
int64_t temp0_175 = __pfmul_mmxq_mmxq(var_70, temp0_150)
int64_t temp0_176 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, temp0_150)
int64_t temp0_177 = __pfmul_mmxq_mmxq(st4, temp0_151)
int64_t temp0_178 = __pfadd_mmxq_mmxq(temp0_174 ^ 0x80000000, temp0_175)
int64_t temp0_179 = __pfsub_mmxq_mmxq(temp0_177, temp0_176)
int64_t temp0_180 = __pfmul_mmxq_mmxq(st5, temp0_151)
st6 = st4 ^ 0x80000000
st4 = __pfacc_mmxq_mmxq(temp0_179, temp0_178)
int64_t temp0_182 = __pfmul_mmxq_mmxq(st6, temp0_150)
int64_t temp0_183 = __pfmul_mmxq_mmxq(var_78, temp0_150)
int64_t var_18_1 = st4
int64_t temp0_184 = __pfmul_mmxq_mmxq(var_70 ^ 0x80000000, temp0_151)
int64_t temp0_187 = __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_182, temp0_180), 
    __pfsub_mmxq_mmxq(temp0_184, temp0_183))
st1 = temp0_163
st2 = temp0_169
int64_t temp0_188 = _m_punpckhdq(st2, st2.d)

if (__pfcmpge_mmxq_memq(temp0_188, 0x3f8000003f800000).d == 0)
    sub_4dc1c0(x87_r0)
    sub_4dc8a0(x87_r0)
    st1 = temp0_163
    st2 = temp0_169
    
    if (__pfcmpge_mmxq_memq(temp0_188 & 0x7fffffff7fffffff, 0x3400000034000000).d != 0)
        st3 = zx.q(temp0_188.d)
        st4 = __pfrcp_mmxq_mmxq(st4, temp0_188)
        int64_t temp0_195 = __pfmul_mmxq_mmxq(_m_punpckldq(st3, st3.d), 
            __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_188, st4), st4))
        st1 = __pfmul_mmxq_mmxq(st1, temp0_195)
        st2 = __pfmul_mmxq_mmxq(st2, temp0_195)

int64_t var_58_1 = st1
int64_t var_50_1 = st2 & 0xffffffff
st1 = var_18_1
st2 = temp0_187
int64_t temp0_198 = _m_punpckhdq(st2, st2.d)

if (__pfcmpge_mmxq_memq(temp0_198, 0x3f8000003f800000).d == 0)
    sub_4dc1c0(x87_r0)
    sub_4dc8a0(x87_r0)
    st1 = var_18_1
    st2 = temp0_187
    
    if (__pfcmpge_mmxq_memq(temp0_198 & 0x7fffffff7fffffff, 0x3400000034000000).d != 0)
        st3 = zx.q(temp0_198.d)
        int64_t temp0_201 = __pfrcp_mmxq_mmxq(st4, temp0_198)
        int64_t temp0_205 = __pfmul_mmxq_mmxq(_m_punpckldq(st3, st3.d), 
            __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_198, temp0_201), temp0_201))
        st1 = __pfmul_mmxq_mmxq(st1, temp0_205)
        st2 = __pfmul_mmxq_mmxq(st2, temp0_205)

int64_t temp0_208 = __pfadd_mmxq_memq(var_58_1, st1)
int64_t temp0_209 = __pfadd_mmxq_memq(var_50_1, st2 & 0xffffffff)
int64_t temp0_210 = __pfmul_mmxq_memq(temp0_208, -0x417fffff41800000)
int32_t var_20_3 = __pfmul_mmxq_memq(temp0_209, -0x417fffff41800000).d
st1 = zx.q(var_20_3)
int64_t temp0_212 = __pfmul_mmxq_mmxq(temp0_210, temp0_210)
int64_t temp0_213 = __pfmul_mmxq_mmxq(st1, st1)
int64_t temp0_214 = __pfadd_mmxq_mmxq(temp0_212, temp0_213)
int64_t temp0_215 = __pfacc_mmxq_mmxq(temp0_214, temp0_214)
int64_t temp0_216 = __pfrsqrt_mmxq_mmxq(temp0_213, temp0_215)
int32_t esi
int32_t var_b0_6 = esi
int32_t ebx
int32_t var_ac_6 = ebx
int64_t temp0_219 = __pfrcpit2_mmxq_mmxq(
    __pfrsqit1_mmxq_mmxq(__pfmul_mmxq_mmxq(temp0_216, temp0_216), temp0_215), temp0_216)
int64_t temp0_220 = __pfmul_mmxq_mmxq(temp0_215, temp0_219)
sub_4dc7a0(x87_r0)
int64_t temp0_221 = __pfcmpge_mmxq_memq(temp0_220 & 0x7fffffffffffffff, 0x3400000034000000)
int32_t ecx_12 = _m_punpckhdq(temp0_221, temp0_221.d).d
st2 = temp0_210
int64_t temp0_224 = __pfmul_mmxq_memq(_m_punpckhdq(temp0_220, temp0_220.d), temp0_219.d.q)
st3 = zx.q(var_20_3)

if ((ecx_12 & 1) != 0)
    st1 = _m_punpckldq(temp0_224, temp0_224.d)
    st3 = __pfmul_mmxq_mmxq(st3, st1)
    st2 = __pfmul_mmxq_mmxq(st2, st1)

int64_t var_30_1 = _m_punpckldq(st3, temp0_220.d)
int64_t temp0_229 = _m_punpckhdq(st2, st2.d)
int64_t temp0_230 = _m_punpckhdq(var_30_1, var_30_1.d)
st4 = _m_punpckldq(temp0_229, st2.d)
st5 = _m_punpckldq(temp0_230, var_30_1.d)
int64_t temp0_233 = __pfmul_mmxq_mmxq(st2, var_80)
int64_t temp0_234 = __pfmul_mmxq_mmxq(var_30_1, var_88)
int64_t temp0_235 = __pfmul_mmxq_mmxq(st5 ^ 0x80000000, var_88)
int64_t temp0_236 = __pfmul_mmxq_mmxq(st4, var_80)
int64_t temp0_237 = __pfadd_mmxq_mmxq(temp0_233 ^ 0x80000000, temp0_234)
int64_t temp0_238 = __pfsub_mmxq_mmxq(temp0_236, temp0_235)
int64_t temp0_239 = __pfmul_mmxq_mmxq(st5, var_80)
int64_t temp0_240 = __pfacc_mmxq_mmxq(temp0_238, temp0_237)
int64_t temp0_241 = __pfmul_mmxq_mmxq(st4 ^ 0x80000000, var_88)
int64_t temp0_242 = __pfmul_mmxq_mmxq(st2, var_88)
*arg2 = temp0_240
int64_t temp0_243 = __pfmul_mmxq_mmxq(var_30_1 ^ 0x80000000, var_80)
arg2[1] = __pfacc_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_241, temp0_239), 
    __pfsub_mmxq_mmxq(temp0_243, temp0_242))
*arg3 = var_88
arg3[1] = var_80
__femms()
return arg3
