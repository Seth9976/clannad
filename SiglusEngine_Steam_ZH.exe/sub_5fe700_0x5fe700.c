// 函数: sub_5fe700
// 地址: 0x5fe700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (arg1[0x2d].b == 0)
    int32_t var_48
    int16_t* eax_5 = sub_5483b0(&arg1[1], &var_48)
    int32_t var_8_1 = 0
    int16_t var_30
    int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_30, 0xad8704)
    var_8_1.b = 1
    sub_684160(data_bac424, 2, eax_6)
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    result = 0
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        result = j__free(var_48)
else
    int32_t ebx_3 = (arg1[0x2a] - arg1[0x29]) s/ 0x250
    result = sub_5fe3c0(&arg1[0x29], arg2)
    
    if (arg2 s> ebx_3)
        result = (**arg1)(ebx_3, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
