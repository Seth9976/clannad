// 函数: sub_69f520
// 地址: 0x69f520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9a21
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

for (; i != arg2; i = &i[0x40])
    char* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_69f3d0(result, i)
    
    result = &result[0x40]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
