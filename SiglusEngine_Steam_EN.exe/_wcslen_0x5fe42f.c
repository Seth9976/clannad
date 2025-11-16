// 函数: _wcslen
// 地址: 0x5fe42f
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax = arg1
int16_t i

do
    i = *eax
    eax = &eax[1]
while (i != 0)
return ((eax - arg1) s>> 1) - 1
