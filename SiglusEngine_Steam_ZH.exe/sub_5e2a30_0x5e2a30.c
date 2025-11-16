// 函数: sub_5e2a30
// 地址: 0x5e2a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb2d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*arg1 = *(edx + arg2[3])
arg2[3] += 4
int32_t var_48
int16_t* eax_5 = sub_5b0600(arg2, &var_48)
int32_t var_8_1 = 0

if (&arg1[0x28] != eax_5)
    sub_52e3c0(&arg1[0x28], eax_5, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48)

int16_t var_30
int16_t* eax_6 = sub_5b0600(arg2, &var_30)
int32_t var_8_3 = 1

if (&arg1[0x2e] != eax_6)
    sub_52e3c0(&arg1[0x2e], eax_6, 0, 0xffffffff)

int32_t var_8_4 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20 = 0
var_30 = 0
sub_5e24e0(arg1)
int32_t eax_7 = *arg2

if (eax_7 == arg2[1])
    eax_7 = 0

int128_t* ecx_5 = arg2[3]
*(arg1 + 0xe8) = *(ecx_5 + eax_7)
*(arg1 + 0xf8) = *(ecx_5 + eax_7 + 0x10)
arg2[3] += 0x18
sub_5dac30(&arg1[0x40], arg2)
sub_5e4720(&arg1[0x106], arg2)
int32_t result = sub_5e4720(&arg1[0x175], arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
