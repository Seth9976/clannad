// 函数: sub_5cacb0
// 地址: 0x5cacb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbaa8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(arg1 + 0xc0) u< 8
void** eax_3 = arg1 + 0xac
eax_3[4] = 0

if (not(cond:0))
    eax_3 = *eax_3

*eax_3 = nullptr
char* result = *(arg1 + 0xa0)

if (result == 0)
    void* esi_1 = data_bac404
    HWND hWnd = *(esi_1 + 4)
    
    if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
        ShowWindow(*(esi_1 + 4), SW_HIDE)
    
    mciSendStringW(u"close SiglusMCIMovie wait", nullptr, 0, nullptr)
    HWND hWnd_1 = *(data_bac404 + 4)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x10, 0, 0)
    
    int32_t var_8_1 = 0
    int16_t var_2c
    sub_6b4cb0(sub_5c4880(&var_2c))
    int32_t var_8_2 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, 0xaf2d1c, 0xc)
    int32_t var_8_3 = 1
    result = sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18_1 u>= 8)
        result = j__free(var_2c.d)
else if (result == 1)
    int32_t* ecx_3 = data_4ebe294
    
    if (ecx_3 != 0)
        (*(*ecx_3 + 0x24))(ecx_3)
    
    int32_t* ecx_4 = data_4ebe290
    
    if (ecx_4 != 0)
        (*(*ecx_4 + 0x1c))(ecx_4)
    
    int32_t* ecx_5 = data_4ebe28c
    
    if (ecx_5 != 0)
        (*(*ecx_5 + 0x1c))(ecx_5)
    
    int32_t* ecx_6 = data_4ebe298
    
    if (ecx_6 != 0)
        data_4ebe298 = 0
        (*(*ecx_6 + 8))(ecx_6)
        int32_t* eax_11 = data_4ebe298
        
        if (eax_11 != 0)
            data_4ebe298 = 0
            (*(*eax_11 + 8))(eax_11)
    
    int32_t* ecx_8 = data_4ebe294
    
    if (ecx_8 != 0)
        data_4ebe294 = 0
        (*(*ecx_8 + 8))(ecx_8)
        int32_t* eax_13 = data_4ebe294
        
        if (eax_13 != 0)
            data_4ebe294 = 0
            (*(*eax_13 + 8))(eax_13)
    
    int32_t* ecx_10 = data_4ebe290
    
    if (ecx_10 != 0)
        data_4ebe290 = 0
        (*(*ecx_10 + 8))(ecx_10)
        int32_t* eax_15 = data_4ebe290
        
        if (eax_15 != 0)
            data_4ebe290 = 0
            (*(*eax_15 + 8))(eax_15)
    
    int32_t* ecx_12 = data_4ebe28c
    
    if (ecx_12 != 0)
        data_4ebe28c = 0
        (*(*ecx_12 + 8))(ecx_12)
        int32_t* eax_17 = data_4ebe28c
        
        if (eax_17 != 0)
            data_4ebe28c = 0
            (*(*eax_17 + 8))(eax_17)
    
    int32_t* ecx_14 = data_4ebe288
    
    if (ecx_14 != 0)
        data_4ebe288 = 0
        (*(*ecx_14 + 8))(ecx_14)
        int32_t* eax_19 = data_4ebe288
        
        if (eax_19 != 0)
            data_4ebe288 = 0
            (*(*eax_19 + 8))(eax_19)
    
    HWND hWnd_2 = data_4ebe284
    
    if (hWnd_2 != 0)
        DestroyWindow(hWnd_2)
        data_4ebe284 = 0
    
    sub_5cb740()
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    int16_t var_44 = 0
    sub_52e720(&var_44, 0xaf2d1c, 0xc)
    int32_t var_8_4 = 2
    result = sub_684160(data_bac424, 5, &var_44)
    
    if (var_30_1 u>= 8)
        result = j__free(var_44.d)

*(arg1 + 0xa0) = 0xffffffff
*(arg1 + 0xa8) = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
