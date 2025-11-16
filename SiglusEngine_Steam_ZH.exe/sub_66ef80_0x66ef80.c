// 函数: sub_66ef80
// 地址: 0x66ef80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6388
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
var_14.b = 0
int32_t var_24 = var_14
int32_t var_28 = arg3
int32_t* var_40 = nullptr
int32_t* result_1
int32_t* eax_4
int32_t* result_2

if (arg1 u> 8)
    int32_t ecx_1
    ecx_1.b = mulu.dp.d(arg1, 2) u>> 0x20 != 0
    int32_t var_44_1 = neg.d(ecx_1) | (arg1 * 2)
    eax_4 = sub_7431ed()
    var_40 = eax_4
    result_2 = result_1
else
    eax_4 = &var_40
    result_2 = &result_1

sub_748840(eax_4, result_2, arg1 * 2)
int32_t var_2c = arg2
int32_t ebx
ebx.b = sub_66f250().b
int32_t* result

if (arg1 u> 8)
    result = result_1
    
    if (result != 0)
        j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
