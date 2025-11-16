// 函数: sub_704b40
// 地址: 0x704b40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cf0c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 3
char var_40
char* var_1c = &var_40
void* var_44 = 0xffffffff
int32_t var_48 = 0
int32_t var_2c = 0xf
int32_t var_30 = 0
void* arg_4c
void** var_4c = &arg_4c
var_40 = 0
sub_541b40(&var_40, var_4c, var_48, var_44)
var_8_1.b = 4
char var_58
char* var_14 = &var_58
void* var_5c = 0xffffffff
int32_t var_60 = 0
int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
char arg_34
void** var_64 = &arg_34
var_58 = 0
sub_541b40(&var_58, var_64, var_60, var_5c)
var_8_1.b = 5
char var_70
char* var_18 = &var_70
void* var_74 = 0xffffffff
int32_t var_78 = 0
int32_t var_5c_1 = 0xf
int32_t var_60_1 = 0
char arg_1c
void** var_7c = &arg_1c
var_70 = 0
sub_541b40(&var_70, var_7c, var_78, var_74)
var_8_1.b = 6
int32_t var_74_1 = 0xf
int32_t var_78_1 = 0
char var_88 = 0
char arg_4
sub_541b40(&var_88, &arg_4, 0, 0xffffffff)
var_8_1.b = 3
sub_703610(arg1, var_88)
*arg1 = &NT3::C_d3d_effect_vertex_input_semantics_struct::VertexInputSemanticsVal::`vftable'{for `NT3::C_d3d_effect_semantics_struct::SemanticsVal'}
arg1[0x25] = 0xf
arg1[0x24] = 0
arg1[0x20].b = 0
arg1[0x26] = arg6

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
