// 函数: sub_10004c73
// 地址: 0x10004c73
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int16_t ecx
int16_t var_8 = ecx
int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg1)
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(((not.d(arg3)).w & temp0) | (arg2 & arg3.w))
return sx.d(temp0)
