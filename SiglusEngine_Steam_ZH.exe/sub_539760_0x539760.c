// 函数: sub_539760
// 地址: 0x539760
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 8) != 0)
    if (*(arg1 + 0x6dc) != 0)
        void** eax_6 = data_bac4e4 + 0x11c
        
        if (arg1 + 0x71c != eax_6)
            sub_52e3c0(arg1 + 0x71c, eax_6, 0, 0xffffffff)
        
        sub_539e60(arg1)
    
    int32_t* edi_2 = data_bac4e4 + 0x11c
    int32_t* eax_7
    
    if (edi_2[5] u< 8)
        eax_7 = edi_2
    else
        eax_7 = *edi_2
    
    int32_t var_48_1 = edi_2[4]
    
    if (sub_536340(arg1 + 0x754, arg1 + 0x754, *(arg1 + 0x764), eax_7) != 0)
        int32_t* var_48_2 = edi_2
        sub_53a050(arg1)
        bool cond:1_1 = *(arg1 + 0x748) u< 8
        void* eax_9 = arg1 + 0x734
        *(eax_9 + 0x10) = 0
        
        if (not(cond:1_1))
            eax_9 = *eax_9
        
        *eax_9 = 0
    
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    var_34 = 0
    int32_t ecx_5 = sub_52e3c0(&var_34, &data_b6893c, 0, 0xffffffff)
    int32_t var_c_1 = 0
    int16_t* eax_10 = &var_34
    int32_t var_48_3 = var_24_1
    
    if (var_20_1 u>= 8)
        eax_10 = var_34.d
    
    if (sub_536340(arg1 + 0x734, ecx_5, *(arg1 + 0x744), eax_10) != 0)
        sub_6c2db0(arg1 + 0x52c, &var_34)
        
        if (arg1 + 0x734 != &var_34)
            sub_52e3c0(arg1 + 0x734, &var_34, 0, 0xffffffff)
    
    HWND hWnd = *(arg1 + 0x140)
    char eax_12
    
    if (hWnd != 0)
        eax_12 = SendMessageW(hWnd, 0xf0, 0, 0)
    else
        eax_12 = 0
    
    void* ecx_10 = data_bac4e4
    int32_t ebx
    ebx.b = *(ecx_10 + 0x119)
    
    if (ebx.b != (eax_12 & 1))
        HWND hWnd_2 = *(arg1 + 0x140)
        
        if (hWnd_2 != 0)
            WPARAM wParam
            wParam.b = ebx.b != 0
            SendMessageW(hWnd_2, 0xf1, wParam, 0)
        
        ecx_10 = sub_539cc0(arg1)
    
    void** ebx_2 = data_bac4e4 + 0x11c
    void* eax_13
    
    if (*(arg1 + 0x730) u< 8)
        eax_13 = arg1 + 0x71c
    else
        eax_13 = *(arg1 + 0x71c)
    
    int32_t var_48_5 = *(arg1 + 0x72c)
    
    if (sub_536340(ebx_2, ecx_10, ebx_2[4], eax_13) != 0 && *(arg1 + 8) != 0)
        if (arg1 + 0x71c != ebx_2)
            sub_52e3c0(arg1 + 0x71c, ebx_2, 0, 0xffffffff)
        
        sub_539e60(arg1)
    
    LRESULT hWnd_1 = *(arg1 + 0x260)
    
    if (hWnd_1 != 0)
        hWnd_1 = SendMessageW(hWnd_1, 0xf0, 0, 0)
    
    hWnd_1.b &= 1
    char edx_1 = *(data_bac4e4 + 0x134)
    
    if (edx_1 != hWnd_1.b)
        HWND hWnd_3 = *(arg1 + 0x260)
        
        if (hWnd_3 != 0)
            WPARAM wParam_1
            wParam_1.b = edx_1 != 0
            SendMessageW(hWnd_3, 0xf1, wParam_1, 0)
    
    result = sub_539c20(arg1)
    
    if (*(data_bac4e4 + 0x138) != result)
        result = sub_539b50(arg1)
    
    if (*(arg1 + 0x6dc) != 0)
        result = InvalidateRect(*(arg1 + 8), nullptr, 0)
    
    *(arg1 + 0x6dc) = 0
    
    if (var_20_1 u>= 8)
        result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_34)
return result
