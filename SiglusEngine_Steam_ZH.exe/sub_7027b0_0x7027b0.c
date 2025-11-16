// 函数: sub_7027b0
// 地址: 0x7027b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cec08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
char* result_1 = result
int32_t var_8_1 = 1
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
char arg_4
sub_541b40(arg1, &arg_4, 0, 0xffffffff)
var_8_1.b = 2
*(result + 0x18) = *arg3
*(result + 0x3c) = 0xf
*(result + 0x38) = 0
result[0x28] = 0
void* arg_20
sub_541b40(&result[0x28], &arg_20, 0, 0xffffffff)
result[0x40] = arg5

if (arg2 u>= 0x10)
    j__free(arg_4.d)

arg2 = 0xf
int32_t arg_14 = 0
arg_4 = 0

if (arg4 u>= 0x10)
    j__free(arg_20)

fsbase->NtTib.ExceptionList = ExceptionList
return result
