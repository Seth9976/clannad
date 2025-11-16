// 函数: sub_552d30
// 地址: 0x552d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2030
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
int32_t* var_18 = arg1
*arg1 = 0
arg1[1] = 0
arg1[2] = 0
int32_t eax_7
int32_t ecx
eax_7, ecx = sub_553060(arg1, (arg2[1] - *arg2) s/ 0x2cc)

if (eax_7.b != 0)
    int32_t var_8_1 = 0
    int32_t* var_2c_1 = arg2
    int32_t var_30_1 = ecx
    arg1[1] = sub_553270(eax_7, arg2[1], *arg2, *arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
