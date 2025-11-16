// 函数: sub_66f740
// 地址: 0x66f740
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf161
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1

if (arg1 != arg2)
    sub_670c00(arg1)
    int32_t* var_18_1 = arg1
    int32_t var_8_1 = 0
    
    if (arg1 != 0)
        sub_6703f0(arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
