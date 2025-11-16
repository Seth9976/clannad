// 函数: ?__scrt_uninitialize_thread_safe_statics@@YAXXZ
// 地址: 0xaa2a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd375
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = data_4ebee38

if (ecx != 0)
    result = (*(*ecx + 8))(ecx)

int32_t var_8_2 = 0xffffffff
int32_t* ecx_1 = data_4ebe4b0

if (ecx_1 != 0)
    result = (*(*ecx_1 + 8))(ecx_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
