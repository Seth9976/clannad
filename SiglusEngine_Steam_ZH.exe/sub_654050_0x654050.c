// 函数: sub_654050
// 地址: 0x654050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c43ab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_88 = zx.o(0)
int32_t var_8_1 = 0
sub_656ca0(&var_88)
sub_6522e0(&var_88)
int32_t* edi = var_88.d
void* eax_4 = var_88:4.d - edi
int32_t var_38 = 1
int32_t var_34 = 3
void* var_30 = eax_4
int32_t result_1 = 0
int32_t* var_70 = nullptr
int32_t var_6c = 0
var_8_1.b = 1
int32_t var_78
int32_t var_98_1 = var_78
int32_t var_2c
sub_656990(&result_1, nullptr, &var_38, &var_2c)
int32_t var_98_2 = var_78
sub_656ab0(&result_1, var_70, edi, var_88:4.d)
int16_t var_50
sub_652000(&var_50)
var_8_1.b = 2
sub_6b3e90(&var_2c, &var_50)
var_8_1.b = 3
sub_6b4260(&var_2c)
var_8_1.b = 2
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

int32_t ebx

if (sub_6520c0(&var_50, &result_1) != 0)
    int32_t var_18_2 = 7
    int32_t var_1c_1 = 0
    var_2c.w = 0
    sub_52e720(&var_2c, 0xaf7b20, 0xf)
    var_8_1.b = 6
    sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_2 u>= 8)
        j__free(var_2c)
    
    ebx.b = 1
else
    int32_t var_68
    int16_t* eax_6 = sub_6b9ed0(&var_68)
    var_8_1.b = 4
    int16_t* eax_7 = sub_548cb0(eax_6, 0xaf7af8, &var_2c, eax_6)
    var_8_1.b = 5
    sub_684160(data_bac424, 2, eax_7)
    
    if (var_18 u>= 8)
        j__free(var_2c)
    
    int32_t var_18_1 = 7
    int32_t var_1c = 0
    var_2c.w = 0
    int32_t var_54
    
    if (var_54 u>= 8)
        j__free(var_68)
    
    ebx.b = 0

int32_t var_3c

if (var_3c u>= 8)
    j__free(var_50.d)

int32_t var_3c_1 = 7
var_50 = 0
int32_t result = result_1
int32_t var_40 = 0

if (result != 0)
    j__free(result)

if (edi != 0)
    j__free(edi)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
