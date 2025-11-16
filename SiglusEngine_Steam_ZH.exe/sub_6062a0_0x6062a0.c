// 函数: sub_6062a0
// 地址: 0x6062a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be2a1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t var_14 = 0
int32_t var_8_1 = 1
int32_t arg_4
sub_605e10(arg1, &arg_4)
var_8_1.b = 0
int32_t eax_3 = arg_4
int32_t var_14_1 = 1

if (eax_3 != 0 && (eax_3.b & 1) == 0)
    int32_t eax_5 = *(eax_3 & 0xfffffffe)
    void arg_c
    
    if (eax_5 != 0)
        eax_5(&arg_c, &arg_c, 2, eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
