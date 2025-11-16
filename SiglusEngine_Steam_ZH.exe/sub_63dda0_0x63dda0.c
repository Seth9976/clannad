// 函数: sub_63dda0
// 地址: 0x63dda0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2bc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::NT3::C_control::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::NT3::C_control::VTable** var_14_1 = arg1
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(&arg1[0x25], 0x334, 2, j_sub_575910)
*arg1 = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
sub_6bfb10(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
