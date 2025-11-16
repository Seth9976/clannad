// 函数: sub_4a1bc0
// 地址: 0x4a1bc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = arg1 * 5

if (*((eax_2 << 3) + &data_12c3ca4) != 0)
    char var_214[0x20c]
    sub_4cfd70(&var_214, (eax_2 << 3) + &data_12c3ca4)
    int32_t eax_3 = sub_49ede0(&var_214)
    
    if (eax_3 s>= 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 1
    
    if (eax_3 == 0xffffffff)
        if (arg2 != 0)
            sub_4cfd70(arg2, (eax_2 << 3) + &data_12c3ca4)
        
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return 0

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 2
