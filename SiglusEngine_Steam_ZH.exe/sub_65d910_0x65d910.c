// 函数: sub_65d910
// 地址: 0x65d910
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1130
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_6980b0(data_bac45c, arg1)
bool result

if (eax_3 != 0xffffffff)
    result = sub_65d820(eax_3, arg2) != 0
else
    sub_676610(0)
    int32_t var_48
    int16_t* eax_4 = sub_548cb0(0, 0xaf8118, &var_48, arg1)
    int32_t var_8_1 = 0
    int16_t var_30
    int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_30, &data_af1b40)
    var_8_1.b = 1
    int32_t ebx
    ebx.b = sub_684160(data_bac424, 9, eax_5)
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    var_30 = 0
    int32_t var_34
    
    if (var_34 u>= 8)
        j__free(var_48)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
