// 函数: sub_634db0
// 地址: 0x634db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c1700
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
void* edi = &arg2[0x2f]
*(arg1 + 0xa0) = arg2[0x28].b
*(arg1 + 0xa4) = *(arg2 + 0xa4)
*(arg1 + 0xb4) = arg2[0x2d]
*(arg1 + 0xb8) = arg2[0x2e]
arg2 = arg1 + 0xbc
sub_535fc0(arg1 + 0xbc, edi)
var_8_1.b = 1
*(arg1 + 0xbc) = &NT3::C_control::`vftable'{for `NT3::C_window_base'}
*(arg1 + 0x148) = 7
*(arg1 + 0x144) = 0
*(arg1 + 0x134) = 0
sub_52e3c0(arg1 + 0x134, edi + 0x78, 0, 0xffffffff)
*(arg1 + 0xbc) = &C_tnm_editbox::`vftable'{for `NT3::Cc_edit'}
*(arg1 + 0x14c) = *(edi + 0x90)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
