// 函数: sub_55cd90
// 地址: 0x55cd90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2a10
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
    if (arg2 u<= 0x5d1745d)
        eax_3 = sub_745f3f(arg2 * 0x2c)
        esi = eax_3
        struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = esi
    
    if (arg2 u> 0x5d1745d || esi == 0)
        sub_743132()
        noreturn

int32_t var_8_1 = 0
int32_t var_2c_2 = arg2
sub_553220(eax_3, arg1[1], *arg1, esi)
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = muls.dp.d(0x2e8ba2e9, arg1[1] - *arg1)
int32_t edx_2 = edx_1 s>> 3
struct _EXCEPTION_REGISTRATION_RECORD** eax_9 = *arg1

if (eax_9 != 0)
    j__free(eax_9)

*arg1 = esi
arg1[2] = arg2 * 0x2c + esi
void* result = ((edx_2 u>> 0x1f) + edx_2) * 0x2c + esi
arg1[1] = result
fsbase->NtTib.ExceptionList = ExceptionList
return result
