// 函数: sub_66e240
// 地址: 0x66e240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void*** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_24 = &arg1[2]
int32_t* var_3c = nullptr
int32_t* result_1
int32_t* eax_5
int32_t* result_2

if (arg2 u> 8)
    int32_t ecx
    ecx.b = mulu.dp.d(arg2, 2) u>> 0x20 != 0
    int32_t var_40_1 = neg.d(ecx) | (arg2 * 2)
    eax_5 = sub_7431ed()
    var_3c = eax_5
    result_2 = result_1
else
    eax_5 = &var_3c
    result_2 = &result_1

sub_748840(eax_5, result_2, arg2 * 2)
int32_t var_28 = arg3
int32_t* result = sub_66ef80()
void** const ecx_5 = &data_af93dc

if (result.b == 0)
    ecx_5 = nullptr

*arg1 = ecx_5

if (arg2 u> 8)
    result = result_1
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
