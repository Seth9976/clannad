// 函数: sub_6aef50
// 地址: 0x6aef50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cab08
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpMultiByteStr_1 = arg2
int32_t var_50 = 0

if (lpMultiByteStr_1[4] != 0)
    wchar16* lpWideCharStr_1 = nullptr
    wchar16* lpWideCharStr_2 = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t var_c_1 = 0
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    int16_t var_4c = 0
    var_c_1.b = 1
    uint8_t* lpMultiByteStr
    
    if (lpMultiByteStr_1[5] u< 0x10)
        lpMultiByteStr = lpMultiByteStr_1
    else
        lpMultiByteStr = *lpMultiByteStr_1
    
    int32_t cchWideChar = MultiByteToWideChar(arg4, 0, lpMultiByteStr, 0xffffffff, nullptr, 0)
    
    if (cchWideChar s> 0)
        sub_6afe20(&lpWideCharStr_2, cchWideChar + 1)
        lpWideCharStr_1 = lpWideCharStr_2
        wchar16* lpWideCharStr = lpWideCharStr_1
        
        if (lpWideCharStr_1 == var_58_1)
            lpWideCharStr = nullptr
        
        if (lpMultiByteStr_1[5] u>= 0x10)
            lpMultiByteStr_1 = *lpMultiByteStr_1
        
        MultiByteToWideChar(arg4, 0, lpMultiByteStr_1, 0xffffffff, lpWideCharStr, cchWideChar)
        lpWideCharStr_1[cchWideChar] = 0
        wchar16* lpWideCharStr_3 = lpWideCharStr_1
        
        if (lpWideCharStr_1 == var_58_1)
            lpWideCharStr_3 = nullptr
        
        int32_t var_34
        sub_52e820(&var_34, lpWideCharStr_3)
        var_c_1.b = 2
        sub_52e3c0(&var_4c, &var_34, 0, 0xffffffff)
        var_c_1.b = 1
        int32_t var_20
        
        if (var_20 u>= 8)
            j__free(var_34)
    
    *(arg3 + 0x14) = 7
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_52e3c0(arg3, &var_4c, 0, 0xffffffff)
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_38_2 = 7
    int32_t var_3c_2 = 0
    var_4c = 0
    
    if (lpWideCharStr_1 != 0)
        j__free(lpWideCharStr_1)
else
    sub_52e820(arg3, &data_ad7c90)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_64)
return arg3
