// 函数: sub_6ae4c0
// 地址: 0x6ae4c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca958
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_820 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_818 = 0
int32_t var_8_1 = 0
int32_t* arg_8
int32_t* eax_3 = &arg_8

if (arg2 u>= 8)
    eax_3 = arg_8

int16_t var_814[0x400]
void arg_20
_vswprintf_s(&var_814, 0x400, eax_3, &arg_20)
sub_52e820(arg1, &var_814)

if (arg2 u>= 8)
    j__free(arg_8)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
