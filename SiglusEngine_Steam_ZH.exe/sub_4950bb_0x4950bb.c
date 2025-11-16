// 函数: sub_4950bb
// 地址: 0x4950bb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_4c = edi
int32_t eax
eax.b = arg8 != 0
int32_t edx
edx.b = arg7 != 0
int32_t edx_1
edx_1.b = arg6 != 0
float var_44
int64_t x87_r2
int64_t x87_r3

switch ((eax << 1 | edx) << 1 | edx_1)
    case 0
        float var_c_1 = fconvert.s(float.t(0))
        float var_10_1 = fconvert.s(float.t(0))
        float var_14_1 = fconvert.s(float.t(0))
        float var_18_1 = fconvert.s(float.t(0))
        float var_20_1 = fconvert.s(float.t(0))
        float var_24_1 = fconvert.s(float.t(0))
        float var_28_1 = fconvert.s(float.t(0))
        float var_2c_1 = fconvert.s(float.t(0))
        float var_34_1 = fconvert.s(float.t(0))
        float var_38_1 = fconvert.s(float.t(0))
        float var_3c_1 = fconvert.s(float.t(0))
        float var_40_1 = fconvert.s(float.t(0))
        float var_8_1 = fconvert.s(float.t(1))
        float var_1c_1 = fconvert.s(float.t(1))
        float var_30_1 = fconvert.s(float.t(1))
        var_44 = fconvert.s(float.t(1))
    case 1
        __femms()
        sub_494610(&var_44, nullptr, arg6)
        __femms()
    case 2
        __femms()
        sub_494610(&var_44, nullptr, arg7)
        __femms()
    case 3
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg7, arg6)
        sub_494610(&var_44, nullptr, &var_44)
        __femms()
    case 4
        __femms()
        sub_494610(&var_44, nullptr, arg8)
        __femms()
    case 5
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg8, arg6)
        sub_494610(&var_44, nullptr, &var_44)
        __femms()
    case 6
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg8, arg7)
        sub_494610(&var_44, nullptr, &var_44)
        __femms()
    case 7
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg8, arg7)
        sub_494d5b(x87_r2, x87_r3, &var_44, &var_44, arg6)
        sub_494610(&var_44, nullptr, &var_44)
        __femms()

int64_t* var_4c_1
int32_t* __saved_esi

if (arg5 == 0)
    __saved_esi = &var_44
    var_4c_1 = arg4
else
    __femms()
    int64_t* edx_2 = arg3
    int64_t st1 = *arg5
    int64_t st2 = arg5[1]
    int64_t st0 = *arg4
    int64_t temp0_1 = __pi2fd_mmxq_mmxq(st1, st1)
    int64_t st4 = arg5[2]
    int64_t temp0_2 = __pi2fd_mmxq_mmxq(st2, st2)
    int64_t temp0_3 = _m_punpckhdq(temp0_2, temp0_2.d)
    int64_t temp0_4 = __pfrcp_mmxq_mmxq(arg1, temp0_2)
    int64_t temp0_5 = __pfrcp_mmxq_mmxq(temp0_3, temp0_3)
    int64_t temp0_6 = __pfsub_mmxq_mmxq(st0, temp0_1)
    arg1 = _m_punpckldq(temp0_4, temp0_5.d)
    int64_t temp0_8 = __pfrcpit1_mmxq_mmxq(temp0_2, arg1)
    int64_t st3 = zx.q(arg4[1].d)
    int64_t temp0_11 = __pfmul_mmxq_mmxq(temp0_6, 
        __pfmul_mmxq_memq(__pfrcpit2_mmxq_mmxq(temp0_8, arg1), 0x4000000040000000))
    int64_t temp0_12 = _m_punpckhdq(st4, st4.d)
    int64_t temp0_13 = __pfsub_mmxq_memq(temp0_11, 0x3f8000003f800000)
    int64_t temp0_14 = __pfsub_mmxq_mmxq(temp0_12, st4)
    int64_t temp0_15 = __pfrcp_mmxq_mmxq(arg2, temp0_14)
    int64_t temp0_17 = __pfrcpit2_mmxq_mmxq(__pfrcpit1_mmxq_mmxq(temp0_14, temp0_15), temp0_15)
    int64_t temp0_19 = __pfmul_mmxq_mmxq(__pfsub_mmxq_mmxq(st3, st4), temp0_17)
    *edx_2 = temp0_13 ^ 0x8000000000000000
    edx_2[1].d = temp0_19.d
    __femms()
    __saved_esi = &var_44
    var_4c_1 = arg3

sub_494cce(arg3, var_4c_1, __saved_esi)
return arg3
