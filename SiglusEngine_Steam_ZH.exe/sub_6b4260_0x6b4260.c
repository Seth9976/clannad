// 函数: sub_6b4260
// 地址: 0x6b4260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Init@?$numpunct@D@std@@IAEXABV_Locinfo@2@_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
PWSTR lpFileName

if (arg1[5] u< 8)
    lpFileName = arg1
else
    lpFileName = *arg1

uint32_t result = GetFileAttributesW(lpFileName)

if (result == 0xffffffff || (result.b & 0x10) == 0)
    PWSTR pszPath_1
    sub_6b3db0(&pszPath_1, arg1)
    int32_t var_8_1 = 0
    PWSTR pszPath = &pszPath_1
    int32_t var_30
    
    if (var_30 u>= 8)
        pszPath = pszPath_1
    
    result = SHCreateDirectoryExW(nullptr, pszPath, nullptr)
    int32_t ebx
    
    if (result == 0)
        ebx.b = 1
    else
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, &std::stringbuf::`vftable'{for `std::streambuf'}.vFunc_15, 0x13)
        var_8_1.b = 1
        sub_6b9c90(&var_2c, result, 2, &var_2c)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        ebx.b = 0
    
    if (var_30 u>= 8)
        j__free(pszPath_1)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
