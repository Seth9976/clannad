// 函数: sub_61fac0
// 地址: 0x61fac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bfbc3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_118 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = arg2
int32_t var_fc = ebx
int32_t result = sub_6b2f40(arg3)

if (*(data_bac418 + 0xb80) != result)
    struct NT3::C_window_base::VTable* var_f8
    sub_6bfab0(&var_f8)
    var_f8 = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
    char var_80_1 = 0
    int128_t var_7c = zx.o(0)
    sub_6c77c0(&var_7c:4)
    int32_t var_8_1 = 0
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    int32_t var_11c_1 = sub_52e720(&var_30, u"dummy", 5)
    var_8_1.b = 1
    sub_6c41b0(&var_f8, 0x91, &var_30, 0, 0, data_4ebe3ac)
    var_8_1.b = 0
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)
    
    int32_t var_1c_2 = 7
    var_30 = 0
    int32_t var_20_2 = 0
    sub_6c1b50(&var_f8, data_bac510 + 0x1c)
    HWND hWnd
    HWND hWnd_1 = hWnd
    
    if (hWnd_1 != 0)
        UpdateWindow(hWnd_1)
        hWnd_1 = hWnd
    
    int32_t* lpText_1
    int32_t var_4c
    
    while (true)
        if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
            ShowWindow(hWnd, SW_SHOW)
        
        sub_6ba500(&data_4ebe3a8)
        ebx.b = sub_61f760(Sleep(0x3e8), ebx, arg3, arg4)
        
        if (hWnd != 0 && (GetWindowLongW(hWnd, 0xfffffff0) & 0x10000000) s> 0)
            ShowWindow(hWnd, SW_HIDE)
        
        int16_t var_48
        
        if (ebx.b != 0)
            int32_t var_1c_5 = 7
            int32_t var_20_5 = 0
            *(data_bac418 + 0xb80) = result
            var_30 = 0
            sub_52e720(&var_30, &data_ad90c0, 1)
            var_8_1.b = 7
            int32_t var_34_3 = 7
            int32_t var_38_3 = 0
            var_48 = 0
            sub_52e720(&var_48, 0xaf42a8, 2)
            var_8_1.b = 8
            sub_6aed20(&var_48, data_bac510 + 0x160, &lpText_1, &var_48, &var_30)
            
            if (var_34_3 u>= 8)
                j__free(var_48.d)
            
            int32_t var_34_4 = 7
            int32_t var_38_4 = 0
            var_48 = 0
            var_8_1.b = 0xb
            
            if (var_1c_5 u>= 8)
                j__free(var_30.d)
            
            int32_t var_1c_6 = 7
            int32_t var_20_6 = 0
            var_30 = 0
            sub_60e0d0(&lpText_1, MB_ICONASTERISK)
            ebx.b = 1
            break
        
        int32_t var_34_1 = 7
        int32_t var_38_1 = 0
        var_48 = 0
        sub_52e720(&var_48, &data_ad90c0, 1)
        var_8_1.b = 2
        int32_t var_1c_3 = 7
        int32_t var_20_3 = 0
        var_30 = 0
        sub_52e720(&var_30, 0xaf42a8, 2)
        var_8_1.b = 3
        sub_6aed20(&var_30, data_bac510 + 0x148, &lpText_1, &var_30, &var_48)
        
        if (var_1c_3 u>= 8)
            j__free(var_30.d)
        
        int32_t var_1c_4 = 7
        int32_t var_20_4 = 0
        var_30 = 0
        var_8_1.b = 6
        
        if (var_34_1 u>= 8)
            j__free(var_48.d)
        
        int32_t var_34_2 = 7
        int32_t var_38_2 = 0
        var_48 = 0
        sub_60e050()
        sub_683ad0(0)
        void** lpCaption = data_bac510 + 0x1c
        
        if (lpCaption[5] u>= 8)
            lpCaption = *lpCaption
        
        int32_t* lpText = &lpText_1
        
        if (var_4c u>= 8)
            lpText = lpText_1
        
        enum MESSAGEBOX_RESULT eax_11 = MessageBoxW(data_4ebe3ac, lpText, lpCaption, 0x41)
        sub_683ad0(1)
        
        if (eax_11 == IDCANCEL)
            void* eax_12 = data_bac4a0
            *(eax_12 + 0x1eb) = 0x101
            *(eax_12 + 0x1ed) = 1
            sub_676610(0)
            ebx.b = 0
            break
        
        var_8_1.b = 0
        
        if (var_4c u>= 8)
            j__free(lpText_1)
            hWnd_1 = hWnd
            ebx = var_fc
        else
            hWnd_1 = hWnd
            ebx = var_fc
    
    if (var_4c u>= 8)
        j__free(lpText_1)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x10, 0, 0)
    
    var_f8 = &NT3::C_dialog::`vftable'{for `NT3::C_window_base'}
    int32_t var_78
    
    if (var_78 != 0)
        j__free(var_78)
        int32_t var_78_1 = 0
        int32_t var_74_1 = 0
        int32_t var_70_1 = 0
    
    sub_6bfb10(&var_f8)
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
