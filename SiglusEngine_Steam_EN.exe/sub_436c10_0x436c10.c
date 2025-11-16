// 函数: sub_436c10
// 地址: 0x436c10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* var_34 = arg2
int32_t var_38
int32_t eax_3 = sub_4d11d0(arg2, &var_34, arg2, &var_38)

if (eax_3 != 0)
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return 1

char* esi = var_34
int32_t eax_4
int32_t* ecx_2
eax_4, ecx_2 = sub_4d0fe0(eax_3.b, U":", esi, 1)

if (eax_4 == 0)
    void var_3c
    void* var_4c_1 = &var_3c
    var_34 = &esi[1]
    int32_t* var_30
    void* result = sub_4d1280(&var_30, &var_34, &esi[1], &var_30, ecx_2)
    
    if (result == 0)
        char* eax_6 = var_34
        *arg3 = var_38
        arg3[1] = var_30
        int32_t var_2c
        arg3[2] = var_2c
        *arg4 = eax_6
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return 1
