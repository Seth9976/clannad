// 函数: sub_6157c0
// 地址: 0x6157c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf35e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2d8 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = data_bac4e4
void var_90
char var_60
int32_t var_4c
int32_t* lpszDeviceName_6
int16_t var_30

if (*(result + 0x18) != 0)
    int32_t ebx_1 = *(result + 0x20)
    uint32_t dmPelsWidth = *(result + 0x2c)
    uint32_t dmPelsHeight = *(result + 0x30)
    void* ecx_12
    
    if (ebx_1 s>= 0)
        ecx_12 = data_bac4a4
    
    if (ebx_1 s< 0 || (*(ecx_12 + 0x10) - *(ecx_12 + 0xc)) s>> 4 s<= ebx_1)
        result.b = 0
    else
        void* eax_12 = data_bac4a0
        RECT rect
        __builtin_memset(&rect, 0, 0x10)
        int32_t ecx_13 = *(eax_12 + 0x40)
        int32_t ecx_14 = *(eax_12 + 0x44)
        int32_t ecx_15 = *(eax_12 + 0x48)
        int32_t ecx_16 = *(eax_12 + 0x4c)
        int32_t ecx_17 = *(eax_12 + 0x50)
        int32_t eax_13 = *(eax_12 + 0x54)
        GetWindowRect(*(data_bac454 + 4), &rect)
        void* eax_15 = data_bac4a0
        char ecx_18 = *(eax_15 + 0x58)
        int32_t ecx_19 = *(eax_15 + 0x5c)
        int32_t eax_16 = *(eax_15 + 0x60)
        sub_541920(&var_60, ebx_1 * 0x44c + *data_bac4a4 + 0x400)
        int32_t var_8_2 = 5
        sub_6af1e0(&lpszDeviceName_6)
        var_8_2.b = 7
        
        if (var_4c u>= 0x10)
            j__free(var_60.d)
        
        void* eax_19 = data_bac4a4
        int32_t ecx_25 = ebx_1 * 2
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        var_60 = 0
        int32_t eax_20 = *(eax_19 + 0xc)
        int32_t edx_1 = *(eax_20 + (ecx_25 << 3) + 0xc)
        int32_t eax_21 = *(eax_20 + (ecx_25 << 3))
        int32_t ecx_26 = *(eax_21 + (edx_1 << 3))
        int32_t eax_22 = *(eax_21 + (edx_1 << 3) + 4)
        DEVMODEW devMode_1
        devMode_1.dmDeviceName[0] = 0
        var_1b6
        _memset(&var_1b6, 0, 0x3e)
        var_178
        _memset(&var_178, 0, 0x9c)
        devMode_1.dmSize = 0xdc
        int32_t* lpszDeviceName_1 = &lpszDeviceName_6
        int32_t var_34
        
        if (var_34 u>= 8)
            lpszDeviceName_1 = lpszDeviceName_6
        
        BOOL eax_23 =
            EnumDisplaySettingsExW(lpszDeviceName_1, ENUM_CURRENT_SETTINGS, &devMode_1, EDS_RAWMODE)
        int32_t* ecx_29
        
        if (eax_23 != 0)
            DEVMODEW devMode
            devMode.dmDeviceName[0] = 0
            var_296
            _memset(&var_296, 0, 0x3e)
            var_258
            _memset(&var_258, 0, 0x9c)
            devMode.dmPelsWidth = dmPelsWidth
            devMode.dmSize = 0xdc
            devMode.dmPelsHeight = dmPelsHeight
            devMode.dmFields = 0x180000
            int32_t var_1c
            
            if (arg4 != 0 && (dmPelsWidth != devMode_1.dmPelsWidth
                    || dmPelsHeight != devMode_1.dmPelsHeight))
                var_1c = 7
                int32_t var_20_1 = 0
                var_30 = 0
                sub_52e720(&var_30, 0xaf3cb0, 0xa1)
                var_8_2.b = 9
                enum MESSAGEBOX_RESULT eax_24 = sub_60e0d0(&var_30, 0x101)
                var_8_2.b = 7
                sub_52e8a0(&var_30)
                
                if (eax_24 == IDCANCEL)
                    int32_t* eax_25 = data_bac4e4
                    *eax_25 = ecx_13
                    eax_25[1] = ecx_14
                    eax_25[2] = ecx_15
                    eax_25[3] = ecx_16
                    eax_25[4] = ecx_17
                    eax_25[5] = eax_13
                    int32_t ecx_38
                    ecx_38.b = ecx_18
                    eax_25[6].b = ecx_38.b
                    eax_25[8] = ecx_19
                    eax_25[0xa] = eax_16
                    sub_615080()
                    ebx_1.b = 1
                    goto label_615eef
                
                dmPelsHeight = devMode.dmPelsHeight
                dmPelsWidth = devMode.dmPelsWidth
            
            void* eax_26 = data_bac4a0
            void var_c0
            void var_a8
            
            if (*(eax_26 + 0x40) == 1 && *(eax_26 + 0x58) != 0)
                int32_t eax_27 = *(eax_26 + 0x5c)
                
                if (eax_27 s>= 0 && ebx_1 != eax_27)
                    sub_541920(&var_90, eax_27 * 0x44c + *data_bac4a4 + 0x400)
                    var_8_2.b = 0xa
                    sub_6af1e0(&var_30)
                    var_8_2.b = 0xc
                    sub_53f510(&var_90)
                    int16_t* lpszDeviceName_2 = &var_30
                    
                    if (var_1c u>= 8)
                        lpszDeviceName_2 = var_30.d
                    
                    ChangeDisplaySettingsExW(lpszDeviceName_2, nullptr, nullptr, CDS_FULLSCREEN, 
                        nullptr)
                    int16_t* eax_31 = sub_548cb0(&var_30, 0xaf3c6c, &var_c0, &var_30)
                    var_8_2.b = 0xd
                    int16_t* eax_32 = sub_532b80(eax_31, eax_31, &var_a8, &data_af3c68)
                    var_8_2.b = 0xe
                    sub_684160(data_bac424, 5, eax_32)
                    sub_52e8a0(&var_a8)
                    sub_52e8a0(&var_c0)
                    var_8_2.b = 7
                    sub_52e8a0(&var_30)
                    dmPelsHeight = devMode.dmPelsHeight
                    dmPelsWidth = devMode.dmPelsWidth
            
            if (dmPelsWidth == devMode_1.dmPelsWidth && dmPelsHeight == devMode_1.dmPelsHeight)
                goto label_615e9b
            
            void* ecx_57
            
            if (dmPelsWidth == ecx_26 && dmPelsHeight == eax_22)
                int32_t* lpszDeviceName_3 = &lpszDeviceName_6
                
                if (var_34 u>= 8)
                    lpszDeviceName_3 = lpszDeviceName_6
                
                if (ChangeDisplaySettingsExW(lpszDeviceName_3, nullptr, nullptr, CDS_FULLSCREEN, 
                        nullptr) != DISP_CHANGE_SUCCESSFUL)
                    int32_t var_1c_1 = 7
                    int32_t var_20_2 = 0
                    var_30 = 0
                    sub_52e720(&var_30, 0xaf3df4, 0xe)
                    var_8_2.b = 0xf
                    goto label_615edc
                
                int16_t* eax_35 =
                    sub_548cb0(&lpszDeviceName_6, 0xaf3e14, &var_a8, &lpszDeviceName_6)
                var_8_2.b = 0x10
                int16_t* eax_36 = sub_532b80(eax_35, eax_35, &var_c0, &data_af3c68)
                var_8_2.b = 0x11
                sub_684160(data_bac424, 5, eax_36)
                sub_52e8a0(&var_c0)
                ecx_57 = &var_a8
                goto label_615e85
            
            int32_t* lpszDeviceName_4 = &lpszDeviceName_6
            
            if (var_34 u>= 8)
                lpszDeviceName_4 = lpszDeviceName_6
            
            enum DISP_CHANGE eax_37
            int32_t edx_4
            eax_37, edx_4 = ChangeDisplaySettingsExW(lpszDeviceName_4, &devMode, nullptr, 
                CDS_FULLSCREEN, nullptr)
            
            if (eax_37 != DISP_CHANGE_SUCCESSFUL)
                int32_t var_1c_2 = 7
                int32_t var_20_3 = 0
                var_30 = 0
                sub_52e720(&var_30, 0xaf3df4, 0xe)
                var_8_2.b = 0x12
                goto label_615edc
            
            void var_d8
            void** eax_38 =
                sub_6adc60(eax_37, edx_4, &var_d8, devMode.dmPelsWidth, devMode.dmPelsHeight)
            var_8_2.b = 0x13
            void** eax_39 = sub_548cb0(eax_38, 0xaf3e3c, &var_30, eax_38)
            var_8_2.b = 0x14
            void** eax_40 = sub_532b80(eax_39, eax_39, &var_90, &data_af3c68)
            var_8_2.b = 0x15
            int16_t* eax_41 = sub_5327a0(eax_40, eax_40, &var_a8, &lpszDeviceName_6)
            var_8_2.b = 0x16
            int16_t* eax_42 = sub_532b80(eax_41, eax_41, &var_c0, &data_af3c68)
            var_8_2.b = 0x17
            sub_684160(data_bac424, 5, eax_42)
            sub_52e8a0(&var_c0)
            sub_52e8a0(&var_a8)
            sub_52e8a0(&var_90)
            sub_52e8a0(&var_30)
            ecx_57 = &var_d8
        label_615e85:
            var_8_2.b = 7
            sub_52e8a0(ecx_57)
        label_615e9b:
            int32_t* lpszDeviceName_5 = &lpszDeviceName_6
            
            if (var_34 u>= 8)
                lpszDeviceName_5 = lpszDeviceName_6
            
            BOOL eax_43 = EnumDisplaySettingsExW(lpszDeviceName_5, ENUM_CURRENT_SETTINGS, &devMode, 
                EDS_RAWMODE)
            
            if (eax_43 == 0)
                int32_t var_1c_3 = 7
                BOOL var_20_4 = eax_43
                var_30 = eax_43.w
                sub_52e720(&var_30, 0xaf3e58, 0x13)
                var_8_2.b = 0x18
            label_615edc:
                sub_684160(data_bac424, 2, &var_30)
                ecx_29 = &var_30
                goto label_615ee4
            
            int32_t var_2c4 = devMode...d
            int32_t var_2c0_2 = devMode...__offset(0x4).d
            sub_6155f0(&var_2c4)
            
            if (arg4 != 0 && (devMode.dmPelsWidth != devMode_1.dmPelsWidth
                    || devMode.dmPelsHeight != devMode_1.dmPelsHeight))
                void* eax_48 = data_bac4a0
                *(eax_48 + 0x78) = ecx_13
                *(eax_48 + 0x7c) = ecx_14
                *(eax_48 + 0x80) = ecx_15
                *(eax_48 + 0x84) = ecx_16
                *(eax_48 + 0x88) = ecx_17
                *(eax_48 + 0x8c) = eax_13
                *(eax_48 + 0x90) = rect.left
                *(eax_48 + 0x94) = rect.top
                int32_t ecx_79
                ecx_79.b = ecx_18
                *(eax_48 + 0x98) = ecx_79.b
                *(eax_48 + 0x9c) = ecx_19
                *(eax_48 + 0x74) = 2
                *(eax_48 + 0xa0) = eax_16
                *(eax_48 + 0xcf) = 1
            
            sub_52e8a0(&lpszDeviceName_6)
            result.b = 1
        else
            rect.bottom = 7
            rect.right = eax_23
            int16_t var_78 = eax_23.w
            sub_52e720(&var_78, 0xaf3c88, 0x12)
            var_8_2.b = 8
            sub_684160(data_bac424, 2, &var_78)
            ecx_29 = &var_78
        label_615ee4:
            sub_52e8a0(ecx_29)
            ebx_1.b = 0
        label_615eef:
            
            if (var_34 u>= 8)
                j__free(lpszDeviceName_6)
            
            result.b = ebx_1.b
else
    void* eax_3 = data_bac4a0
    
    if (*(eax_3 + 0x40) == 1 && *(eax_3 + 0x58) != 0)
        int32_t eax_4 = *(eax_3 + 0x5c)
        
        if (eax_4 s>= 0)
            sub_541920(&var_30, eax_4 * 0x44c + *data_bac4a4 + 0x400)
            int32_t var_8_1 = 0
            sub_6af1e0(&var_60)
            var_8_1.b = 2
            sub_53f510(&var_30)
            char* lpszDeviceName = &var_60
            
            if (var_4c u>= 8)
                lpszDeviceName = var_60.d
            
            ChangeDisplaySettingsExW(lpszDeviceName, nullptr, nullptr, CDS_FULLSCREEN, nullptr)
            int16_t* eax_8 = sub_548cb0(&var_60, 0xaf3c6c, &lpszDeviceName_6, &var_60)
            var_8_1.b = 3
            int16_t* eax_9 = sub_532b80(eax_8, eax_8, &var_90, &data_af3c68)
            var_8_1.b = 4
            sub_684160(data_bac424, 5, eax_9)
            sub_52e8a0(&var_90)
            sub_52e8a0(&lpszDeviceName_6)
            sub_52e8a0(&var_60)
    
    sub_6155f0(arg3)
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
