// 函数: sub_562180
// 地址: 0x562180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2dd0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x7c) = 0
*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
int32_t var_8_1 = 0
*(arg1 + 0x120) = 0
sub_562270(arg1 + 0x124)
*(arg1 + 0x1ec) = 0
*(arg1 + 0x1f0) = 0
*(arg1 + 0x1f4) = 0
*(arg1 + 0x228) = 0
*(arg1 + 0x22c) = 0
*(arg1 + 0x230) = 0
var_8_1.b = 2
sub_562370(arg1 + 0x234)
var_8_1.b = 3
sub_5626a0(arg1 + 0xc34)
var_8_1.b = 4
sub_562370(arg1 + 0xf28)
sub_562890(arg1 + 0x1928)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
