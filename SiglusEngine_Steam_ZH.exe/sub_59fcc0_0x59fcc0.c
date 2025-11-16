// 函数: sub_59fcc0
// 地址: 0x59fcc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9240
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
    if (arg2 u<= 0x4924924)
        eax_3 = sub_745f3f(arg2 * 0x38)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x4924924 || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_59ff10(eax_3, arg1[1], *arg1, esi)
void* eax_8 = *arg1
int32_t ecx_5 = (arg1[1] - *arg1) s/ 0x38

if (eax_8 != 0)
    int32_t var_2c_3 = ecx_5
    int32_t var_30_1 = ecx_5
    sub_59fe90(eax_8, arg1[1])
    j__free(*arg1)

*arg1 = esi
arg1[2] = &esi[arg2 * 0xe]
void* result = &esi[ecx_5 * 0xe]
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
