// 函数: sub_663650
// 地址: 0x663650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c53f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_7c = 0
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, u"HARDWARE\DESCRIPTION\System\CentralProcessor\0", 0x2e)
int32_t var_8_1 = 0
void* const var_88_1 = 0x13
int32_t var_30 = 7
int32_t* var_8c_1 = u"ProcessorNameString"
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, var_8c_1, var_88_1)
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
var_8_1.b = 2
sub_6b46c0(&var_44, &var_5c, 0x80000002, &var_44, &var_2c)

if (var_1c != 0)
    int32_t var_88_4 = 7
    int32_t var_8c_3 = 0
    int16_t var_9c = 0
    int32_t* eax_4
    int32_t edx_1
    eax_4, edx_1 = sub_52e3c0(&var_9c, &var_2c, 0, 0xffffffff)
    int32_t var_74
    int32_t* eax_5 = sub_663560(eax_4, edx_1, &var_74, var_9c)
    var_8_1.b = 3
    
    if (&var_2c != eax_5)
        sub_52e3c0(&var_2c, eax_5, 0, 0xffffffff)
    
    var_8_1.b = 2
    int32_t var_60
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    *(arg1 + 0x14) = 7
    void* const var_88_7 = 0xffffffff
    *(arg1 + 0x10) = 0
    int32_t var_8c_5 = 0
    *arg1 = 0
    sub_52e3c0(arg1, &var_2c, var_8c_5, var_88_7)
else
    sub_52e820(arg1, &data_af8ac0)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
var_2c = 0
int32_t var_1c_1 = 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
var_44 = 0
int32_t var_34_1 = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
