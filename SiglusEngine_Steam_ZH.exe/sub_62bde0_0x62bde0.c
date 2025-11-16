// 函数: sub_62bde0
// 地址: 0x62bde0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c08b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** lpFileName = data_bac4d8 + 0x48

if (lpFileName[5] u>= 8)
    lpFileName = *lpFileName

uint32_t eax_4 = GetFileAttributesW(lpFileName)
int16_t var_2c
int32_t var_18_1
int32_t ebx

if (eax_4 == 0xffffffff || (eax_4.b & 0x10) == 0)
    int32_t var_8_1 = 0
    int32_t var_8_2 = 0xffffffff
    ebx.b = sub_6b4260(sub_532b80(eax_4, data_bac4d8 + 0x48, &var_2c, &data_ad900c)) == 0
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0

char* result

if ((eax_4 != 0xffffffff && (eax_4.b & 0x10) != 0) || ebx.b == 0)
    void** lpFileName_1 = data_bac4d8 + 0x48
    
    if (lpFileName_1[5] u>= 8)
        lpFileName_1 = *lpFileName_1
    
    uint32_t eax_10 = GetFileAttributesW(lpFileName_1)
    
    if (eax_10 == 0xffffffff || (eax_10.b & 0x10) == 0)
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xaf4e80, 0x52)
        int32_t var_8_5 = 3
        sub_684160(data_bac424, 2, &var_2c)
        
        if (var_18_3 u< 8)
            result.b = 0
        else
            j__free(var_2c.d)
            result.b = 0
    else
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        int16_t var_44 = 0
        sub_52e720(&var_44, 0xaf4f28, 0xf)
        int32_t var_8_4 = 4
        sub_684160(data_bac424, 5, &var_44)
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        result.b = 1
else
    int32_t var_5c
    int16_t* eax_7 = sub_6b9ed0(&var_5c)
    int32_t var_8_3 = 1
    int16_t* eax_8 = sub_548cb0(eax_7, 0xaf4dd8, &var_2c, eax_7)
    var_8_3.b = 2
    sub_684160(data_bac424, 2, eax_8)
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u< 8)
        result.b = 0
    else
        j__free(var_5c)
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
