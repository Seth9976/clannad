// 函数: sub_57a800
// 地址: 0x57a800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b4c09
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
LRESULT wParam_2
int32_t eax_2 = __security_cookie ^ &wParam_2
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx
ebx.b = arg2
sub_6c48f0(arg4)
uint32_t result
int32_t var_6d8
int16_t var_6c0
int32_t var_6ac
int32_t lParam

if (ebx.b == 0)
    sub_52e820(&var_6d8, 0xaef430)
    int32_t var_c_35 = 0x28
    int32_t var_6f8_45 = sub_52e820(&var_6c0, u"param")
    var_c_35.b = 0x29
    sub_6c4830(arg4, &var_6c0, &var_6d8, 0x64)
    
    if (var_6ac u>= 8)
        j__free(var_6c0.d)
    
    int32_t var_c_36 = 0xffffffff
    int32_t var_6ac_1 = 7
    int32_t var_6b0_2 = 0
    var_6c0 = 0
    int32_t var_6c4
    
    if (var_6c4 u>= 8)
        j__free(var_6d8)
    
    sub_52e820(&var_6d8, 0xad92cc)
    int32_t var_c_37 = 0x2a
    int32_t var_6f8_48 = sub_52e820(&var_6c0, u"value")
    var_c_37.b = 0x2b
    sub_6c4830(arg4, &var_6c0, &var_6d8, 0x96)
    
    if (var_6ac_1 u>= 8)
        j__free(var_6c0.d)
    
    int32_t var_c_38 = 0xffffffff
    int32_t var_6ac_2 = 7
    int32_t var_6b0_3 = 0
    var_6c0 = 0
    
    if (var_6c4 u>= 8)
        j__free(var_6d8)
    
    sub_52e820(&var_6d8, 0xaef44c)
    int32_t var_c_39 = 0x2c
    int32_t eax_14 = *(data_bac4e0 + 0x18)
    
    if (eax_14 != 0)
        eax_14(*(arg4 + 4), 0, &var_6d8, eax_4)
    
    int32_t var_c_40 = 0xffffffff
    
    if (var_6c4 u>= 8)
        j__free(var_6d8)
    
    result = sub_575a80(arg3)
    
    if (result.b != 0)
        sub_52e820(&var_6d8, 0xaee0e0)
        int32_t var_c_41 = 0x2d
        result = *(data_bac4e0 + 0x18)
        
        if (result != 0)
            result = result(*(arg4 + 4), 0, &var_6d8, eax_4)
        
        int32_t var_c_42 = 0xffffffff
        
        if (var_6c4 u>= 8)
            result = j__free(var_6d8)
    
    if (arg3 s> 0x582)
        if (arg3 == 0x5aa)
            int32_t var_c_92 = 0x44
            void var_c4
            void* var_6f8_92 = &var_c4
            sub_56aed0(arg4, sub_52e820(&var_c4, 0xaef3d4))
            int32_t var_c_93 = 0xffffffff
            sub_52e8a0(&var_c4)
            int32_t var_c_94 = 0x45
            void var_94
            void* var_6f8_93 = &var_94
            sub_56aed0(arg4, sub_52e820(&var_94, 0xaef3ac))
            int32_t var_c_95 = 0xffffffff
            sub_52e8a0(&var_94)
            int32_t var_c_96 = 0x46
            void var_64
            void* var_6f8_94 = &var_64
            sub_56aed0(arg4, sub_52e820(&var_64, 0xaee888))
            int32_t var_c_97 = 0xffffffff
            sub_52e8a0(&var_64)
            int32_t var_c_98 = 0x47
            int32_t* var_6f8_95 = &lParam
            sub_56aed0(arg4, sub_52e820(&lParam, 0xaef3f8))
            result = sub_52e8a0(&lParam)
        else if (arg3 == 0x6a4)
            int32_t var_c_91 = 0x4e
            void var_f4
            void* var_6f8_91 = &var_f4
            sub_56aed0(arg4, sub_52e820(&var_f4, 0xaef498))
            result = sub_52e8a0(&var_f4)
        
        if (arg3 == 0x5a0)
            int32_t var_c_88 = 0x4a
            void var_154
            void* var_6f8_89 = &var_154
            sub_56aed0(arg4, sub_52e820(&var_154, 0xaef3ac))
            int32_t var_c_89 = 0xffffffff
            sub_52e8a0(&var_154)
            int32_t var_c_90 = 0x4b
            void var_124
            void* var_6f8_90 = &var_124
            sub_56aed0(arg4, sub_52e820(&var_124, &data_aee8ac))
            result = sub_52e8a0(&var_124)
        else if (arg3 == 0x58c)
            int32_t var_c_85 = 0x3f
            void var_1b4
            void* var_6f8_87 = &var_1b4
            sub_56aed0(arg4, sub_52e820(&var_1b4, 0xaef3ac))
            int32_t var_c_86 = 0xffffffff
            sub_52e8a0(&var_1b4)
            int32_t var_c_87 = 0x40
            void var_184
            void* var_6f8_88 = &var_184
            sub_56aed0(arg4, sub_52e820(&var_184, 0xaef3b4))
            result = sub_52e8a0(&var_184)
        else if (arg3 == 0x58d)
            int32_t var_c_80 = 0x41
            void var_244
            void* var_6f8_84 = &var_244
            sub_56aed0(arg4, sub_52e820(&var_244, 0xaef3ac))
            int32_t var_c_81 = 0xffffffff
            sub_52e8a0(&var_244)
            int32_t var_c_82 = 0x42
            void var_214
            void* var_6f8_85 = &var_214
            sub_56aed0(arg4, sub_52e820(&var_214, 0xaef48c))
            int32_t var_c_83 = 0xffffffff
            sub_52e8a0(&var_214)
            int32_t var_c_84 = 0x43
            void var_1e4
            void* var_6f8_86 = &var_1e4
            sub_56aed0(arg4, sub_52e820(&var_1e4, 0xaef3b4))
            result = sub_52e8a0(&var_1e4)
        else if (arg3 == 0x596)
            int32_t var_c_77 = 0x48
            void var_2a4
            void* var_6f8_82 = &var_2a4
            sub_56aed0(arg4, sub_52e820(&var_2a4, 0xaef3ac))
            int32_t var_c_78 = 0xffffffff
            sub_52e8a0(&var_2a4)
            int32_t var_c_79 = 0x49
            void var_274
            void* var_6f8_83 = &var_274
            sub_56aed0(arg4, sub_52e820(&var_274, 0xaef3b4))
            result = sub_52e8a0(&var_274)
    else if (arg3 == 0x582)
        int32_t var_c_68 = 0x3a
        void var_394
        void* var_6f8_77 = &var_394
        sub_56aed0(arg4, sub_52e820(&var_394, 0xaef3ac))
        int32_t var_c_69 = 0xffffffff
        sub_52e8a0(&var_394)
        int32_t var_c_70 = 0x3b
        void var_364
        void* var_6f8_78 = &var_364
        sub_56aed0(arg4, sub_52e820(&var_364, 0xaef45c))
        int32_t var_c_71 = 0xffffffff
        sub_52e8a0(&var_364)
        int32_t var_c_72 = 0x3c
        void var_334
        void* var_6f8_79 = &var_334
        sub_56aed0(arg4, sub_52e820(&var_334, 0xaef464))
        int32_t var_c_73 = 0xffffffff
        sub_52e8a0(&var_334)
        int32_t var_c_74 = 0x3d
        void var_304
        void* var_6f8_80 = &var_304
        sub_56aed0(arg4, sub_52e820(&var_304, u"koe/exkoe"))
        int32_t var_c_75 = 0xffffffff
        sub_52e8a0(&var_304)
        int32_t var_c_76 = 0x3e
        void var_2d4
        void* var_6f8_81 = &var_2d4
        sub_56aed0(arg4, sub_52e820(&var_2d4, 0xaef3b4))
        result = sub_52e8a0(&var_2d4)
    else if (arg3 - 0x47e u<= 0xfa)
        result = zx.d(*(arg3 + 0x57bdea))
        
        switch (result)
            case 0
                for (int32_t i = 0; i u< 0x54; i += 0x1c)
                    int32_t var_c_45 = 0x2f
                    void var_19c
                    void* var_6f8_58 = &var_19c
                    sub_56aed0(arg4, sub_52e820(&var_19c, *(i + &data_ada594)))
                    int32_t var_c_46 = 0xffffffff
                    result = sub_52e8a0(&var_19c)
            case 1
                for (int32_t i_1 = 0; i_1 u< 0x70; i_1 += 0x1c)
                    int32_t var_c_43 = 0x2e
                    void var_31c
                    void* var_6f8_56 = &var_31c
                    sub_56aed0(arg4, sub_52e820(&var_31c, *(i_1 + &data_ada664)))
                    int32_t var_c_44 = 0xffffffff
                    result = sub_52e8a0(&var_31c)
            case 2
                int32_t var_c_65 = 0x4c
                void var_3f4
                void* var_6f8_75 = &var_3f4
                sub_56aed0(arg4, sub_52e820(&var_3f4, 0xaef40c))
                int32_t var_c_66 = 0xffffffff
                sub_52e8a0(&var_3f4)
                int32_t var_c_67 = 0x4d
                void var_3c4
                void* var_6f8_76 = &var_3c4
                sub_56aed0(arg4, sub_52e820(&var_3c4, &data_aef41c))
                result = sub_52e8a0(&var_3c4)
            case 3
                for (int32_t i_2 = 0; i_2 u< 0x188; i_2 += 0x1c)
                    int32_t var_c_58 = 0x36
                    void var_4b4
                    void* var_6f8_71 = &var_4b4
                    sub_56aed0(arg4, sub_52e820(&var_4b4, *(i_2 + &data_ad98f4)))
                    int32_t var_c_59 = 0xffffffff
                    result = sub_52e8a0(&var_4b4)
            case 4
                for (int32_t i_3 = 0; i_3 u< 0x70; i_3 += 0x1c)
                    int32_t var_c_47 = 0x30
                    void var_2ec
                    void* var_6f8_60 = &var_2ec
                    sub_56aed0(arg4, sub_52e820(&var_2ec, *(i_3 + &data_ada5f4)))
                    int32_t var_c_48 = 0xffffffff
                    result = sub_52e8a0(&var_2ec)
            case 5
                for (int32_t i_4 = 0; i_4 u< 0x738; i_4 += 0x1c)
                    int32_t var_c_49 = 0x31
                    void var_dc
                    void* var_6f8_62 = &var_dc
                    sub_56aed0(arg4, sub_52e820(&var_dc, *(i_4 + &data_ad9d54)))
                    int32_t var_c_50 = 0xffffffff
                    result = sub_52e8a0(&var_dc)
            case 6
                for (int32_t i_5 = 0; i_5 u< 0x70; i_5 += 0x1c)
                    int32_t var_c_53 = 0x33
                    void var_16c
                    void* var_6f8_66 = &var_16c
                    sub_56aed0(arg4, sub_52e820(&var_16c, *(i_5 + &data_ad9ab4)))
                    int32_t var_c_54 = 0xffffffff
                    result = sub_52e8a0(&var_16c)
            case 7
                for (int32_t i_6 = 0; i_6 u< 0xe0; i_6 += 0x1c)
                    int32_t var_c_51 = 0x32
                    void var_2bc
                    void* var_6f8_64 = &var_2bc
                    sub_56aed0(arg4, sub_52e820(&var_2bc, *(i_6 + &data_ada4b4)))
                    int32_t var_c_52 = 0xffffffff
                    result = sub_52e8a0(&var_2bc)
            case 8
                int32_t var_c_57 = 0x35
                void var_4e4
                void* var_6f8_69 = &var_4e4
                sub_56aed0(arg4, sub_52e820(&var_4e4, 0xad9408))
                result = sub_52e8a0(&var_4e4)
            case 9
                for (int32_t i_7 = 0; i_7 u< 0x230; i_7 += 0x1c)
                    int32_t var_c_55 = 0x34
                    void var_28c
                    void* var_6f8_68 = &var_28c
                    sub_56aed0(arg4, sub_52e820(&var_28c, *(i_7 + &data_ad9b24)))
                    int32_t var_c_56 = 0xffffffff
                    result = sub_52e8a0(&var_28c)
            case 0xa
                int32_t var_c_60 = 0x37
                void var_484
                void* var_6f8_72 = &var_484
                sub_56aed0(arg4, sub_52e820(&var_484, 0xaef3ac))
                int32_t var_c_61 = 0xffffffff
                sub_52e8a0(&var_484)
                int32_t var_c_62 = 0x38
                void var_454
                void* var_6f8_73 = &var_454
                sub_56aed0(arg4, sub_52e820(&var_454, 0xad9240))
                int32_t var_c_63 = 0xffffffff
                sub_52e8a0(&var_454)
                int32_t var_c_64 = 0x39
                void var_424
                void* var_6f8_74 = &var_424
                sub_56aed0(arg4, sub_52e820(&var_424, 0xaef3b4))
                result = sub_52e8a0(&var_424)
else
    int32_t var_694_1 = 7
    int32_t var_698_1 = 0
    int16_t var_6a8 = 0
    sub_52e720(&var_6a8, 0xaef3a4, 2)
    int32_t var_c_1 = 0
    int32_t var_67c_1 = 7
    int32_t var_680_1 = 0
    int16_t var_690 = 0
    sub_52e720(&var_690, 0xaef3a4, 2)
    var_c_1.b = 1
    HWND hWnd = *(arg4 + 4)
    HWND hWnd_1
    
    if (hWnd != 0)
        hWnd_1 = SendMessageW(hWnd, 0x101f, 0, 0)
    else
        hWnd_1 = nullptr
    
    LRESULT wParam = SendMessageW(hWnd_1, 0x1200, 0, 0)
    int16_t* ecx_3 = &var_6a8
    wParam_2 = wParam
    
    if (var_694_1 u>= 8)
        ecx_3 = var_6a8.d
    
    int16_t* var_66c_1 = ecx_3
    HWND hWnd_4 = *(arg4 + 4)
    lParam = 7
    int32_t var_674_1 = 0
    int32_t var_670_1 = 0x1e
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0x1061, wParam, &lParam)
    
    int16_t* var_6f8_2 = &var_690
    LRESULT wParam_3
    sub_6c6920(arg4 + 0x90, &wParam_3, *(arg4 + 0x90) + wParam_2 * 0x18, &var_690)
    
    if (var_67c_1 u>= 8)
        j__free(var_690.d)
    
    result = 0
    int32_t var_c_2 = 0xffffffff
    int32_t var_67c_2 = 7
    int32_t var_680_2 = 0
    var_690 = 0
    
    if (var_694_1 u>= 8)
        result = j__free(var_6a8.d)
    
    if (arg3 s> 0x4b1)
        if (arg3 - 0x4bb u<= 0xf0)
            result = zx.d(*(arg3 + 0x57bc89))
            
            switch (result)
                case 0
                    void var_1cc
                    sub_52e820(&var_1cc, 0xaef40c)
                    int32_t var_c_32 = 0x24
                    void var_37c
                    int32_t var_6f8_43 = sub_52e820(&var_37c, 0xaef414)
                    var_c_32.b = 0x25
                    sub_6c4830(arg4, &var_37c, &var_1cc, 0x64)
                    sub_52e8a0(&var_37c)
                    int32_t var_c_33 = 0xffffffff
                    sub_52e8a0(&var_1cc)
                    void var_4c
                    sub_52e820(&var_4c, &data_aef41c)
                    int32_t var_c_34 = 0x26
                    void var_34c
                    int32_t var_6f8_44 = sub_52e820(&var_34c, 0xaef428)
                    var_c_34.b = 0x27
                    sub_6c4830(arg4, &var_34c, &var_4c, 0x64)
                    sub_52e8a0(&var_34c)
                    result = sub_52e8a0(&var_4c)
                case 1
                    for (int32_t i_8 = 0; i_8 u< 0x188; i_8 += 0x1c)
                        void var_22c
                        sub_52e820(&var_22c, *(i_8 + &data_ad98f8))
                        int32_t var_c_18 = 0x14
                        void var_43c
                        int32_t var_6f8_33 = sub_52e820(&var_43c, *(i_8 + &data_ad98f0))
                        var_c_18.b = 0x15
                        sub_6c4830(arg4, &var_43c, &var_22c, *(i_8 + &data_ad98ec))
                        sub_52e8a0(&var_43c)
                        int32_t var_c_19 = 0xffffffff
                        result = sub_52e8a0(&var_22c)
                case 2
                    for (int32_t i_9 = 0; i_9 u< 0x738; i_9 += 0x1c)
                        void var_34
                        sub_52e820(&var_34, *(i_9 + &data_ad9d58))
                        int32_t var_c_9 = 0xa
                        void var_10c
                        int32_t var_6f8_20 = sub_52e820(&var_10c, *(i_9 + &data_ad9d50))
                        var_c_9.b = 0xb
                        sub_6c4830(arg4, &var_10c, &var_34, *(i_9 + &data_ad9d4c))
                        sub_52e8a0(&var_10c)
                        int32_t var_c_10 = 0xffffffff
                        result = sub_52e8a0(&var_34)
                case 3
                    for (int32_t i_10 = 0; i_10 u< 0x70; i_10 += 0x1c)
                        void var_25c
                        sub_52e820(&var_25c, *(i_10 + &data_ad9ab8))
                        int32_t var_c_13 = 0xe
                        void var_49c
                        int32_t var_6f8_26 = sub_52e820(&var_49c, *(i_10 + &data_ad9ab0))
                        var_c_13.b = 0xf
                        sub_6c4830(arg4, &var_49c, &var_25c, *(i_10 + &data_ad9aac))
                        sub_52e8a0(&var_49c)
                        int32_t var_c_14 = 0xffffffff
                        result = sub_52e8a0(&var_25c)
                case 4
                    for (int32_t i_11 = 0; i_11 u< 0xe0; i_11 += 0x1c)
                        void var_7c
                        sub_52e820(&var_7c, *(i_11 + &data_ada4b8))
                        int32_t var_c_11 = 0xc
                        void var_4cc
                        int32_t var_6f8_23 = sub_52e820(&var_4cc, *(i_11 + &data_ada4b0))
                        var_c_11.b = 0xd
                        sub_6c4830(arg4, &var_4cc, &var_7c, *(i_11 + &data_ada4ac))
                        sub_52e8a0(&var_4cc)
                        int32_t var_c_12 = 0xffffffff
                        result = sub_52e8a0(&var_7c)
                case 5
                    int32_t var_518_1 = 7
                    int32_t var_51c_1 = 0
                    int16_t var_52c = 0
                    sub_52e720(&var_52c, 0xad9408, 4)
                    int32_t var_c_17 = 0x12
                    int32_t var_5d8_1 = 7
                    int32_t var_5dc_1 = 0
                    int16_t var_5ec = 0
                    int32_t var_6f8_30 = sub_52e720(&var_5ec, u"type", 4)
                    var_c_17.b = 0x13
                    sub_6c4830(arg4, &var_5ec, &var_52c, 0x32)
                    sub_52e8a0(&var_5ec)
                    result = sub_52e8a0(&var_52c)
                case 6
                    for (int32_t i_12 = 0; i_12 u< 0x230; i_12 += 0x1c)
                        void var_13c
                        sub_52e820(&var_13c, *(i_12 + &data_ad9b28))
                        int32_t var_c_15 = 0x10
                        void var_46c
                        int32_t var_6f8_29 = sub_52e820(&var_46c, *(i_12 + &data_ad9b20))
                        var_c_15.b = 0x11
                        sub_6c4830(arg4, &var_46c, &var_13c, *(i_12 + &data_ad9b1c))
                        sub_52e8a0(&var_46c)
                        int32_t var_c_16 = 0xffffffff
                        result = sub_52e8a0(&var_13c)
                case 7
                    int32_t var_548_1 = 7
                    int32_t var_54c_1 = 0
                    int16_t var_55c = 0
                    sub_52e720(&var_55c, 0xaef3ac, 2)
                    int32_t var_c_20 = 0x16
                    int32_t var_5a8_1 = 7
                    int32_t var_5ac_1 = 0
                    int16_t var_5bc = 0
                    int32_t var_6f8_34 = sub_52e720(&var_5bc, u"state", 5)
                    var_c_20.b = 0x17
                    sub_6c4830(arg4, &var_5bc, &var_55c, 0x32)
                    sub_52e8a0(&var_5bc)
                    int32_t var_c_21 = 0xffffffff
                    sub_52e8a0(&var_55c)
                    int32_t var_5f0_1 = 7
                    int16_t var_604 = 0
                    int32_t var_5f4_1 = 0
                    sub_52e720(&var_604, &data_aee8ac, 4)
                    int32_t var_c_22 = 0x18
                    int32_t var_608_1 = 7
                    int32_t var_60c_1 = 0
                    int16_t var_61c = 0
                    int32_t var_6f8_37 = sub_52e720(&var_61c, u"file", 4)
                    var_c_22.b = 0x19
                    sub_6c4830(arg4, &var_61c, &var_604, 0x64)
                    sub_52e8a0(&var_61c)
                    int32_t var_c_23 = 0xffffffff
                    sub_52e8a0(&var_604)
                    int32_t var_590_1 = 7
                    int32_t var_594_1 = 0
                    int16_t var_5a4 = 0
                    sub_52e720(&var_5a4, 0xaef3b4, 6)
                    int32_t var_c_24 = 0x1a
                    int32_t var_5c0_1 = 7
                    int32_t var_5c4_1 = 0
                    int16_t var_5d4 = 0
                    int32_t var_6f8_38 = sub_52e720(&var_5d4, u"volume", 6)
                    var_c_24.b = 0x1b
                    sub_6c4830(arg4, &var_5d4, &var_5a4, 0x32)
                    sub_52e8a0(&var_5d4)
                    result = sub_52e8a0(&var_5a4)
                case 8
                    int32_t var_6c4_1 = 7
                    int32_t var_6c8_1 = 0
                    var_6d8.w = 0
                    sub_52e720(&var_6d8, 0xaef3d4, 5)
                    int32_t var_c_25 = 0x1c
                    int32_t var_560_1 = 7
                    int32_t var_564_1 = 0
                    int16_t var_574 = 0
                    int32_t var_6f8_39 = sub_52e720(&var_574, u"pcm_buf_no", 0xa)
                    var_c_25.b = 0x1d
                    sub_6c4830(arg4, &var_574, &var_6d8, 0x32)
                    sub_52e8a0(&var_574)
                    int32_t var_c_26 = 0xffffffff
                    sub_52e8a0(&var_6d8)
                    void var_ac
                    sub_52e820(&var_ac, 0xaef3ac)
                    int32_t var_c_27 = 0x1e
                    void var_40c
                    int32_t var_6f8_40 = sub_52e820(&var_40c, u"state")
                    var_c_27.b = 0x1f
                    sub_6c4830(arg4, &var_40c, &var_ac, 0x32)
                    sub_52e8a0(&var_40c)
                    int32_t var_c_28 = 0xffffffff
                    sub_52e8a0(&var_ac)
                    void var_1fc
                    sub_52e820(&var_1fc, 0xaee888)
                    int32_t var_c_29 = 0x20
                    void var_3dc
                    int32_t var_6f8_41 = sub_52e820(&var_3dc, u"time")
                    var_c_29.b = 0x21
                    sub_6c4830(arg4, &var_3dc, &var_1fc, 0x32)
                    sub_52e8a0(&var_3dc)
                    int32_t var_c_30 = 0xffffffff
                    sub_52e8a0(&var_1fc)
                    void var_4fc
                    sub_52e820(&var_4fc, 0xaef3f8)
                    int32_t var_c_31 = 0x22
                    void var_3ac
                    int32_t var_6f8_42 = sub_52e820(&var_3ac, u"line")
                    var_c_31.b = 0x23
                    sub_6c4830(arg4, &var_3ac, &var_4fc, 0x32)
                    sub_52e8a0(&var_3ac)
                    result = sub_52e8a0(&var_4fc)
    else if (arg3 == 0x4b1)
        for (int32_t i_13 = 0; i_13 u< 0x70; )
            sub_52e820(&var_6a8, *(i_13 + &data_ada668))
            int32_t var_c_7 = 6
            sub_52e820(&var_6c0, *(i_13 + &data_ada660))
            var_c_7.b = 7
            wParam_2 = *(i_13 + &data_ada65c)
            LRESULT hWnd_2 = *(arg4 + 4)
            
            if (hWnd_2 != 0)
                hWnd_2 = SendMessageW(hWnd_2, 0x101f, 0, 0)
            
            int16_t* ecx_24 = &var_6a8
            LRESULT wParam_1 = SendMessageW(hWnd_2, 0x1200, 0, 0)
            lParam = 7
            
            if (var_694_1 u>= 8)
                ecx_24 = var_6a8.d
            
            LRESULT wParam_4 = wParam_2
            HWND hWnd_3 = *(arg4 + 4)
            wParam_3 = wParam_1
            int32_t var_674_2 = 0
            int16_t* var_66c_2 = ecx_24
            
            if (hWnd_3 != 0)
                SendMessageW(hWnd_3, 0x1061, wParam_1, &lParam)
                wParam_1 = wParam_3
            
            int16_t* var_6f8_15 = &var_6c0
            void var_6dc
            sub_6c6920(arg4 + 0x90, &var_6dc, *(arg4 + 0x90) + wParam_1 * 0x18, &var_6c0)
            
            if (var_6ac u>= 8)
                j__free(var_6c0.d)
            
            int32_t var_c_8 = 0xffffffff
            var_6ac = 7
            int32_t var_6b0_1 = 0
            var_6c0 = 0
            
            if (var_694_1 u>= 8)
                j__free(var_6a8.d)
            
            result = 0
            var_694_1 = 7
            i_13 += 0x1c
            int32_t var_698_2 = 0
            var_6a8 = 0
    else
        if (arg3 == 0x47f)
            for (int32_t i_14 = 0; i_14 u< 0x54; )
                int16_t var_64c
                sub_52e820(&var_64c, *(i_14 + &data_ada598))
                int32_t var_c_5 = 8
                int32_t var_6f8_9 = sub_52e820(&var_690, *(i_14 + &data_ada590))
                var_c_5.b = 9
                sub_6c4830(arg4, &var_690, &var_64c, *(i_14 + &data_ada58c))
                
                if (var_67c_2 u>= 8)
                    j__free(var_690.d)
                
                int32_t var_c_6 = 0xffffffff
                var_67c_2 = 7
                int32_t var_680_3 = 0
                var_690 = 0
                int32_t var_638
                
                if (var_638 u>= 8)
                    j__free(var_64c.d)
                
                result = 0
                var_638 = 7
                i_14 += 0x1c
                int32_t var_63c_1 = 0
                var_64c = 0
        
        if (arg3 == 0x15)
            int32_t var_620_1 = 7
            int32_t var_624_1 = 0
            int16_t var_634 = 0
            sub_52e720(&var_634, 0xad92cc, 1)
            int32_t var_c_4 = 4
            int32_t var_500_1 = 7
            int32_t var_504_1 = 0
            int16_t var_514 = 0
            int32_t var_6f8_6 = sub_52e720(&var_514, u"value", 5)
            var_c_4.b = 5
            sub_6c4830(arg4, &var_514, &var_634, 0x64)
            sub_52e8a0(&var_514)
            result = sub_52e8a0(&var_634)
        else if (arg3 == 0xb || arg3 == 0x10)
            int32_t var_530_1 = 7
            int32_t var_534_1 = 0
            int16_t var_544 = 0
            sub_52e720(&var_544, 0xad92cc, 1)
            int32_t var_c_3 = 2
            int32_t var_578_1 = 7
            int32_t var_57c_1 = 0
            int16_t var_58c = 0
            int32_t var_6f8_5 = sub_52e720(&var_58c, u"value", 5)
            var_c_3.b = 3
            sub_6c4830(arg4, &var_58c, &var_544, 0x32)
            sub_52e8a0(&var_58c)
            result = sub_52e8a0(&var_544)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &wParam_2)
return result
