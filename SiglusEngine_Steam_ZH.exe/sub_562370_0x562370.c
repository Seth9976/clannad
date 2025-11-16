// 函数: sub_562370
// 地址: 0x562370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2e7c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
*(arg1 + 0x80) = 0
*(arg1 + 0x98) = 7
*(arg1 + 0x94) = 0
*(arg1 + 0x84) = 0
int32_t var_8_1 = 0
*(arg1 + 0xb4) = 7
*(arg1 + 0xb0) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xcc) = 7
*(arg1 + 0xc8) = 0
*(arg1 + 0xb8) = 0
var_8_1.b = 2
__builtin_memset(arg1 + 0xd0, 0, 0x14)
__builtin_memset(arg1 + 0xe8, 0, 0x14)
sub_562910(arg1 + 0x100)
sub_54eb30(arg1 + 0x25c)
sub_54eb30(arg1 + 0x418)
sub_54eb30(arg1 + 0x5d4)
*(arg1 + 0x790) = 0
*(arg1 + 0x794) = 0
*(arg1 + 0x798) = 0
*(arg1 + 0x79c) = 0
var_8_1.b = 8
sub_6efae0(arg1 + 0x7a0)
*(arg1 + 0x8c0) = 0
*(arg1 + 0x8c4) = 0
*(arg1 + 0x8c8) = 0
*(arg1 + 0x8cc) = 0
var_8_1.b = 9
sub_6efae0(arg1 + 0x8d0)
*(arg1 + 0x9f0) = 0
*(arg1 + 0x9f4) = 0
*(arg1 + 0x9f8) = 0
*(arg1 + 0x9fc) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
