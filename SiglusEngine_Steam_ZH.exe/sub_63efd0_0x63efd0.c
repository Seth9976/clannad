// 函数: sub_63efd0
// 地址: 0x63efd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c30b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
sub_642d60(arg1)
int32_t var_8_1 = 0
sub_642d60(&arg1[0x24])
var_8_1.b = 1
sub_5361a0(&arg1[0x48])
var_8_1.b = 2
sub_536280(&arg1[0x6c])
var_8_1.b = 3
sub_642d60(&arg1[0x90])
var_8_1.b = 4
sub_5361a0(&arg1[0xb4])
var_8_1.b = 5
sub_536280(&arg1[0xd8])
var_8_1.b = 6
sub_642d60(&arg1[0xfc])
var_8_1.b = 7
sub_5361a0(&arg1[0x120])
var_8_1.b = 8
sub_536280(&arg1[0x144])
var_8_1.b = 9
sub_642d60(&arg1[0x168])
var_8_1.b = 0xa
sub_5361a0(&arg1[0x18c])
var_8_1.b = 0xb
sub_536280(&arg1[0x1b0])
var_8_1.b = 0xc
sub_642d60(&arg1[0x1d4])
var_8_1.b = 0xd
sub_5361a0(&arg1[0x1f8])
var_8_1.b = 0xe
sub_536280(&arg1[0x21c])
var_8_1.b = 0xf
sub_642d60(&arg1[0x240])
var_8_1.b = 0x10
sub_5361a0(&arg1[0x264])
var_8_1.b = 0x11
sub_536280(&arg1[0x288])
var_8_1.b = 0x12
sub_5cd480(&arg1[0x2ac])
var_8_1.b = 0x13
sub_5cd480(&arg1[0x2d0])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
