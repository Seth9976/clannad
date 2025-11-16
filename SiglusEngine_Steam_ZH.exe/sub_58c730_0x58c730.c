// 函数: sub_58c730
// 地址: 0x58c730
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7768
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_64 = __security_cookie ^ &var_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_5c
struct std::exception::VTable* var_30
sub_58cc60(&var_5c, sub_58cc10(&var_30, arg1))
sub_748f1b(&var_5c, 0xb49534)
noreturn
