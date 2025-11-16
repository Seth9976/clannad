// 函数: sub_553b30
// 地址: 0x553b30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b227a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
__builtin_memset(arg1 + 0x10, 0, 0x14)
*(arg1 + 0xc0) = 0
*(arg1 + 0xc4) = 0
*(arg1 + 0x188) = 0
*(arg1 + 0x1e0) = 0
*(arg1 + 0x1e4) = 0
*(arg1 + 0x8a0) = 0
*(arg1 + 0x8bc) = 7
*(arg1 + 0x8b8) = 0
*(arg1 + 0x8a8) = 0
*(arg1 + 0x8c4) = 0
*(arg1 + 0x8c8) = 0
*(arg1 + 0x8cc) = 0
*(arg1 + 0x8d0) = 0
*(arg1 + 0x8d4) = 1
*(arg1 + 0x820) = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
int32_t var_8_1 = 0
*(arg1 + 0x95c) = 0
*(arg1 + 0x978) = 7
*(arg1 + 0x974) = 0
*(arg1 + 0x964) = 0
*(arg1 + 0x980) = 0
*(arg1 + 0x984) = 0
*(arg1 + 0x988) = 0
*(arg1 + 0x98c) = 0
*(arg1 + 0x990) = 1
*(arg1 + 0x8dc) = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
*(arg1 + 0xa18) = 0
*(arg1 + 0xa34) = 7
*(arg1 + 0xa30) = 0
*(arg1 + 0xa20) = 0
*(arg1 + 0xa3c) = 0
*(arg1 + 0xa40) = 0
*(arg1 + 0xa44) = 0
*(arg1 + 0xa48) = 0
*(arg1 + 0xa4c) = 1
*(arg1 + 0x998) = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
*(arg1 + 0xad4) = 0
*(arg1 + 0xaf0) = 7
*(arg1 + 0xaec) = 0
*(arg1 + 0xadc) = 0
*(arg1 + 0xaf8) = 0
*(arg1 + 0xafc) = 0
*(arg1 + 0xb00) = 0
*(arg1 + 0xb04) = 0
*(arg1 + 0xb08) = 1
*(arg1 + 0xa54) = &C_elm_int_event_list::`vftable'{for `C_elm_list<class C_elm_int_event>'}
*(arg1 + 0xb90) = 0
*(arg1 + 0xbac) = 7
*(arg1 + 0xba8) = 0
*(arg1 + 0xb98) = 0
*(arg1 + 0xbb4) = 0
*(arg1 + 0xbb8) = 0
*(arg1 + 0xbbc) = 0
*(arg1 + 0xbc0) = 0
*(arg1 + 0xbc4) = 1
*(arg1 + 0xb10) = &C_elm_int_list::`vftable'{for `C_elm_list<int32_t>'}
*(arg1 + 0xbdc) = 7
*(arg1 + 0xbd8) = 0
*(arg1 + 0xbc8) = 0
*(arg1 + 0xbf4) = 7
*(arg1 + 0xbf0) = 0
*(arg1 + 0xbe0) = 0
int32_t (__fastcall* var_24)(int32_t* arg1) = sub_52e8a0
var_8_1.b = 6
sub_74675f(arg1 + 0xbf8, 0x18, 8, sub_53a2c0)
*(arg1 + 0xccc) = 7
*(arg1 + 0xcc8) = 0
*(arg1 + 0xcb8) = 0
*(arg1 + 0xce4) = 7
*(arg1 + 0xce0) = 0
*(arg1 + 0xcd0) = 0
sub_553e90(arg1 + 0xce8)
*(arg1 + 0x1034) = 0
*(arg1 + 0x1050) = 7
*(arg1 + 0x104c) = 0
*(arg1 + 0x103c) = 0
*(arg1 + 0x1058) = 0
*(arg1 + 0x105c) = 0
*(arg1 + 0x1060) = 0
*(arg1 + 0x1064) = 0
*(arg1 + 0x1068) = 1
*(arg1 + 0xfb4) = &C_elm_frame_action_list::`vftable'{for `C_elm_list_ex<class C_elm_frame_action>'}
*(arg1 + 0x10e8) = 0
*(arg1 + 0x10ec) = 0
*(arg1 + 0x10f0) = 0
*(arg1 + 0x110c) = 7
*(arg1 + 0x1108) = 0
void* var_18 = arg1 + 0x10ec
*(arg1 + 0x10f8) = 0
var_8_1.b = 0xc
sub_686a10(arg1 + 0x10ec)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
