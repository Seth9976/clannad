// 函数: sub_6d8130
// 地址: 0x6d8130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (arg1 != 0)
    int32_t var_328_1 = 0x308
    char var_32c_1 = 0
    void var_314
    struct _EXCEPTION_REGISTRATION_RECORD* esi_2 = __builtin_memcpy(&var_314, arg1, 0x308)
    _memset(arg1, var_32c_1, var_328_1)
    int32_t var_bc
    
    if (var_bc == 0)
        _free(arg1)
    else
        var_bc(&var_314, arg1)
    
    result = sub_6d4930(&var_314, esi_2)

sub_745f2b(result_1 ^ &__saved_ebp)
return result
