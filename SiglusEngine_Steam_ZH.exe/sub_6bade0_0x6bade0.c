// 函数: sub_6bade0
// 地址: 0x6bade0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb8f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** result = arg3

if (result != arg4)
    void** var_70
    sub_668eb0(arg1, &var_70, result)
    void** ecx_1 = var_70
    
    if (ecx_1 != *arg1)
        result = sub_6bade0(&ecx_1[0xa], arg2, &arg3[6], arg4)
    else
        int32_t* var_34 = nullptr
        int32_t var_30_1 = 0
        var_34 = sub_58f9d0()
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c_1 = 0
        int32_t var_8_1 = 0
        sub_6bade0(&var_34, arg2, &arg3[6], arg4)
        var_8_1.b = 1
        void var_6c
        int32_t* eax_7
        void* ecx_4
        eax_7, ecx_4 = sub_6bbf00(sub_6bbd40(&var_6c, arg3, &var_34))
        int32_t* var_88_5 = eax_7
        void* var_8c_4 = &eax_7[4]
        void* var_74
        sub_6bbf90(arg1, &var_74, ecx_4)
        sub_6bac40(&var_6c)
        result = sub_58fe70(&var_34)
else if (&arg1[2] != arg2)
    result = sub_52e3c0(&arg1[2], arg2, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
