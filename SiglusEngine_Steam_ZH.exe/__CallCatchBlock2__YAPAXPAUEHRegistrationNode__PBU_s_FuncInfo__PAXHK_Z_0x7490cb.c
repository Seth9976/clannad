// 函数: ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
// 地址: 0x7490cb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = nullptr
int32_t var_14 = __security_cookie_1 ^ &ExceptionList
int32_t var_10 = arg2
int32_t (* var_18)(int32_t* arg1, void** arg2, int32_t* arg3) = sub_748ffb
int32_t* var_c = arg1
int32_t var_8 = arg4 + 1
TEB* fsbase
ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = __CallSettingFrame@12(arg1, arg3, arg1, arg5)
fsbase->NtTib.ExceptionList = ExceptionList
return result
