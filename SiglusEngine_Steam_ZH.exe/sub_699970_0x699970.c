// 函数: sub_699970
// 地址: 0x699970
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c9298
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* esi = arg1
int32_t* edx = arg2

if (edx == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

arg2 = nullptr
int16_t* eax_4 = edx
int32_t var_8_1 = 0

do
    arg1.w = *eax_4
    eax_4 = &eax_4[1]
while (arg1.w != 0)

int32_t result = sub_6998c0(esi, edx, (eax_4 - &eax_4[1]) s>> 1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
