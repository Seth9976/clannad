// 函数: sub_574e90
// 地址: 0x574e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_2bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_198 = esi
int32_t var_50 = 7
int32_t var_2c0 = 0
void* const var_2c4 = &data_ad7c90
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64)
int32_t var_8_1 = 0
sub_6c6f60(esi + 0x35a8, &var_64)
int32_t var_8_2 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_50_1 = 7
int32_t var_2c0_3 = 0
void* const var_2c4_1 = &data_ad7c90
int32_t var_54_1 = 0
var_64 = 0
sub_52e720(&var_64)
int32_t var_8_3 = 1
sub_6c6f60(esi + 0x3614, &var_64)
int32_t var_8_4 = 0xffffffff

if (var_50_1 u>= 8)
    j__free(var_64.d)

sub_6c2800(esi, zx.o(0))
int32_t eax_3 = 0

while (true)
    int32_t var_2c0_6 = eax_3
    wchar16 const* const var_2dc_1 = u"element_%04d_code"
    int128_t* var_2d8
    sub_52e820(&var_2d8, u"element_%04d_code")
    int32_t var_7c
    sub_6ae4c0(&var_7c, var_2d8)
    int32_t var_8_5 = 2
    int32_t var_2c0_7 = 0
    void* const var_2c4_2 = &data_ad7c90
    int32_t var_50_2 = 7
    int32_t var_54_2 = 0
    var_64 = 0
    sub_52e720(&var_64)
    var_8_5.b = 3
    int32_t var_2c0_8 = 0
    void* const var_2c4_3 = &data_ad7c90
    int32_t var_80_1 = 7
    int32_t var_84_1 = 0
    int16_t var_94 = 0
    sub_52e720(&var_94)
    var_8_5.b = 4
    int16_t* var_2c0_9 = &var_64
    int16_t* var_2c4_4 = &var_94
    int128_t var_2cc_1
    var_2cc_1:4.d = &var_7c
    int16_t var_4c
    var_2cc_1.d = &var_4c
    sub_6c21e0(esi, var_2cc_1)
    
    if (var_80_1 u>= 8)
        j__free(var_94.d)
    
    int32_t var_80_2 = 7
    int32_t var_84_2 = 0
    var_94 = 0
    var_8_5.b = 7
    
    if (var_50_2 u>= 8)
        j__free(var_64.d)
    
    int32_t var_50_3 = 7
    int32_t var_54_3 = 0
    var_64 = 0
    int32_t var_3c
    
    if (var_3c == 0)
        goto label_5755aa
    
    int32_t var_2c0_12 = 3
    void* const var_2c4_5 = &data_aee7a0
    int32_t var_190 = 0x20
    int32_t var_18c = 0
    int32_t var_1b0_1 = 0
    int32_t var_98_1 = 7
    int32_t var_9c_1 = 0
    int16_t var_ac = 0
    sub_52e720(&var_ac)
    int16_t* ecx_10 = &var_4c
    int32_t var_38
    
    if (var_38 u>= 8)
        ecx_10 = var_4c.d
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    void* eax_5 = &ecx_10[var_3c]
    int16_t* ecx_11 = &var_4c
    
    if (var_38 u>= 8)
        ecx_11 = var_4c.d
    
    int16_t var_2c = 0
    var_8_5.b = 9
    int32_t var_2c0_13 = 0xffffffff
    int32_t var_2c4_6 = 0
    int16_t* var_34 = ecx_11
    var_2cc_1:4.d = &var_ac
    sub_52e3c0(&var_2c)
    var_8_5.b = 0xb
    
    if (var_98_1 u>= 8)
        j__free(var_ac.d)
    
    int32_t var_98_2 = 7
    var_ac = 0
    int32_t var_9c_2 = 0
    void var_22c
    int32_t var_19c
    int32_t var_188
    
    if (sub_6af8f0(&var_34, &var_19c) != 0)
        while (true)
            int16_t* esi_1 = var_34
            sub_6af750(&var_34)
            int16_t* eax_7 = var_34
            
            if (eax_7 == eax_5 || *eax_7 != 0x2c)
                void* var_2c0_16 = eax_5
                int16_t* var_2c4_7 = esi_1
                
                if (sub_6af730(&var_34) == 0)
                    break
            else
                var_34 = &eax_7[1]
            
            if (sub_6af8f0(&var_34, &var_188) == 0)
                break
            
            int32_t eax_10 = var_188
            int32_t var_230_1 = 1
            void var_174
            __builtin_memcpy(&var_174, &var_22c, 0x80)
            *(&var_174 + (var_1b0_1 << 2)) = eax_10
            int32_t var_f8 = var_f8 + 1
            __builtin_memcpy(&var_22c, &var_174, 0x80)
    
    int16_t* esi_2 = var_34
    sub_6af750(&var_34)
    int16_t* eax_11 = var_34
    int32_t result
    
    if (eax_11 == eax_5 || *eax_11 != 0x3a)
        void* var_2c0_18 = eax_5
        int16_t* var_2c4_8 = esi_2
        
        if (sub_6af730(&var_34) != 0)
            goto label_575215
        
    label_575589:
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        var_2c = 0
        int32_t var_1c_2 = 0
    label_5755aa:
        
        if (var_38 u>= 8)
            j__free(var_4c.d)
        
        result = 0
        int32_t var_38_1 = 7
        int32_t var_3c_1 = 0
        var_4c = 0
        int32_t var_68
        
        if (var_68 u>= 8)
            result = j__free(var_7c)
        
        goto label_5755db
    
    var_34 = &eax_11[1]
label_575215:
    
    if (sub_6af8f0(&var_34, &var_190) == 0)
        goto label_575589
    
    int16_t* esi_3 = var_34
    sub_6af750(&var_34)
    int16_t* eax_14 = var_34
    
    if (eax_14 == eax_5 || *eax_14 != 0x3a)
        void* var_2c0_20 = eax_5
        int16_t* var_2c4_9 = esi_3
        
        if (sub_6af730(&var_34) == 0)
            goto label_575589
    else
        var_34 = &eax_14[1]
    
    if (sub_6af8f0(&var_34, &var_18c) == 0)
        goto label_575589
    
    int16_t** ecx_28 = &var_34
    
    if (sub_6af7d0(&var_34, 0x3a) == 0)
        goto label_57556e
    
    if (sub_6af8f0(ecx_28, &var_188) == 0)
        goto label_57556b
    
    bool cond:6_1 = var_188 != 0
    int32_t var_2c0_24 = eax_3
    wchar16 const* const var_2dc_3 = u"element_%04d_name"
    sub_52e820(&var_2d8, u"element_%04d_name")
    void var_dc
    sub_6ae4c0(&var_dc)
    var_8_5.b = 0xc
    sub_52e820(&var_94, &data_ad7c90)
    var_8_5.b = 0xd
    sub_52e820(&var_64, &data_ad7c90)
    int16_t* var_2c0_27 = &var_94
    var_8_5.b = 0xe
    int16_t* var_2c4_10 = &var_64
    var_2cc_1:4.d = &var_dc
    void var_c4
    var_2cc_1.d = &var_c4
    sub_6c21e0(var_198, var_2cc_1)
    sub_52e8a0(&var_64)
    var_8_5.b = 0x11
    sub_52e8a0(&var_94)
    int32_t var_b4
    
    if (var_b4 == 0)
        goto label_57555b
    
    int32_t var_2c0_28 = eax_3
    wchar16 const* const var_2dc_5 = u"element_%04d_rect"
    sub_52e820(&var_2d8, u"element_%04d_rect")
    void var_f4
    sub_6ae4c0(&var_f4)
    var_8_5.b = 0x12
    sub_52e820(&var_64, &data_ad7c90)
    var_8_5.b = 0x13
    int128_t var_2cc_2 = zx.o(0)
    int32_t* var_2d0_1 = &var_64
    int32_t* var_2d4_1 = &var_f4
    int128_t var_1ac
    var_2d8 = &var_1ac
    sub_6c2580(var_198, var_2d8, var_2d4_1, var_2d0_1, var_2cc_2)
    var_8_5.b = 0x12
    sub_52e8a0(&var_64)
    int128_t var_8c
    int128_t* var_2c0_30 = &var_8c
    var_8c = zx.o(0)
    
    if (sub_57a520(&var_1ac, var_2c0_30) != 0)
        sub_52e8a0(&var_f4)
    label_57555b:
        sub_52e8a0(&var_c4)
        sub_52e8a0(&var_dc)
    label_57556b:
        ecx_28 = &var_34
    label_57556e:
        sub_575600(ecx_28)
        sub_52e8a0(&var_4c)
        result = sub_52e8a0(&var_7c)
    label_5755db:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_745f2b(eax_2 ^ &__saved_ebp)
        return result
    
    struct NT3::C_window_base::VTable** eax_20 = sub_745f3f(0x4bc)
    struct NT3::C_window_base::VTable** var_194_1 = eax_20
    var_8_5.b = 0x14
    struct C_db_wnd_info_listview::C_db_wnd_info_element_lv::VTable** eax_21
    
    if (eax_20 == 0)
        eax_21 = nullptr
    else
        eax_21 = sub_575630(eax_20)
    
    var_8_5.b = 0x12
    int32_t* var_180
    sub_578aa0(&var_180, eax_21)
    var_8_5.b = 0x15
    sub_578460(var_198 + 0x3694, &var_180)
    __builtin_memcpy(&var_180[0x105], &var_22c, 0x80)
    int32_t esi_5 = var_19c
    var_180[0x125] = esi_5
    sub_536260(&var_180[0x126], &var_c4)
    var_180[0x12c] = var_190
    var_180[0x12d] = var_18c
    int32_t* ecx_46
    ecx_46.b = cond:6_1
    var_180[0x12e].b = ecx_46.b
    (*(*var_180 + 0x10))(data_4ebe3ac)
    int32_t* ecx_48 = var_180
    sub_6c1b50(ecx_48, &ecx_48[0x126])
    sub_6c11e0(var_180, var_1ac)
    int32_t* edx_1 = var_180
    void* eax_28 = &edx_1[0x38]
    edx_1.b = edx_1[0x12e].b
    sub_57a800(eax_28, edx_1.b, esi_5, eax_28)
    var_8_5.b = 0x12
    sub_54b010(&var_180)
    sub_52e8a0(&var_f4)
    sub_52e8a0(&var_c4)
    sub_52e8a0(&var_dc)
    sub_575600(&var_34)
    sub_52e8a0(&var_4c)
    int32_t var_8_6 = 0xffffffff
    sub_52e8a0(&var_7c)
    esi = var_198
    eax_3 += 1
