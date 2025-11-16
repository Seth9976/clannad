// 函数: sub_701410
// 地址: 0x701410
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cea41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_d3d_effect_global_val::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_global_val::VTable** var_14_1 = arg1
int32_t var_8_1 = 3
*arg1 = &NT3::C_d3d_effect_global_val::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
char arg_4
sub_541b40(&arg1[1], &arg_4, 0, 0xffffffff)
var_8_1.b = 4
arg1[0xc] = 0xf
arg1[0xb] = 0
arg1[7].b = 0
char arg_1c
sub_541b40(&arg1[7], &arg_1c, 0, 0xffffffff)
var_8_1.b = 5
arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
void* arg_4c
sub_541b40(&arg1[0xd], &arg_4c, 0, 0xffffffff)
var_8_1.b = 6
arg1[0x18] = 0xf
arg1[0x17] = 0
arg1[0x13].b = 0
char arg_34
sub_541b40(&arg1[0x13], &arg_34, 0, 0xffffffff)

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
