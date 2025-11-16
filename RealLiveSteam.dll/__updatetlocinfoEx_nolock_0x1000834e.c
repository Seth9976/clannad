// 函数: __updatetlocinfoEx_nolock
// 地址: 0x1000834e
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg2 == 0 || arg1 == 0)
    return nullptr

void* esi_1 = *arg1

if (esi_1 != arg2)
    *arg1 = arg2
    sub_1000803f(arg2)
    
    if (esi_1 != 0)
        sub_1000822e(esi_1)
        
        if (*esi_1 == 0 && esi_1 != 0x10017d50)
            sub_100080d4(esi_1)

return arg2
