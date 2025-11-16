// 函数: sub_607350
// 地址: 0x607350
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be338
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void*** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_24 = &arg1[2]
int32_t* var_34 = nullptr
struct _EXCEPTION_REGISTRATION_RECORD** result_1
int32_t* eax_5
int32_t* result_2

if (arg2 u> 8)
    void* var_38_1 = arg2
    eax_5 = sub_7431ed()
    var_34 = eax_5
    result_2 = result_1
else
    eax_5 = &var_34
    result_2 = &result_1

sub_748840(eax_5, result_2, arg2)
int32_t var_28 = arg3
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_6079d0()
void** const ecx = &data_af33ac

if (result.b == 0)
    ecx = nullptr

*arg1 = ecx

if (arg2 u> 8)
    result = result_1
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
