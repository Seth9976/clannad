// 函数: sub_595300
// 地址: 0x595300
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8370
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
    if (arg2 u<= 0x3fffffff)
        eax_3 = sub_745f3f(arg2 << 2)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x3fffffff || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_595430(eax_3, arg1[1], *arg1, esi)
struct _EXCEPTION_REGISTRATION_RECORD** ecx_1 = *arg1
int32_t eax_7 = (arg1[1] - ecx_1) s>> 2

if (ecx_1 != 0)
    j__free(ecx_1)

*arg1 = esi
arg1[2] = &esi[arg2]
void* result = &esi[eax_7]
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
