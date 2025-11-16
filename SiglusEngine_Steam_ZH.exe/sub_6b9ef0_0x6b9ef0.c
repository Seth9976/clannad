// 函数: sub_6b9ef0
// 地址: 0x6b9ef0
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
int32_t* edi = arg2

if (edi u< ecx)
    result = *arg1

int32_t* ecx_4

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_24_3 = ecx
        result = sub_6b9fb0(arg1)
    
    ecx_4 = arg1[1]
    arg2 = ecx_4
    int32_t* var_14_2 = ecx_4
    int32_t var_8_2 = 1
    
    if (ecx_4 != 0)
        result = sub_6ba1a0(ecx_4, edi)
else
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        sub_6b9fb0(arg1)
    
    result = &(*arg1)[(edi - result) s/ 0x38 * 0xe]
    ecx_4 = arg1[1]
    arg2 = ecx_4
    int32_t* var_14_1 = ecx_4
    int32_t var_8_1 = 0
    
    if (ecx_4 != 0)
        result = sub_6ba1a0(ecx_4, result)
arg1[1] = &arg1[1][0xe]
fsbase->NtTib.ExceptionList = ExceptionList
return result
