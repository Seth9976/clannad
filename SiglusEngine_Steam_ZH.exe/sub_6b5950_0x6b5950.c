// 函数: sub_6b5950
// 地址: 0x6b5950
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb093
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (OpenClipboard(nullptr) != 0)
    if (EmptyClipboard() == 0)
        result.b = 0
    else
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        int16_t var_44 = 0
        sub_52e3c0(&var_44, arg1, 0, 0xffffffff)
        int32_t var_8_1 = 0
        int32_t var_60_1 = 7
        int32_t var_64_1 = 0
        int16_t var_74 = 0
        int32_t var_48_1 = 7
        int32_t var_4c_1 = 0
        int16_t var_5c = 0
        var_8_1.b = 2
        sub_55d330(&var_74, 1, 0xa)
        sub_55d330(&var_5c, 1, 0xd)
        sub_55d330(&var_5c, 1, 0xa)
        int32_t var_8c
        int16_t* eax_4 = sub_6aed20(&var_74, &var_44, &var_8c, &var_74, &var_5c)
        var_8_1.b = 3
        
        if (&var_44 != eax_4)
            sub_52e3c0(&var_44, eax_4, 0, 0xffffffff)
        
        var_8_1.b = 2
        int32_t var_78
        
        if (var_78 u>= 8)
            j__free(var_8c)
        
        int32_t* var_2c
        sub_6af1a0(&var_2c)
        int32_t var_1c
        HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, var_1c + 1)
        char* eax_7 = GlobalLock(hMem)
        int32_t* ecx_7 = &var_2c
        int32_t var_18
        
        if (var_18 u>= 0x10)
            ecx_7 = var_2c
        
        _strcpy_s(eax_7, var_1c + 1, ecx_7)
        GlobalUnlock(hMem)
        int32_t ebx
        
        if (SetClipboardData(1, hMem) != 0)
            CloseClipboard()
            ebx.b = 1
        else
            CloseClipboard()
            ebx.b = 0
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        var_2c.b = 0
        
        if (var_48_1 u>= 8)
            j__free(var_5c.d)
        
        if (var_60_1 u>= 8)
            j__free(var_74.d)
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
