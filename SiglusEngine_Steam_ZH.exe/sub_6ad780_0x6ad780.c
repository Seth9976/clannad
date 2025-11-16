// 函数: sub_6ad780
// 地址: 0x6ad780
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca780
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = nullptr
int32_t var_78 = 0xa
void* i = sub_55af30(arg1, &var_78, nullptr, 1)

if (i != 0xffffffff)
    var_78 = 0xa
    
    do
        int16_t var_5c
        int16_t* eax_6 = sub_53d730(arg1, &var_5c, edi, i - edi)
        int32_t var_8_1 = 2
        int16_t var_2c = 0
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        sub_52e3c0(&var_2c, eax_6, 0, 0xffffffff)
        var_8_1.b = 3
        sub_60c680(arg2, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        int32_t var_48
        
        if (var_48 u>= 8)
            j__free(var_5c.d)
        
        var_48 = 7
        var_5c = 0
        edi = i + 1
        int32_t var_4c_1 = 0
        i = sub_55af30(arg1, &var_78, edi, 1)
    while (i != 0xffffffff)

int32_t var_74
int16_t* eax_8 = sub_53d730(arg1, &var_74, edi, 0xffffffff)
int32_t var_8_3 = 0
int16_t var_44 = 0
int32_t var_30 = 7
int32_t var_34 = 0
sub_52e3c0(&var_44, eax_8, 0, 0xffffffff)
var_8_3.b = 1
sub_60c680(arg2, &var_44)

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t result = 0
int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0
int32_t var_60

if (var_60 u>= 8)
    result = j__free(var_74)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
