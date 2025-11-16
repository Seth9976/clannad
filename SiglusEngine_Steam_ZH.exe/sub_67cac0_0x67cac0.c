// 函数: sub_67cac0
// 地址: 0x67cac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c74e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_6c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL hWnd_1

if (data_b8937c == 0 || data_b89394 == 0 || data_b893ac == 0 || data_b893c4 == 0
        || data_b893dc == 0)
    sub_6c2db0(arg1 + 0x1bc, &data_b8d6a0)
    HWND hWnd_2 = *(arg1 + 0x250)
    
    if (hWnd_2 != 0)
        BOOL eax_8
        eax_8.b = IsWindowEnabled(hWnd_2) != 0
        
        if (eax_8.b != 0)
            EnableWindow(*(arg1 + 0x250), 0)
    
    hWnd_1 = *(arg1 + 0x370)
    
    if (hWnd_1 != 0)
        hWnd_1.b = IsWindowEnabled(hWnd_1) != 0
        
        if (hWnd_1.b != 0)
            hWnd_1 = EnableWindow(*(arg1 + 0x370), 0)
else
    int32_t var_5c
    int16_t* eax_4 = sub_532b80(&ExceptionList, &data_b893b4, &var_5c, 0xaf9a6c)
    int32_t var_8_1 = 0
    int16_t var_2c
    int16_t* eax_5 = sub_5327a0(eax_4, eax_4, &var_2c, &data_b893cc)
    var_8_1.b = 1
    var_8_1.b = 2
    int16_t var_44
    sub_6c2db0(arg1 + 0x1bc, sub_532b80(eax_5, eax_5, &var_44, &data_ad90a0))
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    HWND hWnd = *(arg1 + 0x250)
    
    if (hWnd != 0)
        BOOL eax_7
        eax_7.b = IsWindowEnabled(hWnd) != 0
        
        if (eax_7.b != 1)
            EnableWindow(*(arg1 + 0x250), 1)
    
    hWnd_1 = *(arg1 + 0x370)
    
    if (hWnd_1 != 0)
        hWnd_1.b = IsWindowEnabled(hWnd_1) != 0
        
        if (hWnd_1.b != 1)
            hWnd_1 = EnableWindow(*(arg1 + 0x370), 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_1
