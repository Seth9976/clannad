// 函数: sub_607c20
// 地址: 0x607c20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be4a9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg3
int32_t var_8_1 = 0
int32_t* var_18 = arg3
var_8_1.b = 1
int32_t* result_1

if (arg3 != 0)
    arg3[2] = arg1
    *arg3 = 0
    int32_t* eax_4
    int32_t* result_2
    
    if (arg1 u> 8)
        int32_t var_24_1 = arg1
        eax_4 = sub_7431ed()
        result_2 = result_1
        *arg3 = eax_4
    else
        eax_4 = arg3
        result_2 = &result_1
    
    sub_748840(eax_4, result_2, arg3[2], eax_2)
    result = arg2
    arg3[3] = result

if (arg1 u> 8)
    result = result_1
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
