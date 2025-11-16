// 函数: sub_667e80
// 地址: 0x667e80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5f51
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_1ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t var_190 = 0
int32_t var_18c = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = sub_6b7be0(arg2, &result_1)
char* ebx
int32_t var_74
int32_t var_60

if (eax_3.b != 0)
    int16_t var_134
    int32_t var_1b0_3 = sub_6b2d30(&var_134, &result_1)
    var_8_1.b = 1
    sub_746b2c()
    int16_t* eax_5 = sub_6ad9b0(&var_74)
    var_8_1.b = 2
    sub_746b2c()
    int16_t var_d4
    int16_t* eax_7 = sub_6ad9b0(&var_d4)
    var_8_1.b = 3
    int16_t var_8c
    int16_t* eax_8 = sub_548cb0(eax_7, u"S-i-g-l-u-s--", &var_8c, eax_7)
    var_8_1.b = 4
    int16_t var_11c
    sub_5327a0(eax_8, eax_8, &var_11c, eax_5)
    int32_t var_78
    
    if (var_78 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_1 = 7
    int32_t var_7c_1 = 0
    var_8c = 0
    int32_t var_c0
    
    if (var_c0 u>= 8)
        j__free(var_d4.d)
    
    int32_t var_c0_1 = 7
    int32_t var_c4_1 = 0
    var_d4 = 0
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    int32_t var_a8_1 = 7
    int32_t var_ac_1 = 0
    int16_t var_bc = 0
    var_8_1.b = 9
    int16_t* eax_10 = sub_548cb0(&var_11c, &data_af0f8c, &var_74, &var_11c)
    var_8_1.b = 0xa
    var_8_1.b = 0xb
    sub_532870(&var_bc, sub_532b80(eax_10, eax_10, &var_8c, &data_af8cd0), 0, 0xffffffff)
    
    if (var_78_1 u>= 8)
        j__free(var_8c.d)
    
    var_8_1.b = 9
    int32_t var_78_2 = 7
    int32_t var_7c_2 = 0
    var_8c = 0
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    sub_532910(&var_bc, u"Content-Disposition: form-data; name="media_data"; \r\n", 0x35)
    var_8_1.b = 0xc
    sub_532870(&var_bc, 
        sub_532b80(sub_532910(&var_bc, &data_af8cd0, 2), &var_134, &var_74, &data_af8cd0), 0, 
        0xffffffff)
    var_8_1.b = 9
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    int16_t* eax_15 = sub_548cb0(&var_11c, &data_af0f8c, &var_74, &var_11c)
    var_8_1.b = 0xd
    var_8_1.b = 0xe
    sub_532870(&var_bc, sub_532b80(eax_15, eax_15, &var_8c, u"--\r\n"), 0, 0xffffffff)
    
    if (var_78_2 u>= 8)
        j__free(var_8c.d)
    
    var_8_1.b = 9
    int32_t var_78_3 = 7
    int32_t var_7c_3 = 0
    var_8c = 0
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    sub_532910(&var_bc, &data_af8cd0, 2)
    int16_t var_14c
    sub_548cb0(&var_11c, u"Content-Type: multipart/form-data; boundary=", &var_14c, &var_11c)
    struct _EXCEPTION_REGISTRATION_RECORD** var_184 = nullptr
    int32_t var_180_1 = 0
    int32_t var_17c_1 = 0
    var_8_1.b = 0x10
    void** esi_3 = data_bac510 + 0xa4df84
    void var_44
    sub_52e820(&var_44, u"oauth_consumer_key")
    var_8_1.b = 0x11
    void* var_1b0_27 = 0xffffffff
    int32_t var_1b4_7 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e3c0(&var_2c, esi_3, var_1b4_7, var_1b0_27)
    var_8_1.b = 0x12
    sub_669320(&var_184, &var_44)
    var_8_1.b = 0x10
    sub_57a0a0(&var_44)
    sub_52e820(&var_44, u"oauth_token")
    var_8_1.b = 0x13
    void* var_1b0_30 = 0xffffffff
    int32_t var_1b4_8 = 0
    int32_t* var_1b8_5 = &data_b8936c
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, var_1b8_5, var_1b4_8, var_1b0_30)
    var_8_1.b = 0x14
    sub_669320(&var_184, &var_44)
    var_8_1.b = 0x10
    sub_57a0a0(&var_44)
    sub_52e820(&var_44, u"oauth_signature_method")
    var_8_1.b = 0x15
    void* var_1b0_33 = 0xffffffff
    int32_t var_1b4_9 = 0
    int16_t* var_1b8_6 = &data_b8930c
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, var_1b8_6, var_1b4_9, var_1b0_33)
    var_8_1.b = 0x16
    sub_669320(&var_184, &var_44)
    var_8_1.b = 0x10
    int32_t ecx_32
    int32_t edx_9
    ecx_32, edx_9 = sub_57a0a0(&var_44)
    uint32_t eax_18
    int32_t edx_10
    eax_18, edx_10 = sub_746b5d(0, edx_9, ecx_32, nullptr)
    int16_t* eax_19 = sub_6adb00(eax_18, edx_10, &var_74, eax_18, edx_10)
    var_8_1.b = 0x17
    sub_52e820(&var_44, u"oauth_timestamp")
    var_8_1.b = 0x18
    void* const var_1b0_38 = 0xffffffff
    int32_t var_1b4_11 = 0
    int32_t var_18_4 = 7
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, eax_19, var_1b4_11, var_1b0_38)
    var_8_1.b = 0x19
    sub_669320(&var_184, &var_44)
    int32_t ecx_38 = sub_57a0a0(&var_44)
    var_8_1.b = 0x10
    
    if (var_60 u>= 8)
        ecx_38 = j__free(var_74)
    
    int32_t var_1b0_41 = ecx_38
    sub_746b2c()
    int16_t* eax_21 = sub_6ad9b0(&var_74)
    var_8_1.b = 0x1a
    sub_52e820(&var_44, u"oauth_nonce")
    var_8_1.b = 0x1b
    void* var_1b0_43 = 0xffffffff
    int32_t var_1b4_12 = 0
    int32_t var_18_5 = 7
    int32_t var_1c_5 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, eax_21, var_1b4_12, var_1b0_43)
    var_8_1.b = 0x1c
    sub_669320(&var_184, &var_44)
    sub_57a0a0(&var_44)
    var_8_1.b = 0x10
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    sub_52e820(&var_44, u"oauth_version")
    var_8_1.b = 0x1d
    void* var_1b0_47 = 0xffffffff
    int32_t var_1b4_13 = 0
    int16_t* var_1b8_9 = &data_b89324
    int32_t var_18_6 = 7
    int32_t var_1c_6 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, var_1b8_9, var_1b4_13, var_1b0_47)
    var_8_1.b = 0x1e
    sub_669320(&var_184, &var_44)
    sub_57a0a0(&var_44)
    char* var_c8 = nullptr
    int32_t var_c4_2 = 0
    int32_t var_c0_2 = 0
    var_8_1.b = 0x1f
    void* const var_1b0_49 = 4
    int32_t var_48_1 = 7
    int32_t* var_1b4_14 = u"POST"
    int32_t var_4c_1 = 0
    int16_t var_5c = 0
    sub_52e720(&var_5c, var_1b4_14, var_1b0_49)
    var_8_1.b = 0x20
    int16_t var_1c4
    int16_t* var_19c_1 = &var_1c4
    void* const var_1c8_1 = 0xffffffff
    int32_t var_1b0_50 = 7
    int32_t var_1b4_15 = 0
    int32_t var_1cc_1 = 0
    var_1c4 = 0
    sub_52e3c0(&var_1c4, &var_14c, var_1cc_1, var_1c8_1)
    var_8_1.b = 0x21
    void var_1dc
    void* var_198_1 = &var_1dc
    sub_52e820(&var_1dc, u"/1.1/media/upload.json")
    var_8_1.b = 0x22
    int32_t* var_1e0_2 = &var_c8
    int32_t* var_1e4_1 = &data_b89384
    int16_t* var_1e8_1 = &var_bc
    void var_1f4
    sub_6695d0(&var_1f4, &var_184)
    int32_t var_200 = 0
    var_8_1.b = 0x20
    var_8_1.b = 0x1f
    ebx.b = sub_664d00(&var_200, &var_5c, &data_b892dc, var_200, 0, 0) == 0
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    bool cond:2_1 = ebx.b == 0
    ebx = var_c8
    char var_165_1
    
    if (cond:2_1)
        int32_t var_178
        int32_t var_1b0_52 = var_178
        int32_t var_48_2 = 0xf
        var_5c.b = 0
        char* esi_6 = ebx
        
        if (ebx == var_c4_2)
            esi_6 = nullptr
        
        char* ecx_52 = ebx
        int32_t var_4c_2 = 0
        
        if (ebx == var_c4_2)
            ecx_52 = nullptr
        
        sub_66bdc0(&var_5c, ecx_52, esi_6 + var_c4_2 - ebx)
        var_8_1.b = 0x23
        int16_t var_104
        sub_6af1e0(&var_104)
        var_8_1.b = 0x25
        
        if (var_48_2 u>= 0x10)
            j__free(var_5c.d)
        
        int32_t var_48_3 = 0xf
        int32_t var_4c_3 = 0
        var_5c.b = 0
        void* eax_26 = sub_55af30(&var_104, u""media_id_string":", nullptr, 0x12)
        
        if (eax_26 != 0xffffffff)
            void* eax_28 = sub_668da0(&data_af8cb4, eax_26 + 0x12)
            var_8_1.b = 0x26
            void var_ec
            sub_532840(&var_74, 
                sub_53d730(&var_104, &var_ec, eax_28 + 1, 
                    sub_668da0(&data_af8cb4, eax_28 + 1) - eax_28 - 1))
            void** ecx_61 = sub_52e8a0(&var_ec)
            struct _EXCEPTION_REGISTRATION_RECORD** var_174 = nullptr
            int32_t var_170_1 = 0
            int32_t var_16c_1 = 0
            var_8_1.b = 0x29
            int32_t var_1b0_60 = data_bac510 + 0xa4df84
            var_8_1.b = 0x2a
            sub_669320(&var_174, sub_669dc0(&var_44, ecx_61))
            var_8_1.b = 0x29
            int32_t* var_1b0_62 = &data_b8936c
            var_8_1.b = 0x2b
            sub_669320(&var_174, sub_66a040(&var_44, sub_57a0a0(&var_44)))
            var_8_1.b = 0x29
            sub_57a0a0(&var_44)
            var_8_1.b = 0x2c
            sub_669320(&var_174, sub_669e30(&var_44))
            var_8_1.b = 0x29
            int32_t ecx_72
            int32_t edx_15
            ecx_72, edx_15 = sub_57a0a0(&var_44)
            uint32_t eax_38
            int32_t edx_16
            eax_38, edx_16 = sub_746b5d(0, edx_15, ecx_72, nullptr)
            int16_t* eax_39
            void** ecx_74
            eax_39, ecx_74 = sub_6adb00(eax_38, edx_16, &var_ec, eax_38, edx_16)
            var_8_1.b = 0x2d
            int16_t* var_1b0_67 = eax_39
            var_8_1.b = 0x2e
            sub_669320(&var_174, sub_669eb0(&var_44, ecx_74))
            sub_57a0a0(&var_44)
            var_8_1.b = 0x29
            int32_t var_1b0_69 = sub_52e8a0(&var_ec)
            sub_746b2c()
            int16_t* eax_42
            void** ecx_81
            eax_42, ecx_81 = sub_6ad9b0(&var_ec)
            int16_t* var_1b0_70 = eax_42
            var_8_1.b = 0x2f
            var_8_1.b = 0x30
            sub_669320(&var_174, sub_669f20(&var_44, ecx_81))
            sub_57a0a0(&var_44)
            var_8_1.b = 0x29
            sub_52e8a0(&var_ec)
            var_8_1.b = 0x31
            sub_669320(&var_174, sub_669f90(&var_44))
            void** ecx_89 = sub_57a0a0(&var_44)
            struct _EXCEPTION_REGISTRATION_RECORD** var_50 = nullptr
            int32_t var_4c_4 = 0
            int32_t var_48_4 = 0
            int32_t var_1b0_73 = arg1
            var_8_1.b = 0x32
            var_8_1.b = 0x33
            sub_669320(&var_50, sub_66a130(&var_44, ecx_89))
            var_8_1.b = 0x32
            int32_t* var_1b0_75 = &var_74
            var_8_1.b = 0x34
            sub_669320(&var_50, sub_66a1a0(&var_44, sub_57a0a0(&var_44)))
            sub_57a0a0(&var_44)
            char* var_98 = nullptr
            int32_t var_94_2 = 0
            int32_t var_90_2 = 0
            var_8_1.b = 0x35
            sub_52e820(&var_ec, &data_ad7c90)
            var_8_1.b = 0x36
            void var_164
            sub_52e820(&var_164, u"POST")
            var_8_1.b = 0x37
            int16_t* var_178_1 = &var_1c4
            sub_52e820(&var_1c4, &data_ad7c90)
            var_8_1.b = 0x38
            void* var_198_2 = &var_1dc
            sub_52e820(&var_1dc, u"/1.1/statuses/update.json")
            var_8_1.b = 0x39
            int32_t* var_1e0_4 = &var_98
            int32_t* var_1e4_2 = &data_b89384
            void* var_1e8_2 = &var_ec
            void* var_19c_2 = &var_1f4
            sub_6695d0(&var_1f4, &var_174)
            var_8_1.b = 0x3a
            var_8_1.b = 0x37
            ebx.b = sub_664d00(sub_6695d0(&var_200, &var_50), &var_164, &data_b892c4) == 0
            sub_52e8a0(&var_164)
            var_8_1.b = 0x35
            sub_52e8a0(&var_ec)
            
            if (ebx.b == 0)
                char* esi_8 = var_98
                char* edx_19 = esi_8
                
                if (esi_8 == var_94_2)
                    edx_19 = nullptr
                
                void* eax_50 = var_94_2 - esi_8
                
                if (esi_8 == var_94_2)
                    esi_8 = nullptr
                
                sub_66a010(&var_164, esi_8, eax_50 + edx_19)
                var_8_1.b = 0x3b
                sub_6af1e0(&var_8c)
                var_8_1.b = 0x3d
                sub_53f510(&var_164)
                void* eax_53 = sub_668da0(u""errors":", nullptr)
                enum MESSAGEBOX_STYLE var_1b0_81 = MB_OK
                
                if (eax_53 == 0xffffffff)
                    sub_6b2a80(eax_53, data_bac510 + 0x1c, &data_b89294, var_1b0_81)
                    sub_60e2c0()
                else
                    void* eax_54 = sub_668da0(u""message":", var_1b0_81)
                    
                    if (eax_54 != 0xffffffff)
                        void* eax_56 = sub_668da0(&data_af8cb4, eax_54 + 0xa)
                        var_8_1.b = 0x3e
                        sub_532840(&var_ec, 
                            sub_53d730(&var_8c, &var_2c, eax_56 + 1, 
                                sub_668da0(&data_af8cb4, eax_56 + 1) - eax_56 - 1))
                        var_8_1.b = 0x40
                        sub_52e8a0(&var_2c)
                        sub_6b2ab0(sub_548cb0(&var_ec, 0xaf93ac, &var_164, &var_ec), 0)
                        sub_52e8a0(&var_164)
                        sub_52e8a0(&var_ec)
                
                sub_52e8a0(&var_8c)
                sub_538150(&var_98)
                sub_665e80(&var_50)
                sub_665e80(&var_174)
                sub_52e8a0(&var_74)
                var_165_1 = 1
            else
                sub_538150(&var_98)
                sub_665e80(&var_50)
                sub_665e80(&var_174)
                sub_52e8a0(&var_74)
                var_165_1 = 0
        else
            void* var_1b0_55 = 0x15
            int32_t var_90_1 = 7
            wchar16 const* const var_1b4_18 = u"media_id"
            int32_t var_94_1 = 0
            int16_t var_a4 = 0
            sub_52e720(&var_a4, var_1b4_18, var_1b0_55)
            int16_t* lpText_1 = &var_a4
            
            if (var_90_1 u>= 8)
                lpText_1 = var_a4.d
            
            MessageBoxW(data_4ebe3ac, lpText_1, 0xaef64c, MB_ICONEXCLAMATION)
            sub_52e8a0(&var_a4)
            var_165_1 = 1
        
        int32_t var_f0
        
        if (var_f0 u>= 8)
            j__free(var_104.d)
        
        ebx = var_c8
        int32_t var_f0_1 = 7
        int32_t var_f4_1 = 0
        var_104 = 0
    else
        var_165_1 = 0
    
    if (ebx != 0)
        j__free(ebx)
    
    sub_665e80(&var_184)
    int32_t var_138
    
    if (var_138 u>= 8)
        j__free(var_14c.d)
    
    int32_t var_138_1 = 7
    int32_t var_13c_1 = 0
    var_14c = 0
    
    if (var_a8_1 u>= 8)
        j__free(var_bc.d)
    
    int32_t var_a8_2 = 7
    int32_t var_ac_2 = 0
    var_bc = 0
    int32_t var_108
    
    if (var_108 u>= 8)
        j__free(var_11c.d)
    
    int32_t var_108_1 = 7
    int32_t var_10c_1 = 0
    var_11c = 0
    int32_t var_120
    
    if (var_120 u>= 8)
        j__free(var_134.d)
    
    ebx.b = var_165_1
    int32_t var_120_1 = 7
    int32_t var_124_1 = 0
    var_134 = 0
else
    int16_t* lpText = sub_532b80(eax_3, arg2, &var_74, &data_af1b6c)
    
    if (*(lpText + 0x14) u>= 8)
        lpText = *lpText
    
    MessageBoxW(data_4ebe3ac, lpText, 0xaef64c, MB_ICONEXCLAMATION)
    
    if (var_60 u>= 8)
        j__free(var_74)
    
    ebx.b = 0
int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
