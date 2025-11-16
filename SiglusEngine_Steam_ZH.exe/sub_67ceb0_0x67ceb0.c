// 函数: sub_67ceb0
// 地址: 0x67ceb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c7550
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
data_bac514 = arg1
data_bac50c = arg1 + 0x18
data_bac504 = arg1 + 0xa4e108
data_bac510 = arg1 + 0x54
data_bac508 = arg1 + 0xa4e06c
void* const var_8c
void* const var_88
int16_t var_44
int16_t var_2c
int32_t var_18_1

if (sub_6807f0() == 0)
    var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, &C_sys_wnd_solo_tweet_bitmap::`vftable'{for `NT3::Cc_picture'}.vFunc_2, 
        0x18)
    var_88 = 0x12
    int32_t var_8_1 = 0
    var_8c = &data_af9ab4
label_67cf47:
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    sub_52e720(&var_44, var_8c, var_88)
    int16_t* lpCaption = &var_2c
    
    if (var_18_1 u>= 8)
        lpCaption = var_2c.d
    
    int16_t* lpText = &var_44
    
    if (var_30_1 u>= 8)
        lpText = var_44.d
    
    MessageBoxW(data_4ebe3ac, lpText, lpCaption, MB_ICONEXCLAMATION)
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    goto label_67cfac

if (sub_69f670() == 0)
    var_18_1 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e720(&var_2c, &C_sys_wnd_solo_tweet_bitmap::`vftable'{for `NT3::Cc_picture'}.vFunc_2, 
        0x18)
    var_88 = 0x3d
    int32_t var_8_2 = 1
    var_8c = &data_af9ae0
    goto label_67cf47

int32_t result
int16_t var_5c

if (sub_688e90() != 0)
    if (sub_68d6f0() != 0)
        void** eax_13 = data_bac510 + 4
        int16_t* eax_14 = sub_548cb0(eax_13, u"siglus_engine_main_window_", &var_44, eax_13)
        int32_t var_8_5 = 6
        int16_t* eax_15 = sub_532b80(eax_14, eax_14, &var_2c, &data_af4700)
        var_8_5.b = 7
        int16_t* lpClassName = sub_5327a0(eax_15, eax_15, &var_5c, data_bac514)
        
        if (*(lpClassName + 0x14) u>= 8)
            lpClassName = *lpClassName
        
        HWND hWnd = FindWindowW(lpClassName, nullptr)
        sub_52e8a0(&var_5c)
        sub_52e8a0(&var_2c)
        int32_t var_8_6 = 0xffffffff
        sub_52e8a0(&var_44)
        
        if (hWnd == 0)
            Concurrency::agent::wait_for_all(arg1 + 0xa4e108)
            result.b = 1
        else
            void* eax_16 = data_bac508
            
            if (*(eax_16 + 0x91) == 0)
                void var_74
                int16_t* eax_17 = sub_532b80(eax_16, data_bac510 + 0x1c, &var_74, 0xaf9be0)
                sub_6b2a80(eax_17, data_bac510 + 0x1c, eax_17, MB_ICONEXCLAMATION)
                sub_52e8a0(&var_74)
                result.b = 0
            else
                SendMessageW(hWnd, 0x111, 0x44b0000, 0)
                Sleep(0xc8)
                Concurrency::agent::wait_for_all(arg1 + 0xa4e108)
                result.b = 1
    else
        int32_t var_18_2 = 7
        int32_t var_1c_4 = 0
        var_2c = 0
        sub_52e720(&var_2c, &C_sys_wnd_solo_tweet_bitmap::`vftable'{for `NT3::Cc_picture'}.vFunc_2, 
            0x18)
        int32_t var_8_4 = 4
        int16_t* eax_11 = sub_6b9ed0(&var_44)
        var_8_4.b = 5
        int16_t* lpText_2 = sub_548cb0(eax_11, 0xaf9ba0, &var_5c, eax_11)
        int16_t* lpCaption_2 = &var_2c
        
        if (var_18_2 u>= 8)
            lpCaption_2 = var_2c.d
        
        if (*(lpText_2 + 0x14) u>= 8)
            lpText_2 = *lpText_2
        
        MessageBoxW(data_4ebe3ac, lpText_2, lpCaption_2, MB_ICONEXCLAMATION)
        sub_52e8a0(&var_5c)
        sub_52e8a0(&var_44)
        sub_52e8a0(&var_2c)
        result.b = 0
else
    var_18_1 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_52e720(&var_2c, &C_sys_wnd_solo_tweet_bitmap::`vftable'{for `NT3::Cc_picture'}.vFunc_2, 
        0x18)
    int32_t var_8_3 = 2
    int16_t* eax_9 = sub_6b9ed0(&var_5c)
    var_8_3.b = 3
    int16_t* lpText_1 = sub_548cb0(eax_9, 0xaf9b5c, &var_44, eax_9)
    int16_t* lpCaption_1 = &var_2c
    
    if (var_18_1 u>= 8)
        lpCaption_1 = var_2c.d
    
    if (*(lpText_1 + 0x14) u>= 8)
        lpText_1 = *lpText_1
    
    MessageBoxW(data_4ebe3ac, lpText_1, lpCaption_1, MB_ICONEXCLAMATION)
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44.d)
    
    int32_t var_30_3 = 7
    int32_t var_34_3 = 0
    var_44 = 0
    int32_t var_48
    
    if (var_48 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
label_67cfac:
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
