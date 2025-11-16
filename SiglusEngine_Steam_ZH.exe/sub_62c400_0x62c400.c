// 函数: sub_62c400
// 地址: 0x62c400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c0a8b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_15c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
int32_t var_8_1 = 0
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"Version", 7)
var_8_1.b = 1
int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, u"Software\Microsoft\DirectX", 0x1a)
var_8_1.b = 2
int32_t ebx
ebx.b = sub_6b46c0(&var_2c, &var_74, 0x80000002, &var_2c, &var_44)

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
var_8_1.b = 0
int32_t var_64_1 = 0
var_74 = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

char* result

if (ebx.b == 0)
    sub_52e820(&var_2c, u"DirectX")
    var_8_1.b = 0x1b
    result = sub_684160(data_bac424, 5, &var_2c)
    
    if (var_18 u>= 8)
        result = j__free(var_2c.d)
else
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    var_8_1.b = 3
    
    if (sub_5ccf10(&var_44, u"4.02.0095") == 0)
        int16_t* ecx_8
        
        if (sub_5ccf10(&var_44, u"4.03.00.1096") == 0)
            if (sub_5ccf10(&var_44, u"4.04.0068") == 0)
                if (sub_5ccf10(&var_44, u"4.04.0069") == 0)
                    if (sub_5ccf10(&var_44, u"4.05.00.0155") == 0)
                        if (sub_5ccf10(&var_44, u"4.05.01.1721") == 0)
                            if (sub_5ccf10(&var_44, u"4.05.01.1998") == 0)
                                if (sub_5ccf10(&var_44, u"4.06.02.0436") == 0)
                                    if (sub_5ccf10(&var_44, u"4.07.00.0700") == 0)
                                        if (sub_5ccf10(&var_44, u"4.07.00.0716") == 0)
                                            if (sub_5ccf10(&var_44, u"4.08.00.0400") == 0)
                                                if (sub_5ccf10(&var_44, u"4.08.01.0881") == 0)
                                                    if (sub_5ccf10(&var_44, u"4.08.01.0810") == 0)
                                                        if (sub_5ccf10(&var_44, 4.09.0000.0900")
                                                                == 0)
                                                            if (sub_5ccf10(&var_44, 4.09.00.0900")
                                                                    == 0)
                                                                if (sub_5ccf10(&var_44, 4.09.0000.0901")
                                                                        == 0)
                                                                    if (sub_5ccf10(&var_44, 4.09.00.0901")
                                                                            == 0)
                                                                        if (sub_5ccf10(&var_44, 4.09.0000.0902")
                                                                                == 0)
                                                                            if (sub_5ccf10(&var_44, 4.09.00.0902")
                                                                                    == 0)
                                                                                if (sub_5ccf10(&var_44, 4.09.00.0904")
                                                                                        == 0)
                                                                                    int16_t* ecx_53 = &var_2c
                                                                                    int16_t* var_160_35 = u"9.0c or later"
                                                                                    
                                                                                    if (sub_5ccf10(&var_44, 4.09.0000.0904")
                                                                                            == 0)
                                                                                        sub_52e820(ecx_53, var_160_35)
                                                                                        var_8_1.b = 0x19
                                                                                    else
                                                                                        sub_52e820(ecx_53, var_160_35)
                                                                                        var_8_1.b = 0x18
                                                                                else
                                                                                    sub_52e820(&var_2c, u"9.0c or later")
                                                                                    var_8_1.b = 0x17
                                                                            else
                                                                                sub_52e820(&var_2c, u"9.0b")
                                                                                var_8_1.b = 0x16
                                                                        else
                                                                            sub_52e820(&var_2c, u"9.0b")
                                                                            var_8_1.b = 0x15
                                                                    else
                                                                        sub_52e820(&var_2c, u"9.0a")
                                                                        var_8_1.b = 0x14
                                                                else
                                                                    sub_52e820(&var_2c, u"9.0a")
                                                                    var_8_1.b = 0x13
                                                            else
                                                                sub_52e820(&var_2c, &data_af5204)
                                                                var_8_1.b = 0x12
                                                        else
                                                            sub_52e820(&var_2c, &data_af5204)
                                                            var_8_1.b = 0x11
                                                    else
                                                        sub_52e820(&var_2c, &data_af51c0)
                                                        var_8_1.b = 0x10
                                                else
                                                    sub_52e820(&var_2c, &data_af51c0)
                                                    var_8_1.b = 0xf
                                            else
                                                sub_52e820(&var_2c, &data_af519c)
                                                var_8_1.b = 0xe
                                        else
                                            sub_52e820(&var_2c, u"7.0a")
                                            var_8_1.b = 0xd
                                        
                                        sub_536260(&var_5c, &var_2c)
                                        ecx_8 = &var_2c
                                    else
                                        void* var_160_22 = 3
                                        int32_t var_120_1 = 7
                                        void* const var_164_19 = &data_af5150
                                        int32_t var_124_1 = 0
                                        int16_t var_134 = 0
                                        sub_52e720(&var_134, var_164_19, var_160_22)
                                        var_8_1.b = 0xc
                                        sub_52e3c0(&var_5c, &var_134, 0, 0xffffffff)
                                        ecx_8 = &var_134
                                else
                                    void* var_160_20 = 3
                                    int32_t var_138_1 = 7
                                    void* const var_164_17 = &data_af512c
                                    int32_t var_13c_1 = 0
                                    int16_t var_14c = 0
                                    sub_52e720(&var_14c, var_164_17, var_160_20)
                                    var_8_1.b = 0xb
                                    sub_52e3c0(&var_5c, &var_14c, 0, 0xffffffff)
                                    ecx_8 = &var_14c
                            else
                                void* var_160_18 = 3
                                int32_t var_f0_1 = 7
                                void* const var_164_15 = &data_af50d0
                                int32_t var_f4_1 = 0
                                int16_t var_104 = 0
                                sub_52e720(&var_104, var_164_15, var_160_18)
                                var_8_1.b = 0xa
                                sub_52e3c0(&var_5c, &var_104, 0, 0xffffffff)
                                ecx_8 = &var_104
                        else
                            void* var_160_16 = 3
                            int32_t var_c0_1 = 7
                            void* const var_164_13 = &data_af50d0
                            int32_t var_c4_1 = 0
                            int16_t var_d4 = 0
                            sub_52e720(&var_d4, var_164_13, var_160_16)
                            var_8_1.b = 9
                            sub_52e3c0(&var_5c, &var_d4, 0, 0xffffffff)
                            ecx_8 = &var_d4
                    else
                        void* var_160_14 = 3
                        int32_t var_a8_1 = 7
                        void* const var_164_11 = &data_af50d0
                        int32_t var_ac_1 = 0
                        int16_t var_bc = 0
                        sub_52e720(&var_bc, var_164_11, var_160_14)
                        var_8_1.b = 8
                        sub_52e3c0(&var_5c, &var_bc, 0, 0xffffffff)
                        ecx_8 = &var_bc
                else
                    void* var_160_12 = 3
                    int32_t var_108_1 = 7
                    void* const var_164_9 = &data_af5098
                    int32_t var_10c_1 = 0
                    int16_t var_11c = 0
                    sub_52e720(&var_11c, var_164_9, var_160_12)
                    var_8_1.b = 7
                    sub_52e3c0(&var_5c, &var_11c, 0, 0xffffffff)
                    ecx_8 = &var_11c
            else
                void* var_160_10 = 3
                int32_t var_d8_1 = 7
                void* const var_164_7 = &data_af5098
                int32_t var_dc_1 = 0
                int16_t var_ec = 0
                sub_52e720(&var_ec, var_164_7, var_160_10)
                var_8_1.b = 6
                sub_52e3c0(&var_5c, &var_ec, 0, 0xffffffff)
                ecx_8 = &var_ec
        else
            void* var_160_8 = 3
            int32_t var_90_1 = 7
            void* const var_164_5 = &data_af507c
            int32_t var_94_1 = 0
            int16_t var_a4 = 0
            sub_52e720(&var_a4, var_164_5, var_160_8)
            var_8_1.b = 5
            sub_52e3c0(&var_5c, &var_a4, 0, 0xffffffff)
            ecx_8 = &var_a4
        
        var_8_1.b = 3
        sub_52e8a0(ecx_8)
    else
        void* var_160_5 = 3
        int32_t var_78_1 = 7
        void* const var_164_3 = &data_af5058
        int32_t var_7c_1 = 0
        int16_t var_8c = 0
        sub_52e720(&var_8c, var_164_3, var_160_5)
        var_8_1.b = 4
        sub_52e3c0(&var_5c, &var_8c, 0, 0xffffffff)
        var_8_1.b = 3
        
        if (var_78_1 u>= 8)
            j__free(var_8c.d)
    
    int16_t* eax_26 = &var_44
    
    if (var_30 u>= 8)
        eax_26 = var_44.d
    
    int16_t* var_160_37 = eax_26
    int16_t* eax_27 = &var_5c
    
    if (var_48_1 u>= 8)
        eax_27 = var_5c.d
    
    int16_t* var_164_21 = eax_27
    void var_17c
    sub_52e820(&var_17c, u"DirectX")
    int16_t* eax_28 = sub_6ae4c0(&var_2c, var_17c)
    var_8_1.b = 0x1a
    result = sub_684160(data_bac424, 5, eax_28)
    
    if (var_18 u>= 8)
        result = j__free(var_2c.d)
    
    if (var_48_1 u>= 8)
        result = j__free(var_5c.d)

if (var_30 u>= 8)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
