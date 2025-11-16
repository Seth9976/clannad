// 函数: sub_7108a0
// 地址: 0x7108a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9d11e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_88
int32_t eax_2 = __security_cookie ^ &var_88
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_func_interface::VTable* var_6c
struct NT3::C_d3d_effect_func_interface::VTable** eax_5 = sub_70dca0(&var_6c)
int32_t var_c_1 = 0
var_c_1.b = 1
char var_84
sub_6b3810(arg1, sub_710780(eax_5, arg2, &var_84, 1, eax_5), nullptr, 0xffffffff)
int32_t var_70

if (var_70 u>= 0x10)
    j__free(var_84.d)

int32_t var_c_2 = 0xffffffff
int32_t var_70_1 = 0xf
int32_t var_74 = 0
var_84 = 0
var_6c = &NT3::C_d3d_effect_func_interface::`vftable'
int32_t var_68
int32_t var_54

if (var_54 u>= 0x10)
    j__free(var_68)

int32_t* eax_7 = sub_70deb0(&var_6c)
int32_t var_c_3 = 2
var_c_3.b = 3
sub_6b3810(arg1, sub_710780(eax_7, arg2, &var_84, 2, eax_7), nullptr, 0xffffffff)

if (var_70_1 u>= 0x10)
    j__free(var_84.d)

int32_t var_c_4 = 0xffffffff
int32_t var_70_2 = 0xf
int32_t var_74_1 = 0
var_84 = 0
var_6c = &NT3::C_d3d_effect_func_interface::`vftable'

if (var_54 u>= 0x10)
    j__free(var_68)

struct NT3::C_d3d_effect_func_interface::VTable* var_38
int32_t* eax_9 = sub_70dff0(&var_38)
int32_t var_c_5 = 4
var_c_5.b = 5
char var_50
int32_t* result =
    sub_6b3810(arg1, sub_710780(eax_9, arg2, &var_50, 0x10, eax_9), nullptr, 0xffffffff)
int32_t var_3c

if (var_3c u>= 0x10)
    result = j__free(var_50.d)

int32_t var_3c_1 = 0xf
int32_t var_40 = 0
var_50 = 0
var_38 = &NT3::C_d3d_effect_func_interface::`vftable'
int32_t var_20
int32_t var_34

if (var_20 u>= 0x10)
    result = j__free(var_34)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_88)
return result
