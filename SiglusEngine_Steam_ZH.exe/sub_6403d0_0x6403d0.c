// 函数: sub_6403d0
// 地址: 0x6403d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c3380
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
sub_642d60(arg1)
int32_t var_8_1 = 0
sub_536280(&arg1[0x24])
int32_t (__fastcall* var_20)(struct NT3::C_window_base::NT3::C_control::VTable** arg1) = sub_535d40
var_8_1.b = 1
sub_74675f(&arg1[0x48], 0x90, 4, sub_536280)
int32_t (__fastcall* var_20_1)(struct NT3::C_window_base::NT3::C_control::VTable** arg1) =
    sub_535d40
var_8_1.b = 2
sub_74675f(&arg1[0xd8], 0x90, 4, sub_536280)
int32_t (__fastcall* var_20_2)(struct NT3::C_window_base::NT3::C_control::VTable** arg1) =
    sub_535d40
var_8_1.b = 3
sub_74675f(&arg1[0x168], 0x90, 4, sub_642d60)
int32_t (__fastcall* var_20_3)(struct NT3::C_window_base::NT3::C_control::VTable** arg1) =
    sub_535d40
var_8_1.b = 4
sub_74675f(&arg1[0x1f8], 0x90, 0x20, sub_5cd540)
var_8_1.b = 5
sub_5cd480(&arg1[0x678])
var_8_1.b = 6
sub_5cd480(&arg1[0x69c])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
