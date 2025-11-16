// 函数: sub_564000
// 地址: 0x564000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b32ba
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5].d = arg2[5].d
*(arg1 + 0x54) = *(arg2 + 0x54)
__builtin_memcpy(arg1 + 0x58, arg2 + 0x58, 0x80)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xf8) = *(arg2 + 0xf8)
*(arg1 + 0x108) = *(arg2 + 0x108)
*(arg1 + 0x118) = *(arg2 + 0x118)
*(arg1 + 0x128) = *(arg2 + 0x128)
*(arg1 + 0x12c) = *(arg2 + 0x12c)
arg1[0x13].d = arg2[0x13].d
*(arg1 + 0x148) = 7
*(arg1 + 0x144) = 0
*(arg1 + 0x134) = 0
sub_52e3c0(arg1 + 0x134, arg2 + 0x134, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0x16].d = 7
*(arg1 + 0x15c) = 0
*(arg1 + 0x14c) = 0
sub_52e3c0(arg1 + 0x14c, arg2 + 0x14c, 0, 0xffffffff)
var_8_1.b = 1
*(arg1 + 0x164) = *(arg2 + 0x164)
*(arg1 + 0x168) = *(arg2 + 0x168)
*(arg1 + 0x16c) = *(arg2 + 0x16c)
arg1[0x17].d = arg2[0x17].d
int32_t eax_13
eax_13.w = *(arg2 + 0x174)
*(arg1 + 0x174) = eax_13.w
*(arg1 + 0x178) = *(arg2 + 0x178)
*(arg1 + 0x17c) = *(arg2 + 0x17c)
arg1[0x18].d = arg2[0x18].d
*(arg1 + 0x184) = *(arg2 + 0x184)
*(arg1 + 0x188) = *(arg2 + 0x188)
*(arg1 + 0x18c) = *(arg2 + 0x18c)
arg1[0x19].d = arg2[0x19].d
*(arg1 + 0x194) = *(arg2 + 0x194)
*(arg1 + 0x198) = *(arg2 + 0x198)
*(arg1 + 0x19c) = *(arg2 + 0x19c)
arg1[0x1a].d = arg2[0x1a].d
*(arg1 + 0x1a4) = *(arg2 + 0x1a4)
*(arg1 + 0x1a5) = *(arg2 + 0x1a5)
*(arg1 + 0x1a6) = *(arg2 + 0x1a6)
*(arg1 + 0x1a7) = *(arg2 + 0x1a7)
*(arg1 + 0x1a8) = *(arg2 + 0x1a8)
int32_t var_2c_1 = sub_551e70(arg1 + 0x1ac, arg2 + 0x1ac)
var_8_1.b = 2
sub_564290(arg1 + 0x1b8, arg2 + 0x1b8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
