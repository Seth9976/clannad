// 函数: sub_60c480
// 地址: 0x60c480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be701
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_78 = 0
int16_t* var_7c = arg1
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
int32_t var_8_1 = 1
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_78_1 = 1
sub_662fa0(&var_5c)
var_8_1.b = 2
int32_t var_74
sub_532870(arg1, sub_548cb0(&var_5c, u"OS = ", &var_74, &var_5c), 0, 0xffffffff)
var_8_1.b = 1
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74)

int16_t var_2c
int16_t* eax_5 = sub_663650(&var_2c)
var_8_1.b = 3
var_8_1.b = 4
int16_t var_44
sub_532870(arg1, sub_548cb0(eax_5, u"\nCPU = ", &var_44, eax_5), 0, 0xffffffff)
int32_t var_30

if (var_30 u>= 8)
    j__free(var_44.d)

var_8_1.b = 1
int32_t var_30_1 = 7
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t* ecx_6 = data_bac4a4
int32_t var_18_1 = 7
int32_t var_1c = 0
var_2c = 0
void* eax_7 = *ecx_6

if (eax_7 != ecx_6[1])
    sub_541920(&var_74, eax_7 + 0x200)
    var_8_1.b = 5
    void** eax_9 = sub_6af1e0(&var_44)
    var_8_1.b = 6
    var_8_1.b = 7
    sub_532870(arg1, sub_548cb0(eax_9, 0xaf35f8, &var_2c, eax_9), 0, 0xffffffff)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    
    if (var_60 u>= 0x10)
        j__free(var_74)

if (var_48 u>= 8)
    j__free(var_5c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
