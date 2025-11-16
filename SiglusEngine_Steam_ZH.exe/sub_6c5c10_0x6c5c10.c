// 函数: sub_6c5c10
// 地址: 0x6c5c10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc43a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_10c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
HMENU hMenu = CreatePopupMenu()
int32_t var_78 = 7
char eax_4 = 0
HMENU hMenu_1 = hMenu

if (hMenu != 0)
    eax_4 = 1

int32_t var_7c = 0
char var_cc = eax_4
int16_t var_8c = 0
sub_52e720(&var_8c, 0xb02eec, 7)

if (hMenu != 0)
    sub_6c7d00(&hMenu_1, GetMenuItemCount(hMenu), 1, &var_8c, 1, 0)
    hMenu = hMenu_1
    var_cc = eax_4

if (var_78 u>= 8)
    j__free(var_8c.d)

POINT point
__builtin_memset(&point, 0, 8)
BOOL result = GetCursorPos(&point)

if (hMenu != 0)
    result = TrackPopupMenu(hMenu, TPM_NONOTIFY | TPM_RETURNCMD, point.x, point.y, 0, *(arg1 + 4), 
        nullptr)
    
    if (result == 1)
        int128_t var_fc
        __builtin_memset(&var_fc, 0, 0x18)
        var_8_1.b = result.b
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        int16_t var_44 = 0
        sub_52e720(&var_44, u"*.csv", 5)
        var_8_1.b = 2
        int32_t var_18_1 = 7
        int32_t var_1c_1 = 0
        int16_t var_2c = 0
        sub_52e720(&var_2c, 0xb02efc, 8)
        var_8_1.b = 3
        sub_60c680(&var_fc, &var_2c)
        sub_60c680(&var_fc:0xc, &var_44)
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        var_8_1.b = 1
        int32_t var_18_2 = 7
        int32_t var_1c_2 = 0
        var_2c = 0
        
        if (var_30_1 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_2 = 7
        int32_t var_34_2 = 0
        var_44 = 0
        sub_52e720(&var_44, 0xb02f30, 0x10)
        var_8_1.b = 4
        int32_t var_18_3 = 7
        int32_t var_1c_3 = 0
        var_2c = 0
        sub_52e720(&var_2c, 0xb02f1c, 9)
        var_8_1.b = 5
        sub_6b6820(&var_fc, &var_8c, &var_2c, &var_44)
        
        if (var_18_3 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_4 = 7
        int32_t var_1c_4 = 0
        var_2c = 0
        var_8_1.b = 8
        
        if (var_30_2 u>= 8)
            j__free(var_44.d)
        
        if (var_7c != 0)
            int32_t* var_20 = nullptr
            int32_t var_1c_5 = 0
            int32_t var_18_5 = 0
            var_8_1.b = 9
            LRESULT eax_7 = sub_6c47f0(arg1)
            HWND hWnd = *(arg1 + 4)
            LRESULT var_d0
            
            if (hWnd != 0)
                LRESULT eax_8 = SendMessageW(hWnd, 0x1004, 0, 0)
                WPARAM edi_1 = 0
                var_d0 = eax_8
                
                if (eax_8 s> 0)
                    do
                        int32_t var_a8_1 = 7
                        int32_t var_ac_1 = 0
                        int16_t var_bc = 0
                        int32_t esi_1 = 0
                        var_8_1.b = 0xa
                        
                        if (eax_7 s> 0)
                            int32_t var_e4 = 0x22
                            
                            do
                                int32_t var_48_1 = 7
                                int32_t var_4c_1 = 0
                                int16_t var_5c = 0
                                var_8_1.b = 0xb
                                int32_t var_74
                                int16_t* eax_9 = sub_6c4e40(arg1, &var_74, edi_1, esi_1)
                                var_8_1.b = 0xc
                                
                                if (&var_5c != eax_9)
                                    sub_52e3c0(&var_5c, eax_9, 0, 0xffffffff)
                                
                                var_8_1.b = 0xb
                                int32_t var_60
                                
                                if (var_60 u>= 8)
                                    j__free(var_74)
                                
                                int32_t var_90_1 = 7
                                int32_t var_94_1 = 0
                                int16_t var_a4 = 0
                                sub_52e720(&var_a4, 0xb02f64, 2)
                                var_8_1.b = 0xd
                                int32_t var_30_3 = 7
                                int32_t var_34_3 = 0
                                var_44 = 0
                                sub_52e720(&var_44, &data_af8cb4, 1)
                                var_8_1.b = 0xe
                                int16_t* eax_11 =
                                    sub_6aed20(&var_44, &var_5c, &var_74, &var_44, &var_a4)
                                var_8_1.b = 0xf
                                
                                if (&var_5c != eax_11)
                                    sub_52e3c0(&var_5c, eax_11, 0, 0xffffffff)
                                
                                if (var_60 u>= 8)
                                    j__free(var_74)
                                
                                var_60 = 7
                                int32_t var_64_1 = 0
                                var_74.w = 0
                                
                                if (var_30_3 u>= 8)
                                    j__free(var_44.d)
                                
                                var_8_1.b = 0xb
                                int32_t var_30_4 = 7
                                int32_t var_34_4 = 0
                                var_44 = 0
                                
                                if (var_90_1 u>= 8)
                                    j__free(var_a4.d)
                                
                                void* eax_12 = sub_55af30(&var_5c, &var_e4, nullptr, 1)
                                void* eax_13
                                
                                if (eax_12 == 0xffffffff)
                                    int32_t var_dc = 0x2c
                                    eax_13 = sub_55af30(&var_5c, &var_dc, nullptr, 1)
                                
                                if (eax_12 != 0xffffffff || eax_13 != 0xffffffff)
                                    int16_t* eax_15 =
                                        sub_548cb0(&var_5c, &data_af8cb4, &var_a4, &var_5c)
                                    var_8_1.b = 0x10
                                    int16_t* eax_16 =
                                        sub_532b80(eax_15, eax_15, &var_74, &data_af8cb4)
                                    var_8_1.b = 0x11
                                    
                                    if (&var_5c != eax_16)
                                        sub_52e3c0(&var_5c, eax_16, 0, 0xffffffff)
                                    
                                    if (var_60 u>= 8)
                                        j__free(var_74)
                                    
                                    var_8_1.b = 0xb
                                    var_60 = 7
                                    int32_t var_64_2 = 0
                                    var_74.w = 0
                                    
                                    if (var_90_1 u>= 8)
                                        j__free(var_a4.d)
                                
                                if (esi_1 s> 0)
                                    int16_t* eax_18 =
                                        sub_548cb0(&var_5c, &data_aee74c, &var_74, &var_5c)
                                    var_8_1.b = 0x12
                                    
                                    if (&var_5c != eax_18)
                                        sub_52e3c0(&var_5c, eax_18, 0, 0xffffffff)
                                    
                                    var_8_1.b = 0xb
                                    
                                    if (var_60 u>= 8)
                                        j__free(var_74)
                                
                                sub_532870(&var_bc, &var_5c, 0, 0xffffffff)
                                var_8_1.b = 0xa
                                
                                if (var_48_1 u>= 8)
                                    j__free(var_5c.d)
                                
                                esi_1 += 1
                            while (esi_1 s< eax_7)
                        
                        sub_60c680(&var_20, &var_bc)
                        var_8_1.b = 9
                        
                        if (var_a8_1 u>= 8)
                            j__free(var_bc.d)
                        
                        edi_1 += 1
                    while (edi_1 s< var_d0)
            
            int32_t ecx_26 = sub_6b8380(&var_8c, &var_20)
            int32_t* esi_2 = var_20
            
            if (esi_2 != 0)
                LRESULT var_110_25 = var_d0
                int32_t var_114_5 = ecx_26
                sub_55d500(esi_2, var_1c_5)
                j__free(esi_2)
            
            hMenu = hMenu_1
        
        if (var_78 u>= 8)
            j__free(var_8c.d)
        
        int32_t var_78_1 = 7
        int32_t var_7c_1 = 0
        var_8c = 0
        result = sub_662050(&var_fc)
    
    if (var_cc != 0)
        result = DestroyMenu(hMenu)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
