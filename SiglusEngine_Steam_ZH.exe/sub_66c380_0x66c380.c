// 函数: sub_66c380
// 地址: 0x66c380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c63c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_34
int32_t* var_1c = arg1
int32_t var_8_1 = 0
var_8_1.b = 2
void var_74
void* var_20 = &var_74
void* esi_1 = **arg1
int32_t result_1
sub_605e10(&var_74, &result_1)
var_8_1.b = 3
void var_b4
int32_t arg_4
sub_605e10(&var_b4, &arg_4)
var_8_1.b = 2
void var_18
sub_66d910(arg1, &var_18, esi_1)
int32_t var_8_2 = 0
int32_t eax_3 = arg_4

if (eax_3 != 0)
    if ((eax_3.b & 1) == 0)
        int32_t eax_5 = *(eax_3 & 0xfffffffe)
        void arg_c
        
        if (eax_5 != 0)
            eax_5(&arg_c, &arg_c, 2)
    
    arg_4 = 0

int32_t var_8_3 = 0xffffffff
int32_t result = result_1

if (result != 0 && (result.b & 1) == 0)
    result = *(result & 0xfffffffe)
    void arg_4c
    
    if (result != 0)
        result = result(&arg_4c, &arg_4c, 2)

fsbase->NtTib.ExceptionList = ExceptionList
return result
