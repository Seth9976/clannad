// 函数: sub_6404d0
// 地址: 0x6404d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3407
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
int32_t var_8_1 = 4
arg1[0x69c] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x6bf] u>= 8)
    j__free(arg1[0x6ba])

arg1[0x6bf] = 7
arg1[0x6be] = 0
arg1[0x6ba].w = 0
sub_6bfb10(&arg1[0x69c])
arg1[0x678] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x69b] u>= 8)
    j__free(arg1[0x696])

arg1[0x69b] = 7
arg1[0x69a] = 0
arg1[0x696].w = 0
sub_6bfb10(&arg1[0x678])
`eh vector vbase constructor iterator'(&arg1[0x1f8], 0x90, 0x20, sub_535d40)
var_8_1.b = 3
`eh vector vbase constructor iterator'(&arg1[0x168], 0x90, 4, sub_535d40)
var_8_1.b = 2
`eh vector vbase constructor iterator'(&arg1[0xd8], 0x90, 4, sub_535d40)
var_8_1.b = 1
`eh vector vbase constructor iterator'(&arg1[0x48], 0x90, 4, sub_535d40)
arg1[0x24] = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x47] u>= 8)
    j__free(arg1[0x42])

arg1[0x47] = 7
arg1[0x46] = 0
arg1[0x42].w = 0
sub_6bfb10(&arg1[0x24])
*arg1 = &NT3::C_control::`vftable'{for `NT3::C_window_base'}

if (arg1[0x23] u>= 8)
    j__free(arg1[0x1e])

arg1[0x23] = 7
arg1[0x22] = 0
arg1[0x1e].w = 0
sub_6bfb10(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
