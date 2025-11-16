// 函数: sub_64f710
// 地址: 0x64f710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = arg7

if (arg3 != 0)
    sub_5ada90(arg3)
    sub_5adca0(arg3, arg2)
    
    for (void** i = *arg4; i != arg4[1]; i = &i[8])
        int32_t var_1c_1 = 7
        int32_t var_20_1 = 0
        int16_t var_30 = 0
        sub_52e3c0(&var_30, i, 0, 0xffffffff)
        int32_t var_8_1 = 0
        sub_64dcd0(&var_30)
        sub_5afa20(arg3, &var_30, i[6], i[7])
        int32_t var_8_2 = 0xffffffff
        
        if (var_1c_1 u>= 8)
            j__free(var_30.d)
    
    sub_5afb10(arg3)
    arg3[0x73].b = arg5
    *(arg3 + 0x1cd) = arg6
    
    if (&arg3[0x74] != result)
        sub_52e3c0(&arg3[0x74], result, 0, 0xffffffff)
    
    result = arg8
    arg3[0x7a] = result

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
