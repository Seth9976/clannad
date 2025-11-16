// 函数: sub_5fb880
// 地址: 0x5fb880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd50b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_174 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 s>= 0)
    result = data_bac510
    
    if (result[0x2922d4] s> arg2)
        *arg1 = arg2
        arg1[1] = 0
        int32_t var_16c
        sub_54aed0(&var_16c)
        int32_t var_8_1 = 0
        var_16c = 0x24
        void var_2cc
        sub_54cf80(&var_2cc, &var_16c)
        sub_6766e0()
        void var_e0
        result = sub_54ae40(&var_e0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
