// 函数: sub_407210
// 地址: 0x407210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
ecx.b = arg2 s> arg3
int32_t eax_2
int32_t edx
edx:eax_2 = sx.q(arg2 - arg3)
int32_t ecx_3
ecx_3.b = 0x1f - ((eax_2 ^ edx) - edx) s< 0
long double x87_r7_2 = (
    fconvert.t(*((((ecx_3 - 1) & (0x1f - ((eax_2 ^ edx) - edx))) << 2) + &data_632f40))
    + fconvert.t(1f))
    * fconvert.t(*((((not.d(ecx - 1) & arg2) | ((ecx - 1) & arg3)) << 2) + &data_632b40))
*arg4 = fconvert.s(x87_r7_2 * fconvert.t(arg1))
*arg5 = 0
return arg5
