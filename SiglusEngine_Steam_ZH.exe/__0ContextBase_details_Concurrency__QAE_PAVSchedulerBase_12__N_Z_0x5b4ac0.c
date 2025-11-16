// 函数: ??0ContextBase@details@Concurrency@@QAE@PAVSchedulerBase@12@_N@Z
// 地址: 0x5b4ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba758
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
int32_t var_20 = arg3
sub_5b4c00(arg1 + 4, &var_20)
*arg2 = *(arg1 + 8) - 0x10
sub_5b4e70(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
