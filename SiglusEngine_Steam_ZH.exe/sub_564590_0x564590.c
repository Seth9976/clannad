// 函数: sub_564590
// 地址: 0x564590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *arg2

if (eax_3 == 0)
    *(arg3 + 4)
    sub_65f4f0()
else if (eax_3 == 1)
    sub_65f6b0()
else
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad8fdc, 0x17)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)

char* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
