// 函数: sub_60cf40
// 地址: 0x60cf40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be770
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_28
uint32_t ebx = arg2
struct _EXCEPTION_REGISTRATION_RECORD** esi = nullptr
int32_t var_18 = 0

if (ebx != 0)
    if (ebx u<= 0xffffffff)
        eax_3 = sub_745f3f(ebx)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (ebx u> 0xffffffff || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
void* var_2c_2 = arg2
sub_60d020(eax_3, arg1[1], *arg1, esi)
struct _EXCEPTION_REGISTRATION_RECORD** eax_4 = *arg1
void* ecx_2 = arg1[1] - eax_4

if (eax_4 != 0)
    j__free(eax_4)

*arg1 = esi
arg1[2] = esi + ebx
int32_t result = esi + ecx_2
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
