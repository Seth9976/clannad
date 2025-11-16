// 函数: sub_5f6880
// 地址: 0x5f6880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcbb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_5e5060(arg1, 1)
*(arg1 + 0x1ac) = 4
int32_t arg_4

if (arg1 + 0xd74 != &arg_4)
    sub_52e3c0(arg1 + 0xd74, &arg_4, 0, 0xffffffff)

int32_t ebx
ebx.b = sub_5f6ab0(arg1) != 0

if (arg2 u>= 8)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
