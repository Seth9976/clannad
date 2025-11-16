// 函数: __updatetlocinfoEx_nolock
// 地址: 0x5f7306
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0 || arg1 == 0)
    return nullptr

void* esi_1 = *arg1

if (esi_1 != arg2)
    *arg1 = arg2
    sub_5f6ff7(arg2)
    
    if (esi_1 != 0)
        sub_5f71e6(esi_1)
        
        if (*esi_1 == 0 && esi_1 != 0x63c510)
            sub_5f708c(esi_1)

return arg2
