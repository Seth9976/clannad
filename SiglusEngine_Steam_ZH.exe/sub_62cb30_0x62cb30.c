// 函数: sub_62cb30
// 地址: 0x62cb30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0b0d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_29c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_268 = 7
int32_t var_26c = 0
int16_t var_27c = 0
int32_t var_8_1 = 0
int16_t buffer = 0
char var_21a[0x206]
_memset(&var_21a, 0, 0x206)
int32_t var_220 = 7
int32_t var_224 = 0
int16_t var_234
char* result

if (GetSystemDirectoryW(&buffer, 0x104) == 0)
    var_234 = 0
    sub_52e720(&var_234, u"Windows Media Player", 0x26)
    var_8_1.b = 6
    result = sub_684160(data_bac424, 5, &var_234)
else
    var_234 = 0
    int32_t ecx
    
    if (buffer != 0)
        int16_t* ecx_1 = &buffer
        int16_t i
        
        do
            i = *ecx_1
            ecx_1 = &ecx_1[1]
        while (i != 0)
        ecx = (ecx_1 - &var_21a) s>> 1
    else
        ecx = 0
    
    var_8_1.b = 1
    int32_t* lpFileName_1
    sub_532b80(sub_52e720(&var_234, &buffer, ecx), &var_234, &lpFileName_1, u"\wmp.dll")
    var_8_1.b = 2
    int32_t* lpFileName = &lpFileName_1
    int32_t var_250
    
    if (var_250 u>= 8)
        lpFileName = lpFileName_1
    
    uint32_t eax_5 = GetFileAttributesW(lpFileName)
    int16_t var_24c
    int32_t var_238
    
    if (eax_5 == 0xffffffff || (eax_5.b & 0x10) != 0)
        var_238 = 7
        int32_t var_23c_1 = 0
        var_24c = 0
        sub_52e720(&var_24c, u"Windows Media Player", 0x21)
        var_8_1.b = 5
        sub_684160(data_bac424, 5, &var_24c)
    else
        sub_6b43d0(&var_24c, &lpFileName_1)
        var_8_1.b = 3
        int32_t var_294
        int16_t* eax_7 = sub_548cb0(&var_24c, u"Windows Media Player", &var_294, &var_24c)
        var_8_1.b = 4
        sub_684160(data_bac424, 5, eax_7)
        int32_t var_280
        
        if (var_280 u>= 8)
            j__free(var_294)
    
    if (var_238 u>= 8)
        j__free(var_24c.d)
    
    if (var_250 u>= 8)
        j__free(lpFileName_1)
    
    result = nullptr
    int32_t var_250_1 = 7
    int32_t var_254_1 = 0
    lpFileName_1.w = 0

if (var_220 u>= 8)
    result = j__free(var_234.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
