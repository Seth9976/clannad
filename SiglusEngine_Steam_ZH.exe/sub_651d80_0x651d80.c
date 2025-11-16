// 函数: sub_651d80
// 地址: 0x651d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3ef1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
char* i = arg3
char* result = arg4
char* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[0xbc])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        *(result + 2) = *(i + 2)
        sub_6349a0(&result[0x14], &i[0x14])
    
    result = &result[0xbc]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
