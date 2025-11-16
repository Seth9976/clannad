// 函数: sub_5ead10
// 地址: 0x5ead10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b04c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_5e5060(arg1, 1)
*(arg1 + 0x1ac) = 0xc
int32_t arg_c

if (arg1 + 0xd74 != &arg_c)
    sub_52e3c0(arg1 + 0xd74, &arg_c, 0, 0xffffffff)

*(arg1 + 0x26c) = arg2
*(arg1 + 0x270) = arg3

if (arg4 u>= 8)
    j__free(arg_c)

int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
