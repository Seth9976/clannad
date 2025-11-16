// 函数: sub_634b00
// 地址: 0x634b00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
*(arg1 + 0xb4) = 7
*(arg1 + 0xb0) = 0
*(arg1 + 0xa0) = 0
sub_52e3c0(arg1 + 0xa0, arg2 + 0xa0, 0, 0xffffffff)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
void* eax_5 = *(arg2 + 0xbc)
*(arg1 + 0xbc) = eax_5

if (eax_5 != 0)
    *(eax_5 + 4)
    *(eax_5 + 4) += 1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
