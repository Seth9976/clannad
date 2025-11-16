// 函数: sub_4d34a0
// 地址: 0x4d34a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t esi = 0
int32_t var_630 = 0
BOOL var_62c = 0
uint32_t eax_3 = sub_4d3ed0(&var_62c, &var_630, arg3, &var_62c)

if (eax_3.b == 1)
    if (sub_4d1be0(eax_3, 0x61c950, var_62c, 3) == 0)
        esi = 8
    
    sub_4d6c40(&var_630, &var_62c)

char var_218
sub_4cfd70(&var_218, arg3)
BOOL result = sub_4d1610(&var_218, 0x5c)

if (result != 0xffffffff)
    char var_420[0x208]
    void var_217
    sub_4cfd70(&var_420, &var_217 + result)
    (&var_218)[result] = 0
    result = sub_4d1610(&var_420, 0x2e)
    
    if (result != 0xffffffff)
        char const* const var_64c_1
        
        if (esi s>= 8)
            int32_t var_644_2 = arg2
            int32_t var_648_2 = arg4
            var_64c_1 = "/+%d "%s""
        else
            int32_t var_644_1 = arg4
            int32_t var_648_1 = arg2
            var_64c_1 = ""%s+%d""
        
        void var_628
        sub_4c84d0(&var_628, var_64c_1)
        result = sub_4d3210(&var_420, &var_218, &var_218, &var_420, &var_628, 0x1f4)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
