// 函数: sub_6baf00
// 地址: 0x6baf00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[4] == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

struct _EXCEPTION_REGISTRATION_RECORD** var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
sub_6bacc0(&var_1c, arg4, arg5, arg6, arg7)
sub_60c680(&var_1c, arg2)
struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = var_1c
char eax_4
int32_t ecx_4
eax_4, ecx_4 = sub_6bafd0(arg1, arg1, arg3, esi_1, var_18)
arg2:3.b = eax_4

if (esi_1 != 0)
    int32_t* var_2c_3 = arg2
    int32_t var_30_2 = ecx_4
    sub_55d500(esi_1, var_18)
    j__free(esi_1)
    eax_4 = arg2:3.b

fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
