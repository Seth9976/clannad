// 函数: sub_63ed10
// 地址: 0x63ed10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2f7c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
sub_642d60(arg1)
int32_t var_8_1 = 0
sub_5361a0(&arg1[0x24])
var_8_1.b = 1
sub_5cd600(&arg1[0x48])
var_8_1.b = 2
sub_5cd600(&arg1[0x6c])
var_8_1.b = 3
sub_5cd600(&arg1[0x90])
var_8_1.b = 4
sub_536280(&arg1[0xb4])
var_8_1.b = 5
sub_5cd480(&arg1[0xd8])
var_8_1.b = 6
sub_5cd480(&arg1[0xfc])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
