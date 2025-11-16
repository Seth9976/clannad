// 函数: sub_754c9b
// 地址: 0x754c9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t lCData = arg3
uint32_t* eax = __getptd()

if (GetLocaleInfoW((arg4 & 0x3ff) | 0x400, 0x20000001, &lCData, 2) != 0)
    if (arg4 == lCData || arg5 == 0)
        return 1
    
    if (sub_7548a5(eax[0x27]) != _wcslen(eax[0x27]))
        return 1

return 0
