// 函数: sub_5521d0
// 地址: 0x5521d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1ea6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
__builtin_memcpy(arg1 + 0xa0, arg2 + 0xa0, 0x10c)
sub_5524f0(arg1 + 0x1ac, arg2 + 0x1ac)
var_8_1.b = 1
__builtin_memcpy(arg1 + 0x12d0, arg2 + 0x12d0, 0xc0)
sub_551a90(arg1 + 0x1390, arg2 + 0x1390)
var_8_1.b = 2
sub_552e90(arg1 + 0x154c, arg2 + 0x154c)
var_8_1.b = 3
*(arg1 + 0x1558) = *(arg2 + 0x1558)
sub_552de0(arg1 + 0x155c, arg2 + 0x155c)
*(arg1 + 0x1568) = *(arg2 + 0x1568)
void* eax_10 = *(arg2 + 0x156c)
*(arg1 + 0x156c) = eax_10

if (eax_10 != 0)
    *(eax_10 + 4)
    *(eax_10 + 4) += 1

*(arg1 + 0x1570) = *(arg2 + 0x1570)
void* eax_13 = *(arg2 + 0x1574)
*(arg1 + 0x1574) = eax_13

if (eax_13 != 0)
    *(eax_13 + 4)
    *(eax_13 + 4) += 1

*(arg1 + 0x1578) = *(arg2 + 0x1578)
void* eax_16 = *(arg2 + 0x157c)
*(arg1 + 0x157c) = eax_16

if (eax_16 != 0)
    *(eax_16 + 4)
    *(eax_16 + 4) += 1

*(arg1 + 0x1580) = *(arg2 + 0x1580)
void* eax_19 = *(arg2 + 0x1584)
*(arg1 + 0x1584) = eax_19

if (eax_19 != 0)
    *(eax_19 + 4)
    *(eax_19 + 4) += 1

var_8_1.b = 8
sub_552f40(arg1 + 0x1588, arg2 + 0x1588)
var_8_1.b = 9
*(arg1 + 0x1594) = *(arg2 + 0x1594)
*(arg1 + 0x1598) = *(arg2 + 0x1598)
sub_551b10(arg1 + 0x159c, arg2 + 0x159c)
*(arg1 + 0x15e0) = *(arg2 + 0x15e0)
void* eax_26 = *(arg2 + 0x15e4)
*(arg1 + 0x15e4) = eax_26

if (eax_26 != 0)
    *(eax_26 + 4)
    *(eax_26 + 4) += 1

*(arg1 + 0x15e8) = *(arg2 + 0x15e8)
*(arg1 + 0x15ec) = *(arg2 + 0x15ec)
void* eax_30 = *(arg2 + 0x15f0)
*(arg1 + 0x15f0) = eax_30

if (eax_30 != 0)
    *(eax_30 + 4)
    *(eax_30 + 4) += 1

*(arg1 + 0x15f4) = *(arg2 + 0x15f4)
void* eax_33 = *(arg2 + 0x15f8)
*(arg1 + 0x15f8) = eax_33

if (eax_33 != 0)
    *(eax_33 + 4)
    *(eax_33 + 4) += 1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
