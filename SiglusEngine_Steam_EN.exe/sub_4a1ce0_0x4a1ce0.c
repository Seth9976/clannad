// 函数: sub_4a1ce0
// 地址: 0x4a1ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
int32_t edi = 0x1087458

for (void* i = &data_12c3ca4; i s< &data_12c41a4; )
    if (*(i + 0x24) != 0 && *i != 0)
        char var_214[0x20c]
        sub_4cfd70(&var_214, i)
        result = sub_49ede0(&var_214)
        
        if (result s>= 0)
            result = sub_49ef00(result, &var_214, edi, result, 0x40000)
    
    i += 0x28
    edi += 0x3b8

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
