// 函数: sub_5f3dc0
// 地址: 0x5f3dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcf58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
sub_5e5060(arg1, 1)
*(arg1 + 0x1ac) = 9
int32_t arg_14

if (arg1 + 0xd74 != &arg_14)
    sub_52e3c0(arg1 + 0xd74, &arg_14, 0, 0xffffffff)

*(arg1 + 0x268) = arg2
*(arg1 + 0x269) = arg3
*(arg1 + 0x26a) = arg4
*(arg1 + 0x26b) = arg5 != 0
int32_t ebx
int32_t edi
ebx.b = sub_5f3e70(arg1, arg1, edi) != 0

if (arg6 u>= 8)
    j__free(arg_14)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx.b
