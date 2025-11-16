// 函数: sub_6064f0
// 地址: 0x6064f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be308
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edx = *arg1
char const* const result_1

if (edx != 0)
    void var_1c
    int32_t __saved_ebp
    int32_t* eax_5 =
        (*((edx & 0xfffffffe) + 4))(&var_1c, &arg1[2], arg2, arg3, __security_cookie ^ &__saved_ebp)
    char const* const result = result_1
    *result = *eax_5
    *(result + 4) = eax_5[1]
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

result_1 = "call to empty boost::function"
struct std::exception::VTable* var_28
std::exception::exception(&var_28, &result_1)
var_28 = &boost::bad_function_call::`vftable'{for `std::runtime_error'}
int32_t var_8_1 = 0
sub_606800(&var_28)
noreturn
