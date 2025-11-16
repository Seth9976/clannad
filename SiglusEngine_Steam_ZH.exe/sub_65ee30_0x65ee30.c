// 函数: sub_65ee30
// 地址: 0x65ee30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4cd3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_dc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1[0x11].d != *(arg1 + 0x8c))
    sub_630a10()
    void var_d4
    sub_6349a0(&var_d4, arg1)
    int32_t var_8_1 = 0
    *(data_bac4a0 + 0x248) = 0
    sub_6304c0(0)
    sub_64e7b0(data_bac504 + 0x10, &var_d4)
    sub_6594f0()
    sub_5ce5a0()
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xaf82b8, 0x13)
    var_8_1.b = 1
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    sub_634480(&var_d4)
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
