// 函数: sub_606800
// 地址: 0x606800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp
int32_t var_4 = ebp
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9be398
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_64 = __security_cookie ^ &var_4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void var_5c
struct std::exception::VTable* var_30
sub_6070e0(&var_5c, sub_607090(&var_30, arg1))
sub_748f1b(&var_5c, 0xb49608)
noreturn
