// 函数: sub_6abd30
// 地址: 0x6abd30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::NT3::C_dialog::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::NT3::C_dialog::VTable** var_14_1 = arg1
int32_t var_8_1 = 0
sub_6404d0(&arg1[0x2d])
*arg1 = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
int32_t eax_3 = arg1[0x20]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[0x20] = 0
    arg1[0x21] = 0
    arg1[0x22] = 0

sub_6bfb10(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return 0
