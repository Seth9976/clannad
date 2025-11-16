// 函数: sub_5fa9de
// 地址: 0x5fa9de
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
long double x87_r7 = fconvert.t(arg2)
long double x87_r5 = fconvert.t(arg3)
long double x87_r6_1 = x87_r7 + x87_r5

if (data_63c8e4 == 0)
    int32_t var_28 = 1
    return __umatherr(1, arg1, fconvert.d(x87_r7), fconvert.d(x87_r5), fconvert.d(x87_r6_1), arg4)

int32_t var_8_1 = 0xffff
int32_t var_c = arg4
*__errno() = 0x21
int16_t x87control
sub_5fae98(x87control)
return fconvert.t(fconvert.d(x87_r6_1))
