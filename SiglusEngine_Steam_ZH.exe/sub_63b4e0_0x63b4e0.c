// 函数: sub_63b4e0
// 地址: 0x63b4e0
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
sub_575830(arg1)
int32_t var_8_1 = 0
*arg1 = &C_db_wnd_info_read_flag::`vftable'{for `C_db_wnd_info'}
sub_63da60(&arg1[0x2e])
__builtin_memset(&arg1[0x22b], 0, 0x18)
arg1[0x237] = 7
arg1[0x236] = 0
arg1[0x232].w = 0
__builtin_memset(&arg1[0x238], 0, 0x18)
arg1[0x243] = 0
arg1[0x244] = 7
arg1[0x23f].w = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
