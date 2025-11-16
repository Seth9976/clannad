// 函数: sub_60c680
// 地址: 0x60c680
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

int32_t* ecx_3

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        result = sub_55ca80(arg1, 1)
    
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_14_2 = ecx_3
    int32_t var_8_2 = 1
    
    if (ecx_3 != 0)
        ecx_3[5] = 7
        int32_t var_24_2 = 0xffffffff
        int32_t var_28_2 = 0
        ecx_3[4] = 0
        *ecx_3 = 0
        result = sub_52e3c0(ecx_3, edi, 0, 0xffffffff)
else
    if (ecx == arg1[2])
        sub_55ca80(arg1, 1)
    
    result = &(*arg1)[(edi - result) s/ 0x18 * 6]
    ecx_3 = arg1[1]
    arg2 = ecx_3
    int32_t* var_14_1 = ecx_3
    int32_t var_8_1 = 0
    
    if (ecx_3 != 0)
        ecx_3[5] = 7
        int32_t var_24_1 = 0xffffffff
        int32_t var_28_1 = 0
        ecx_3[4] = 0
        *ecx_3 = 0
        result = sub_52e3c0(ecx_3, result, 0, 0xffffffff)
arg1[1] = &arg1[1][6]
fsbase->NtTib.ExceptionList = ExceptionList
return result
