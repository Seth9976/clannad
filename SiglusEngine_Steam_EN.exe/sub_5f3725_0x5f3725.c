// 函数: sub_5f3725
// 地址: 0x5f3725
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t esi = data_63baa0

if (esi s< 0)
    esi = 0
    int32_t eax_2 = data_20f4574 ^ __security_cookie
    var_8 = 0
    
    if (eax_2 != 0 && eax_2(&var_8, 0) == 0x7a)
        esi = 1
    
    data_63baa0 = esi

int32_t result
result.b = esi s> 0
return result
