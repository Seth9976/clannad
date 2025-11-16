// 函数: sub_702bd0
// 地址: 0x702bd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cee0f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::NT3::C_d3d_effect_global_sampler_val::VTable** var_54 = arg1
int32_t var_8_1 = 7
char var_84
char* var_58 = &var_84
void* var_88 = nullptr
int32_t var_70 = 0xf
int32_t var_74 = 0
int32_t* var_8c = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c, var_88)
var_8_1.b = 8
char var_9c
char* var_48 = &var_9c
void* var_a0 = 0xffffffff
int32_t var_a4 = 0
var_88 = 0xf
int32_t var_8c_1 = 0
char arg_c
void** var_a8 = &arg_c
var_9c = 0
sub_541b40(&var_9c, var_a8, var_a4, var_a0)
var_8_1.b = 9
int128_t* var_a0_1 = 0xf
var_a4 = 0
char var_b4 = 0
sub_541eb0(&var_b4, "sampler", 7)
var_8_1.b = 7
sub_701570(arg1, var_b4)
var_8_1.b = 0xa
void arg_24
void* var_70_1 = &arg_24
*arg1 = &NT3::C_d3d_effect_global_sampler_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
sub_703520(&arg1[0x1a], var_70_1)
arg1[0x1a] = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
int32_t var_70_2 = arg3.d
var_8_1.b = 0xb
void** var_4c = &var_88
int32_t var_74_1 = 0xf
int32_t var_78 = 0
var_88.b = 0
sub_541b40(&var_88, &arg_c, 0, 0xffffffff)
int32_t var_8c_3 = arg2
var_8_1.b = 0xc
int32_t var_44
char* eax_4 = sub_701a60(&arg_24, &var_44)
var_8_1.b = 0xd
int32_t var_18 = 0xf
int32_t var_1c = 0
void* var_90_2 = 3
void* const var_94_1 = &data_b08868
char var_2c = 0
var_8_1.b = 0xe
sub_70ce20(sub_541eb0(&var_2c, var_94_1, var_90_2), &var_2c, &var_a4, eax_4)
var_8_1.b = 0x10
sub_7027b0(&arg1[0x34], var_a4, var_a0_1, var_9c)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44)

arg1[0x4a] = 0xf
arg1[0x49] = 0
arg1[0x45].b = 0
void* ecx_10 = &arg1[0x4b]
*(ecx_10 + 0x14) = 0xf
*(ecx_10 + 0x10) = 0
*ecx_10 = 0
arg1[0x56] = 0xf
arg1[0x55] = 0
arg1[0x51].b = 0
arg1[0x5c] = 0xf
arg1[0x5b] = 0
arg1[0x57].b = 0
arg1[0x62] = 0xf
arg1[0x61] = 0
arg1[0x5d].b = 0
arg1[0x68] = 0xf
arg1[0x67] = 0
arg1[0x63].b = 0
var_8_1.b = 0x19
char arg_8c

if (&arg1[0x45] != &arg_8c)
    sub_541b40(&arg1[0x45], &arg_8c, 0, 0xffffffff)
    ecx_10 = &arg1[0x4b]

char arg_a4

if (ecx_10 != &arg_a4)
    sub_541b40(ecx_10, &arg_a4, 0, 0xffffffff)

char arg_bc

if (&arg1[0x51] != &arg_bc)
    sub_541b40(&arg1[0x51], &arg_bc, 0, 0xffffffff)

char arg_d4

if (&arg1[0x57] != &arg_d4)
    sub_541b40(&arg1[0x57], &arg_d4, 0, 0xffffffff)

char arg_ec

if (&arg1[0x5d] != &arg_ec)
    sub_541b40(&arg1[0x5d], &arg_ec, 0, 0xffffffff)

void* arg_104

if (&arg1[0x63] != &arg_104)
    sub_541b40(&arg1[0x63], &arg_104, 0, 0xffffffff)

if (arg4 u>= 0x10)
    j__free(arg_c.d)

arg4 = 0xf
int32_t arg_1c = 0
arg_c = 0
sub_702710(&arg_24)

if (arg5 u>= 0x10)
    j__free(arg_8c.d)

arg5 = 0xf
int32_t arg_9c = 0
arg_8c = 0

if (arg6 u>= 0x10)
    j__free(arg_a4.d)

arg6 = 0xf
int32_t arg_b4 = 0
arg_a4 = 0

if (arg7 u>= 0x10)
    j__free(arg_bc.d)

arg7 = 0xf
int32_t arg_cc = 0
arg_bc = 0

if (arg8 u>= 0x10)
    j__free(arg_d4.d)

arg8 = 0xf
int32_t arg_e4 = 0
arg_d4 = 0

if (arg9 u>= 0x10)
    j__free(arg_ec.d)

arg9 = 0xf
int32_t arg_fc = 0
arg_ec = 0

if (arg10 u>= 0x10)
    j__free(arg_104)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
