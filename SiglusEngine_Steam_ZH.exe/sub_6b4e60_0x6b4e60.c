// 函数: sub_6b4e60
// 地址: 0x6b4e60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9caf47
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_26c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t pszPath = 0
char var_21a[0x206]
_memset(&var_21a, 0, 0x206)
HRESULT eax_3 = SHGetFolderPathW(nullptr, 5, nullptr, 0, &pszPath)
int16_t* result
int16_t var_24c
int32_t var_238_1
int16_t var_234
int32_t var_220_1

if (eax_3 != E_FAIL)
    if (eax_3 == E_INVALIDARG)
        var_238_1 = 7
        int32_t var_23c_2 = 0
        var_24c = 0
        sub_52e720(&var_24c, u"SHGetFolderPath", 0xf)
        int32_t var_8_2 = 2
        var_220_1 = 7
        int32_t var_224_3 = 0
        var_234 = 0
        sub_52e720(&var_234, 0xb0042c, 0xb)
        var_8_2.b = 3
        goto label_6b4f41
    
    int32_t var_250_1 = 7
    int32_t var_254_1 = 0
    int16_t var_264 = 0
    int32_t ecx_5
    
    if (pszPath != 0)
        int16_t* ecx_6 = &pszPath
        int16_t i
        
        do
            i = *ecx_6
            ecx_6 = &ecx_6[1]
        while (i != 0)
        ecx_5 = (ecx_6 - &var_21a) s>> 1
    else
        ecx_5 = 0
    
    sub_52e720(&var_264, &pszPath, ecx_5)
    int32_t var_8_3 = 4
    
    if (arg1 != &var_264)
        sub_52e3c0(arg1, &var_264, 0, 0xffffffff)
    
    if (var_250_1 u>= 8)
        j__free(var_264.d)
    
    result.b = 1
else
    var_238_1 = 7
    int32_t var_23c_1 = 0
    var_24c = 0
    sub_52e720(&var_24c, u"SHGetFolderPath", 0xf)
    int32_t var_8_1 = 0
    var_220_1 = 7
    int32_t var_224_1 = 0
    var_234 = 0
    sub_52e720(&var_234, 0xb003d4, 0xa)
    var_8_1.b = 1
label_6b4f41:
    sub_6b9da0(&var_234, &var_24c)
    
    if (var_220_1 u>= 8)
        j__free(var_234.d)
    
    int32_t var_220_2 = 7
    int32_t var_224_2 = 0
    var_234 = 0
    
    if (var_238_1 u>= 8)
        j__free(var_24c.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
