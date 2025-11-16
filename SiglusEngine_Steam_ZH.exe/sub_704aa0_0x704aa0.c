// 函数: sub_704aa0
// 地址: 0x704aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cf073
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_d3d_effect_semantics_struct::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_d3d_effect_semantics_struct::VTable** var_14_1 = arg1
int32_t var_8_1 = 0
*arg1 = &NT3::C_d3d_effect_semantics_struct::`vftable'
arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
void* arg_4
sub_541b40(&arg1[1], &arg_4, 0, 0xffffffff)
var_8_1.b = 1
arg1[7] = 0
arg1[8] = 0
arg1[7] = sub_688380()

if (arg2 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
