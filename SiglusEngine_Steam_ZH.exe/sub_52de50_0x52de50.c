// 函数: sub_52de50
// 地址: 0x52de50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce808
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_52e720(0xb8fef0, u"NONE", 4)
int32_t var_8_1 = 0
data_b8ff08 = 0
data_b8ff1c = 7
data_b8ff18 = 0
sub_52e720(&data_b8ff08, u"PLANE", 5)
var_8_1.b = 1
data_b8ff20 = 0
data_b8ff34 = 7
data_b8ff30 = 0
sub_52e720(&data_b8ff20, &data_af9760, 3)
var_8_1.b = 2
data_b8ff4c = 7
data_b8ff48 = 0
data_b8ff38 = 0
sub_52e720(&data_b8ff38, &data_af9768, 3)
var_8_1.b = 3
data_b8ff64 = 7
data_b8ff60 = 0
data_b8ff50 = 0
sub_52e720(&data_b8ff50, u"ALBUM", 5)
int32_t result = _atexit(sub_aa2b80)
fsbase->NtTib.ExceptionList = ExceptionList
return result
