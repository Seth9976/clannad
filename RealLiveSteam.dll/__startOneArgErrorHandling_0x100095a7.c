// 函数: __startOneArgErrorHandling
// 地址: 0x100095a7
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_24 = arg1
double var_c = fconvert.d(arg3)
int32_t ecx
int32_t var_20 = ecx
int32_t var_1c = arg4
int32_t var_18 = arg5
int16_t arg_4
__87except(arg2, &var_24, &arg_4)
int16_t x87control_1
int16_t x87status_1

if (arg_4 != 0x27f)
    x87control_1, x87status_1 = __fldcw_memmem16(arg_4)
return fconvert.t(var_c)
