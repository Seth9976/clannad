// 函数: sub_494f2f
// 地址: 0x494f2f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_4c = edi
int32_t eax
eax.b = arg6 != 0
float var_44
int32_t* esi = &var_44
int32_t ecx
ecx.b = arg5 != 0
int32_t edx
edx.b = arg4 != 0
int64_t x87_r2
int64_t x87_r3

switch ((eax << 1 | ecx) << 1 | edx)
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
        esi = arg4
    case 2
        esi = arg5
    case 3
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg5, arg4)
        __femms()
    case 4
        esi = arg6
    case 5
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg6, arg4)
        __femms()
    case 6
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg6, arg5)
        __femms()
    case 7
        __femms()
        sub_494d5b(x87_r2, x87_r3, &var_44, arg6, arg5)
        sub_494d5b(x87_r2, x87_r3, &var_44, &var_44, arg4)
        __femms()

sub_494cce(arg1, arg2, esi)

if (arg3 != 0)
    __femms()
    uint64_t st1 = zx.q(arg1[1][0])
    int64_t st2 = *arg3
    uint32_t st0[0x2] = *arg1 ^ 0x8000000000000000
    int64_t st3 = arg3[1]
    int64_t st4 = arg3[2]
    st2 = __pi2fd_mmxq_mmxq(st2, st2)
    st3 = __pi2fd_mmxq_mmxq(st3, st3)
    st0 = __pfadd_mmxq_memq(st0, 0x3f8000003f800000)
    st3 = __pfmul_mmxq_memq(st3, 0x3f0000003f000000)
    int64_t st5 = __pfsub_mmxq_mmxq(_m_punpckhdq(st4, st4.d), st4)
    st0 = __pfmul_mmxq_mmxq(st0, st3)
    st1 = __pfadd_mmxq_mmxq(__pfmul_mmxq_mmxq(st1, st5), st4)
    *arg1 = __pfadd_mmxq_mmxq(st0, st2)
    arg1[1][0] = st1.d
    __femms()

return arg1
