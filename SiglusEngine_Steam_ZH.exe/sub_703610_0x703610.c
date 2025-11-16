// 函数: sub_703610
// 地址: 0x703610
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cefa0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::VTable** var_18 = arg1
int32_t var_8_1 = 3
char var_44
char* var_20 = &var_44
void* var_48 = 0xffffffff
int32_t var_4c = 0
int32_t var_30 = 0xf
int32_t var_34 = 0
void* arg_4c
void** var_50 = &arg_4c
var_44 = 0
sub_541b40(&var_44, var_50, var_4c, var_48)
var_8_1.b = 4
char var_5c
char* var_14 = &var_5c
void* var_60 = nullptr
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
int32_t* var_64 = &data_b0018c
var_5c = 0
sub_541eb0(&var_5c, var_64, var_60)
var_8_1.b = 5
char var_74
char* var_1c = &var_74
void* var_78 = 0xffffffff
int32_t var_7c = 0
int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
char arg_34
void** var_80 = &arg_34
var_74 = 0
sub_541b40(&var_74, var_80, var_7c, var_78)
var_8_1.b = 6
int32_t var_78_1 = 0xf
int32_t var_7c_1 = 0
char var_8c = 0
char arg_1c
sub_541b40(&var_8c, &arg_1c, 0, 0xffffffff)
var_8_1.b = 3
sub_701410(arg1, var_8c)
var_8_1.b = 7
void* var_30_1 = 0xffffffff
*arg1 =
    &NT3::C_d3d_effect_semantics_struct::SemanticsVal::`vftable'{for `NT3::C_d3d_effect_global_val'}
int32_t var_34_1 = 0
arg1[0x1f] = 0xf
arg1[0x1e] = 0
arg1[0x1a].b = 0
char arg_4
sub_541b40(&arg1[0x1a], &arg_4, var_34_1, var_30_1)

if (arg2 u>= 0x10)
    j__free(arg_4.d)

arg2 = 0xf
int32_t arg_14 = 0
arg_4 = 0

if (arg3 u>= 0x10)
    j__free(arg_1c.d)

arg3 = 0xf
int32_t arg_2c = 0
arg_1c = 0

if (arg4 u>= 0x10)
    j__free(arg_34.d)

arg4 = 0xf
int32_t arg_44 = 0
arg_34 = 0

if (arg5 u>= 0x10)
    j__free(arg_4c)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
