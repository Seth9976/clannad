// 函数: sub_684010
// 地址: 0x684010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c7cb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_4c
int32_t eax_2 = __security_cookie ^ &var_4c
int32_t __saved_ebx
int32_t var_54 = __security_cookie ^ &__saved_ebx
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 s>= 0)
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    int16_t var_34 = 0
    sub_52e720(&var_34, 0xafa110, 6)
    int32_t var_c_1 = 0
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    sub_52e720(&var_4c, 0xafa120, 2)
    int16_t* lpString = &var_4c
    
    if (var_38_1 u>= 8)
        lpString = var_4c.d
    
    SetDlgItemTextW(arg2, 6, lpString)
    int16_t* lpString_1 = &var_34
    
    if (var_20_1 u>= 8)
        lpString_1 = var_34.d
    
    SetDlgItemTextW(arg2, 7, lpString_1)
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_38_2 = 7
    int32_t var_3c_2 = 0
    var_4c = 0
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    int32_t var_20_2 = 7
    int32_t var_24_2 = 0
    var_34 = 0

LRESULT result = CallNextHookEx(data_bac518, arg1, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_4c)
return result
