// 函数: sub_6a4920
// 地址: 0x6a4920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be2d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 1
void var_64
void* var_14 = &var_64
int32_t result_1
sub_605e10(&var_64, &result_1)
var_8_1.b = 2
void var_a4
int32_t arg_4
sub_605e10(&var_a4, &arg_4)
var_8_1.b = 1
sub_6a49f0(arg1, arg2)
var_8_1.b = 0
int32_t eax_3 = arg_4

if (eax_3 != 0)
    if ((eax_3.b & 1) == 0)
        int32_t eax_5 = *(eax_3 & 0xfffffffe)
        void arg_c
        
        if (eax_5 != 0)
            eax_5(&arg_c, &arg_c, 2, eax_2)
    
    arg_4 = 0

int32_t var_8_2 = 0xffffffff
int32_t result = result_1

if (result != 0 && (result.b & 1) == 0)
    result = *(result & 0xfffffffe)
    void arg_4c
    
    if (result != 0)
        result = result(&arg_4c, &arg_4c, 2, eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
