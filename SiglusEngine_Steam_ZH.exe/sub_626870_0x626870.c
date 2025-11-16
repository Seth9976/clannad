// 函数: sub_626870
// 地址: 0x626870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0040
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xaf3944, 3)
int32_t var_8_1 = 0
void var_78
int32_t var_5c
sub_60f150(&var_2c, data_bac4d8 + 0x18, &var_5c, &var_2c, arg1, &var_78, 1)
var_8_1.b = 2

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_4c

if (var_4c != 0)
    ebx.b = 1
else
    if (ebx.b != 0)
        int32_t var_74
        int16_t* eax_4 = sub_548cb0(0, 0xaf44b4, &var_74, arg1)
        var_8_1.b = 3
        int16_t var_44
        int16_t* eax_5 = sub_532b80(eax_4, eax_4, &var_44, &data_af1b40)
        var_8_1.b = 4
        sub_684160(data_bac424, 0xa, eax_5)
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_60
        
        if (var_60 u>= 8)
            j__free(var_74)
    
    ebx.b = 0

int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
