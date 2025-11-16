// 函数: __fileno
// 地址: 0x758872
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    return *(arg1 + 0x10)

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0xffffffff
