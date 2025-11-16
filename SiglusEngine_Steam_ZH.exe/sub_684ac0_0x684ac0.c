// 函数: sub_684ac0
// 地址: 0x684ac0
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

void* ecx_5

if (edi u>= ecx || result u> edi)
    if (ecx == arg1[2])
        int32_t var_24_2 = ecx
        result = sub_684bc0(arg1)
    
    int32_t* ecx_7 = arg1[1]
    arg2 = ecx_7
    int32_t* var_14_2 = ecx_7
    int32_t var_8_2 = 1
    
    if (ecx_7 != 0)
        *ecx_7 = *edi
        ecx_5 = &ecx_7[1]
        *(ecx_5 + 0x14) = 7
        *(ecx_5 + 0x10) = 0
        *ecx_5 = 0
        result = sub_52e3c0(ecx_5, &edi[1], 0, 0xffffffff)
else
    void* edi_1 = edi - result
    
    if (ecx == arg1[2])
        int32_t var_24_1 = ecx
        sub_684bc0(arg1)
    
    result = *arg1
    void* edx_4 = &result[edi_1 s/ 0x1c * 7]
    int32_t* ecx_4 = arg1[1]
    arg2 = ecx_4
    int32_t* var_14_1 = ecx_4
    int32_t var_8_1 = 0
    
    if (ecx_4 != 0)
        *ecx_4 = *edx_4
        ecx_5 = &ecx_4[1]
        *(ecx_5 + 0x14) = 7
        *(ecx_5 + 0x10) = 0
        *ecx_5 = 0
        result = sub_52e3c0(ecx_5, edx_4 + 4, 0, 0xffffffff)
arg1[1] = &arg1[1][7]
fsbase->NtTib.ExceptionList = ExceptionList
return result
