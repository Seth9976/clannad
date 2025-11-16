// 函数: sub_5e0c60
// 地址: 0x5e0c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_14_1 = arg1
*(arg1 + 4) = 0
*(arg1 + 8) = 0
*(arg1 + 0x20) = 7
*(arg1 + 0x1c) = 0
*(arg1 + 0xc) = 0
int32_t var_8_1 = 0
__builtin_memset(arg1 + 0x24, 0, 0x18)
EnumC13Lines::EnumC13Lines(arg1 + 0x3c)
*(arg1 + 0x80) = 0
*(arg1 + 0x84) = 0
*(arg1 + 0x88) = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
