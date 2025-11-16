// 函数: sub_5644a0
// 地址: 0x5644a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3341
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* ecx
int32_t* result = sub_564550(ecx)
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    result[4] = *arg1
    sub_551b10(&result[5], &arg1[1])
    result[0x16] = arg1[0x12]
    result[0x17] = arg1[0x13]
    result[0x18] = arg1[0x14]

fsbase->NtTib.ExceptionList = ExceptionList
return result
