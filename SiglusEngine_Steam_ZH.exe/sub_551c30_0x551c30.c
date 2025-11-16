// 函数: sub_551c30
// 地址: 0x551c30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1d18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = *arg2
__builtin_memcpy(&arg1[1], &arg2[1], 0xa0)
arg1[0x29] = arg2[0x29]
void* eax_5 = arg2[0x2a]
arg1[0x2a] = eax_5

if (eax_5 != 0)
    *(eax_5 + 4)
    *(eax_5 + 4) += 1

int32_t var_8_1 = 0
arg1[0x2b] = arg2[0x2b]
void* eax_8 = arg2[0x2c]
arg1[0x2c] = eax_8

if (eax_8 != 0)
    *(eax_8 + 4)
    *(eax_8 + 4) += 1

arg1[0x2d] = arg2[0x2d]
arg1[0x2e] = arg2[0x2e]
arg1[0x2f] = arg2[0x2f]
arg1[0x30] = arg2[0x30]
arg1[0x31] = arg2[0x31]
arg1[0x32] = arg2[0x32]
void* eax_16 = arg2[0x33]
arg1[0x33] = eax_16

if (eax_16 != 0)
    *(eax_16 + 4)
    *(eax_16 + 4) += 1

arg1[0x34] = arg2[0x34]
void* eax_19 = arg2[0x35]
arg1[0x35] = eax_19

if (eax_19 != 0)
    *(eax_19 + 4)
    *(eax_19 + 4) += 1

void (__fastcall* var_28)(void* arg1) = sub_54b010
var_8_1.b = 3
sub_746ac4(&arg1[0x36], &arg2[0x36], 8, 4, sub_54d950)
arg1[0x3e] = arg2[0x3e]
arg1[0x3f] = arg2[0x3f]
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x110) = *(arg2 + 0x110)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
