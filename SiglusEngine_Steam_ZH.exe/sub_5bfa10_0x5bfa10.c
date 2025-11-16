// 函数: sub_5bfa10
// 地址: 0x5bfa10
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

*(arg1 + 0x128) = *(edx + arg2[3])
arg2[3] += 4
int32_t var_48
int16_t* eax_5 = sub_5b0600(arg2, &var_48)
int32_t var_8_1 = 0

if (arg1 + 0x12c != eax_5)
    sub_52e3c0(arg1 + 0x12c, eax_5, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_34

if (var_34 u>= 8)
    j__free(var_48)

int16_t var_30
int16_t* eax_6 = sub_5b0600(arg2, &var_30)
int32_t var_8_3 = 1

if (arg1 + 0x144 != eax_6)
    sub_52e3c0(arg1 + 0x144, eax_6, 0, 0xffffffff)

int32_t var_8_4 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
int32_t var_20 = 0
var_30 = 0
sub_5bea80(arg1 + 0x15c, arg2)
int32_t eax_7 = *arg2

if (eax_7 == arg2[1])
    eax_7 = 0

int128_t* ecx_5 = arg2[3]
*(arg1 + 0x2b4) = *(ecx_5 + eax_7)
void* ecx_6 = data_bac45c
*(arg1 + 0x2c4) = *(ecx_5 + eax_7 + 0x10)
arg2[3] += 0x14
int32_t eax_10 = sub_6980b0(ecx_6, arg1 + 0x12c)
*(arg1 + 0x120) = eax_10
int32_t result = sub_697f50(eax_10, arg1 + 0x144)
*(arg1 + 0x124) = result
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
