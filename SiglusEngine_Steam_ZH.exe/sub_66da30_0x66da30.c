// 函数: sub_66da30
// 地址: 0x66da30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c66a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 1
void var_6c
void* ecx = &var_6c
int32_t arg_c
int32_t arg_4c
int32_t eax_5
void var_ac

if (arg3 != **arg1)
    int32_t* esi_1 = *(arg3 + 4)
    int16_t* var_14_1 = &var_6c
    sub_605e10(ecx, &arg_4c)
    var_8_1.b = 3
    sub_605e10(&var_ac, &arg_c)
    var_8_1.b = 1
    sub_66e550(arg1, arg3, var_14_1)
    eax_5 = *esi_1
else
    void* var_18_1 = &var_6c
    sub_605e10(ecx, &arg_4c)
    var_8_1.b = 2
    sub_605e10(&var_ac, &arg_c)
    var_8_1.b = 1
    int16_t* var_14
    sub_66e550(arg1, arg3, var_14)
    eax_5 = **arg1
*arg2 = eax_5
var_8_1.b = 0
int32_t eax_6 = arg_c

if (eax_6 != 0)
    if ((eax_6.b & 1) == 0)
        int32_t eax_8 = *(eax_6 & 0xfffffffe)
        void arg_14
        
        if (eax_8 != 0)
            eax_8(&arg_14, &arg_14, 2, eax_2)
    
    arg_c = 0

int32_t var_8_2 = 0xffffffff
int32_t eax_9 = arg_4c

if (eax_9 != 0 && (eax_9.b & 1) == 0)
    int32_t eax_11 = *(eax_9 & 0xfffffffe)
    void arg_54
    
    if (eax_11 != 0)
        eax_11(&arg_54, &arg_54, 2, eax_2)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
