// 函数: sub_712b30
// 地址: 0x712b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d14ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::VTable* var_7c

if (arg5(arg2, arg3, eax_2) != 0)
    sub_703520(&var_7c, arg2)
    int32_t var_8_1 = 0
    sub_712ac0(arg2, arg3)
    sub_712ac0(arg3, &var_7c)
    int32_t var_8_2 = 0xffffffff
    sub_702710(&var_7c)

char result = arg5(arg4, arg2)

if (result != 0)
    sub_703520(&var_7c, arg4)
    int32_t var_8_3 = 1
    sub_712ac0(arg4, arg2)
    sub_712ac0(arg2, &var_7c)
    int32_t var_8_4 = 0xffffffff
    sub_702710(&var_7c)
    result = arg5(arg2, arg3)
    
    if (result != 0)
        struct NT3::C_d3d_effect_global_val::VTable* var_e4
        sub_703520(&var_e4, arg2)
        int32_t var_8_5 = 2
        sub_712ac0(arg2, arg3)
        sub_712ac0(arg3, &var_e4)
        result = sub_702710(&var_e4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
