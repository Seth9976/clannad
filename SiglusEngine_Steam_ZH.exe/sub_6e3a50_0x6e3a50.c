// 函数: sub_6e3a50
// 地址: 0x6e3a50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd1b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1
int32_t* var_70 = arg1
int32_t var_74 = arg5
char result
int32_t ecx
result, ecx = sub_6e3b70(arg1, arg2, arg3, arg4, arg1.b)

if (result != 0)
    result = 1
else
    int32_t var_70_1 = ecx
    int32_t var_5c
    int16_t* eax_4 = sub_6ad9b0(&var_5c)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    int16_t var_44
    sub_6e2770(esi, sub_548cb0(eax_4, 0xb059fc, &var_44, eax_4))
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    int32_t var_70_5 = sub_52e720(&var_2c, 0xb059d0, 0x14)
    int32_t var_8_3 = 2
    sub_6e2770(esi, &var_2c)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
