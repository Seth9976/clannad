// 函数: sub_6bb310
// 地址: 0x6bb310
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7238
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_50 = arg1
int32_t var_8_1 = 0
int32_t var_2c
struct _EXCEPTION_REGISTRATION_RECORD** result =
    sub_6bad30(arg1, arg2, sub_6ad9b0(&var_2c), arg4, arg5, arg6, arg7)
int32_t var_18

if (var_18 u>= 8)
    result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
