// 函数: sub_6819f0
// 地址: 0x6819f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc4e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
void var_74

if (*(data_bac510 + 0x10bc4) != 1)
    int16_t* var_58_2 = u".bmp"
    int32_t var_5c_1 = arg2
    sub_52e820(&var_74, u"%04d")
    int32_t var_2c
    void** eax_5 = sub_6ae4c0(&var_2c, var_74)
    int32_t var_8_2 = 1
    sub_532b80(eax_5, eax_5, arg1, var_58_2)
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c)
else
    wchar16 const* const var_58 = u".png"
    int32_t var_5c = arg2
    sub_52e820(&var_74, u"%04d")
    int32_t var_44
    int16_t* eax_4 = sub_6ae4c0(&var_44, var_74)
    int32_t var_8_1 = 0
    sub_532b80(eax_4, eax_4, arg1, var_58)
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
