// 函数: sub_550ee0
// 地址: 0x550ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1900
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
    if (eax_3 u> 0x2e8ba2)
        sub_743132()
        noreturn
    
    eax_3 = sub_745f3f(eax_3 * 0x580)
    edi = eax_3
    void* var_18_1 = edi
    
    if (edi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
void* var_34_2 = arg2
sub_551270(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_5 = arg1[1]
void* i = *arg1
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = muls.dp.d(0x2e8ba2e9, eax_5 - i)
int32_t edx_2 = edx_1 s>> 8

if (i != 0)
    for (; i != eax_5; i += 0x580)
        sub_551610(i)
    
    j__free(*arg1)

*arg1 = edi
arg1[2] = arg2 * 0x580 + edi
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x580 + edi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
