// 函数: sub_6aedb0
// 地址: 0x6aedb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caac8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpWideCharStr_1 = arg2
int32_t var_5c = 0

if (lpWideCharStr_1[4] != 0)
    PSTR lpMultiByteStr_1 = nullptr
    PSTR lpMultiByteStr_2 = nullptr
    int32_t var_54_1 = 0
    int32_t var_50_1 = 0
    int32_t var_8_1 = 0
    int32_t var_1c_1 = 0xf
    int32_t var_20_1 = 0
    char var_30 = 0
    var_8_1.b = 1
    wchar16* lpWideCharStr
    
    if (lpWideCharStr_1[5] u< 8)
        lpWideCharStr = lpWideCharStr_1
    else
        lpWideCharStr = *lpWideCharStr_1
    
    int32_t cbMultiByte =
        WideCharToMultiByte(arg4, 0, lpWideCharStr, 0xffffffff, nullptr, 0, nullptr, nullptr)
    
    if (cbMultiByte s> 0)
        sub_5979b0(&lpMultiByteStr_2, cbMultiByte + 1)
        lpMultiByteStr_1 = lpMultiByteStr_2
        PSTR lpMultiByteStr = lpMultiByteStr_1
        
        if (lpMultiByteStr_1 == var_54_1)
            lpMultiByteStr = nullptr
        
        if (lpWideCharStr_1[5] u>= 8)
            lpWideCharStr_1 = *lpWideCharStr_1
        
        WideCharToMultiByte(arg4, 0, lpWideCharStr_1, 0xffffffff, lpMultiByteStr, cbMultiByte, 
            nullptr, nullptr)
        lpMultiByteStr_1[cbMultiByte] = 0
        PSTR lpMultiByteStr_3 = lpMultiByteStr_1
        
        if (lpMultiByteStr_1 == var_54_1)
            lpMultiByteStr_3 = nullptr
        
        int32_t var_48
        sub_541920(&var_48, lpMultiByteStr_3)
        var_8_1.b = 2
        sub_541b40(&var_30, &var_48, 0, 0xffffffff)
        var_8_1.b = 1
        int32_t var_34
        
        if (var_34 u>= 0x10)
            j__free(var_48)
    
    *(arg3 + 0x14) = 0xf
    *(arg3 + 0x10) = 0
    *arg3 = 0
    sub_541b40(arg3, &var_30, 0, 0xffffffff)
    
    if (var_1c_1 u>= 0x10)
        j__free(var_30.d)
    
    int32_t var_1c_2 = 0xf
    int32_t var_20_2 = 0
    var_30 = 0
    
    if (lpMultiByteStr_1 != 0)
        j__free(lpMultiByteStr_1)
else
    sub_541920(arg3, &data_b0018c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg3
