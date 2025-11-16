// 函数: sub_551590
// 地址: 0x551590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b1b19
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_14 = esi

while (esi != arg2)
    int32_t var_8_1 = 1
    sub_6efc80(esi + 0x284)
    var_8_1.b = 0
    sub_6efc80(esi + 0x154)
    int32_t var_8_2 = 0xffffffff
    result = sub_6efc80(esi + 0x24)
    esi += 0x3b4
    void* var_14_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
