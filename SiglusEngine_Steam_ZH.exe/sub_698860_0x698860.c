// 函数: sub_698860
// 地址: 0x698860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c918c
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
        *(esi + 0x44) = 0
        *(esi + 0x48) = 0
        *(esi + 0x44) = sub_642730()
        var_8_1.b = 2
        *(esi + 0x4c) = 0
        *(esi + 0x50) = 0
        result = sub_642730()
        *(esi + 0x4c) = result
    
    i -= 1
    var_8_1.b = 0
    esi += 0x54
    void* var_18_1 = esi

fsbase->NtTib.ExceptionList = ExceptionList
return result
