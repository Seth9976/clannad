// 函数: sub_7140e0
// 地址: 0x7140e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1728
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char var_64
char* var_38 = &var_64
void* var_68 = 0xffffffff
int32_t var_6c = 0
int32_t var_50 = 0xf
int32_t var_54 = 0
void* arg_4
void** var_70 = &arg_4
var_64 = 0
sub_541b40(&var_64, var_70, var_6c, var_68)
var_8_1.b = 1
char var_7c
char* var_3c = &var_7c
void* var_80 = nullptr
int32_t var_68_1 = 0xf
int32_t var_6c_1 = 0
int32_t* var_84 = &data_b0018c
var_7c = 0
sub_541eb0(&var_7c, var_84, var_80)
var_8_1.b = 2
int32_t var_2c
char* edx_1 = sub_714000(&var_2c, &arg_4)
var_8_1.b = 3

if (*(edx_1 + 0x14) u>= 0x10)
    edx_1 = *edx_1

char var_94
char* var_30 = &var_94
int32_t var_80_1 = 0xf
int32_t var_84_1 = 0
var_94 = 0
void* ecx_3

if (*edx_1 != 0)
    char* ecx_4 = edx_1
    char* eax_3
    
    do
        eax_3.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_3.b != 0)
    ecx_3 = ecx_4 - &ecx_4[1]
else
    ecx_3 = nullptr

sub_541eb0(&var_94, edx_1, ecx_3)
var_8_1.b = 4
int32_t var_98_1 = 0xf
int32_t var_9c_1 = 0
char var_ac = 0
sub_541eb0(&var_ac, "texture", 7)
var_8_1.b = 5
sub_701410(arg1, var_ac)
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

*arg1 = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}

if (arg2 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
