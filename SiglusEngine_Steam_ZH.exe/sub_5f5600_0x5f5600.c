// 函数: sub_5f5600
// 地址: 0x5f5600
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd1b1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* i = arg3
int32_t* result = arg4
int32_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i += 0x130)
    int32_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        sub_551c30(result, i)
        *(result + 0x120) = *(i + 0x120)
    
    result = &result[0x4c]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
