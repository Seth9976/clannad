// 函数: sub_715ae0
// 地址: 0x715ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d21fc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_734 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
int32_t var_8_1 = 0
int32_t var_720 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
sub_541eb0(arg3, "**/not found the val./**", 0x18)
int32_t var_8_2 = 0
int32_t var_720_1 = 1
void var_29c
void var_284
void var_26c
void var_254
void var_23c
void var_224
void var_20c
void var_1f4
void var_1dc
void var_1c4
void var_1ac
void var_194
void var_17c
void var_164
void var_14c
void var_134
void var_11c
void var_104
void var_ec
void var_d4
void var_bc
void var_a4
void var_8c
void var_74
void var_5c
void var_44
void var_2c

if (arg5 != 0)
    if (arg5 == 1 && arg4 u<= 5)
        switch (arg4)
            case 0
                if (arg2 == 0xd)
                    sub_541920(&var_194, "$(Out.tex2)")
                    int32_t var_8_51 = 0x31
                    sub_6aef30(result, &var_194)
                    sub_53f510(&var_194)
                else if (arg2 == 0x19)
                    sub_541920(&var_29c, "$(In.tex2)")
                    int32_t var_8_52 = 0x32
                    sub_6aef30(result, &var_29c)
                    sub_53f510(&var_29c)
                else if (arg2 == 0xe)
                    sub_541920(&var_26c, "$(Out.tex3)")
                    int32_t var_8_53 = 0x33
                    sub_6aef30(result, &var_26c)
                    sub_53f510(&var_26c)
                else if (arg2 == 0x1a)
                    sub_541920(&var_23c, "$(In.tex3)")
                    int32_t var_8_54 = 0x34
                    sub_6aef30(result, &var_23c)
                    sub_53f510(&var_23c)
            case 1
                switch (arg2)
                    case 8
                        sub_541920(&var_14c, "$(Out.tex7)")
                        int32_t var_8_59 = 0x39
                        sub_6aef30(result, &var_14c)
                        sub_53f510(&var_14c)
                    case 0xd
                        sub_541920(&var_20c, "$(Out.tex2)")
                        int32_t var_8_55 = 0x35
                        sub_6aef30(result, &var_20c)
                        sub_53f510(&var_20c)
                    case 0xe
                        sub_541920(&var_1ac, "$(Out.tex3)")
                        int32_t var_8_57 = 0x37
                        sub_6aef30(result, &var_1ac)
                        sub_53f510(&var_1ac)
                    case 0xf
                        sub_541920(&var_5c, "$(Out.tex5)")
                        int32_t var_8_61 = 0x3b
                        sub_6aef30(result, &var_5c)
                        sub_53f510(&var_5c)
                    case 0x14
                        sub_541920(&var_11c, "$(In.tex7)")
                        int32_t var_8_60 = 0x3a
                        sub_6aef30(result, &var_11c)
                        sub_53f510(&var_11c)
                    case 0x19
                        sub_541920(&var_1dc, "$(In.tex2)")
                        int32_t var_8_56 = 0x36
                        sub_6aef30(result, &var_1dc)
                        sub_53f510(&var_1dc)
                    case 0x1a
                        sub_541920(&var_17c, "$(In.tex3)")
                        int32_t var_8_58 = 0x38
                        sub_6aef30(result, &var_17c)
                        sub_53f510(&var_17c)
                    case 0x1b
                        sub_541920(&var_2c, "$(In.tex5)")
                        int32_t var_8_62 = 0x3c
                        sub_6aef30(result, &var_2c)
                        sub_53f510(&var_2c)
            case 2
                switch (arg2)
                    case 6
                        sub_541920(&var_164, "$(Out.tex6)")
                        int32_t var_8_69 = 0x43
                        sub_6aef30(result, &var_164)
                        sub_53f510(&var_164)
                    case 7
                        sub_541920(&var_134, "$(Out.tex7)")
                        int32_t var_8_71 = 0x45
                        sub_6aef30(result, &var_134)
                        sub_53f510(&var_134)
                    case 8
                        sub_541920(&var_74, "$(Out.tex4)")
                        int32_t var_8_67 = 0x41
                        sub_6aef30(result, &var_74)
                        sub_53f510(&var_74)
                    case 0xd
                        sub_541920(&var_44, "$(Out.tex2)")
                        int32_t var_8_63 = 0x3d
                        sub_6aef30(result, &var_44)
                        sub_53f510(&var_44)
                    case 0xe
                        sub_541920(&var_bc, "$(Out.tex3)")
                        int32_t var_8_65 = 0x3f
                        sub_6aef30(result, &var_bc)
                        sub_53f510(&var_bc)
                    case 0xf
                        sub_541920(&var_104, "$(Out.tex5)")
                        int32_t var_8_73 = 0x47
                        sub_6aef30(result, &var_104)
                        sub_53f510(&var_104)
                    case 0x12
                        sub_541920(&var_1f4, "$(In.tex6)")
                        int32_t var_8_70 = 0x44
                        sub_6aef30(result, &var_1f4)
                        sub_53f510(&var_1f4)
                    case 0x13
                        sub_541920(&var_284, "$(In.tex7)")
                        int32_t var_8_72 = 0x46
                        sub_6aef30(result, &var_284)
                        sub_53f510(&var_284)
                    case 0x14
                        sub_541920(&var_254, "$(In.tex4)")
                        int32_t var_8_68 = 0x42
                        sub_6aef30(result, &var_254)
                        sub_53f510(&var_254)
                    case 0x19
                        sub_541920(&var_ec, "$(In.tex2)")
                        int32_t var_8_64 = 0x3e
                        sub_6aef30(result, &var_ec)
                        sub_53f510(&var_ec)
                    case 0x1a
                        sub_541920(&var_8c, "$(In.tex3)")
                        int32_t var_8_66 = 0x40
                        sub_6aef30(result, &var_8c)
                        sub_53f510(&var_8c)
                    case 0x1b
                        sub_541920(&var_1c4, "$(In.tex5)")
                        int32_t var_8_74 = 0x48
                        sub_6aef30(result, &var_1c4)
                        sub_53f510(&var_1c4)
            case 3
                switch (arg2)
                    case 6
                        void var_584
                        sub_541920(&var_584, "$(Out.tex6)")
                        int32_t var_8_85 = 0x53
                        sub_6aef30(result, &var_584)
                        sub_53f510(&var_584)
                    case 8
                        void var_4f4
                        sub_541920(&var_4f4, "$(Out.tex7)")
                        int32_t var_8_79 = 0x4d
                        sub_6aef30(result, &var_4f4)
                        sub_53f510(&var_4f4)
                    case 9
                        void var_554
                        sub_541920(&var_554, "$(Out.tex5)")
                        int32_t var_8_83 = 0x51
                        sub_6aef30(result, &var_554)
                        sub_53f510(&var_554)
                    case 0xa
                        void var_524
                        sub_541920(&var_524, "$(Out.tex4)")
                        int32_t var_8_81 = 0x4f
                        sub_6aef30(result, &var_524)
                        sub_53f510(&var_524)
                    case 0xd
                        sub_541920(&var_d4, "$(Out.tex2)")
                        int32_t var_8_75 = 0x49
                        sub_6aef30(result, &var_d4)
                        sub_53f510(&var_d4)
                    case 0xe
                        sub_541920(&var_a4, "$(Out.tex3)")
                        int32_t var_8_77 = 0x4b
                        sub_6aef30(result, &var_a4)
                        sub_53f510(&var_a4)
                    case 0xf
                        void var_5b4
                        sub_541920(&var_5b4, "$(Out.tex1)")
                        int32_t var_8_87 = 0x55
                        sub_6aef30(result, &var_5b4)
                        sub_53f510(&var_5b4)
                    case 0x12
                        void var_704
                        sub_541920(&var_704, "$(In.tex6)")
                        int32_t var_8_86 = 0x54
                        sub_6aef30(result, &var_704)
                        sub_53f510(&var_704)
                    case 0x14
                        void var_4ac
                        sub_541920(&var_4ac, "$(In.tex7)")
                        int32_t var_8_80 = 0x4e
                        sub_6aef30(result, &var_4ac)
                        sub_53f510(&var_4ac)
                    case 0x15
                        void var_644
                        sub_541920(&var_644, "$(In.tex5)")
                        int32_t var_8_84 = 0x52
                        sub_6aef30(result, &var_644)
                        sub_53f510(&var_644)
                    case 0x16
                        void var_6a4
                        sub_541920(&var_6a4, "$(In.tex4)")
                        int32_t var_8_82 = 0x50
                        sub_6aef30(result, &var_6a4)
                        sub_53f510(&var_6a4)
                    case 0x19
                        sub_541920(&var_224, "$(In.tex2)")
                        int32_t var_8_76 = 0x4a
                        sub_6aef30(result, &var_224)
                        sub_53f510(&var_224)
                    case 0x1a
                        void var_6d4
                        sub_541920(&var_6d4, "$(In.tex3)")
                        int32_t var_8_78 = 0x4c
                        sub_6aef30(result, &var_6d4)
                        sub_53f510(&var_6d4)
                    case 0x1b
                        void var_674
                        sub_541920(&var_674, "$(In.tex1)")
                        int32_t var_8_88 = 0x56
                        sub_6aef30(result, &var_674)
                        sub_53f510(&var_674)
            case 4
                switch (arg2)
                    case 0xa
                        void var_53c
                        sub_541920(&var_53c, "$(Out.tex4)")
                        int32_t var_8_93 = 0x5b
                        sub_6aef30(result, &var_53c)
                        sub_53f510(&var_53c)
                    case 0xd
                        void var_5e4
                        sub_541920(&var_5e4, "$(Out.tex2)")
                        int32_t var_8_89 = 0x57
                        sub_6aef30(result, &var_5e4)
                        sub_53f510(&var_5e4)
                    case 0xe
                        void var_4dc
                        sub_541920(&var_4dc, "$(Out.tex3)")
                        int32_t var_8_91 = 0x59
                        sub_6aef30(result, &var_4dc)
                        sub_53f510(&var_4dc)
                    case 0xf
                        void var_59c
                        sub_541920(&var_59c, "$(Out.tex5)")
                        int32_t var_8_95 = 0x5d
                        sub_6aef30(result, &var_59c)
                        sub_53f510(&var_59c)
                    case 0x16
                        void var_56c
                        sub_541920(&var_56c, "$(In.tex4)")
                        int32_t var_8_94 = 0x5c
                        sub_6aef30(result, &var_56c)
                        sub_53f510(&var_56c)
                    case 0x19
                        void var_4c4
                        sub_541920(&var_4c4, "$(In.tex2)")
                        int32_t var_8_90 = 0x58
                        sub_6aef30(result, &var_4c4)
                        sub_53f510(&var_4c4)
                    case 0x1a
                        void var_50c
                        sub_541920(&var_50c, "$(In.tex3)")
                        int32_t var_8_92 = 0x5a
                        sub_6aef30(result, &var_50c)
                        sub_53f510(&var_50c)
                    case 0x1b
                        void var_5cc
                        sub_541920(&var_5cc, "$(In.tex5)")
                        int32_t var_8_96 = 0x5e
                        sub_6aef30(result, &var_5cc)
                        sub_53f510(&var_5cc)
            case 5
                switch (arg2)
                    case 0xa
                        void var_6bc
                        sub_541920(&var_6bc, "$(Out.tex4)")
                        int32_t var_8_101 = 0x63
                        sub_6aef30(result, &var_6bc)
                        sub_53f510(&var_6bc)
                    case 0xd
                        void var_5fc
                        sub_541920(&var_5fc, "$(Out.tex2)")
                        int32_t var_8_97 = 0x5f
                        sub_6aef30(result, &var_5fc)
                        sub_53f510(&var_5fc)
                    case 0xe
                        void var_65c
                        sub_541920(&var_65c, "$(Out.tex3)")
                        int32_t var_8_99 = 0x61
                        sub_6aef30(result, &var_65c)
                        sub_53f510(&var_65c)
                    case 0xf
                        void var_71c
                        sub_541920(&var_71c, "$(Out.tex5)")
                        int32_t var_8_103 = 0x65
                        sub_6aef30(result, &var_71c)
                        sub_53f510(&var_71c)
                    case 0x16
                        void var_6ec
                        sub_541920(&var_6ec, "$(In.tex4)")
                        int32_t var_8_102 = 0x64
                        sub_6aef30(result, &var_6ec)
                        sub_53f510(&var_6ec)
                    case 0x19
                        void var_62c
                        sub_541920(&var_62c, "$(In.tex2)")
                        int32_t var_8_98 = 0x60
                        sub_6aef30(result, &var_62c)
                        sub_53f510(&var_62c)
                    case 0x1a
                        void var_68c
                        sub_541920(&var_68c, "$(In.tex3)")
                        int32_t var_8_100 = 0x62
                        sub_6aef30(result, &var_68c)
                        sub_53f510(&var_68c)
                    case 0x1b
                        void var_614
                        sub_541920(&var_614, "$(In.tex5)")
                        int32_t var_8_104 = 0x66
                        sub_6aef30(result, &var_614)
                        sub_53f510(&var_614)
else if (arg4 - 1 u<= 8)
    switch (arg4)
        case 1
            if (arg2 == 0xf)
                void var_2b4
                sub_541920(&var_2b4, "$(Out.tex5)")
                int32_t var_8_3 = 1
                
                if (result != &var_2b4)
                    sub_541b40(result, &var_2b4, 0, 0xffffffff)
                
                sub_53f510(&var_2b4)
            else if (arg2 == 0x1b)
                void var_2cc
                sub_541920(&var_2cc, "$(In.tex5)")
                int32_t var_8_4 = 2
                
                if (result != &var_2cc)
                    sub_541b40(result, &var_2cc, 0, 0xffffffff)
                
                sub_53f510(&var_2cc)
        case 2
            switch (arg2)
                case 6
                    void var_3d4
                    sub_541920(&var_3d4, "$(Out.tex6)")
                    int32_t var_8_5 = 3
                    
                    if (result != &var_3d4)
                        sub_541b40(result, &var_3d4, 0, 0xffffffff)
                    
                    sub_53f510(&var_3d4)
                case 7
                    void var_434
                    sub_541920(&var_434, "$(Out.tex7)")
                    int32_t var_8_7 = 5
                    
                    if (result != &var_434)
                        sub_541b40(result, &var_434, 0, 0xffffffff)
                    
                    sub_53f510(&var_434)
                case 0xf
                    void var_494
                    sub_541920(&var_494, "$(Out.tex5)")
                    int32_t var_8_9 = 7
                    
                    if (result != &var_494)
                        sub_541b40(result, &var_494, 0, 0xffffffff)
                    
                    sub_53f510(&var_494)
                case 0x12
                    void var_404
                    sub_541920(&var_404, "$(In.tex6)")
                    int32_t var_8_6 = 4
                    
                    if (result != &var_404)
                        sub_541b40(result, &var_404, 0, 0xffffffff)
                    
                    sub_53f510(&var_404)
                case 0x13
                    void var_464
                    sub_541920(&var_464, "$(In.tex7)")
                    int32_t var_8_8 = 6
                    
                    if (result != &var_464)
                        sub_541b40(result, &var_464, 0, 0xffffffff)
                    
                    sub_53f510(&var_464)
                case 0x1b
                    void var_3bc
                    sub_541920(&var_3bc, "$(In.tex5)")
                    int32_t var_8_10 = 8
                    
                    if (result != &var_3bc)
                        sub_541b40(result, &var_3bc, 0, 0xffffffff)
                    
                    sub_53f510(&var_3bc)
        case 3
            switch (arg2)
                case 6
                    void var_35c
                    sub_541920(&var_35c, "$(Out.tex6)")
                    int32_t var_8_15 = 0xd
                    
                    if (result != &var_35c)
                        sub_541b40(result, &var_35c, 0, 0xffffffff)
                    
                    sub_53f510(&var_35c)
                case 9
                    void var_32c
                    sub_541920(&var_32c, "$(Out.tex5)")
                    int32_t var_8_13 = 0xb
                    
                    if (result != &var_32c)
                        sub_541b40(result, &var_32c, 0, 0xffffffff)
                    
                    sub_53f510(&var_32c)
                case 0xa
                    void var_2fc
                    sub_541920(&var_2fc, "$(Out.tex4)")
                    int32_t var_8_11 = 9
                    
                    if (result != &var_2fc)
                        sub_541b40(result, &var_2fc, 0, 0xffffffff)
                    
                    sub_53f510(&var_2fc)
                case 0xf
                    void var_38c
                    sub_541920(&var_38c, "$(Out.tex7)")
                    int32_t var_8_17 = arg2
                    
                    if (result != &var_38c)
                        sub_541b40(result, &var_38c, 0, 0xffffffff)
                    
                    sub_53f510(&var_38c)
                case 0x12
                    void var_44c
                    sub_541920(&var_44c, "$(In.tex6)")
                    int32_t var_8_16 = 0xe
                    
                    if (result != &var_44c)
                        sub_541b40(result, &var_44c, 0, 0xffffffff)
                    
                    sub_53f510(&var_44c)
                case 0x15
                    void var_3ec
                    sub_541920(&var_3ec, "$(In.tex5)")
                    int32_t var_8_14 = 0xc
                    
                    if (result != &var_3ec)
                        sub_541b40(result, &var_3ec, 0, 0xffffffff)
                    
                    sub_53f510(&var_3ec)
                case 0x16
                    void var_47c
                    sub_541920(&var_47c, "$(In.tex4)")
                    int32_t var_8_12 = 0xa
                    
                    if (result != &var_47c)
                        sub_541b40(result, &var_47c, 0, 0xffffffff)
                    
                    sub_53f510(&var_47c)
                case 0x1b
                    void var_41c
                    sub_541920(&var_41c, "$(In.tex7)")
                    int32_t var_8_18 = 0x10
                    
                    if (result != &var_41c)
                        sub_541b40(result, &var_41c, 0, 0xffffffff)
                    
                    sub_53f510(&var_41c)
        case 4
            if (arg2 == 0xa)
                void var_2e4
                sub_541920(&var_2e4, "$(Out.tex4)")
                int32_t var_8_19 = 0x11
                
                if (result != &var_2e4)
                    sub_541b40(result, &var_2e4, 0, 0xffffffff)
                
                sub_53f510(&var_2e4)
            else if (arg2 == 0x16)
                void var_314
                sub_541920(&var_314, "$(In.tex4)")
                int32_t var_8_20 = 0x12
                
                if (result != &var_314)
                    sub_541b40(result, &var_314, 0, 0xffffffff)
                
                sub_53f510(&var_314)
            else if (arg2 == 0xf)
                void var_344
                sub_541920(&var_344, "$(Out.tex5)")
                int32_t var_8_21 = 0x13
                
                if (result != &var_344)
                    sub_541b40(result, &var_344, 0, 0xffffffff)
                
                sub_53f510(&var_344)
            else if (arg2 == 0x1b)
                void var_374
                sub_541920(&var_374, "$(In.tex5)")
                int32_t var_8_22 = 0x14
                
                if (result != &var_374)
                    sub_541b40(result, &var_374, 0, 0xffffffff)
                
                sub_53f510(&var_374)
        case 5
            if (arg2 == 0xa)
                void var_3a4
                sub_541920(&var_3a4, "$(Out.tex4)")
                int32_t var_8_23 = 0x15
                
                if (result != &var_3a4)
                    sub_541b40(result, &var_3a4, 0, 0xffffffff)
                
                sub_53f510(&var_3a4)
            else if (arg2 == 0x16)
                sub_541920(&var_a4, "$(In.tex4)")
                int32_t var_8_24 = arg2
                sub_6aef30(result, &var_a4)
                sub_53f510(&var_a4)
            else if (arg2 == 0xf)
                sub_541920(&var_224, "$(Out.tex5)")
                int32_t var_8_25 = 0x17
                sub_6aef30(result, &var_224)
                sub_53f510(&var_224)
            else if (arg2 == 0x1b)
                sub_541920(&var_d4, "$(In.tex5)")
                int32_t var_8_26 = 0x18
                sub_6aef30(result, &var_d4)
                sub_53f510(&var_d4)
        case 6
            if (arg2 == 6)
                sub_541920(&var_1c4, "$(Out.tex6)")
                int32_t var_8_27 = 0x19
                sub_6aef30(result, &var_1c4)
                sub_53f510(&var_1c4)
            else if (arg2 == 0x12)
                sub_541920(&var_104, "$(In.tex6)")
                int32_t var_8_28 = 0x1a
                sub_6aef30(result, &var_104)
                sub_53f510(&var_104)
            else if (arg2 == 7)
                sub_541920(&var_284, "$(Out.tex7)")
                int32_t var_8_29 = 0x1b
                sub_6aef30(result, &var_284)
                sub_53f510(&var_284)
            else if (arg2 == 0x13)
                sub_541920(&var_134, "$(In.tex7)")
                int32_t var_8_30 = 0x1c
                sub_6aef30(result, &var_134)
                sub_53f510(&var_134)
        case 7
            if (arg2 == 0xa)
                sub_541920(&var_1f4, "$(Out.tex6)")
                int32_t var_8_31 = 0x1d
                sub_6aef30(result, &var_1f4)
                sub_53f510(&var_1f4)
            else if (arg2 == 0x16)
                sub_541920(&var_164, "$(In.tex6)")
                int32_t var_8_32 = 0x1e
                sub_6aef30(result, &var_164)
                sub_53f510(&var_164)
            else if (arg2 == 0xb)
                sub_541920(&var_254, "$(Out.tex7)")
                int32_t var_8_33 = 0x1f
                sub_6aef30(result, &var_254)
                sub_53f510(&var_254)
            else if (arg2 == 0x17)
                sub_541920(&var_74, "$(In.tex7)")
                int32_t var_8_34 = 0x20
                sub_6aef30(result, &var_74)
                sub_53f510(&var_74)
        case 8
            switch (arg2)
                case 9
                    sub_541920(&var_11c, "$(Out.tex7)")
                    int32_t var_8_41 = 0x27
                    sub_6aef30(result, &var_11c)
                    sub_53f510(&var_11c)
                case 0xa
                    sub_541920(&var_8c, "$(Out.tex4)")
                    int32_t var_8_35 = 0x21
                    sub_6aef30(result, &var_8c)
                    sub_53f510(&var_8c)
                case 0x10
                    sub_541920(&var_ec, "$(Out.tex5)")
                    int32_t var_8_37 = 0x23
                    sub_6aef30(result, &var_ec)
                    sub_53f510(&var_ec)
                case 0x11
                    sub_541920(&var_2c, "$(Out.tex6)")
                    int32_t var_8_39 = 0x25
                    sub_6aef30(result, &var_2c)
                    sub_53f510(&var_2c)
                case 0x15
                    sub_541920(&var_14c, "$(In.tex7)")
                    int32_t var_8_42 = 0x28
                    sub_6aef30(result, &var_14c)
                    sub_53f510(&var_14c)
                case 0x16
                    sub_541920(&var_bc, "$(In.tex4)")
                    int32_t var_8_36 = 0x22
                    sub_6aef30(result, &var_bc)
                    sub_53f510(&var_bc)
                case 0x1c
                    sub_541920(&var_44, "$(In.tex5)")
                    int32_t var_8_38 = 0x24
                    sub_6aef30(result, &var_44)
                    sub_53f510(&var_44)
                case 0x1d
                    sub_541920(&var_5c, "$(In.tex6)")
                    int32_t var_8_40 = 0x26
                    sub_6aef30(result, &var_5c)
                    sub_53f510(&var_5c)
        case 9
            switch (arg2)
                case 9
                    sub_541920(&var_29c, "$(Out.tex7)")
                    int32_t var_8_49 = 0x2f
                    sub_6aef30(result, &var_29c)
                    sub_53f510(&var_29c)
                case 0xa
                    sub_541920(&var_17c, "$(Out.tex4)")
                    int32_t var_8_43 = 0x29
                    sub_6aef30(result, &var_17c)
                    sub_53f510(&var_17c)
                case 0x10
                    sub_541920(&var_1dc, "$(Out.tex5)")
                    int32_t var_8_45 = 0x2b
                    sub_6aef30(result, &var_1dc)
                    sub_53f510(&var_1dc)
                case 0x11
                    sub_541920(&var_23c, "$(Out.tex6)")
                    int32_t var_8_47 = 0x2d
                    sub_6aef30(result, &var_23c)
                    sub_53f510(&var_23c)
                case 0x15
                    sub_541920(&var_194, "$(In.tex7)")
                    int32_t var_8_50 = 0x30
                    sub_6aef30(result, &var_194)
                    sub_53f510(&var_194)
                case 0x16
                    sub_541920(&var_1ac, "$(In.tex4)")
                    int32_t var_8_44 = 0x2a
                    sub_6aef30(result, &var_1ac)
                    sub_53f510(&var_1ac)
                case 0x1c
                    sub_541920(&var_20c, "$(In.tex5)")
                    int32_t var_8_46 = 0x2c
                    sub_6aef30(result, &var_20c)
                    sub_53f510(&var_20c)
                case 0x1d
                    sub_541920(&var_26c, "$(In.tex6)")
                    int32_t var_8_48 = 0x2e
                    sub_6aef30(result, &var_26c)
                    sub_53f510(&var_26c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
