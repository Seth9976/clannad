// 函数: sub_6ab230
// 地址: 0x6ab230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca636
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct NT3::C_window_base::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct NT3::C_window_base::NT3::C_dialog::VTable** result = arg1
struct NT3::C_window_base::NT3::C_dialog::VTable** result_1 = result
sub_6bfab0(arg1)
*result = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
result[0x1e].b = 0
result[0x1f] = 0
result[0x20] = 0
result[0x21] = 0
result[0x22] = 0
sub_6c77c0(&result[0x20])
int32_t var_8_1 = 0
*result = &Ccfg_wnd_modal_volume_bgmfade::`vftable'{for `C_cfg_wnd_modal'}
result[0x27] = 0
result[0x28] = 0
*(result + 0xa9) = 0
*(result + 0xab) = 0
result[0x26] = &Ccfg_wnd_func_volume::`vftable'{for `C_cfg_wnd_func'}
sub_63efd0(&result[0x2e])
var_8_1.b = 1
result[0x324] = 0
result[0x325] = 0
*(result + 0xc9d) = 0
*(result + 0xc9f) = 0
result[0x323] = &Ccfg_wnd_func_bgmfade::`vftable'{for `C_cfg_wnd_func'}
sub_63f6a0(&result[0x32a])
fsbase->NtTib.ExceptionList = ExceptionList
return result
