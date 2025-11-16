// 函数: sub_10005ba9
// 地址: 0x10005ba9
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_8 = arg1
int32_t esi = data_10017310

if (esi s< 0)
    esi = 0
    int32_t eax_2 = data_1001c574 ^ __security_cookie
    var_8 = 0
    
    if (eax_2 != 0 && eax_2(&var_8, 0) == 0x7a)
        esi = 1
    
    data_10017310 = esi

int32_t result
result.b = esi s> 0
return result
