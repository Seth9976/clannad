// 函数: sub_54da30
// 地址: 0x54da30
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

if (eax_3 == 2)
    void* esi_1 = data_bac490
    sub_6b20c0(esi_1)
    sub_6b2260(esi_1 + 0x100)
    sub_6b20c0(esi_1 + 0x5100)
    sub_6b2260(esi_1 + 0x5200)
else if (eax_3 == 3)
    sub_6b24d0(data_bac490)
else if (eax_3 == 0)
    sub_54df30(&arg2[1], arg2, 0x100, &arg2[1])
else if (eax_3 != 1)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad87bc, 0x17)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_2c)
    sub_52e8a0(&var_2c)
else
    sub_54df30(&arg2[1], arg2, 0x101, &arg2[1])

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
