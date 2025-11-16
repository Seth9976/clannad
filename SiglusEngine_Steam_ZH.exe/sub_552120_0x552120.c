// 函数: sub_552120
// 地址: 0x552120
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1e01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int128_t* i = arg3
int128_t* result = arg4
int128_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x3b4)
    int128_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_552410(result, i)
    
    result += 0x3b4
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
