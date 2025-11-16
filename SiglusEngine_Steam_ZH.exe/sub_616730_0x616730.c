// 函数: sub_616730
// 地址: 0x616730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x248)
BOOL result

if (eax_3 != 0)
    int32_t var_40_1 = eax_3
    void var_58
    sub_52e820(&var_58, 0xaf3e80)
    void* var_2c
    sub_6ae4c0(&var_2c, var_58)
    int32_t var_8_1 = 0
    sub_6c2db0(arg1 + 0x98, &var_2c)
    *(arg1 + 0x248) -= 1
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    result.b = 1
else
    EndDialog(*(arg1 + 4), 2)
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
