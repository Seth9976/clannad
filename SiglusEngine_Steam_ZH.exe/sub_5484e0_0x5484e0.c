// 函数: sub_5484e0
// 地址: 0x5484e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = *arg2

if (ecx == 0)
    void* edx_1 = data_bac460
    int32_t eax_5 = sub_548970(edx_1 + 4, *(edx_1 + 0xb8) - 1, 1)
    sub_557680(eax_5, 0x20, eax_5 + 0x158, arg3, &arg2[1], arg4, arg5)
else if (ecx == 1)
    void* edx_2 = data_bac460
    void* eax_8
    int32_t edx_3
    eax_8, edx_3 = sub_548970(edx_2 + 4, *(edx_2 + 0xb8) - 1, 1)
    sub_558300(eax_8, edx_3, eax_8 + 0x210, &arg2[1], arg4, arg5)
else if ((ecx s>> 0x18).b != 0x7d)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad8514, 0x16)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 2, &var_2c)
    sub_52e8a0(&var_2c)
else
    sub_675270(&arg2[1], arg3, zx.d(ecx.w), &arg2[1], arg4, arg5)

uint32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
