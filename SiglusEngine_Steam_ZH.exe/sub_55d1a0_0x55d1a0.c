// 函数: sub_55d1a0
// 地址: 0x55d1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2a61
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

for (; i != arg2; i = &i[6])
    int16_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 7
        *(result + 0x10) = 0
        *result = 0
        sub_52e3c0(result, i, 0, 0xffffffff)
    
    result = &result[0xc]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
