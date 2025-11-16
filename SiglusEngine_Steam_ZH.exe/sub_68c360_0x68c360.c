// 函数: sub_68c360
// 地址: 0x68c360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8b56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x18) = 7
*(arg1 + 0x14) = 0
*(arg1 + 4) = 0
int32_t var_8_1 = 0
*(arg1 + 0x30) = 7
*(arg1 + 0x2c) = 0
*(arg1 + 0x1c) = 0
var_8_1.b = 1
int32_t (__fastcall* var_20)(int32_t* arg1) = sub_68d4b0
__builtin_memset(arg1 + 0x34, 0, 0x14)
*(arg1 + 0x5c) = 0
*(arg1 + 0x60) = 0
sub_74675f(arg1 + 0x64, 0xa0, 0x100, sub_68d440)
void* eax_4 = arg1 + 0xa064
int32_t ecx = 0xf
int32_t temp0_1

do
    temp0_1 = ecx
    ecx -= 1
    *eax_4 = 0
    *(eax_4 + 4) = 0
    eax_4 += 8
while (temp0_1 - 1 s>= 0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
