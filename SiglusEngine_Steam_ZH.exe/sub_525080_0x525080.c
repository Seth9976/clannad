// 函数: sub_525080
// 地址: 0x525080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c6f58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_52e720(0xb89668, u"NONE", 4)
int32_t var_8_1 = 0
data_b89680 = 0
data_b89694 = 7
data_b89690 = 0
sub_52e720(&data_b89680, u"PLANE", 5)
var_8_1.b = 1
data_b89698 = 0
data_b896ac = 7
data_b896a8 = 0
sub_52e720(&data_b89698, &data_af9760, 3)
var_8_1.b = 2
data_b896c4 = 7
data_b896c0 = 0
data_b896b0 = 0
sub_52e720(&data_b896b0, &data_af9768, 3)
var_8_1.b = 3
data_b896dc = 7
data_b896d8 = 0
data_b896c8 = 0
sub_52e720(&data_b896c8, u"ALBUM", 5)
int32_t result = _atexit(sub_a886f0)
fsbase->NtTib.ExceptionList = ExceptionList
return result
