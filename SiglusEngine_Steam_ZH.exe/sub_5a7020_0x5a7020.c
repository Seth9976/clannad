// 函数: sub_5a7020
// 地址: 0x5a7020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9c11
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
sub_5a7110(arg1)
int32_t var_8_1 = 0
int32_t var_28 = sub_5a6f60(arg1 + 0x60)
*(arg1 + 0x60) = &C_db_wnd_info_trace_draw_target::`vftable'{for `NT3::Cc_picture'}
sub_6c8050(arg1 + 0xf0)
*(arg1 + 0x15c) = 0
var_8_1.b = 1
sub_5a8f70(arg1 + 0x160)
*(arg1 + 0x160) = &C_db_wnd_info_trace_text_window::Citem_v_scroll::`vftable'{for `NT3::Cc_scroll'}
var_8_1.b = 2
sub_5a8f70(arg1 + 0x1f0)
*(arg1 + 0x1f0) = &C_db_wnd_info_trace_text_window::Citem_h_scroll::`vftable'{for `NT3::Cc_scroll'}
__builtin_memset(arg1 + 0x38, 0xff, 0x14)
*(arg1 + 0x4c) = 0xfffe7961
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x58) = 0xffffffff
*(arg1 + 0x5c) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
