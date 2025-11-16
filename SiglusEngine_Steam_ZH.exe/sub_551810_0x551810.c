// 函数: sub_551810
// 地址: 0x551810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 1
sub_6efc80(arg1 + 0x284)
var_8_1.b = 0
sub_6efc80(arg1 + 0x154)
int32_t var_8_2 = 0xffffffff
int32_t* result = sub_6efc80(arg1 + 0x24)
fsbase->NtTib.ExceptionList = ExceptionList
return result
