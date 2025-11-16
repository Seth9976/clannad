// 函数: sub_68c070
// 地址: 0x68c070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8b22
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x2c) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x61) = 0
*(arg1 + 0x7c) = 7
*(arg1 + 0x78) = 0
*(arg1 + 0x68) = 0
int32_t (__fastcall* var_20)(int32_t* arg1) = sub_68ce50
int32_t var_8_1 = 0
sub_74675f(arg1 + 0xb0, 0x48, 0x100, sub_68ce20)
*(arg1 + 0x48c8) = 7
*(arg1 + 0x48c4) = 0
*(arg1 + 0x48b4) = 0
*(arg1 + 0x48e4) = 7
*(arg1 + 0x48e0) = 0
*(arg1 + 0x48d0) = 0
int32_t (__fastcall* var_20_1)(void* arg1) = sub_5a3e30
var_8_1.b = 3
sub_74675f(arg1 + 0x48ec, 0x1c, 4, sub_68cd50)
int32_t (__fastcall* var_20_2)(void* arg1) = sub_5a3e30
var_8_1.b = 4
sub_74675f(arg1 + 0x4960, 0x1c, 4, sub_68cd50)
int32_t (__fastcall* var_20_3)(void* arg1) = sub_68cf40
var_8_1.b = 5
sub_74675f(arg1 + 0x49d4, 0xe4, 4, sub_68ced0)
sub_68cf80(arg1 + 0x4d64)
sub_68d190(arg1 + 0x4e50)
sub_68d190(arg1 + 0x4f10)
*(arg1 + 0x4fe4) = 7
*(arg1 + 0x4fe0) = 0
*(arg1 + 0x4fd0) = 0
*(arg1 + 0x4ff8) = 0
*(arg1 + 0x4ffc) = 7
*(arg1 + 0x4fe8) = 0
*(arg1 + 0x5010) = 0
*(arg1 + 0x5014) = 7
*(arg1 + 0x5000) = 0
*(arg1 + 0x5028) = 0
*(arg1 + 0x502c) = 7
*(arg1 + 0x5018) = 0
*(arg1 + 0x5040) = 0
*(arg1 + 0x5044) = 7
*(arg1 + 0x5030) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
