// 函数: sub_600590
// 地址: 0x600590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd961
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

for (; i != arg2; i = &i[0x57])
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_5fee10(result, i)
    
    result = &result[0x57]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
