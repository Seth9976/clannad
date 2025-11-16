// 函数: sub_638eb0
// 地址: 0x638eb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c23c8
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
sub_63c5d0(arg1 + 0xa0)
sub_63c5d0(arg1 + 0xd4)
*(arg1 + 0x10c) = 0
*(arg1 + 0x110) = 0
*(arg1 + 0x114) = 0
*(arg1 + 0x12c) = 0
*(arg1 + 0x130) = 0
*(arg1 + 0x134) = 0
*(arg1 + 0x160) = 0
*(arg1 + 0x164) = 0
*(arg1 + 0x190) = 0
*(arg1 + 0x194) = 0
var_8_1.b = 3
sub_6efae0(arg1 + 0x198)
__builtin_memset(arg1 + 0x2b8, 0, 0x18)
var_8_1.b = 5
sub_6efae0(arg1 + 0x2d0)
__builtin_memset(arg1 + 0x3f0, 0, 0x28)
var_8_1.b = 9
sub_5535f0(arg1 + 0x418)
var_8_1.b = 0xa
sub_5535f0(arg1 + 0x1a14)
var_8_1.b = 0xb
sub_5535f0(arg1 + 0x3010)
var_8_1.b = 0xc
sub_5535f0(arg1 + 0x460c)
var_8_1.b = 0xd
sub_5535f0(arg1 + 0x5c08)
var_8_1.b = 0xe
sub_5535f0(arg1 + 0x7204)
var_8_1.b = 0xf
sub_5535f0(arg1 + 0x8800)
var_8_1.b = 0x10
sub_5535f0(arg1 + 0x9dfc)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
