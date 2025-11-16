// 函数: sub_6767a0
// 地址: 0x6767a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6da2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** edi = data_bac458
int32_t ecx = arg1[1]

if (edi u< ecx)
    result = *arg1

int32_t* ecx_2

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        result = sub_65b2a0(arg1, 1)
    
    ecx_2 = arg1[1]
    int32_t* var_18_1 = ecx_2
    int32_t* var_14_1 = ecx_2
    int32_t var_8_2 = 1
    
    if (ecx_2 != 0)
        result = sub_54cf80(ecx_2, edi)
else
    if (ecx == arg1[2])
        sub_65b2a0(arg1, 1)
    
    ecx_2 = arg1[1]
    int32_t* var_14 = ecx_2
    int32_t* var_18 = ecx_2
    result = &(*arg1)[(edi - result) s/ 0x158 * 0x56]
    int32_t var_8_1 = 0
    
    if (ecx_2 != 0)
        result = sub_54cf80(ecx_2, result)
arg1[1] = &arg1[1][0x56]
fsbase->NtTib.ExceptionList = ExceptionList
return result
