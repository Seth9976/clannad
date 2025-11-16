// 函数: sub_6c78f0
// 地址: 0x6c78f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *arg1
int32_t result = arg1[1]

if (i != result)
    do
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, &data_ad7c90, nullptr)
        int32_t var_8_1 = 0
        result = sub_6c6f60(*i, &var_2c)
        int32_t var_8_2 = 0xffffffff
        
        if (var_18_1 u>= 8)
            result = j__free(var_2c.d)
        
        i = &i[1]
    while (i != arg1[1])

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
