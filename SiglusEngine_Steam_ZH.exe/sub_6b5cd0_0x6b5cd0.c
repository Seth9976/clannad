// 函数: sub_6b5cd0
// 地址: 0x6b5cd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb0d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** ebx = data_bac4d8

if (&arg1[0xc] != arg2)
    sub_52e3c0(&arg1[0xc], arg2, 0, 0xffffffff)

int32_t* ecx_1 = &arg1[0x12]

if (ecx_1 != arg3)
    ecx_1 = sub_52e3c0(ecx_1, arg3, 0, 0xffffffff)

int32_t var_48
int32_t var_60 = var_48
arg1[0x18].w = 0x100
*(arg1 + 0x62) = 0
int32_t* var_64 = ecx_1
sub_688da0(*arg1, arg1[1])
int32_t eax_4 = *arg1
arg1[1] = eax_4
int32_t var_44
int16_t* eax_5 = sub_532b80(eax_4, ebx, &var_44, &data_ad900c)
int32_t var_8_1 = 0

if (&arg1[6] != eax_5)
    sub_52e3c0(&arg1[6], eax_5, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44)

int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_3 = 1
sub_6b5e10(arg1, &var_2c)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t eax_6
int32_t edx_2
edx_2:eax_6 = muls.dp.d(0x66666667, arg1[1] - *arg1)
int32_t edx_3 = edx_2 s>> 4
int32_t eax_9 = (edx_3 u>> 0x1f) + edx_3
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return neg.d(sbb.d(eax_9, eax_9, 0 u< eax_9))
