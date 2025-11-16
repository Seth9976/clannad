// 函数: sub_712640
// 地址: 0x712640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1408
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_98 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_7 = (arg2 - arg3) s/ 0x68
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(eax_7)
int32_t result = eax_8 - edx_3
int32_t i = result s>> 1

if (i s> 0)
    void* edi_2 = i * 0x68 + arg3
    
    do
        edi_2 -= 0x68
        i -= 1
        struct NT3::C_d3d_effect_global_val::VTable* var_80
        sub_703520(&var_80, edi_2)
        int32_t var_8_1 = 0
        sub_712c60(&var_80, i, arg3, eax_7, &var_80, arg4)
        int32_t var_8_2 = 0xffffffff
        result = sub_702710(&var_80)
    while (i s> 0)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
