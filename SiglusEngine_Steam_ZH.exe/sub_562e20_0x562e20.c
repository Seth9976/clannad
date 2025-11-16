// 函数: sub_562e20
// 地址: 0x562e20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b302e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
*(arg1 + 0xa0) = *(arg2 + 0xa0)
__builtin_memcpy(arg1 + 0xa4, arg2 + 0xa4, 0x80)
__builtin_memcpy(arg1 + 0x124, arg2 + 0x124, 0xac)
*(arg1 + 0x1d0) = *(arg2 + 0x1d0)
*(arg1 + 0x1d4) = *(arg2 + 0x1d4)
*(arg1 + 0x1d5) = *(arg2 + 0x1d5)
*(arg1 + 0x1d6) = *(arg2 + 0x1d6)
*(arg1 + 0x1d7) = *(arg2 + 0x1d7)
*(arg1 + 0x1d8) = *(arg2 + 0x1d8)
*(arg1 + 0x1dc) = *(arg2 + 0x1dc)
*(arg1 + 0x1e0) = *(arg2 + 0x1e0)
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
*(arg1 + 0x1e8) = *(arg2 + 0x1e8)
sub_541980(arg1 + 0x1ec, arg2 + 0x1ec)
var_8_1.b = 1
*(arg1 + 0x1f8) = *(arg2 + 0x1f8)
*(arg1 + 0x1fc) = *(arg2 + 0x1fc)
*(arg1 + 0x1fd) = *(arg2 + 0x1fd)
*(arg1 + 0x200) = *(arg2 + 0x200)
*(arg1 + 0x204) = *(arg2 + 0x204)
*(arg1 + 0x208) = *(arg2 + 0x208)
*(arg1 + 0x20c) = *(arg2 + 0x20c)
*(arg1 + 0x210) = *(arg2 + 0x210)
*(arg1 + 0x214) = *(arg2 + 0x214)
*(arg1 + 0x218) = *(arg2 + 0x218)
*(arg1 + 0x21c) = *(arg2 + 0x21c)
*(arg1 + 0x220) = *(arg2 + 0x220)
*(arg1 + 0x224) = *(arg2 + 0x224)
sub_5635f0(arg1 + 0x228, arg2 + 0x228)
var_8_1.b = 2
sub_563050(arg1 + 0x234, arg2 + 0x234)
var_8_1.b = 3
sub_563270(arg1 + 0xc34, arg2 + 0xc34)
var_8_1.b = 4
sub_563050(arg1 + 0xf28, arg2 + 0xf28)
var_8_1.b = 5
sub_5633a0(arg1 + 0x1928, arg2 + 0x1928)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
