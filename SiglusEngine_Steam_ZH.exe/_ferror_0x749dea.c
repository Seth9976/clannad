// 函数: _ferror
// 地址: 0x749dea
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    return *(arg1 + 0xc) & 0x20

*__errno() = 0x16
__invalid_parameter_noinfo()
return 0
