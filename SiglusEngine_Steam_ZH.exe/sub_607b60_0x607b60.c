// 函数: sub_607b60
// 地址: 0x607b60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t* var_24 = &result_1
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6040e0()
int32_t ebx

if (result.b != 0)
    ebx.b = 0
else
    var_14.b = result.b
    int32_t var_24_1 = var_14
    int32_t var_28_1 = arg3
    int32_t* var_38 = nullptr
    int32_t* eax_4
    int32_t* result_2
    
    if (arg1 u> 8)
        void* var_3c_1 = arg1
        eax_4 = sub_7431ed()
        var_38 = eax_4
        result_2 = result_1
    else
        eax_4 = &var_38
        result_2 = &result_1
    
    sub_748840(eax_4, result_2, arg1)
    int32_t var_2c_1 = arg2
    sub_607c20()
    ebx.b = 1

if (arg1 u> 8)
    result = result_1
    
    if (result != 0)
        j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
