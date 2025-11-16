// 函数: sub_63aef0
// 地址: 0x63aef0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c2793
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct C_cfg_wnd_solo::C_sys_wnd_solo_load::VTable** result = arg1
struct C_cfg_wnd_solo::C_sys_wnd_solo_load::VTable** result_1 = result
sub_575830(arg1)
result[0x2e].b = 0
int32_t var_8_1 = 0
*result = &C_sys_wnd_solo_load::`vftable'{for `C_cfg_wnd_solo'}
void* var_18 = &result[0x2f]
result[0x30] = 0
result[0x31] = 0
*(result + 0xcd) = 0
*(result + 0xcf) = 0
result[0x2f] = &C_sys_wnd_func_saveload::`vftable'{for `C_cfg_wnd_func'}
sub_640b20(&result[0x37])
var_8_1.b = 1
sub_640db0(&result[0x1e4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
