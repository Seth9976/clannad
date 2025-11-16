// 函数: sub_5574c0
// 地址: 0x5574c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b2481
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_30
int32_t i = arg2
void* esi = arg1
void* var_18 = esi
void* var_1c = esi
int32_t var_8_1 = 0

while (i != 0)
    void* var_20_1 = esi
    var_8_1.b = 1
    
    if (esi != 0)
        result = sub_5535f0(esi)
    
    i -= 1
    var_8_1.b = 0
    esi += 0x15fc
    void* var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
