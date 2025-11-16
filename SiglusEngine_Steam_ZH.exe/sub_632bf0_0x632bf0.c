// 函数: sub_632bf0
// 地址: 0x632bf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c13a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct _EXCEPTION_REGISTRATION_RECORD** edi = nullptr
int32_t var_1c = 0

if (arg2 != 0)
    if (arg2 u<= 0x1555555)
        eax_3 = sub_745f3f(arg2 * 0xc0)
        edi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_1c_1 = edi
    
    if (arg2 u> 0x1555555 || edi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_30_2 = arg2
sub_6341c0(eax_3, arg1[1], *arg1, edi)
int32_t var_8_2 = 0xffffffff
int32_t eax_6 = arg1[1]
void* i = *arg1
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = muls.dp.d(0x2aaaaaab, eax_6 - i)
int32_t edx_2 = edx_1 s>> 5
int32_t* esi_1

if (i == 0)
    esi_1 = arg1
else
    for (; i != eax_6; i += 0xc0)
        sub_6346c0(i)
    
    esi_1 = arg1
    j__free(*esi_1)

*esi_1 = edi
esi_1[2] = &edi[arg2 * 0x30]
void* result = &edi[((edx_2 u>> 0x1f) + edx_2) * 0x30]
esi_1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
