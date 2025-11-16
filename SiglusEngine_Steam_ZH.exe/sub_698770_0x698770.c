// 函数: sub_698770
// 地址: 0x698770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9150
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
struct _EXCEPTION_REGISTRATION_RECORD** esi = nullptr
int32_t var_18 = 0

if (arg2 != 0)
    if (arg2 u<= 0x30c30c3)
        eax_3 = sub_745f3f(arg2 * 0x54)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x30c30c3 || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_698920(eax_3, arg1[1], *arg1, esi)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x30c30c31, arg1[1] - *arg1)
void* ecx_3 = *arg1
int32_t edx_2 = edx_1 s>> 4
int32_t eax_8 = (edx_2 u>> 0x1f) + edx_2

if (ecx_3 != 0)
    int32_t var_2c_3 = eax_8
    void* var_30_1 = ecx_3
    sub_6428c0(ecx_3, arg1[1])
    j__free(*arg1)

*arg1 = esi
arg1[2] = arg2 * 0x54 + esi
void* result = eax_8 * 0x54 + esi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
