// 函数: sub_58ada0
// 地址: 0x58ada0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b76b7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_424
int32_t eax_2 = __security_cookie ^ &var_424
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg1
void* var_414 = ebx

if (*(ebx + 4) != 0)
    int32_t edi_1 = 0
    int32_t ecx = *(ebx + 0x414) * 9
    int32_t eax_7 = *data_bac428
    result = (*(eax_7 + (ecx << 2) + 0x1c) - *(eax_7 + (ecx << 2) + 0x18)) s/ 0xb8
    
    if (result s> 0)
        void* esi_3 = ebx + 0xe0
        void* var_418_1 = esi_3
        
        do
            LRESULT hWnd = *(esi_3 + 4)
            
            if (hWnd != 0)
                hWnd = SendMessageW(hWnd, 0x1004, 0, 0)
            
            if (hWnd s<= edi_1)
                int32_t eax_12 = *(data_bac4e0 + 0x14)
                
                if (eax_12 != 0)
                    eax_12(*(ebx + 0xe4), eax_4)
            
            int32_t* ebx_2 = edi_1 * 0xb8 + *(*data_bac428 + *(ebx + 0x414) * 0x24 + 0x18)
            void var_454
            int32_t ecx_71
            
            if (ebx_2[0x2a] == 0)
                int32_t eax_68 = ebx_2[0x1f]
                
                if (eax_68 s>= 3)
                    int128_t var_3f8
                    int32_t* var_438_45 = &var_3f8
                    __builtin_memset(&var_3f8, 0, 0x19)
                    sub_54b210(eax_68, &ebx_2[eax_68 - 2], ebx_2, var_438_45)
                    void* var_3e4
                    
                    if (var_3e4 != 0)
                        int32_t eax_69 = *(var_3e4 + 0x80)
                        
                        if (eax_69 == 0xb)
                            int32_t ecx_83 = ebx_2[ebx_2[0x1f] - 1]
                            int32_t var_c_47
                            
                            switch (ebx_2[0x2d] - 1)
                                case 0
                                    int32_t var_438_56 = ecx_83
                                    void var_1e4
                                    int16_t* eax_84 = sub_5483b0(var_3e4, &var_1e4)
                                    int32_t var_c_46 = 0x1e
                                    
                                    if (*(eax_84 + 0x14) u>= 8)
                                        eax_84 = *eax_84
                                    
                                    int16_t* var_43c_56 = eax_84
                                    sub_52e820(&var_454, u"%s.bit[%04d]")
                                    var_c_46.b = 0x1f
                                    void var_214
                                    sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_214, var_454))
                                    sub_52e8a0(&var_214)
                                    var_c_47 = 0xffffffff
                                    sub_52e8a0(&var_1e4)
                                case 1
                                    int32_t var_438_54 = ecx_83
                                    void var_244
                                    int16_t* eax_82 = sub_5483b0(var_3e4, &var_244)
                                    int32_t var_c_45 = 0x1c
                                    
                                    if (*(eax_82 + 0x14) u>= 8)
                                        eax_82 = *eax_82
                                    
                                    int16_t* var_43c_53 = eax_82
                                    sub_52e820(&var_454, u"%s.bit2[%04d]")
                                    var_c_45.b = 0x1d
                                    void var_274
                                    sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_274, var_454))
                                    sub_52e8a0(&var_274)
                                    var_c_47 = 0xffffffff
                                    sub_52e8a0(&var_244)
                                case 3
                                    int32_t var_438_52 = ecx_83
                                    void var_2a4
                                    int16_t* eax_80 = sub_5483b0(var_3e4, &var_2a4)
                                    int32_t var_c_44 = 0x1a
                                    
                                    if (*(eax_80 + 0x14) u>= 8)
                                        eax_80 = *eax_80
                                    
                                    int16_t* var_43c_50 = eax_80
                                    sub_52e820(&var_454, u"%s.bit4[%04d]")
                                    var_c_44.b = 0x1b
                                    void var_2d4
                                    sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_2d4, var_454))
                                    sub_52e8a0(&var_2d4)
                                    var_c_47 = 0xffffffff
                                    sub_52e8a0(&var_2a4)
                                case 7
                                    int32_t var_438_50 = ecx_83
                                    void var_304
                                    int16_t* eax_78 = sub_5483b0(var_3e4, &var_304)
                                    int32_t var_c_43 = 0x18
                                    
                                    if (*(eax_78 + 0x14) u>= 8)
                                        eax_78 = *eax_78
                                    
                                    int16_t* var_43c_47 = eax_78
                                    sub_52e820(&var_454, u"%s.bit8[%04d]")
                                    var_c_43.b = 0x19
                                    void var_31c
                                    sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_31c, var_454))
                                    sub_52e8a0(&var_31c)
                                    var_c_47 = 0xffffffff
                                    sub_52e8a0(&var_304)
                                case 0xf
                                    int32_t var_438_48 = ecx_83
                                    void var_4c
                                    int16_t* eax_76 = sub_5483b0(var_3e4, &var_4c)
                                    int32_t var_c_42 = 0x16
                                    
                                    if (*(eax_76 + 0x14) u>= 8)
                                        eax_76 = *eax_76
                                    
                                    int16_t* var_43c_44 = eax_76
                                    sub_52e820(&var_454, u"%s.bit16[%04d]")
                                    var_c_42.b = 0x17
                                    void var_1cc
                                    sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_1cc, var_454))
                                    sub_52e8a0(&var_1cc)
                                    var_c_47 = 0xffffffff
                                    sub_52e8a0(&var_4c)
                                case 0x1f
                                    int32_t var_438_46 = ecx_83
                                    void var_10c
                                    int16_t* eax_74 = sub_5483b0(var_3e4, &var_10c)
                                    int32_t var_c_41 = 0x14
                                    
                                    if (*(eax_74 + 0x14) u>= 8)
                                        eax_74 = *eax_74
                                    
                                    int16_t* var_43c_41 = eax_74
                                    sub_52e820(&var_454, u"%s[%04d]")
                                    var_c_41.b = 0x15
                                    void var_1fc
                                    sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_1fc, var_454))
                                    sub_52e8a0(&var_1fc)
                                    var_c_47 = 0xffffffff
                                    sub_52e8a0(&var_10c)
                            
                            if (ecx_83 s< 0 || ecx_83 s>= divs.dp.d(
                                    sx.q((*(var_3e4 + 0xa4) - *(var_3e4 + 0xa0)) s>> 2 << 5), 
                                    ebx_2[0x2d]))
                                void* const var_438_65 = 3
                                int32_t var_380_1 = 7
                                void* const var_43c_64 = &data_aef760
                                int32_t var_384_1 = 0
                                int16_t var_394 = 0
                                sub_52e720(&var_394, var_43c_64, var_438_65)
                                int32_t var_c_60 = 0x26
                                int32_t eax_108 = *(data_bac4e0 + 0x34)
                                
                                if (eax_108 != 0)
                                    eax_108(*(var_414 + 0xe4), edi_1, 1, &var_394, eax_4)
                                
                                int32_t var_c_61 = 0xffffffff
                                sub_52e8a0(&var_394)
                            else
                                switch (ebx_2[0x2d] - 1)
                                    case 0
                                        sub_5c2920(var_3e4 - 4, ecx_83)
                                        int32_t var_c_58 = 0x25
                                        void var_c4
                                        sub_56af20(esi_3, edi_1, 1, sub_6ad9b0(&var_c4))
                                        int32_t var_c_59 = 0xffffffff
                                        sub_52e8a0(&var_c4)
                                    case 1
                                        sub_5c2b10(var_3e4 - 4, ecx_83)
                                        int32_t var_c_56 = 0x24
                                        void var_f4
                                        sub_56af20(esi_3, edi_1, 1, sub_6ad9b0(&var_f4))
                                        int32_t var_c_57 = 0xffffffff
                                        sub_52e8a0(&var_f4)
                                    case 3
                                        sub_5c2d10(var_3e4 - 4, ecx_83)
                                        int32_t var_c_54 = 0x23
                                        void var_124
                                        sub_56af20(esi_3, edi_1, 1, sub_6ad9b0(&var_124))
                                        int32_t var_c_55 = 0xffffffff
                                        sub_52e8a0(&var_124)
                                    case 7
                                        sub_5c2f10(var_3e4 - 4, ecx_83)
                                        int32_t var_c_52 = 0x22
                                        void var_154
                                        sub_56af20(esi_3, edi_1, 1, sub_6ad9b0(&var_154))
                                        int32_t var_c_53 = 0xffffffff
                                        sub_52e8a0(&var_154)
                                    case 0xf
                                        sub_5c3110(var_3e4 - 4, ecx_83)
                                        int32_t var_c_50 = 0x21
                                        void var_184
                                        sub_56af20(esi_3, edi_1, 1, sub_6ad9b0(&var_184))
                                        int32_t var_c_51 = 0xffffffff
                                        sub_52e8a0(&var_184)
                                    case 0x1f
                                        void* var_438_58 = var_3e4 - 4
                                        *(*(var_3e4 + 0xa0) + (ecx_83 << 2))
                                        int32_t var_c_48 = 0x20
                                        void var_1b4
                                        sub_56af20(esi_3, edi_1, 1, sub_6ad9b0(&var_1b4))
                                        int32_t var_c_49 = 0xffffffff
                                        sub_52e8a0(&var_1b4)
                        else if (eax_69 == 0x15)
                            int32_t eax_110 = ebx_2[ebx_2[0x1f] - 1]
                            int32_t var_438_67 = eax_110
                            void var_64
                            int16_t* eax_112 = sub_5483b0(var_3e4, &var_64)
                            int32_t var_c_62 = 0x27
                            
                            if (*(eax_112 + 0x14) u>= 8)
                                eax_112 = *eax_112
                            
                            int16_t* var_43c_67 = eax_112
                            sub_52e820(&var_454, u"%s[%04d]")
                            var_c_62.b = 0x28
                            void var_94
                            sub_56af20(esi_3, edi_1, 0, sub_6ae4c0(&var_94, var_454))
                            sub_52e8a0(&var_94)
                            int32_t var_c_63 = 0xffffffff
                            sub_52e8a0(&var_64)
                            
                            if (eax_110 s>= 0)
                                ecx_71 = eax_110
                                
                                if (ecx_71 s< sub_55aeb0(var_3e4))
                                    sub_56af20(esi_3, edi_1, 1, *(var_3e4 + 0xa0) + ecx_71 * 0x18)
            else
                void* ecx_2 = data_bac45c
                void* esi_4 = &ebx_2[0x26]
                int32_t eax_16 = sub_697e70(ecx_2, *(ecx_2 + 0x64), esi_4)
                
                if (eax_16 s< 0)
                    int32_t eax_65 = *(data_bac4e0 + 0x34)
                    void* esi_8
                    
                    if (eax_65 == 0)
                        esi_8 = var_414
                    else
                        esi_8 = var_414
                        eax_65(*(esi_8 + 0xe4), edi_1, 0, esi_4, eax_4)
                    
                    void* var_438_42 = 3
                    int32_t var_3b0_1 = 7
                    void* const var_43c_38 = &data_ad93bc
                    int32_t var_3b4_1 = 0
                    int16_t var_3c4 = 0
                    sub_52e720(&var_3c4, var_43c_38, var_438_42)
                    int32_t var_c_39 = 0x13
                    int32_t eax_67 = *(data_bac4e0 + 0x34)
                    
                    if (eax_67 != 0)
                        eax_67(*(esi_8 + 0xe4), edi_1, 1, &var_3c4, eax_4)
                    
                    int32_t var_c_40 = 0xffffffff
                    
                    if (var_3b0_1 u>= 8)
                        j__free(var_3c4.d)
                    
                    int32_t var_3b0_2 = 7
                    int32_t var_3b4_2 = 0
                    var_3c4 = 0
                else
                    void* eax_17 = sub_621ac0(eax_16)
                    
                    if (eax_17 == 0)
                        int32_t eax_61 = *(data_bac4e0 + 0x34)
                        void* esi_7
                        
                        if (eax_61 == 0)
                            esi_7 = var_414
                        else
                            esi_7 = var_414
                            eax_61(*(esi_7 + 0xe4), edi_1, 0, esi_4, eax_4)
                        
                        void* var_438_38 = 3
                        int32_t var_3c8_1 = 7
                        void* const var_43c_35 = &data_ad93bc
                        int32_t var_3cc_1 = 0
                        int16_t var_3dc = 0
                        sub_52e720(&var_3dc, var_43c_35, var_438_38)
                        int32_t var_c_37 = 0x12
                        int32_t eax_63 = *(data_bac4e0 + 0x34)
                        
                        if (eax_63 != 0)
                            eax_63(*(esi_7 + 0xe4), edi_1, 1, &var_3dc, eax_4)
                        
                        int32_t var_c_38 = 0xffffffff
                        
                        if (var_3c8_1 u>= 8)
                            j__free(var_3dc.d)
                        
                        int32_t var_3c8_2 = 7
                        int32_t var_3cc_2 = 0
                        var_3dc = 0
                    else
                        int32_t ecx_4 = *(eax_17 + 4)
                        
                        if (ecx_4 == 0xa)
                            int32_t ecx_6 = *(data_bac4e0 + 0x34)
                            void* esi_5
                            
                            if (ecx_6 == 0)
                                esi_5 = var_414
                            else
                                esi_5 = var_414
                                ecx_6 = ecx_6(*(esi_5 + 0xe4), edi_1, 0, esi_4, eax_4)
                            
                            *(eax_17 + 8)
                            int32_t var_438_5 = ecx_6
                            void var_16c
                            int16_t* eax_18 = sub_6ad9b0(&var_16c)
                            int32_t var_c_1 = 0
                            int32_t ecx_9 = *(data_bac4e0 + 0x34)
                            
                            if (ecx_9 != 0)
                                ecx_9(*(esi_5 + 0xe4), edi_1, 1, eax_18, eax_4)
                            
                            int32_t var_c_2 = 0xffffffff
                            sub_52e8a0(&var_16c)
                        else if (ecx_4 == 0x14)
                            sub_56af20(var_418_1, edi_1, 0, esi_4)
                            int32_t var_c_3 = 1
                            void var_25c
                            sub_56af20(var_418_1, edi_1, 1, sub_6adbd0(&var_25c, eax_17 + 0xc))
                            int32_t var_c_4 = 0xffffffff
                            sub_52e8a0(&var_25c)
                        else
                            void var_34c
                            
                            if (ecx_4 == 0xb)
                                int32_t ecx_15 = ebx_2[0x2c]
                                void* esi_6
                                
                                switch (ebx_2[0x2d] - 1)
                                    case 0
                                        int32_t var_438_19 = ecx_15
                                        
                                        if (*(esi_4 + 0x14) u>= 8)
                                            esi_4 = *esi_4
                                        
                                        void* var_43c_17 = esi_4
                                        sub_52e820(&var_454, u"%s.bit1[%04d]")
                                        esi_6 = var_418_1
                                        int32_t var_c_15 = 7
                                        sub_56af20(esi_6, edi_1, 0, sub_6ae4c0(&var_34c, var_454))
                                        int32_t var_c_16 = 0xffffffff
                                        sub_52e8a0(&var_34c)
                                    case 1
                                        int32_t var_438_17 = ecx_15
                                        
                                        if (*(esi_4 + 0x14) u>= 8)
                                            esi_4 = *esi_4
                                        
                                        void* var_43c_15 = esi_4
                                        sub_52e820(&var_454, u"%s.bit2[%04d]")
                                        esi_6 = var_418_1
                                        int32_t var_c_13 = 6
                                        void var_2bc
                                        sub_56af20(esi_6, edi_1, 0, sub_6ae4c0(&var_2bc, var_454))
                                        int32_t var_c_14 = 0xffffffff
                                        sub_52e8a0(&var_2bc)
                                    case 3
                                        int32_t var_438_15 = ecx_15
                                        
                                        if (*(esi_4 + 0x14) u>= 8)
                                            esi_4 = *esi_4
                                        
                                        void* var_43c_13 = esi_4
                                        sub_52e820(&var_454, u"%s.bit4[%04d]")
                                        esi_6 = var_418_1
                                        int32_t var_c_11 = 5
                                        void var_dc
                                        sub_56af20(esi_6, edi_1, 0, sub_6ae4c0(&var_dc, var_454))
                                        int32_t var_c_12 = 0xffffffff
                                        sub_52e8a0(&var_dc)
                                    case 7
                                        int32_t var_438_13 = ecx_15
                                        
                                        if (*(esi_4 + 0x14) u>= 8)
                                            esi_4 = *esi_4
                                        
                                        void* var_43c_11 = esi_4
                                        sub_52e820(&var_454, u"%s.bit8[%04d]")
                                        esi_6 = var_418_1
                                        int32_t var_c_9 = 4
                                        void var_2ec
                                        sub_56af20(esi_6, edi_1, 0, sub_6ae4c0(&var_2ec, var_454))
                                        int32_t var_c_10 = 0xffffffff
                                        sub_52e8a0(&var_2ec)
                                    case 0xf
                                        int32_t var_438_11 = ecx_15
                                        
                                        if (*(esi_4 + 0x14) u>= 8)
                                            esi_4 = *esi_4
                                        
                                        void* var_43c_9 = esi_4
                                        sub_52e820(&var_454, u"%s.bit16[%04d]")
                                        esi_6 = var_418_1
                                        int32_t var_c_7 = 3
                                        void var_19c
                                        sub_56af20(esi_6, edi_1, 0, sub_6ae4c0(&var_19c, var_454))
                                        int32_t var_c_8 = 0xffffffff
                                        sub_52e8a0(&var_19c)
                                    case 0x1f
                                        int32_t var_438_9 = ecx_15
                                        
                                        if (*(esi_4 + 0x14) u>= 8)
                                            esi_4 = *esi_4
                                        
                                        void* var_43c_7 = esi_4
                                        sub_52e820(&var_454, u"%s[%04d]")
                                        esi_6 = var_418_1
                                        int32_t var_c_5 = 2
                                        void var_34
                                        sub_56af20(esi_6, edi_1, 0, sub_6ae4c0(&var_34, var_454))
                                        int32_t var_c_6 = 0xffffffff
                                        sub_52e8a0(&var_34)
                                    default
                                        esi_6 = var_418_1
                                
                                void var_400
                                void* eax_30 = *sub_58c590(&var_400, eax_17 + 0x160)
                                sub_54b010(&var_400)
                                ebx_2[0x2d]
                                
                                if (ecx_15 s< 0 || ecx_15 s>= divs.dp.d(
                                        sx.q((*(eax_30 + 0xa8) - *(eax_30 + 0xa4)) s>> 2 << 5), 
                                        ebx_2[0x2d]))
                                    void* const var_438_28 = 3
                                    int32_t var_398_1 = 7
                                    void* const var_43c_25 = &data_aef760
                                    int32_t var_39c_1 = 0
                                    int16_t var_3ac = 0
                                    sub_52e720(&var_3ac, var_43c_25, var_438_28)
                                    int32_t var_c_29 = 0xe
                                    sub_56af20(esi_6, edi_1, 1, &var_3ac)
                                    int32_t var_c_30 = 0xffffffff
                                    sub_52e8a0(&var_3ac)
                                else
                                    switch (ebx_2[0x2d] - 1)
                                        case 0
                                            sub_5c2920(eax_30, ecx_15)
                                            int32_t var_c_27 = 0xd
                                            void var_ac
                                            sub_56af20(esi_6, edi_1, 1, sub_6ad9b0(&var_ac))
                                            int32_t var_c_28 = 0xffffffff
                                            sub_52e8a0(&var_ac)
                                        case 1
                                            sub_5c2b10(eax_30, ecx_15)
                                            int32_t var_c_25 = 0xc
                                            void var_22c
                                            sub_56af20(esi_6, edi_1, 1, sub_6ad9b0(&var_22c))
                                            int32_t var_c_26 = 0xffffffff
                                            sub_52e8a0(&var_22c)
                                        case 3
                                            sub_5c2d10(eax_30, ecx_15)
                                            int32_t var_c_23 = 0xb
                                            void var_13c
                                            sub_56af20(esi_6, edi_1, 1, sub_6ad9b0(&var_13c))
                                            int32_t var_c_24 = 0xffffffff
                                            sub_52e8a0(&var_13c)
                                        case 7
                                            sub_5c2f10(eax_30, ecx_15)
                                            int32_t var_c_21 = 0xa
                                            void var_334
                                            sub_56af20(esi_6, edi_1, 1, sub_6ad9b0(&var_334))
                                            int32_t var_c_22 = 0xffffffff
                                            sub_52e8a0(&var_334)
                                        case 0xf
                                            sub_5c3110(eax_30, ecx_15)
                                            int32_t var_c_19 = 9
                                            void var_7c
                                            sub_56af20(esi_6, edi_1, 1, sub_6ad9b0(&var_7c))
                                            int32_t var_c_20 = 0xffffffff
                                            sub_52e8a0(&var_7c)
                                        case 0x1f
                                            int32_t var_438_21 = ecx_15
                                            *(*(eax_30 + 0xa4) + (ecx_15 << 2))
                                            int32_t var_c_17 = 8
                                            void var_28c
                                            sub_56af20(esi_6, edi_1, 1, sub_6ad9b0(&var_28c))
                                            int32_t var_c_18 = 0xffffffff
                                            sub_52e8a0(&var_28c)
                            else if (ecx_4 != 0x15)
                                sub_56af20(var_418_1, edi_1, 0, esi_4)
                                void* var_438_35 = 3
                                int32_t var_350_1 = 7
                                void* const var_43c_32 = &data_ad93bc
                                int32_t var_354_1 = 0
                                int16_t var_364 = 0
                                sub_52e720(&var_364, var_43c_32, var_438_35)
                                int32_t var_c_35 = 0x11
                                sub_56af20(var_418_1, edi_1, 1, &var_364)
                                int32_t var_c_36 = 0xffffffff
                                sub_52e8a0(&var_364)
                            else
                                int32_t var_438_30 = ebx_2[0x2c]
                                
                                if (*(esi_4 + 0x14) u>= 8)
                                    esi_4 = *esi_4
                                
                                void* var_43c_27 = esi_4
                                sub_52e820(&var_454, u"%s[%04d]")
                                int32_t var_c_31 = 0xf
                                sub_56af20(var_418_1, edi_1, 0, sub_6ae4c0(&var_34c, var_454))
                                int32_t var_c_32 = 0xffffffff
                                sub_52e8a0(&var_34c)
                                void var_40c
                                void* eax_55 = *sub_58c640(&var_40c, eax_17 + 0x160)
                                sub_54b010(&var_40c)
                                int32_t eax_57
                                
                                if (ebx_2[0x2c] s>= 0)
                                    eax_57 = sub_55aeb0(eax_55 + 4)
                                    ecx_71 = ebx_2[0x2c]
                                
                                if (ebx_2[0x2c] s< 0 || ecx_71 s>= eax_57)
                                    int32_t var_368_1 = 7
                                    void* var_438_32 = nullptr
                                    void* const var_43c_29 = &data_ad7c90
                                    int32_t var_36c_1 = 0
                                    int16_t var_37c = 0
                                    sub_52e720(&var_37c, var_43c_29, var_438_32)
                                    int32_t var_c_33 = 0x10
                                    sub_56af20(var_418_1, edi_1, 1, &var_37c)
                                    int32_t var_c_34 = 0xffffffff
                                    sub_52e8a0(&var_37c)
                                else
                                    sub_56af20(var_418_1, edi_1, 1, 
                                        *(eax_55 + 0xa4) + ecx_71 * 0x18)
            int32_t ecx_138 = *(data_bac4e0 + 0x34)
            
            if (ecx_138 == 0)
                ebx = var_414
            else
                ebx = var_414
                ecx_138(*(ebx + 0xe4), edi_1, 2, &ebx_2[0x20], eax_4)
            
            edi_1 += 1
            int32_t ecx_139 = *(ebx + 0x414) * 9
            int32_t eax_121 = *data_bac428
            esi_3 = var_418_1
            result =
                (*(eax_121 + (ecx_139 << 2) + 0x1c) - *(eax_121 + (ecx_139 << 2) + 0x18)) s/ 0xb8
        while (edi_1 s< result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_424)
return result
