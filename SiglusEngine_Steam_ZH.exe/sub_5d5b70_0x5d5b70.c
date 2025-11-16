// 函数: sub_5d5b70
// 地址: 0x5d5b70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc284
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14_1 = arg1
*arg1 = *arg2
*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
sub_52e3c0(&arg1[4], &arg2[4], 0, 0xffffffff)
int32_t var_8_1 = 0
*(arg1 + 0x30) = 7
*(arg1 + 0x2c) = 0
*(arg1 + 0x1c) = 0
sub_52e3c0(&arg1[0x1c], &arg2[0x1c], 0, 0xffffffff)
var_8_1.b = 1
*(arg1 + 0x48) = 7
*(arg1 + 0x44) = 0
*(arg1 + 0x34) = 0
sub_52e3c0(&arg1[0x34], &arg2[0x34], 0, 0xffffffff)
var_8_1.b = 2
sub_564000(&arg1[0x4c], &arg2[0x4c])
var_8_1.b = 3
*(arg1 + 0x20c) = *(arg2 + 0x20c)
*(arg1 + 0x210) = *(arg2 + 0x210)
*(arg1 + 0x214) = *(arg2 + 0x214)
*(arg1 + 0x218) = *(arg2 + 0x218)
sub_5521d0(&arg1[0x21c], &arg2[0x21c])
var_8_1.b = 4
sub_5521d0(&arg1[0x1818], &arg2[0x1818])
var_8_1.b = 5
sub_5360a0(&arg1[0x2e14], &arg2[0x2e14])
var_8_1.b = 6
sub_5360a0(&arg1[0x2e20], &arg2[0x2e20])
var_8_1.b = 7
*(arg1 + 0x2e2c) = *(arg2 + 0x2e2c)
*(arg1 + 0x2e44) = 7
*(arg1 + 0x2e40) = 0
*(arg1 + 0x2e30) = 0
sub_52e3c0(&arg1[0x2e30], &arg2[0x2e30], 0, 0xffffffff)
*(arg1 + 0x2e48) = *(arg2 + 0x2e48)
*(arg1 + 0x2e4c) = *(arg2 + 0x2e4c)
*(arg1 + 0x2e50) = *(arg2 + 0x2e50)
*(arg1 + 0x2e58) = *(arg2 + 0x2e58)
int32_t eax_20
eax_20.w = *(arg2 + 0x2e5c)
*(arg1 + 0x2e5c) = eax_20.w
arg1[0x2e5e] = arg2[0x2e5e]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
