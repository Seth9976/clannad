// 函数: sub_686350
// 地址: 0x686350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8019
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void** i = arg3
int16_t* result = arg4
int16_t* result_2 = result
int32_t var_8_1 = 0

for (; i != arg2; i = &i[9])
    int16_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 7
        *(result + 0x10) = 0
        *result = 0
        sub_52e3c0(result, i, 0, 0xffffffff)
        var_8_1.b = 2
        sub_686410(&result[0xc], &i[6])
    
    result = &result[0x12]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
