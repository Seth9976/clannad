// 函数: sub_666ca0
// 地址: 0x666ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c5bab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_114 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_e8
sub_664410(&var_e8, arg1)
int32_t var_8_1 = 0
void* const var_118 = 0xe
int32_t var_48 = 7
int32_t* var_11c = u"oauth_verifier"
int16_t* var_4c = nullptr
int16_t var_5c = 0
sub_52e720(&var_5c, var_11c, var_118)
void** edi = var_e8
void** eax_3 = sub_669720(&var_e8, &var_5c)
void** eax_4 = var_e8
void** var_e0

if (eax_3 == eax_4)
    var_e0 = eax_4
else
    void* eax_5 = &eax_3[4]
    int32_t ecx_3 = *(eax_5 + 0x10)
    
    if (eax_3[9] u>= 8)
        eax_5 = *eax_5
    
    int32_t var_118_2 = ecx_3
    
    if (sub_536340(&var_5c, ecx_3, var_4c, eax_5) s< 0)
        var_e0 = var_e8
    else
        var_e0 = eax_3

void*** eax_7
eax_7.b = var_e0 != edi
char var_d5 = eax_7.b

if (var_48 u>= 8)
    j__free(var_5c.d)
    eax_7.b = var_d5

int32_t var_dc
void** ebx
int32_t var_d4

if (eax_7.b == 0)
    int16_t* lpText = sub_548cb0(eax_7, 0xaf9134, &var_d4, arg1)
    
    if (*(lpText + 0x14) u>= 8)
        lpText = *lpText
    
    MessageBoxW(data_4ebe3ac, lpText, 0xaef64c, MB_ICONEXCLAMATION)
    int32_t var_c0
    
    if (var_c0 u>= 8)
        j__free(var_d4)
    
    ebx.b = 1
else
    void* var_118_4 = 0xb
    int32_t var_78_1 = 7
    wchar16 const* const var_11c_2 = u"oauth_token"
    int32_t var_7c_1 = 0
    int16_t var_8c = 0
    sub_52e720(&var_8c, var_11c_2, var_118_4)
    var_8_1.b = 1
    void* eax_8 = sub_668e40(&var_e8, &var_8c)
    int32_t var_a8_1 = 7
    void* const var_118_6 = 0xffffffff
    int32_t var_11c_3 = 0
    int16_t var_bc = 0
    int32_t var_ac_1 = 0
    sub_52e3c0(&var_bc, eax_8, var_11c_3, var_118_6)
    var_8_1.b = 3
    
    if (var_78_1 u>= 8)
        j__free(var_8c.d)
    
    int32_t var_78_2 = 7
    void* var_118_8 = 0xe
    wchar16 const* const var_11c_4 = u"oauth_verifier"
    int32_t var_7c_2 = 0
    var_8c = 0
    int32_t var_48_1 = 7
    int32_t var_4c_1 = 0
    var_5c = 0
    sub_52e720(&var_5c, var_11c_4, var_118_8)
    var_8_1.b = 4
    void* eax_9 = sub_668e40(&var_e8, &var_5c)
    int32_t var_90_1 = 7
    void* const var_118_10 = 0xffffffff
    int32_t var_11c_5 = 0
    int16_t var_a4 = 0
    int32_t var_94_1 = 0
    sub_52e3c0(&var_a4, eax_9, var_11c_5, var_118_10)
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    int32_t var_4c_2 = 0
    var_5c = 0
    struct _EXCEPTION_REGISTRATION_RECORD** var_f4 = nullptr
    int32_t var_f0_1 = 0
    int32_t var_ec_1 = 0
    var_8_1.b = 7
    void** esi_2 = data_bac510 + 0xa4df84
    void var_44
    sub_52e820(&var_44, u"oauth_consumer_key")
    var_8_1.b = 8
    void* var_118_13 = 0xffffffff
    int32_t var_11c_6 = 0
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e3c0(&var_2c, esi_2, var_11c_6, var_118_13)
    var_8_1.b = 9
    sub_669320(&var_f4, &var_44)
    var_8_1.b = 7
    sub_57a0a0(&var_44)
    sub_52e820(&var_44, u"oauth_token")
    var_8_1.b = 0xa
    void* var_118_16 = 0xffffffff
    int32_t var_11c_7 = 0
    var_2c = 0
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    sub_52e3c0(&var_2c, &var_bc, var_11c_7, var_118_16)
    var_8_1.b = 0xb
    sub_669320(&var_f4, &var_44)
    var_8_1.b = 7
    sub_57a0a0(&var_44)
    sub_52e820(&var_44, u"oauth_verifier")
    var_8_1.b = 0xc
    void* var_118_19 = 0xffffffff
    int32_t var_11c_8 = 0
    var_2c = 0
    int32_t var_18_3 = 7
    int32_t var_1c_3 = 0
    sub_52e3c0(&var_2c, &var_a4, var_11c_8, var_118_19)
    var_8_1.b = 0xd
    sub_669320(&var_f4, &var_44)
    var_8_1.b = 7
    sub_57a0a0(&var_44)
    sub_52e820(&var_44, u"oauth_signature_method")
    var_8_1.b = 0xe
    void* var_118_22 = 0xffffffff
    int32_t var_11c_9 = 0
    int16_t* var_120_7 = &data_b8930c
    int32_t var_18_4 = 7
    int32_t var_1c_4 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, var_120_7, var_11c_9, var_118_22)
    var_8_1.b = 0xf
    sub_669320(&var_f4, &var_44)
    var_8_1.b = 7
    int32_t ecx_27
    int32_t edx_1
    ecx_27, edx_1 = sub_57a0a0(&var_44)
    uint32_t eax_10
    int32_t edx_2
    eax_10, edx_2 = sub_746b5d(0, edx_1, ecx_27, nullptr)
    int16_t* eax_11 = sub_6adb00(eax_10, edx_2, &var_2c, eax_10, edx_2)
    var_8_1.b = 0x10
    void var_74
    sub_52e820(&var_74, u"oauth_timestamp")
    var_8_1.b = 0x11
    void* const var_118_27 = 0xffffffff
    int32_t var_11c_11 = 0
    int32_t var_48_3 = 7
    int32_t var_4c_3 = 0
    var_5c = 0
    sub_52e3c0(&var_5c, eax_11, var_11c_11, var_118_27)
    var_8_1.b = 0x12
    sub_669320(&var_f4, &var_74)
    int32_t ecx_33 = sub_57a0a0(&var_74)
    var_8_1.b = 7
    
    if (var_18_4 u>= 8)
        ecx_33 = j__free(var_2c.d)
    
    int32_t var_118_30 = ecx_33
    sub_746b2c()
    int16_t* eax_13 = sub_6ad9b0(&var_2c)
    var_8_1.b = 0x13
    sub_52e820(&var_74, u"oauth_nonce")
    var_8_1.b = 0x14
    void* var_118_32 = 0xffffffff
    int32_t var_11c_12 = 0
    int32_t var_48_4 = 7
    int32_t var_4c_4 = 0
    var_5c = 0
    sub_52e3c0(&var_5c, eax_13, var_11c_12, var_118_32)
    var_8_1.b = 0x15
    sub_669320(&var_f4, &var_74)
    sub_57a0a0(&var_74)
    var_8_1.b = 7
    
    if (var_18_4 u>= 8)
        j__free(var_2c.d)
    
    sub_52e820(&var_44, u"oauth_version")
    var_8_1.b = 0x16
    void* var_118_36 = 0xffffffff
    int32_t var_11c_13 = 0
    int16_t* var_120_10 = &data_b89324
    int32_t var_18_5 = 7
    int32_t var_1c_5 = 0
    var_2c = 0
    sub_52e3c0(&var_2c, var_120_10, var_11c_13, var_118_36)
    var_8_1.b = 0x17
    sub_669320(&var_f4, &var_44)
    sub_57a0a0(&var_44)
    char* var_80 = nullptr
    int32_t var_7c_3 = 0
    int32_t var_78_3 = 0
    var_8_1.b = 0x18
    void* var_118_38 = nullptr
    void* const var_11c_14 = &data_ad7c90
    int32_t var_18_6 = 7
    int32_t var_1c_6 = 0
    var_2c = 0
    sub_52e720(&var_2c, var_11c_14, var_118_38)
    var_8_1.b = 0x19
    void* const var_118_39 = 4
    int32_t var_48_5 = 7
    int32_t* var_11c_15 = u"POST"
    int32_t var_4c_5 = 0
    var_5c = 0
    sub_52e720(&var_5c, var_11c_15, var_118_39)
    var_8_1.b = 0x1a
    void var_12c
    var_e0 = &var_12c
    sub_52e820(&var_12c, &data_ad7c90)
    var_8_1.b = 0x1b
    void var_144
    void* var_100_1 = &var_144
    sub_52e820(&var_144, u"/oauth/access_token")
    var_8_1.b = 0x1c
    int32_t* var_148_2 = &var_80
    int16_t* var_14c_1 = &data_b89354
    int16_t* var_150_1 = &var_2c
    void var_15c
    sub_6695d0(&var_15c, &var_f4)
    int32_t var_168 = 0
    var_8_1.b = 0x1a
    char eax_15
    int32_t ecx_48
    eax_15, ecx_48 = sub_664d00(&var_168, &var_5c, &data_b892c4, var_168, 0, 0)
    ebx.b = eax_15 == 0
    
    if (var_48_5 u>= 8)
        ecx_48 = j__free(var_5c.d)
    
    var_8_1.b = 0x18
    int32_t var_48_6 = 7
    int32_t var_4c_6 = 0
    var_5c = 0
    
    if (var_18_6 u>= 8)
        ecx_48 = j__free(var_2c.d)
    
    if (ebx.b == 0)
        char* esi_6 = var_80
        char* edx_6 = esi_6
        int32_t var_118_46 = var_dc
        int32_t var_48_7 = 0xf
        var_5c.b = 0
        
        if (esi_6 == var_7c_3)
            edx_6 = nullptr
        
        void* ecx_51 = var_7c_3 - esi_6
        int32_t var_4c_7 = 0
        
        if (esi_6 == var_7c_3)
            esi_6 = nullptr
        
        sub_66bdc0(&var_5c, esi_6, edx_6 + ecx_51)
        var_8_1.b = 0x1d
        sub_6af1e0(&var_d4)
        var_8_1.b = 0x1f
        
        if (var_48_7 u>= 0x10)
            j__free(var_5c.d)
        
        int32_t var_48_8 = 0xf
        int32_t var_4c_8 = 0
        var_5c.b = 0
        int32_t** var_fc
        sub_664410(&var_fc, &var_d4)
        var_8_1.b = 0x20
        sub_52e820(&var_2c, u"oauth_token")
        var_8_1.b = 0x21
        void* eax_19 = sub_668e40(&var_fc, &var_2c)
        
        if (eax_19 != &data_b8936c)
            sub_52e3c0(&data_b8936c, eax_19, 0, 0xffffffff)
        
        var_8_1.b = 0x20
        
        if (var_18_6 u>= 8)
            j__free(var_2c.d)
        
        sub_52e820(&var_2c, u"oauth_token_secret")
        var_8_1.b = 0x22
        void* eax_20 = sub_668e40(&var_fc, &var_2c)
        
        if (eax_20 != &data_b89384)
            sub_52e3c0(&data_b89384, eax_20, 0, 0xffffffff)
        
        var_8_1.b = 0x20
        sub_52e8a0(&var_2c)
        sub_52e820(&var_2c, u"user_id")
        var_8_1.b = 0x23
        void* eax_21 = sub_668e40(&var_fc, &var_2c)
        
        if (eax_21 != &data_b8939c)
            sub_52e3c0(&data_b8939c, eax_21, 0, 0xffffffff)
        
        var_8_1.b = 0x20
        sub_52e8a0(&var_2c)
        sub_52e820(&var_2c, u"screen_name")
        var_8_1.b = 0x24
        void* eax_22 = sub_668e40(&var_fc, &var_2c)
        
        if (eax_22 != &data_b893cc)
            sub_52e3c0(&data_b893cc, eax_22, 0, 0xffffffff)
        
        var_8_1.b = 0x20
        sub_52e8a0(&var_2c)
        sub_6675b0()
        int32_t** eax_23 = var_fc
        sub_641d30(&var_fc, &var_dc, *eax_23, eax_23)
        j__free(var_fc)
        sub_52e8a0(&var_d4)
        sub_538150(&var_80)
        sub_665e80(&var_f4)
        sub_52e8a0(&var_a4)
        sub_52e8a0(&var_bc)
        ebx.b = 1
    else
        char* eax_16 = var_80
        
        if (eax_16 != 0)
            ecx_48 = j__free(eax_16)
        
        struct _EXCEPTION_REGISTRATION_RECORD** esi_5 = var_f4
        
        if (esi_5 != 0)
            int32_t var_118_43 = var_dc
            int32_t var_11c_16 = ecx_48
            sub_66b250(esi_5, var_f0_1)
            j__free(esi_5)
        
        if (var_90_1 u>= 8)
            j__free(var_a4.d)
        
        int32_t var_90_2 = 7
        int32_t var_94_2 = 0
        var_a4 = 0
        
        if (var_a8_1 u>= 8)
            j__free(var_bc.d)
        
        ebx.b = 0
int32_t** ecx_73 = var_e8
sub_641d30(&var_e8, &var_dc, *ecx_73, ecx_73)
j__free(var_e8)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
