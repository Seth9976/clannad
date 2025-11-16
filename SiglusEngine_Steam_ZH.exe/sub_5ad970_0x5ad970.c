// 函数: sub_5ad970
// 地址: 0x5ad970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba348
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t arg_4
int32_t* ecx
int32_t* result = sub_5b0590(ecx, &arg_4)

if (arg1 u>= 8)
    result = j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
