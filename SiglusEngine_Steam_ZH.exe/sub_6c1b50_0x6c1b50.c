// 函数: sub_6c1b50
// 地址: 0x6c1b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpString = arg2

if (*(arg1 + 4) != 0)
    int32_t var_30
    int16_t* eax_3 = sub_6c1ae0(arg1, &var_30)
    int32_t var_8_1 = 0
    void** lpString_1
    
    if (lpString[5] u< 8)
        lpString_1 = lpString
    else
        lpString_1 = *lpString
    
    int32_t var_44_2 = lpString[4]
    result = sub_536340(eax_3, lpString_1, *(eax_3 + 0x10), lpString_1)
    int32_t ebx
    ebx.b = result == 0
    int32_t var_1c
    
    if (var_1c u>= 8)
        result = j__free(var_30)
    
    if (ebx.b == 0)
        if (lpString[5] u>= 8)
            lpString = *lpString
        
        result = SetWindowTextW(*(arg1 + 4), lpString)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
