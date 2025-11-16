// 函数: sub_634ca0
// 地址: 0x634ca0
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
*(arg1 + 0xa0) = *(arg2 + 0xa0)
*(arg1 + 0xa4) = *(arg2 + 0xa4)
*(arg1 + 0xa8) = *(arg2 + 0xa8)
*(arg1 + 0xac) = *(arg2 + 0xac)
*(arg1 + 0xb0) = *(arg2 + 0xb0)
*(arg1 + 0xb1) = *(arg2 + 0xb1)
*(arg1 + 0xb2) = *(arg2 + 0xb2)
*(arg1 + 0xb3) = *(arg2 + 0xb3)
*(arg1 + 0xb4) = *(arg2 + 0xb4)
sub_634e90(arg1 + 0xb8, arg2 + 0xb8)
*(arg1 + 0xc4) = *(arg2 + 0xc4)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xcc) = *(arg2 + 0xcc)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
