// 函数: sub_6560f0
// 地址: 0x6560f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c492b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s>= 0)
    void* eax_3 = data_bac510
    result = *(eax_3 + 0x10b88) + *(eax_3 + 0x10b90) + *(eax_3 + 0x10b8c)

if (arg1 s< 0 || result s<= arg1 || arg2 s< 0 || result s<= arg2 || arg1 == arg2)
    result.b = 0
else
    int32_t ebx
    ebx.b = sub_6a5240(data_bac504 + 0x4b068, arg1)
    ebx:1.b = sub_6a5240(data_bac504 + 0x4b068, arg2)
    sub_6a4eb0(data_bac504 + 0x4b068, arg1)
    sub_6a4eb0(data_bac504 + 0x4b068, arg2)
    void var_11c
    sub_651e40(&var_11c, arg1)
    int32_t var_8_1 = 0
    void var_104
    sub_651e40(&var_104, arg2)
    var_8_1.b = 1
    void var_134
    sub_651f20(&var_134, arg1)
    var_8_1.b = 2
    void var_ec
    int16_t* eax_7 = sub_651f20(&var_ec, arg2)
    var_8_1.b = 3
    int16_t* var_174
    int16_t* var_170
    void var_16c
    void var_d4
    void var_bc
    void var_a4
    void var_2c
    
    if (ebx.b == 0)
        if (ebx:1.b == 0)
            void var_164
            sub_52e820(&var_164, &data_af7fc4)
            int16_t* eax_54 = sub_6ae4c0(&var_2c, var_164)
            var_8_1.b = 0x16
            sub_684160(data_bac424, 5, eax_54)
            sub_52e8a0(&var_2c)
            ebx.b = 0
        else
            int16_t* eax_47
            
            if (sub_6b4bf0(&var_104, &var_11c) != 0)
                char eax_49
                
                if (*(data_bac510 + 0x10bc0) != 0)
                    eax_49 = sub_6b4bf0(&var_ec, &var_134)
                
                if (*(data_bac510 + 0x10bc0) != 0 && eax_49 == 0)
                    void** eax_50 = sub_6b9ed0(&var_a4)
                    int16_t* var_154_20 = &data_ad90c0
                    int32_t var_158_8 = arg2
                    int32_t var_15c_4 = arg1
                    var_8_1.b = 0x11
                    sub_52e820(&var_174, 0xaf7f64)
                    int16_t* eax_51 = sub_6ae4c0(&var_d4, var_174)
                    var_8_1.b = 0x12
                    void** eax_52 = sub_532b80(eax_51, eax_51, &var_bc, var_154_20)
                    var_8_1.b = 0x13
                    eax_47 = sub_5327a0(eax_52, eax_52, &var_2c, eax_50)
                    var_8_1.b = 0x14
                    goto label_656810
                
                int32_t var_150_29 = arg2
                int32_t var_154_21 = arg1
                var_170 = &data_af7f98
                sub_52e820(&var_16c, var_170)
                var_170 = &var_2c
                int16_t* eax_53 = sub_6ae4c0(var_170, var_16c)
                var_8_1.b = 0x15
                sub_684160(data_bac424, 5, eax_53)
                sub_52e8a0(&var_2c)
                ebx.b = 1
            else
                int16_t* eax_44 = sub_6b9ed0(&var_a4)
                void* const var_154_18 = &data_ad90c0
                int32_t var_158_7 = arg2
                int32_t var_15c_3 = arg1
                var_8_1.b = 0xd
                sub_52e820(&var_174, 0xaf7f34)
                int16_t* eax_45 = sub_6ae4c0(&var_d4, var_174)
                var_8_1.b = 0xe
                int16_t* eax_46 = sub_532b80(eax_45, eax_45, &var_bc, var_154_18)
                var_8_1.b = 0xf
                eax_47 = sub_5327a0(eax_46, eax_46, &var_2c, eax_44)
                var_8_1.b = 0x10
            label_656810:
                sub_684160(data_bac424, 2, eax_47)
                sub_52e8a0(&var_2c)
                sub_52e8a0(&var_bc)
                sub_52e8a0(&var_d4)
                sub_52e8a0(&var_a4)
                ebx.b = 0
    else
        void var_8c
        void var_74
        void var_5c
        void var_44
        
        if (ebx:1.b != 0)
            var_8_1.b = 0x17
            var_8_1.b = 0x18
            var_8_1.b = 0x19
            sub_532b80(sub_532b80(sub_532b80(sub_532b80(eax_7, &var_11c, &var_44, __tmp"), 
                &var_104, &var_74, __tmp"), &var_134, &var_5c, __tmp"), &var_ec, &var_8c, __tmp")
            var_8_1.b = 0x1a
            sub_6b4cb0(&var_44)
            sub_6b4cb0(&var_74)
            sub_6b4cb0(&var_5c)
            sub_6b4cb0(&var_8c)
            void* ecx_43
            
            if (sub_6b4bf0(&var_11c, &var_44) != 0)
                sub_6b4bf0(&var_44, &var_11c)
                int16_t* eax_31
                
                if (sub_6b4bf0(&var_104, &var_74) == 0)
                    int16_t* eax_28 = sub_6b9ed0(&var_a4)
                    void* const var_154_12 = &data_ad90c0
                    int32_t var_158_4 = arg2
                    var_8_1.b = 0x1f
                    var_174 = &data_af7ffc
                    sub_52e820(&var_170, var_174)
                    var_174 = &var_d4
                    int16_t* eax_29 = sub_6ae4c0(var_174, var_170)
                    var_8_1.b = 0x20
                    int16_t* eax_30 = sub_532b80(eax_29, eax_29, &var_bc, var_154_12)
                    var_8_1.b = 0x21
                    eax_31 = sub_5327a0(eax_30, eax_30, &var_2c, eax_28)
                    var_8_1.b = 0x22
                label_656641:
                    sub_684160(data_bac424, 2, eax_31)
                    sub_52e8a0(&var_2c)
                    sub_52e8a0(&var_bc)
                    sub_52e8a0(&var_d4)
                    ecx_43 = &var_a4
                    goto label_65666a
                
                sub_6b4bf0(&var_74, &var_104)
                
                if (*(data_bac510 + 0x10bc0) != 0)
                    if (sub_6b4bf0(&var_134, &var_5c) == 0)
                        void** eax_34 = sub_6b9ed0(&var_a4)
                        void* const var_154_13 = &data_ad90c0
                        int32_t var_158_5 = arg1
                        var_8_1.b = 0x23
                        var_174 = &data_af8030
                        sub_52e820(&var_170, var_174)
                        var_174 = &var_d4
                        int16_t* eax_35 = sub_6ae4c0(var_174, var_170)
                        var_8_1.b = 0x24
                        void** eax_36 = sub_532b80(eax_35, eax_35, &var_bc, var_154_13)
                        var_8_1.b = 0x25
                        eax_31 = sub_5327a0(eax_36, eax_36, &var_2c, eax_34)
                        var_8_1.b = 0x26
                        goto label_656641
                    
                    sub_6b4bf0(&var_5c, &var_134)
                    
                    if (sub_6b4bf0(&var_ec, &var_8c) == 0)
                        void** var_150_22 = sub_6b9ed0(&var_a4)
                        int16_t* var_154_14 = &data_ad90c0
                        int32_t var_158_6 = arg2
                        var_8_1.b = 0x27
                        var_174 = &data_af8030
                        sub_52e820(&var_170, var_174)
                        var_174 = &var_d4
                        int16_t* eax_39 = sub_6ae4c0(var_174, var_170)
                        var_8_1.b = 0x28
                        int16_t* eax_40 = sub_532b80(eax_39, eax_39, &var_bc, var_154_14)
                        var_8_1.b = 0x29
                        eax_31 = sub_5327a0(eax_40, eax_40, &var_2c, var_150_22)
                        var_8_1.b = 0x2a
                        goto label_656641
                    
                    sub_6b4bf0(&var_8c, &var_ec)
                
                sub_6b4bf0(&var_11c, &var_44)
                sub_6b4bf0(&var_104, &var_74)
                sub_6b4bf0(&var_44, &var_104)
                sub_6b4bf0(&var_74, &var_11c)
                
                if (*(data_bac510 + 0x10bc0) != 0)
                    sub_6b4bf0(&var_134, &var_5c)
                    sub_6b4bf0(&var_ec, &var_8c)
                    sub_6b4bf0(&var_5c, &var_ec)
                    sub_6b4bf0(&var_8c, &var_134)
                
                int32_t var_150_24 = arg2
                int32_t var_154_16 = arg1
                var_170 = &data_af8064
                sub_52e820(&var_16c, var_170)
                var_170 = &var_2c
                int16_t* eax_42 = sub_6ae4c0(var_170, var_16c)
                var_8_1.b = 0x2b
                sub_684160(data_bac424, 5, eax_42)
                sub_52e8a0(&var_2c)
                sub_52e8a0(&var_8c)
                sub_52e8a0(&var_5c)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_44)
                ebx.b = 1
            else
                int16_t* eax_23 = sub_6b9ed0(&var_2c)
                void* const var_154_10 = &data_ad90c0
                int32_t var_158_3 = arg1
                var_8_1.b = 0x1b
                var_174 = &data_af7ffc
                sub_52e820(&var_170, var_174)
                var_174 = &var_bc
                int16_t* eax_24 = sub_6ae4c0(var_174, var_170)
                var_8_1.b = 0x1c
                int16_t* eax_25 = sub_532b80(eax_24, eax_24, &var_d4, var_154_10)
                var_8_1.b = 0x1d
                int16_t* eax_26 = sub_5327a0(eax_25, eax_25, &var_a4, eax_23)
                var_8_1.b = 0x1e
                sub_684160(data_bac424, 2, eax_26)
                sub_52e8a0(&var_a4)
                sub_52e8a0(&var_d4)
                sub_52e8a0(&var_bc)
                ecx_43 = &var_2c
            label_65666a:
                sub_52e8a0(ecx_43)
                sub_52e8a0(&var_8c)
                sub_52e8a0(&var_5c)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_44)
                ebx.b = 0
        else
            int16_t* eax_12
            
            if (sub_6b4bf0(&var_11c, &var_104) != 0)
                char eax_14
                
                if (*(data_bac510 + 0x10bc0) != 0)
                    eax_14 = sub_6b4bf0(&var_134, &var_ec)
                
                if (*(data_bac510 + 0x10bc0) != 0 && eax_14 == 0)
                    void** eax_15 = sub_6b9ed0(&var_8c)
                    int16_t* var_154_7 = &data_ad90c0
                    int32_t var_158_2 = arg2
                    int32_t var_15c_2 = arg1
                    var_8_1.b = 8
                    sub_52e820(&var_174, 0xaf7ed4)
                    void** eax_16 = sub_6ae4c0(&var_5c, var_174)
                    var_8_1.b = 9
                    void** eax_17 = sub_532b80(eax_16, eax_16, &var_74, var_154_7)
                    var_8_1.b = 0xa
                    eax_12 = sub_5327a0(eax_17, eax_17, &var_44, eax_15)
                    var_8_1.b = 0xb
                    goto label_656280
                
                int32_t var_150_12 = arg2
                int32_t var_154_8 = arg1
                var_170 = &data_af7f08
                sub_52e820(&var_16c, var_170)
                var_170 = &var_44
                int16_t* eax_18 = sub_6ae4c0(var_170, var_16c)
                var_8_1.b = 0xc
                sub_684160(data_bac424, 5, eax_18)
                sub_52e8a0(&var_44)
                ebx.b = 1
            else
                int16_t* eax_9 = sub_6b9ed0(&var_8c)
                void* const var_154_5 = &data_ad90c0
                int32_t var_158_1 = arg2
                int32_t var_15c_1 = arg1
                var_8_1.b = 4
                sub_52e820(&var_174, 0xaf7ea4)
                int16_t* eax_10 = sub_6ae4c0(&var_5c, var_174)
                var_8_1.b = 5
                int16_t* eax_11 = sub_532b80(eax_10, eax_10, &var_74, var_154_5)
                var_8_1.b = 6
                eax_12 = sub_5327a0(eax_11, eax_11, &var_44, eax_9)
                var_8_1.b = 7
            label_656280:
                sub_684160(data_bac424, 2, eax_12)
                sub_52e8a0(&var_44)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_5c)
                sub_52e8a0(&var_8c)
                ebx.b = 0
    sub_52e8a0(&var_ec)
    sub_52e8a0(&var_134)
    sub_52e8a0(&var_104)
    sub_52e8a0(&var_11c)
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
