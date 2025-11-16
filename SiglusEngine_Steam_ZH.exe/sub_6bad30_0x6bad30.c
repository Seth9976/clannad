// 函数: sub_6bad30
// 地址: 0x6bad30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb8b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[4] != 0)
    struct _EXCEPTION_REGISTRATION_RECORD** var_1c = nullptr
    int32_t var_18_1 = 0
    int32_t var_14_1 = 0
    int32_t var_8_1 = 0
    sub_6bacc0(&var_1c, arg4, arg5, arg6, arg7)
    sub_60c680(&var_1c, arg2)
    struct _EXCEPTION_REGISTRATION_RECORD** esi_1 = var_1c
    int32_t ecx_2
    result, ecx_2 = sub_6bade0(arg1, arg3, esi_1, var_18_1)
    
    if (esi_1 != 0)
        int32_t* var_30_4 = arg2
        int32_t var_34_3 = ecx_2
        sub_55d500(esi_1, var_18_1)
        result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
