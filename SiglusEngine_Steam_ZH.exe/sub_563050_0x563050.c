// 函数: sub_563050
// 地址: 0x563050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b30dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
*arg1 = *arg2
__builtin_memcpy(&arg1[1], &arg2[1], 0x80)
arg1[0x26] = 7
arg1[0x25] = 0
arg1[0x21].w = 0
sub_52e3c0(&arg1[0x21], &arg2[0x21], 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0x27] = arg2[0x27]
arg1[0x2d] = 7
arg1[0x2c] = 0
arg1[0x28].w = 0
sub_52e3c0(&arg1[0x28], &arg2[0x28], 0, 0xffffffff)
var_8_1.b = 1
arg1[0x33] = 7
arg1[0x32] = 0
arg1[0x2e].w = 0
sub_52e3c0(&arg1[0x2e], &arg2[0x2e], 0, 0xffffffff)
var_8_1.b = 2
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
sub_563470(&arg1[0x40], &arg2[0x40])
var_8_1.b = 3
sub_551a90(&arg1[0x97], &arg2[0x97])
var_8_1.b = 4
sub_551a90(&arg1[0x106], &arg2[0x106])
var_8_1.b = 5
sub_551a90(&arg1[0x175], &arg2[0x175])
arg1[0x1e4] = arg2[0x1e4]
void* eax_13 = arg2[0x1e5]
arg1[0x1e5] = eax_13

if (eax_13 != 0)
    *(eax_13 + 4)
    *(eax_13 + 4) += 1

arg1[0x1e6] = arg2[0x1e6]
void* eax_16 = arg2[0x1e7]
arg1[0x1e7] = eax_16

if (eax_16 != 0)
    *(eax_16 + 4)
    *(eax_16 + 4) += 1

var_8_1.b = 8
sub_551c30(&arg1[0x1e8], &arg2[0x1e8])
*(arg1 + 0x8c0) = *(arg2 + 0x8c0)
var_8_1.b = 9
sub_551c30(&arg1[0x234], &arg2[0x234])
*(arg1 + 0x9f0) = *(arg2 + 0x9f0)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
