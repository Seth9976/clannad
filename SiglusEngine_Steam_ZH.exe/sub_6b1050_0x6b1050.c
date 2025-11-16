// 函数: sub_6b1050
// 地址: 0x6b1050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cac50
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
    if (arg2 u<= 0xe6c2b4)
        eax_3 = sub_745f3f(arg2 * 0x11c)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0xe6c2b4 || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_6b1ac0(eax_3, arg1[1], *arg1, esi)
void* ecx_2 = arg1[1] - *arg1
struct _EXCEPTION_REGISTRATION_RECORD** eax_9 = *arg1

if (eax_9 != 0)
    j__free(eax_9)

*arg1 = esi
arg1[2] = arg2 * 0x11c + esi
void* result = ecx_2 s/ 0x11c * 0x11c + esi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
