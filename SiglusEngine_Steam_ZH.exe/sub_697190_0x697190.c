// 函数: sub_697190
// 地址: 0x697190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8fd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 0x30) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x30) = sub_642730()
int32_t var_8_1 = 0
*(arg1 + 0x38) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x38) = sub_642730()
var_8_1.b = 1
*(arg1 + 0x40) = 0
*(arg1 + 0x44) = 0
*(arg1 + 0x40) = sub_642730()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
