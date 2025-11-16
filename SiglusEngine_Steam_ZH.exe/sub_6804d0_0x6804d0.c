// 函数: sub_6804d0
// 地址: 0x6804d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c78b1
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

for (; i != arg2; i = &i[0x13])
    int16_t* result_1 = result
    var_8_1.b = 1
    
    if (result != 0)
        *(result + 0x14) = 7
        *(result + 0x10) = 0
        *result = 0
        sub_52e3c0(result, i, 0, 0xffffffff)
        *(result + 0x18) = i[6]
        *(result + 0x1c) = i[7]
        *(result + 0x20) = *(i + 0x20)
        *(result + 0x30) = i[0xc]
        *(result + 0x34) = i[0xd]
        *(result + 0x38) = *(i + 0x38)
        *(result + 0x48) = i[0x12]
    
    result = &result[0x26]
    var_8_1.b = 0
    arg4 = result

fsbase->NtTib.ExceptionList = ExceptionList
return result
