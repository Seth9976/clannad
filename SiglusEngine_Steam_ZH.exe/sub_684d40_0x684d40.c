// 函数: sub_684d40
// 地址: 0x684d40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7e71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t* i = arg3
int32_t* result = arg4
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[7])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *result = *i
        result[6] = 7
        result[5] = 0
        result[1].w = 0
        sub_52e3c0(&result[1], &i[1], 0, 0xffffffff)
    
    result = &result[7]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
