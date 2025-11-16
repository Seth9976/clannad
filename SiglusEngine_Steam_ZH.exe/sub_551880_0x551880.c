// 函数: sub_551880
// 地址: 0x551880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1cb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14 = arg1
sub_54ace0(arg1, arg2)
int32_t var_8_1 = 0
sub_551a90(arg1 + 0xa0, arg2 + 0xa0)
var_8_1.b = 1
*(arg1 + 0x25c) = *(arg2 + 0x25c)
*(arg1 + 0x274) = 7
*(arg1 + 0x270) = 0
*(arg1 + 0x260) = 0
sub_52e3c0(arg1 + 0x260, arg2 + 0x260, 0, 0xffffffff)
var_8_1.b = 2
*(arg1 + 0x28c) = 7
*(arg1 + 0x288) = 0
*(arg1 + 0x278) = 0
sub_52e3c0(arg1 + 0x278, arg2 + 0x278, 0, 0xffffffff)
var_8_1.b = 3
*(arg1 + 0x2a4) = 7
*(arg1 + 0x2a0) = 0
*(arg1 + 0x290) = 0
sub_52e3c0(arg1 + 0x290, arg2 + 0x290, 0, 0xffffffff)
var_8_1.b = 4
*(arg1 + 0x2a8) = *(arg2 + 0x2a8)
*(arg1 + 0x2ac) = *(arg2 + 0x2ac)
*(arg1 + 0x2b0) = *(arg2 + 0x2b0)
*(arg1 + 0x2b4) = *(arg2 + 0x2b4)
*(arg1 + 0x2b8) = *(arg2 + 0x2b8)
*(arg1 + 0x2bc) = *(arg2 + 0x2bc)
sub_551b10(arg1 + 0x2c0, arg2 + 0x2c0)
var_8_1.b = 5
sub_551e70(arg1 + 0x304, arg2 + 0x304)
*(arg1 + 0x310) = *(arg2 + 0x310)
void* eax_17 = *(arg2 + 0x314)
*(arg1 + 0x314) = eax_17

if (eax_17 != 0)
    *(eax_17 + 4)
    *(eax_17 + 4) += 1

*(arg1 + 0x318) = *(arg2 + 0x318)
void* eax_20 = *(arg2 + 0x31c)
*(arg1 + 0x31c) = eax_20

if (eax_20 != 0)
    *(eax_20 + 4)
    *(eax_20 + 4) += 1

var_8_1.b = 8
sub_551c30(arg1 + 0x320, arg2 + 0x320)
*(arg1 + 0x440) = *(arg2 + 0x440)
var_8_1.b = 9
sub_551c30(arg1 + 0x450, arg2 + 0x450)
*(arg1 + 0x570) = *(arg2 + 0x570)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
