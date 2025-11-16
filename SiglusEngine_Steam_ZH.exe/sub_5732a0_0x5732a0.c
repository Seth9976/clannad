// 函数: sub_5732a0
// 地址: 0x5732a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b428e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x7c) = 0
*(arg1 + 0xa0) = 7
*(arg1 + 0x9c) = 0
*(arg1 + 0x8c) = 0
int32_t var_8_1 = 0
*(arg1 + 0x80) = arg2
*(arg1 + 0x84) = arg3
*(arg1 + 0x88) = arg4
void arg_4
__builtin_memcpy(arg1, &arg_4, 0x80)

if (arg1 + 0x8c != arg5)
    sub_52e3c0(arg1 + 0x8c, arg5, 0, 0xffffffff)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
