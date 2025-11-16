// 函数: sub_5907d0
// 地址: 0x5907d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7d99
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

for (; i != arg2; i = &i[0xd])
    int16_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 7
        *(result + 0x10) = 0
        *result = 0
        sub_52e3c0(result, i, 0, 0xffffffff)
        var_8_1.b = 2
        *(result + 0x2c) = 7
        *(result + 0x28) = 0
        result[0xc] = 0
        sub_52e3c0(&result[0xc], &i[6], 0, 0xffffffff)
        *(result + 0x30) = i[0xc]
    
    result = &result[0x1a]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
