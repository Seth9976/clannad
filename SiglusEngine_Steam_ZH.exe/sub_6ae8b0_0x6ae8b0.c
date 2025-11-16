// 函数: sub_6ae8b0
// 地址: 0x6ae8b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca9e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi
edi.w = arg2

while (arg1[4] u> 0)
    if (*sub_55d480(arg1, 0) != edi.w)
        break
    
    int32_t var_5c
    int16_t* eax_4 = sub_53d730(arg1, &var_5c, 1, 0xffffffff)
    int32_t var_8_1 = 0
    int16_t var_44 = 0
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    sub_52e3c0(&var_44, eax_4, 0, 0xffffffff)
    var_8_1.b = 1
    
    if (arg1 != &var_44)
        sub_52e3c0(arg1, &var_44, 0, 0xffffffff)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c)

int32_t i

for (i = arg1[4]; i != 0; i = arg1[4])
    int32_t* ecx_4
    
    if (arg1[5] u< 8)
        ecx_4 = arg1
    else
        ecx_4 = *arg1
    
    if (*(ecx_4 + (i << 1) - 2) != edi.w)
        break
    
    int32_t var_74
    int16_t* eax_6 = sub_53d730(arg1, &var_74, 0, i - 1)
    int32_t var_8_3 = 2
    int16_t var_2c = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    sub_52e3c0(&var_2c, eax_6, 0, 0xffffffff)
    var_8_3.b = 3
    
    if (arg1 != &var_2c)
        sub_52e3c0(arg1, &var_2c, 0, 0xffffffff)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_4 = 0xffffffff
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return i
