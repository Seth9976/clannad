// 函数: sub_66f250
// 地址: 0x66f250
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c67e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg2
int32_t var_8_1 = 0
int32_t* result_2
int32_t* var_40 = &result_2
int32_t* result
int32_t ebx

if (sub_6040e0().b != 0)
    ebx.b = 0
else
    int32_t* result_1
    sub_66b2c0(&result_1, &result_2)
    int32_t* var_14_1 = arg2
    var_8_1.b = 2
    
    if (arg2 != 0)
        sub_66b2c0(arg2, &result_1)
    
    int32_t var_20
    
    if (var_20 u> 8)
        result = result_1
        
        if (result != 0)
            j__free(result)
    
    ebx.b = 1

if (arg1 u> 8)
    result = result_2
    
    if (result != 0)
        j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
