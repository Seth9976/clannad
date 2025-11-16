// 函数: sub_5b95b0
// 地址: 0x5b95b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bac48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
*(arg1 + 0x7c) = 0
*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
int32_t var_8_1 = 0
*(arg1 + 0xa4) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0xac) = 0
*(arg1 + 0xb0) = 0
sub_57a0f0(arg1 + 0xbc)
*(arg1 + 0xbc) = &C_tnm_editbox::`vftable'{for `NT3::Cc_edit'}
*(arg1 + 0xb8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
