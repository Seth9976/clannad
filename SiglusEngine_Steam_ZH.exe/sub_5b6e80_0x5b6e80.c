// 函数: sub_5b6e80
// 地址: 0x5b6e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba9a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
void* eax_3 = arg2
void* edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0x540540)
        sub_743132()
        noreturn
    
    eax_3 = sub_745f3f(eax_3 * 0x30c)
    edi = eax_3
    void* var_18_1 = edi
    
    if (edi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
void* var_30_2 = arg2
sub_5b7a80(eax_3, arg1[1], *arg1, edi)
int32_t eax_5 = arg1[1]
void* i = *arg1
void* ecx_2 = eax_5 - i

if (i != 0)
    for (; i != eax_5; i += 0x30c)
        sub_5b7b30(i)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x30c + edi
void* result = ecx_2 s/ 0x30c * 0x30c + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
