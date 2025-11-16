// 函数: sub_686710
// 地址: 0x686710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_30
int16_t* eax_3 = sub_5b0600(arg2, &var_30)
int32_t var_8_1 = 0

if (arg1 != eax_3)
    sub_52e3c0(arg1, eax_3, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t var_1c_1 = 7
var_30 = 0
int32_t eax_4 = *arg2
int32_t var_20 = 0

if (eax_4 == arg2[1])
    eax_4 = 0

int128_t* ecx_3 = arg2[3] + eax_4
*(arg1 + 0x18) = *ecx_3
*(arg1 + 0x28) = ecx_3[1]
*(arg1 + 0x38) = ecx_3[2].q
arg1[0x10] = *(ecx_3 + 0x28)
arg2[3] += 0x2c
int32_t eax_6 = *arg2

if (eax_6 == arg2[1])
    eax_6 = 0

arg1[0x11] = *(arg2[3] + eax_6)
arg2[3] += 4
int32_t eax_8 = *arg2

if (eax_8 == arg2[1])
    eax_8 = 0

arg1[0x12] = *(arg2[3] + eax_8)
arg2[3] += 4
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6868e0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
