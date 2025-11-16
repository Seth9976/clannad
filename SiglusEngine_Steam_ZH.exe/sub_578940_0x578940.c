// 函数: sub_578940
// 地址: 0x578940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b4770
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
    if (arg2 u<= 0x1fffffff)
        eax_3 = sub_745f3f(arg2 << 3)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x1fffffff || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_579fa0(eax_3, arg1[1], *arg1, esi)
int32_t var_8_2 = 0xffffffff
int32_t edx_1 = arg1[1]
void* ecx_1 = *arg1
int32_t eax_7 = (edx_1 - ecx_1) s>> 3

if (ecx_1 != 0)
    int32_t var_2c_3 = eax_7
    void* var_30_1 = ecx_1
    sub_579a70(ecx_1, edx_1)
    j__free(*arg1)

*arg1 = esi
arg1[2] = &esi[arg2 * 2]
void* result = &esi[eax_7 * 2]
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
