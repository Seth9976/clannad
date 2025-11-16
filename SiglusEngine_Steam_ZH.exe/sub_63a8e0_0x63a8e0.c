// 函数: sub_63a8e0
// 地址: 0x63a8e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c26d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct C_cfg_wnd_solo::Ccfg_wnd_solo_chrkoe::VTable** result = arg1
struct C_cfg_wnd_solo::Ccfg_wnd_solo_chrkoe::VTable** result_1 = result
sub_575830(arg1)
result[0x2e].b = 0
int32_t var_8_1 = 0
*result = &Ccfg_wnd_solo_chrkoe::`vftable'{for `C_cfg_wnd_solo'}
result[0x30] = 0
result[0x31] = 0
*(result + 0xcd) = 0
*(result + 0xcf) = 0
result[0x2f] = &Ccfg_wnd_func_chrkoe::`vftable'{for `C_cfg_wnd_func'}
sub_63f950(&result[0x36])
result[0x137] = 0
result[0x138] = 0
result[0x139] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
