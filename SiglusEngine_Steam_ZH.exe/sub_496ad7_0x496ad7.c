// 函数: sub_496ad7
// 地址: 0x496ad7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int64_t st0 = *arg2
uint64_t st1 = arg2[1]
uint64_t st5 = zx.q(arg4[1].d)
int64_t st6 = *arg3
int64_t temp0 = __pfmul_mmxq_mmxq(st0, *arg4)
int64_t temp0_1 = __pfmul_mmxq_mmxq(st1, st5)
uint64_t st7 = zx.q(arg3[1].d)
int64_t temp0_2 = __pfadd_mmxq_mmxq(temp0, temp0_1)
int64_t temp0_3 = __pfmul_mmxq_mmxq(st0, st6)
int64_t temp0_4 = __pfmul_mmxq_mmxq(st1, st7)
int64_t temp0_6 = __pfsub_mmxq_mmxq(__pfadd_mmxq_mmxq(temp0_3, temp0_4), temp0_2)
st7 = __punpckldq_mmxq_memd(st7, 0x3f800000)
int64_t temp0_8 = __pfacc_mmxq_mmxq(temp0_6, temp0_6)
bool cond:0 = __pfcmpeq_mmxq_mmxq(0, temp0_8).d == 0
int64_t temp0_10 = __pfrcp_mmxq_mmxq(temp0_4, temp0_8)
int64_t temp0_11 = __pfmul_mmxq_mmxq(st0, st6)

if (not(cond:0))
    __femms()
    return 0

int64_t temp0_12 = __pfmul_mmxq_mmxq(st1, st7)
int64_t temp0_13 = __pfrcpit1_mmxq_mmxq(temp0_8, temp0_10)
int64_t temp0_14 = __pfadd_mmxq_mmxq(temp0_11, temp0_12)
int64_t st3 = *arg4
int64_t temp0_15 = __pfrcpit2_mmxq_mmxq(temp0_13, temp0_10)
int64_t temp0_16 = __pfacc_mmxq_mmxq(temp0_14, temp0_14)
st5 = zx.q(arg4[1].d)
int64_t temp0_17 = __pfsub_mmxq_mmxq(st3, st6)
int64_t temp0_18 = __pfmul_mmxq_mmxq(temp0_16, temp0_15)
int64_t temp0_19 = __pfsub_mmxq_mmxq(st5, st7)
int64_t temp0_20 = __pfmul_mmxq_mmxq(temp0_17, temp0_18)
int64_t temp0_21 = __pfmul_mmxq_mmxq(temp0_19, temp0_18)
int64_t temp0_22 = __pfadd_mmxq_mmxq(temp0_20, st6)
int64_t temp0_23 = __pfadd_mmxq_mmxq(temp0_21, st7)
*arg1 = temp0_22
arg1[1].d = temp0_23.d
__femms()
return arg1
