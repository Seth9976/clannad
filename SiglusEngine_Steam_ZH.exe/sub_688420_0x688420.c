// 函数: sub_688420
// 地址: 0x688420
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8241
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t* result = sub_688660()
int32_t var_8_1 = 0
int32_t* result_1 = result
result[3].w = 0
void* var_1c = &result[4]
void* var_20 = &result[4]
var_8_1.b = 1

if (result != 0xfffffff0)
    result[9] = 7
    result[8] = 0
    result[4].w = 0
    sub_52e3c0(&result[4], arg1, 0, 0xffffffff)
    result[0xa] = arg1[6]
    void* eax_4 = arg1[7]
    result[0xb] = eax_4
    
    if (eax_4 != 0)
        *(eax_4 + 4)
        *(eax_4 + 4) += 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
