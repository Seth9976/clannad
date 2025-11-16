// 函数: sub_685ca0
// 地址: 0x685ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7d12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg1[1]
struct _EXCEPTION_REGISTRATION_RECORD** edi = arg2

if (edi u< ecx)
    result = *arg1

struct _EXCEPTION_REGISTRATION_RECORD** ecx_2

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_24_3 = ecx
        result = sub_685e70(arg1)
    
    ecx_2 = arg1[1]
    arg2 = ecx_2
    struct _EXCEPTION_REGISTRATION_RECORD** var_14_2 = ecx_2
    int32_t var_8_2 = 1
    
    if (ecx_2 != 0)
        result = sub_6861d0(ecx_2, edi)
else
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        sub_685e70(arg1)
    
    ecx_2 = arg1[1]
    arg2 = ecx_2
    struct _EXCEPTION_REGISTRATION_RECORD** var_14_1 = ecx_2
    result = &(*arg1)[(edi - result) s/ 0xb8 * 0x2e]
    int32_t var_8_1 = 0
    
    if (ecx_2 != 0)
        result = sub_6861d0(ecx_2, result)
arg1[1] = &arg1[1][0x2e]
fsbase->NtTib.ExceptionList = ExceptionList
return result
