// 函数: sub_63caa0
// 地址: 0x63caa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2716
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct C_cfg_wnd_base::Ccfg_wnd_base_volume_bgmfade::VTable** result = arg1
struct C_cfg_wnd_base::Ccfg_wnd_base_volume_bgmfade::VTable** result_1 = result
sub_575830(arg1)
result[0x2e].b = 0
int32_t var_8_1 = 0
*result = &Ccfg_wnd_base_volume_bgmfade::`vftable'{for `C_cfg_wnd_base'}
result[0x30] = 0
result[0x31] = 0
*(result + 0xcd) = 0
*(result + 0xcf) = 0
result[0x2f] = &Ccfg_wnd_func_volume::`vftable'{for `C_cfg_wnd_func'}
sub_63efd0(&result[0x37])
var_8_1.b = 1
result[0x32d] = 0
result[0x32e] = 0
*(result + 0xcc1) = 0
*(result + 0xcc3) = 0
result[0x32c] = &Ccfg_wnd_func_bgmfade::`vftable'{for `C_cfg_wnd_func'}
sub_63f6a0(&result[0x333])
fsbase->NtTib.ExceptionList = ExceptionList
return result
