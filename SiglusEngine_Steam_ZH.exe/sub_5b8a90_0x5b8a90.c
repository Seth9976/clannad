// 函数: sub_5b8a90
// 地址: 0x5b8a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bab71
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_60 = 0
int16_t* var_64 = arg2
*(arg2 + 0x14) = 7
*(arg2 + 0x10) = 0
*arg2 = 0
int32_t var_8_1 = 0
char* eax_4 = *(arg1 + 0xc4) + arg3
int32_t var_60_1 = 1

if (*(arg1 + 0xa0) != 0)
    void* var_44
    sub_52e820(&var_44, eax_4)
    int32_t var_8_3 = 3
    
    if (arg2 != &var_44)
        sub_52e3c0(arg2, &var_44, 0, 0xffffffff)
    
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
else
    void* var_5c
    sub_541920(&var_5c, eax_4)
    int32_t var_8_2 = 1
    int16_t var_2c
    int16_t* eax_5 = sub_6af1e0(&var_2c)
    var_8_2.b = 2
    
    if (arg2 != eax_5)
        sub_52e3c0(arg2, eax_5, 0, 0xffffffff)
    
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u>= 0x10)
        j__free(var_5c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg2
