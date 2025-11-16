// 函数: sub_629610
// 地址: 0x629610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7d12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
struct _EXCEPTION_REGISTRATION_RECORD*** result = esi[1]
void* edi = arg2

if (edi u< result)
    arg1 = *esi

int32_t* ecx_2

if (edi u>= result || arg1 u> edi)
    if (result == esi[2])
        int32_t* var_24_2 = arg1
        result = sub_6296b0(esi)
    
    ecx_2 = esi[1]
    arg2 = ecx_2
    int32_t* var_14_2 = ecx_2
    int32_t var_8_2 = 1
else
    if (result == esi[2])
        int32_t* var_24_1 = arg1
        result = sub_6296b0(esi)
    
    ecx_2 = esi[1]
    edi = ((edi - arg1) & 0xffffffc0) + *esi
    arg2 = ecx_2
    int32_t* var_14_1 = ecx_2
    int32_t var_8_1 = 0

if (ecx_2 != 0)
    result = sub_629870(ecx_2, edi)

esi[1] += 0x40
fsbase->NtTib.ExceptionList = ExceptionList
return result
