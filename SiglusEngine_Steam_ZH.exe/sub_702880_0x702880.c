// 函数: sub_702880
// 地址: 0x702880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cecf3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::NT3::C_d3d_effect_global_sampler_val::VTable** var_5c = arg1
int32_t var_8_1 = 3
char var_84
char* var_58 = &var_84
void* var_88 = nullptr
int32_t var_70 = 0xf
int32_t var_74 = 0
int32_t* var_8c = &data_b0018c
var_84 = 0
sub_541eb0(&var_84, var_8c, var_88)
var_8_1.b = 4
char var_9c
char* var_54 = &var_9c
void* var_a0 = 0xffffffff
int32_t var_a4 = 0
var_88 = 0xf
int32_t var_8c_1 = 0
char arg_c
void** var_a8 = &arg_c
var_9c = 0
sub_541b40(&var_9c, var_a8, var_a4, var_a0)
var_8_1.b = 5
int128_t* var_a0_1 = 0xf
var_a4 = 0
char var_b4 = 0
sub_541eb0(&var_b4, "sampler", 7)
var_8_1.b = 3
sub_701570(arg1, var_b4)
var_8_1.b = 6
void arg_24
void* var_70_1 = &arg_24
*arg1 = &NT3::C_d3d_effect_global_sampler_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
sub_703520(&arg1[0x1a], var_70_1)
arg1[0x1a] = &NT3::C_d3d_effect_global_texture_val::`vftable'{for `NT3::C_d3d_effect_global_val'}
int32_t var_70_2 = arg3.d
var_8_1.b = 7
void** var_50 = &var_88
int32_t var_74_1 = 0xf
int32_t var_78 = 0
var_88.b = 0
sub_541b40(&var_88, &arg_c, 0, 0xffffffff)
int32_t var_8c_3 = arg2
var_8_1.b = 8
int32_t var_44
char* eax_4 = sub_701a60(&arg_24, &var_44)
var_8_1.b = 9
void* var_90_2 = 3
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 0xa
sub_70ce20(sub_541eb0(&var_2c, &data_b08868, var_90_2), &var_2c, &var_a4, eax_4)
var_8_1.b = 0xc
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
char var_4c
var_4c.d = ecx_10
*ecx_10 = 0
arg1[0x56] = 0xf
arg1[0x55] = 0
arg1[0x51].b = 0
void* ebx = &arg1[0x57]
*(ebx + 0x14) = 0xf
*(ebx + 0x10) = 0
*ebx = 0
void* edi_1 = &arg1[0x5d]
*(edi_1 + 0x14) = 0xf
*(edi_1 + 0x10) = 0
*edi_1 = 0
void** esi_2 = &arg1[0x63]
esi_2[5] = 0xf
esi_2[4] = 0
*esi_2 = nullptr
var_8_1.b = 0x15
char arg_8c

if (&arg1[0x45] != &arg_8c)
    sub_541b40(&arg1[0x45], &arg_8c, 0, 0xffffffff)
    ecx_10 = var_4c.d

void* arg_a4

if (ecx_10 != &arg_a4)
    sub_541b40(ecx_10, &arg_a4, 0, 0xffffffff)

void* eax_7 = &arg1[0x51]
bool cond:0 = *(eax_7 + 0x14) u< 0x10
*(eax_7 + 0x10) = 0

if (not(cond:0))
    eax_7 = *eax_7

*eax_7 = 0
bool cond:1 = *(ebx + 0x14) u< 0x10
*(ebx + 0x10) = 0

if (not(cond:1))
    ebx = *ebx

*ebx = 0
bool cond:2 = *(edi_1 + 0x14) u< 0x10
*(edi_1 + 0x10) = 0

if (not(cond:2))
    edi_1 = *edi_1

*edi_1 = 0
bool cond:3 = esi_2[5] u< 0x10
esi_2[4] = 0

if (not(cond:3))
    esi_2 = *esi_2

*esi_2 = nullptr

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
    j__free(arg_a4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
