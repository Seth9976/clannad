// 函数: sub_74d1d4
// 地址: 0x74d1d4
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t esi = data_b4c490

if (esi s< 0)
    esi = 0
    int32_t eax_2 = data_4ecd2b4 ^ __security_cookie
    var_8 = 0
    
    if (eax_2 != 0 && eax_2(&var_8, 0) == 0x7a)
        esi = 1
    
    data_b4c490 = esi

int32_t result
result.b = esi s> 0
return result
