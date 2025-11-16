// 函数: sub_5d4940
// 地址: 0x5d4940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc060
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
char* eax_3 = arg2
char* edi = nullptr
int32_t var_18 = 0

if (eax_3 != 0)
    if (eax_3 u> 0x5852c)
        sub_743132()
        noreturn
    
    eax_3 = sub_745f3f(eax_3 * 0x2e60)
    edi = eax_3
    char* var_18_1 = edi
    
    if (edi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
char* var_34_2 = arg2
sub_5d5880(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_5 = arg1[1]
void* i = *arg1
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x5852cda1, eax_5 - i)
int32_t edx_2 = edx_1 s>> 0xc

if (i != 0)
    for (; i != eax_5; i += 0x2e60)
        sub_5d5a00(i)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x2e60 + edi
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x2e60 + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
