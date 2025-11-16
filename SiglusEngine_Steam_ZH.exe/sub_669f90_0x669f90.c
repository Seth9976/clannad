// 函数: sub_669f90
// 地址: 0x669f90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0528
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t* var_14_1 = arg1
sub_52e820(arg1, u"oauth_version")
int32_t var_8_1 = 0
*(arg1 + 0x2c) = 7
*(arg1 + 0x28) = 0
arg1[0xc] = 0
sub_52e3c0(&arg1[0xc], &data_b89324, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
