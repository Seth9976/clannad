// 函数: sub_7171a0
// 地址: 0x7171a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2259
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_5c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg1
int32_t var_8_1 = 0
int32_t var_48 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
sub_541eb0(arg1, "**/not found the val./**", 0x18)
int32_t var_8_2 = 0
int32_t var_48_1 = 1

if (arg2 == 1)
    int32_t var_2c
    sub_541920(&var_2c, "WorldPos")
    int32_t var_8_3 = 2
    
    if (result != &var_2c)
        sub_541b40(result, &var_2c, 0, 0xffffffff)
    
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
else if (arg2 == 3)
    void var_44
    sub_541920(&var_44, "WorldNormal")
    int32_t var_8_4 = 4
    
    if (result != &var_44)
        sub_541b40(result, &var_44, 0, 0xffffffff)
    
    sub_53f510(&var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
