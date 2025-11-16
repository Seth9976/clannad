// 函数: sub_6219c0
// 地址: 0x6219c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfd70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
struct _EXCEPTION_REGISTRATION_RECORD** edi = nullptr
int32_t var_18 = 0

if (arg2 != 0)
    if (arg2 u> 0xfffffff)
        sub_743132()
        noreturn
    
    eax_3 = sub_745f3f(arg2 << 4)
    edi = eax_3
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = edi
    
    if (edi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_30_2 = arg2
sub_621a90(eax_3, arg1[1], *arg1, edi)
struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = *arg1
void* ebx_2 = arg1[1] - eax_6

if (eax_6 != 0)
    j__free(eax_6)

arg1[2] = &edi[arg2 * 4]
arg1[1] = (ebx_2 & 0xfffffff0) + edi
*arg1 = edi
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
