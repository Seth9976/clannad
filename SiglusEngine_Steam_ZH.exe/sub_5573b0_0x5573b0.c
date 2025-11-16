// 函数: sub_5573b0
// 地址: 0x5573b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2450
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
void* eax_3 = arg2
void* edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0xba506)
        sub_743132()
        noreturn
    
    eax_3 = sub_745f3f(eax_3 * 0x15fc)
    edi = eax_3
    void* var_18_1 = edi
    
    if (edi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
void* var_34_2 = arg2
sub_557560(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_5 = arg1[1]
void* i = *arg1
void* ecx_2 = eax_5 - i

if (i != 0)
    for (; i != eax_5; i += 0x15fc)
        sub_551320(i)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x15fc + edi
void* result = ecx_2 s/ 0x15fc * 0x15fc + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
