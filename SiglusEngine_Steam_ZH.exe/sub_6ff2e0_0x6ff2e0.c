// 函数: sub_6ff2e0
// 地址: 0x6ff2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ce7c1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
char* esi = arg1
char* var_18 = esi
char* var_1c = esi
int32_t var_8_1 = 0

while (i != 0)
    char* var_20_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        result = sub_6fe5f0(esi)
    
    i -= 1
    var_8_1.b = 0
    esi = &esi[0x50]
    char* var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
