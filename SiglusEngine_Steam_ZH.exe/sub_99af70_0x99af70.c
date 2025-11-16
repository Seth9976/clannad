// 函数: sub_99af70
// 地址: 0x99af70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0xffffff7b

int32_t eax = *arg3
int128_t var_20
__builtin_memset(&var_20, 0, 0x14)
var_20:0xc.d = eax
var_20:8.d = eax
int32_t var_10 = arg3[1]
int32_t eax_2 = sub_742fa0(&var_20, 8)
int32_t var_c = 0
int16_t var_8 = 0
sub_99b940(0, &var_c, &var_20, 6)

if (var_c != 0x62726f76 || var_8 != 0x7369)
    return 0xffffff7c

if (eax_2 == 1)
    if (arg3[2] != 0 && arg1[2] == 0)
        return sub_99b530(arg1, &var_20)
else if (eax_2 == 3)
    if (arg1[2] != 0 && arg2[3] == 0)
        return sub_99b3e0(arg2, &var_20)
else if (eax_2 == 5 && arg1[2] != eax_2 - 5 && arg2[3] != eax_2 - 5)
    void* eax_4 = arg1[7]
    
    if (eax_4 == 0)
        return 0xffffff7f
    
    if (*(eax_4 + 0x18) s<= 0)
        return sub_99b110(arg1, &var_20)

return 0xffffff7b
