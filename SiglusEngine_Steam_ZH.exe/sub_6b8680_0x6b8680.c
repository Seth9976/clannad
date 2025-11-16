// 函数: sub_6b8680
// 地址: 0x6b8680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb571
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_16c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_160 = 0
int32_t var_118 = 7
int32_t var_11c = 0
int16_t var_12c = 0
int32_t var_8_1 = 0

if (arg2 s< 0 || arg2 u>= 0x51)
    int16_t var_114
    __wcserror_s(&var_114, 0x80, arg2)
    int32_t var_130_1 = 7
    int32_t var_134_1 = 0
    int16_t var_144 = 0
    int32_t ecx_2
    
    if (var_114 != 0)
        int16_t* ecx_3 = &var_114
        int16_t i
        
        do
            i = *ecx_3
            ecx_3 = &ecx_3[1]
        while (i != 0)
        void var_112
        ecx_2 = (ecx_3 - &var_112) s>> 1
    else
        ecx_2 = 0
    
    sub_52e720(&var_144, &var_114, ecx_2)
    var_8_1.b = 2
    sub_52e3c0(&var_12c, &var_144, 0, 0xffffffff)
    var_8_1.b = 0
    
    if (var_130_1 u>= 8)
        j__free(var_144.d)
else
    int32_t var_15c
    sub_52e820(&var_15c, (&data_b5bc9c)[arg2 * 2])
    var_8_1.b = 1
    sub_52e3c0(&var_12c, &var_15c, 0, 0xffffffff)
    var_8_1.b = 0
    int32_t var_148
    
    if (var_148 u>= 8)
        j__free(var_15c)

*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
sub_52e3c0(arg1, &var_12c, 0, 0xffffffff)

if (var_118 u>= 8)
    j__free(var_12c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
