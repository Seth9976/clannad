// 函数: sub_66b680
// 地址: 0x66b680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c62c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_18 = arg1
int32_t* var_28 = nullptr
int32_t var_8_1 = 1
int32_t* var_2c = nullptr
*arg1 = 0
arg1[1] = 0
*arg1 = sub_6699d0(var_2c, var_28)
var_8_1.b = 2
void var_64
void* var_14 = &var_64
int32_t arg_44
sub_605e10(&var_64, &arg_44)
var_8_1.b = 3
void var_a4
int32_t arg_4
sub_605e10(&var_a4, &arg_4)
var_8_1.b = 2
sub_66c470(arg1)
var_8_1.b = 0
int32_t eax_4 = arg_4

if (eax_4 != 0)
    if ((eax_4.b & 1) == 0)
        int32_t eax_6 = *(eax_4 & 0xfffffffe)
        void arg_c
        
        if (eax_6 != 0)
            eax_6(&arg_c, &arg_c, 2, eax_2)
    
    arg_4 = 0

int32_t var_8_2 = 0xffffffff
int32_t eax_7 = arg_44

if (eax_7 != 0 && (eax_7.b & 1) == 0)
    int32_t eax_9 = *(eax_7 & 0xfffffffe)
    void arg_4c
    
    if (eax_9 != 0)
        eax_9(&arg_4c, &arg_4c, 2, eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
