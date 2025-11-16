// 函数: sub_63bd70
// 地址: 0x63bd70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c26d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::VTable** var_14_1 = arg1
int32_t var_8_1 = 0
`eh vector vbase constructor iterator'(&arg1[0x1ed], 0xc, 2, sub_55d540)
sub_63dda0(&arg1[0x2e])
sub_575890(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
