// 函数: __fileno
// 地址: 0x10006836
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 != 0)
    return *(arg1 + 0x10)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
