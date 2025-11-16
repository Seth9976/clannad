// 函数: ___crtGetStringTypeA
// 地址: 0x1000b8c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void var_14
sub_10003903(&var_14, arg1)
BOOL result = __crtGetStringTypeA_stat(&var_14, arg2, arg3, arg4, arg5, arg6, arg7)
char var_8
void* var_c

if (var_8 != 0)
    *(var_c + 0x70) &= 0xfffffffd
return result
