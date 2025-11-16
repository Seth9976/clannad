// 函数: sub_65d6a0
// 地址: 0x65d6a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_6980b0(data_bac45c, arg3)
bool result

if (eax_3 != 0xffffffff)
    result = sub_65d5c0(eax_3, arg2, eax_3, arg4, arg5, arg6) != 0
else
    sub_676610(0)
    int32_t var_30
    int16_t* eax_4 = sub_532b80(0, arg3, &var_30, &data_af80c4)
    int32_t var_8_1 = 0
    int32_t ebx
    ebx.b = sub_684160(data_bac424, 9, eax_4)
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    result = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
