// 函数: ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@ABE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAAVios_base@2@AAY0M@G@Z
// 地址: 0x5d0a40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbf65
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_bac484
void* var_f8 = esi
*(esi + 0x138) = 1
sub_6efe60(esi + 0x198)
*(esi + 0x2b8) = 0
*(esi + 0x2bc) = 0
*(esi + 0x2c0) = 0
*(esi + 0x2c4) = 0
sub_6efdb0(esi + 0x198)
sub_6efe60(esi + 0x2d0)
*(esi + 0x3f0) = 0
*(esi + 0x3f4) = 0
*(esi + 0x3f8) = 0
*(esi + 0x3fc) = 0
sub_6efdb0(esi + 0x2d0)
int32_t eax_3 = *(esi + 0x130)
void* edi_2 = *(esi + 0x12c)

if (edi_2 != eax_3)
    do
        sub_6efc80(edi_2 + 8)
        edi_2 += 0x138
    while (edi_2 != eax_3)
    
    esi = var_f8

*(esi + 0x130) = *(esi + 0x12c)
void* var_248 = 0xffffffff
int32_t var_24c = 0
void** eax_6 = data_bac510 + 0xa47c30
int16_t var_74 = 0
int32_t var_60 = 7
int32_t var_64 = 0
sub_52e3c0(&var_74, eax_6, var_24c, var_248)
int32_t var_8_1 = 0
*(esi + 0x198) = 2
void var_114
int32_t* var_110

if (var_64 == 0)
    int32_t eax_23 = data_4ebe2ac
    int32_t* eax_24 = data_4ebe2b0
    
    if (eax_24 != 0)
        eax_24[1]
        eax_24[1] += 1
    
    operator new(esi + 0x198, eax_23, eax_24)
    int32_t eax_26 = data_4ebe2ec
    int32_t* eax_27 = data_4ebe2f0
    
    if (eax_27 != 0)
        eax_27[1]
        eax_27[1] += 1
    
    operator new[](esi + 0x198, eax_26, eax_27)
else
    int32_t eax_7 = data_4ebe2bc
    int32_t* eax_8 = data_4ebe2c0
    
    if (eax_8 != 0)
        eax_8[1]
        eax_8[1] += 1
    
    operator new(esi + 0x198, eax_7, eax_8)
    int32_t eax_10 = data_4ebe2ec
    int32_t* eax_11 = data_4ebe2f0
    
    if (eax_11 != 0)
        eax_11[1]
        eax_11[1] += 1
    
    var_8_1.b = 1
    sub_54d190(esi + 0x190, 
        sub_6281e0(operator new[](esi + 0x198, eax_10, eax_11), &var_74, &var_114, 0, 0))
    var_8_1.b = 0
    
    if (var_110 != 0)
        bool cond:1_1 = var_110[1] != 1
        var_110[1]
        var_110[1] -= 1
        
        if (not(cond:1_1))
            (*(*var_110 + 4))(eax_2)
            bool cond:3_1 = var_110[2] != 1
            var_110[2]
            var_110[2] -= 1
            
            if (not(cond:3_1))
                (*(*var_110 + 8))()
    
    int32_t* ecx_15 = *(esi + 0x190)
    
    if (ecx_15 != 0)
        void var_104
        sub_54d980(ecx_15, &var_104, 0)
        var_8_1.b = 2
        sub_5b17d0(esi + 0x270, &var_104)
        var_8_1.b = 0
        int32_t* var_100
        
        if (var_100 != 0)
            bool cond:4_1 = var_100[1] != 1
            var_100[1]
            var_100[1] -= 1
            
            if (not(cond:4_1))
                (*(*var_100 + 4))(eax_2)
                bool cond:6_1 = var_100[2] != 1
                var_100[2]
                var_100[2] -= 1
                
                if (not(cond:6_1))
                    (*(*var_100 + 8))()

void* var_248_9 = 0xffffffff
int32_t var_24c_7 = 0
void** eax_30 = data_bac510 + 0xa47c48
int16_t var_44 = 0
int32_t var_30 = 7
int32_t var_34 = 0
sub_52e3c0(&var_44, eax_30, var_24c_7, var_248_9)
var_8_1.b = 3
*(esi + 0x2d0) = 2
void var_128
int32_t* var_124

if (var_34 == 0)
    int32_t eax_47 = data_4ebe2ac
    int32_t* eax_48 = data_4ebe2b0
    
    if (eax_48 != 0)
        eax_48[1]
        eax_48[1] += 1
    
    operator new(esi + 0x2d0, eax_47, eax_48)
    int32_t eax_50 = data_4ebe2ec
    int32_t* eax_51 = data_4ebe2f0
    
    if (eax_51 != 0)
        eax_51[1]
        eax_51[1] += 1
    
    operator new[](esi + 0x2d0, eax_50, eax_51)
else
    int32_t eax_31 = data_4ebe2bc
    int32_t* eax_32 = data_4ebe2c0
    
    if (eax_32 != 0)
        eax_32[1]
        eax_32[1] += 1
    
    operator new(esi + 0x2d0, eax_31, eax_32)
    int32_t eax_34 = data_4ebe2ec
    int32_t* eax_35 = data_4ebe2f0
    
    if (eax_35 != 0)
        eax_35[1]
        eax_35[1] += 1
    
    operator new[](esi + 0x2d0, eax_34, eax_35)
    int32_t var_48_1 = 7
    void* var_248_12 = 0xffffffff
    int32_t var_24c_10 = 0
    int16_t var_5c = 0
    int32_t var_4c_1 = 0
    var_8_1.b = 4
    var_8_1.b = 5
    sub_54d190(esi + 0x2c8, 
        sub_6281e0(sub_52e3c0(&var_5c, &var_44, var_24c_10, var_248_12), &var_5c, &var_128, 0, 0))
    var_8_1.b = 4
    
    if (var_124 != 0)
        bool cond:5_1 = var_124[1] != 1
        var_124[1]
        var_124[1] -= 1
        
        if (not(cond:5_1))
            (*(*var_124 + 4))(eax_2)
            bool cond:7_1 = var_124[2] != 1
            var_124[2]
            var_124[2] -= 1
            
            if (not(cond:7_1))
                (*(*var_124 + 8))()
    
    int32_t* ecx_36 = *(esi + 0x2c8)
    
    if (ecx_36 != 0)
        sub_54d980(ecx_36, &var_114, 0)
        var_8_1.b = 6
        sub_5b17d0(esi + 0x3a8, &var_114)
        var_8_1.b = 4
        
        if (var_110 != 0)
            bool cond:8_1 = var_110[1] != 1
            var_110[1]
            var_110[1] -= 1
            
            if (not(cond:8_1))
                (*(*var_110 + 4))(eax_2)
                bool cond:10_1 = var_110[2] != 1
                var_110[2]
                var_110[2] -= 1
                
                if (not(cond:10_1))
                    (*(*var_110 + 8))()
    
    var_8_1.b = 3
    
    if (var_48_1 u>= 8)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 7
    int32_t var_4c_2 = 0
    var_5c = 0

int32_t i_1 = 0
void var_3c4
void var_344
void var_2c4
void var_234
int32_t var_1b4
int32_t* var_118
void var_f4
int16_t var_2c

if (*(esi + 0x108) s> 0)
    void* var_10c_1 = nullptr
    int32_t i
    
    do
        void* eax_53 = data_bac510
        int32_t edi_5 = *(eax_53 + 0xa47bf8)
        int32_t edx_11 = *(eax_53 + 0xa47bf4)
        int32_t ecx_45 = *(eax_53 + 0xa47c00)
        int32_t edi_6 = *(eax_53 + 0xa2ebbc)
        int32_t ecx_46 = *(eax_53 + 0xa47bf0)
        var_118 = *(eax_53 + 0xa2ebb8)
        int32_t edi_8 = *(eax_53 + 0xa2ebc0)
        void* esi_3 = var_10c_1 + *(esi + 0x10c)
        *(esi_3 + 0x68) = *(eax_53 + 0xa47bfc)
        *(esi_3 + 0x4c) = ecx_46
        *(esi_3 + 0x6c) = ecx_45
        *(esi_3 + 0x64) = edi_5
        *(esi_3 + 0x74) = var_118
        *(esi_3 + 0x84) = edi_5
        *(esi_3 + 0x50) = edx_11
        *(esi_3 + 0x54) = 0
        *(esi_3 + 0x58) = 0
        *(esi_3 + 0x5c) = 0
        *(esi_3 + 0x60) = 0
        *(esi_3 + 0x70) = edi_8
        *(esi_3 + 0x78) = edi_6
        *(esi_3 + 0x7c) = 0
        *(esi_3 + 0x80) = 0
        __builtin_memset(esi_3 + 0x88, 0, 0x18)
        sub_5dbef0(esi_3 + 0x4c)
        int32_t var_18_1 = 7
        void* var_248_20 = nullptr
        void* const var_24c_15 = &data_ad7c90
        int32_t var_1c_1 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_24c_15, var_248_20)
        var_8_1.b = 7
        int32_t var_138_1 = 0
        int32_t var_78_1 = 0
        int32_t var_1b8_1 = 0
        __builtin_memcpy(&var_2c4, &var_1b4, 0x80)
        __builtin_memcpy(&var_344, &var_f4, 0x80)
        int32_t var_3c8_1 = 0
        int32_t var_3cc_1 = 0xffffffff
        char var_3d0_1 = 0
        char var_3d4_1 = 0
        char var_3d8_1 = 0
        char var_3dc_1 = 1
        int16_t* var_3e0_1 = &var_2c
        __builtin_memcpy(&var_3c4, &var_234, 0x80)
        sub_5e4840(var_10c_1 + 0x21c + *(var_f8 + 0x10c), var_3e0_1, var_3dc_1, var_3d8_1, 
            var_3d4_1, var_3d0_1, var_3cc_1, var_3c8_1, var_3c4)
        var_8_1.b = 3
        
        if (var_18_1 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_2 = 7
        void* var_248_22 = nullptr
        void* const var_24c_16 = &data_ad7c90
        int32_t var_1c_2 = 0
        var_2c = 0
        sub_52e720(&var_2c, var_24c_16, var_248_22)
        var_8_1.b = 8
        int32_t var_1b8_2 = 0
        int32_t var_138_2 = 0
        int32_t var_78_2 = 0
        __builtin_memcpy(&var_2c4, &var_234, 0x80)
        __builtin_memcpy(&var_344, &var_1b4, 0x80)
        int32_t var_3c8_2 = 0
        int32_t var_3cc_2 = 0xffffffff
        char var_3d0_2 = 0
        __builtin_memcpy(&var_3c4, &var_f4, 0x80)
        esi = var_f8
        sub_5e4840(var_10c_1 + 0x1818 + *(esi + 0x10c), &var_2c, 1, 0, 0, var_3d0_2, var_3cc_2, 
            var_3c8_2)
        var_8_1.b = 3
        
        if (var_18_2 u>= 8)
            j__free(var_2c.d)
        
        int32_t var_18_3 = 7
        var_2c = 0
        i = i_1 + 1
        int32_t var_1c_3 = 0
        i_1 = i
        var_10c_1 += 0x2e60
    while (i s< *(esi + 0x108))

int32_t var_18_4 = 7
void* var_248_24 = nullptr
void* const var_24c_17 = &data_ad7c90
int32_t var_1c_4 = 0
var_2c = 0
sub_52e720(&var_2c, var_24c_17, var_248_24)
var_8_1.b = 9
int32_t var_1b8_3 = 0
int32_t var_138_3 = 0
int32_t var_78_3 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_3 = 0
int32_t var_3cc_3 = 0xffffffff
char var_3d0_3 = 0
char var_3d4_3 = 0
char var_3d8_3 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(esi + 0x418, &var_2c, 1, var_3d8_3, var_3d4_3, var_3d0_3, var_3cc_3, var_3c8_3, var_3c4)
var_8_1.b = 3

if (var_18_4 u>= 8)
    j__free(var_2c.d)

int32_t var_18_5 = 7
var_2c = 0
void* eax_63 = data_bac510
int32_t var_1c_5 = 0
int16_t var_25c

if (*(eax_63 + 0xa47c84) != 0)
    void* const var_260_1 = 0xffffffff
    int32_t var_264_1 = 0
    int32_t var_248_26 = 7
    int32_t var_24c_18 = 0
    void** var_268_1 = eax_63 + 0xa47c74
    var_25c = 0
    sub_52e3c0(&var_25c, var_268_1, var_264_1, var_260_1)
    sub_5ea6c0(esi + 0x418, var_25c)
    void* esi_4 = data_bac510
    var_1b4 = 0xffffffff
    int32_t var_1b0_1 = 0
    int64_t xmm0_1 = var_1b4.q
    *(var_f8 + 0x7a4) = *(esi_4 + 0x17360)
    *(var_f8 + 0x7a8) = *(esi_4 + 0xa2ebb0)
    *(var_f8 + 0x774) = 1
    int32_t edx_12 = *(esi_4 + 0xa47ca0)
    *(esi + 0x6c4) = *(esi_4 + 0xa47c9c)
    *(esi + 0x6cc) = 0
    *(esi + 0x6c8) = edx_12
    __builtin_memcpy(&var_f4, esi + 0x4c4, 0x80)
    int32_t var_138_4 = 2
    *(&var_f4 + (var_78_3 << 2)) = xmm0_1
    int32_t var_78_4 = var_78_3 + 2
    __builtin_memcpy(var_f8 + 0x6d0, &var_f4, 0x80)
    *(var_f8 + 0x750) = 1

int32_t var_18_6 = 7
void* var_248_27 = nullptr
void* const var_24c_19 = &data_ad7c90
int32_t var_1c_6 = 0
var_2c = 0
sub_52e720(&var_2c, var_24c_19, var_248_27)
var_8_1.b = 0xa
int32_t var_1b8_4 = 0
int32_t var_138_5 = 0
int32_t var_78_5 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_4 = 0
int32_t var_3cc_4 = 0xffffffff
char var_3d0_4 = 0
char var_3d4_4 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x1a14, &var_2c, 1, 0, var_3d4_4, var_3d0_4, var_3cc_4, var_3c8_4)
var_8_1.b = 3

if (var_18_6 u>= 8)
    j__free(var_2c.d)

int32_t var_18_7 = 7
var_2c = 0
void* eax_67 = data_bac510
int32_t var_1c_7 = 0

if (*(eax_67 + 0xa47cb4) != 0)
    void* const var_260_2 = 0xffffffff
    int32_t var_264_2 = 0
    int32_t var_248_29 = 7
    int32_t var_24c_20 = 0
    void** var_268_2 = eax_67 + 0xa47ca4
    var_25c = 0
    sub_52e3c0(&var_25c, var_268_2, var_264_2, var_260_2)
    sub_5ea6c0(var_f8 + 0x1a14, var_25c)
    void* edx_13 = data_bac510
    var_1b4 = 0xffffffff
    int32_t var_1b0_2 = 0
    *(var_f8 + 0x1da0) = *(edx_13 + 0x17360)
    *(var_f8 + 0x1da4) = *(edx_13 + 0xa2ebb0)
    int64_t xmm0_2 = var_1b4.q
    *(var_f8 + 0x1db4) = *(edx_13 + 0xa47cbc) + *(edx_13 + &data_a47bcc)
    *(var_f8 + 0x1de0) = *(edx_13 + 0xa47cc0) + *(edx_13 + 0xa47bd0)
    *(var_f8 + 0x1d70) = 1
    int32_t eax_70 = *(edx_13 + 0xa47cc4)
    *(var_f8 + 0x1cc4) = *(edx_13 + 0xa47cc8)
    *(var_f8 + 0x1cc0) = eax_70
    *(var_f8 + 0x1cc8) = 0
    __builtin_memcpy(&var_f4, var_f8 + 0x1ac0, 0x80)
    int32_t var_138_6 = 2
    *(&var_f4 + (var_78_5 << 2)) = xmm0_2
    int32_t var_78_6 = var_78_5 + 2
    __builtin_memcpy(var_f8 + 0x1ccc, &var_f4, 0x80)

int32_t var_18_8 = 7
void* var_248_30 = nullptr
void* const var_24c_21 = &data_ad7c90
int32_t var_1c_8 = 0
var_2c = 0
sub_52e720(&var_2c, var_24c_21, var_248_30)
var_8_1.b = 0xb
int32_t var_1b8_5 = 0
int32_t var_138_7 = 0
int32_t var_78_7 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_5 = 0
int32_t var_3cc_5 = 0xffffffff
char var_3d0_5 = 0
char var_3d4_5 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x3010, &var_2c, 1, 0, var_3d4_5, var_3d0_5, var_3cc_5, var_3c8_5)
var_8_1.b = 3

if (var_18_8 u>= 8)
    j__free(var_2c.d)

int32_t var_18_9 = 7
var_2c = 0
void* eax_73 = data_bac510
int32_t var_1c_9 = 0

if (*(eax_73 + 0xa47cdc) != 0)
    void* const var_260_3 = 0xffffffff
    int32_t var_264_3 = 0
    int32_t var_248_32 = 7
    int32_t var_24c_22 = 0
    void** var_268_3 = eax_73 + 0xa47ccc
    var_25c = 0
    sub_52e3c0(&var_25c, var_268_3, var_264_3, var_260_3)
    sub_5ea6c0(var_f8 + 0x3010, var_25c)
    void* edx_14 = data_bac510
    var_1b4 = 0xffffffff
    int32_t var_1b0_3 = 0
    *(var_f8 + 0x339c) = *(edx_14 + 0x17360)
    *(var_f8 + 0x33a0) = *(edx_14 + 0xa2ebb0)
    int64_t xmm0_3 = var_1b4.q
    *(var_f8 + 0x33b0) = *(edx_14 + 0xa47ce4) + *(edx_14 + &data_a47bcc)
    *(var_f8 + 0x33dc) = *(edx_14 + 0xa47ce8) + *(edx_14 + 0xa47bd0)
    *(var_f8 + 0x336c) = 1
    int32_t eax_76 = *(edx_14 + &data_a47cec)
    *(var_f8 + 0x32c0) = *(edx_14 + 0xa47cf0)
    *(var_f8 + 0x32bc) = eax_76
    *(var_f8 + 0x32c4) = 0
    __builtin_memcpy(&var_f4, var_f8 + 0x30bc, 0x80)
    int32_t var_138_8 = 2
    *(&var_f4 + (var_78_7 << 2)) = xmm0_3
    int32_t var_78_8 = var_78_7 + 2
    __builtin_memcpy(var_f8 + 0x32c8, &var_f4, 0x80)

int32_t var_18_10 = 7
void* var_248_33 = nullptr
void* const var_24c_23 = &data_ad7c90
int32_t var_1c_10 = 0
var_2c = 0
sub_52e720(&var_2c, var_24c_23, var_248_33)
var_8_1.b = 0xc
int32_t var_1b8_6 = 0
int32_t var_138_9 = 0
int32_t var_78_9 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_6 = 0
int32_t var_3cc_6 = 0xffffffff
char var_3d0_6 = 0
char var_3d4_6 = 0
char var_3d8_6 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x460c, &var_2c, 1, var_3d8_6, var_3d4_6, var_3d0_6, var_3cc_6, var_3c8_6)
var_8_1.b = 3

if (var_18_10 u>= 8)
    j__free(var_2c.d)

int32_t var_18_11 = 7
var_2c = 0
void* eax_80 = data_bac510
int32_t var_1c_11 = 0

if (*(eax_80 + 0xa47d04) != 0)
    void* const var_260_4 = 0xffffffff
    int32_t var_264_4 = 0
    int32_t var_248_35 = 7
    int32_t var_24c_24 = 0
    void** var_268_4 = eax_80 + 0xa47cf4
    var_25c = 0
    sub_52e3c0(&var_25c, var_268_4, var_264_4, var_260_4)
    sub_5ea6c0(var_f8 + 0x460c, var_25c)
    void* esi_10 = data_bac510
    int32_t var_248_36 = 0
    *(var_f8 + 0x4998) = *(esi_10 + 0x17360)
    *(var_f8 + 0x499c) = *(esi_10 + 0xa2ebb0)
    *(var_f8 + 0x49ac) = *(esi_10 + 0xa47d0c) + *(esi_10 + &data_a47bcc)
    *(var_f8 + 0x49d8) = *(esi_10 + 0xa47d10) + *(esi_10 + 0xa47bd0)
    *(var_f8 + 0x4968) = 1
    int32_t edx_17 = *(esi_10 + 0xa47d18)
    int32_t eax_83 = *(esi_10 + 0xa47d14)
    *(var_f8 + 0x48c0) = 0
    *(var_f8 + 0x48b8) = eax_83
    *(var_f8 + 0x48bc) = edx_17
    sub_5f34c0(var_f8 + 0x460c, var_248_36)

sub_52e820(&var_2c, &data_ad7c90)
var_8_1.b = 0xd
int32_t var_1b8_7 = 0
int32_t var_138_10 = 0
int32_t var_78_10 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_7 = 0
int32_t var_3cc_7 = 0xffffffff
char var_3d0_7 = 0
char var_3d4_7 = 0
char var_3d8_7 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x5c08, &var_2c, 1, var_3d8_7, var_3d4_7, var_3d0_7, var_3cc_7, var_3c8_7)
var_8_1.b = 3

if (var_18_11 u>= 8)
    j__free(var_2c.d)

int32_t var_18_12 = 7
var_2c = 0
void* eax_86 = data_bac510
int32_t var_1c_12 = 0

if (*(eax_86 + &data_a47dac) != 0)
    void* const var_260_5 = 0xffffffff
    int32_t var_264_5 = 0
    int32_t var_248_39 = 7
    int32_t var_24c_25 = 0
    var_25c = 0
    sub_52e3c0(&var_25c, eax_86 + 0xa47d9c, var_264_5, var_260_5)
    sub_5ea6c0(var_f8 + 0x5c08, var_25c)
    void* esi_11 = data_bac510
    int32_t var_248_40 = 0
    *(var_f8 + 0x5f94) = *(esi_11 + 0x17360)
    *(var_f8 + 0x5f98) = *(esi_11 + 0xa2ebb0)
    *(var_f8 + 0x5fa8) = *(esi_11 + 0xa47db4) + *(esi_11 + &data_a47bcc)
    *(var_f8 + 0x5fd4) = *(esi_11 + 0xa47db8) + *(esi_11 + 0xa47bd0)
    *(var_f8 + 0x5f64) = 1
    int32_t edx_20 = *(esi_11 + 0xa47dc0)
    int32_t eax_89 = *(esi_11 + 0xa47dbc)
    *(var_f8 + 0x5ebc) = 0
    *(var_f8 + 0x5eb4) = eax_89
    *(var_f8 + 0x5eb8) = edx_20
    sub_5f34c0(var_f8 + 0x5c08, var_248_40)

sub_52e820(&var_2c, &data_ad7c90)
var_8_1.b = 0xe
int32_t var_1b8_8 = 0
int32_t var_138_11 = 0
int32_t var_78_11 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_8 = 0
int32_t var_3cc_8 = 0xffffffff
char var_3d0_8 = 0
char var_3d4_8 = 0
char var_3d8_8 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x7204, &var_2c, 1, var_3d8_8, var_3d4_8, var_3d0_8, var_3cc_8, var_3c8_8)
var_8_1.b = 3

if (var_18_12 u>= 8)
    j__free(var_2c.d)

int32_t var_18_13 = 7
var_2c = 0
void* eax_92 = data_bac510
int32_t var_1c_13 = 0

if (*(eax_92 + 0xa47e04) != 0)
    void* const var_260_6 = 0xffffffff
    int32_t var_264_6 = 0
    int32_t var_248_43 = 7
    int32_t var_24c_26 = 0
    void** var_268_6 = eax_92 + 0xa47df4
    var_25c = 0
    sub_52e3c0(&var_25c, var_268_6, var_264_6, var_260_6)
    sub_5ea6c0(var_f8 + 0x7204, var_25c)
    void* esi_12 = data_bac510
    int32_t var_248_44 = 0
    *(var_f8 + 0x7590) = *(esi_12 + 0x17360)
    *(var_f8 + 0x7594) = *(esi_12 + 0xa2ebb0)
    *(var_f8 + 0x75a4) = *(esi_12 + &data_a47bcc) + *(esi_12 + &data_a47e0c)
    *(var_f8 + 0x75d0) = *(esi_12 + 0xa47bd0) + *(esi_12 + 0xa47e10)
    *(var_f8 + 0x7560) = 1
    int32_t edx_23 = *(esi_12 + 0xa47e18)
    int32_t eax_95 = *(esi_12 + 0xa47e14)
    *(var_f8 + 0x74b8) = 0
    *(var_f8 + 0x74b0) = eax_95
    *(var_f8 + 0x74b4) = edx_23
    sub_5f34c0(var_f8 + 0x7204, var_248_44)

sub_52e820(&var_2c, &data_ad7c90)
var_8_1.b = 0xf
int32_t var_1b8_9 = 0
int32_t var_138_12 = 0
int32_t var_78_12 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_9 = 0
int32_t var_3cc_9 = 0xffffffff
char var_3d0_9 = 0
char var_3d4_9 = 0
char var_3d8_9 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x8800, &var_2c, 1, var_3d8_9, var_3d4_9, var_3d0_9, var_3cc_9, var_3c8_9)
var_8_1.b = 3

if (var_18_13 u>= 8)
    j__free(var_2c.d)

int32_t var_18_14 = 7
var_2c = 0
void* eax_98 = data_bac510
int32_t var_1c_14 = 0

if (*(eax_98 + 0xa47e5c) != 0)
    void* const var_260_7 = 0xffffffff
    int32_t var_264_7 = 0
    int32_t var_248_47 = 7
    int32_t var_24c_27 = 0
    void** var_268_7 = eax_98 + 0xa47e4c
    var_25c = 0
    sub_52e3c0(&var_25c, var_268_7, var_264_7, var_260_7)
    sub_5ea6c0(var_f8 + 0x8800, var_25c)
    void* esi_13 = data_bac510
    int32_t var_248_48 = 0
    *(var_f8 + 0x8b8c) = *(esi_13 + 0x17360)
    *(var_f8 + 0x8b90) = *(esi_13 + 0xa2ebb0)
    *(var_f8 + 0x8ba0) = *(esi_13 + &data_a47bcc) + *(esi_13 + 0xa47e64)
    *(var_f8 + 0x8bcc) = *(esi_13 + 0xa47bd0) + *(esi_13 + 0xa47e68)
    *(var_f8 + 0x8b5c) = 1
    int32_t edx_26 = *(esi_13 + 0xa47e70)
    int32_t eax_101 = *(esi_13 + &data_a47e6c)
    *(var_f8 + 0x8ab4) = 0
    *(var_f8 + 0x8aac) = eax_101
    *(var_f8 + 0x8ab0) = edx_26
    sub_5f34c0(var_f8 + 0x8800, var_248_48)

sub_52e820(&var_2c, &data_ad7c90)
var_8_1.b = 0x10
int32_t var_1b8_10 = 0
int32_t var_138_13 = 0
int32_t var_78_13 = 0
__builtin_memcpy(&var_2c4, &var_234, 0x80)
__builtin_memcpy(&var_344, &var_1b4, 0x80)
int32_t var_3c8_10 = 0
int32_t var_3cc_10 = 0xffffffff
char var_3d0_10 = 0
char var_3d4_10 = 0
__builtin_memcpy(&var_3c4, &var_f4, 0x80)
sub_5e4840(var_f8 + 0x9dfc, &var_2c, 1, 0, var_3d4_10, var_3d0_10, var_3cc_10, var_3c8_10)
var_8_1.b = 3

if (var_18_14 u>= 8)
    j__free(var_2c.d)

void* edx_28 = data_bac510
void* eax_104 = nullptr
int32_t var_18_15 = 7
int32_t var_1c_15 = 0
var_2c = 0
void* esi_14

if (*(edx_28 + 0xa47eb4) == 0)
    esi_14 = var_f8
else
    void* const var_260_8 = 0xffffffff
    int32_t var_264_8 = 0
    int32_t var_248_51 = 7
    int32_t var_24c_28 = 0
    var_25c = 0
    sub_52e3c0(&var_25c, edx_28 + 0xa47ea4, var_264_8, var_260_8)
    sub_5ea6c0(var_f8 + 0x9dfc, var_25c)
    void* edi_23 = data_bac510
    esi_14 = var_f8
    int32_t var_248_52 = 0
    *(esi_14 + 0xa188) = *(edi_23 + 0x17360)
    *(esi_14 + 0xa18c) = *(edi_23 + 0xa2ebb0)
    *(esi_14 + 0xa19c) = *(edi_23 + &data_a47bcc) + *(edi_23 + 0xa47ebc)
    *(esi_14 + 0xa1c8) = *(edi_23 + 0xa47bd0) + *(edi_23 + 0xa47ec0)
    *(esi_14 + 0xa158) = 1
    int32_t edx_27 = *(edi_23 + 0xa47ec8)
    int32_t eax_112 = *(edi_23 + 0xa47ec4)
    *(esi_14 + 0xa0b0) = 0
    *(esi_14 + 0xa0a8) = eax_112
    *(esi_14 + 0xa0ac) = edx_27
    eax_104 = sub_5f34c0(esi_14 + 0x9dfc, var_248_52)
    edx_28 = data_bac510

if (*(edx_28 + 0xa47f0c) != 0)
    var_8_1.b = 0x11
    eax_104 = sub_54d190(esi_14 + 0x400, sub_6281e0(eax_104, edx_28 + 0xa47efc, &var_128, 0, 0))
    var_8_1.b = 3
    
    if (var_124 != 0)
        eax_104 = &var_124[1]
        bool cond:11_1 = *eax_104 != 1
        *eax_104
        *eax_104 -= 1
        
        if (not(cond:11_1))
            (*(*var_124 + 4))(eax_2)
            eax_104 = &var_124[2]
            bool cond:13_1 = *eax_104 != 1
            *eax_104
            *eax_104 -= 1
            
            if (not(cond:13_1))
                eax_104 = (*(*var_124 + 8))()
    
    edx_28 = data_bac510

if (*(edx_28 + 0xa47f24) != 0)
    var_8_1.b = 0x12
    eax_104 = sub_54d190(esi_14 + 0x408, sub_6281e0(eax_104, edx_28 + 0xa47f14, &var_114, 0, 0))
    var_8_1.b = 3
    
    if (var_110 != 0)
        eax_104 = &var_110[1]
        bool cond:12_1 = *eax_104 != 1
        *eax_104
        *eax_104 -= 1
        
        if (not(cond:12_1))
            (*(*var_110 + 4))(eax_2)
            eax_104 = &var_110[2]
            bool cond:15_1 = *eax_104 != 1
            *eax_104
            *eax_104 -= 1
            
            if (not(cond:15_1))
                eax_104 = (*(*var_110 + 8))()
    
    edx_28 = data_bac510

if (*(edx_28 + 0xa47f3c) != 0)
    var_8_1.b = 0x13
    void var_11c
    sub_54d190(esi_14 + 0x410, sub_6281e0(eax_104, edx_28 + &data_a47f2c, &var_11c, 0, 0))
    var_8_1.b = 3
    
    if (var_118 != 0)
        bool cond:14_1 = var_118[1] != 1
        var_118[1]
        var_118[1] -= 1
        
        if (not(cond:14_1))
            (*(*var_118 + 4))(eax_2)
            int32_t edi_24 = var_118[2]
            var_118[2] -= 1
            
            if (edi_24 == 1)
                (*(*var_118 + 8))()

sub_5d2ef0(esi_14)
void* eax_124 = data_bac510

if (*(eax_124 + 0x10bd8) != 1)
    int32_t eax_126 = sub_5ef9c0(esi_14 + 0x418, 0)
    *(esi_14 + 0x14c) = *(data_bac510 + 0xa47c98) - eax_126
else
    *(esi_14 + 0x14c) = *(eax_124 + &data_a47c8c)

sub_5d3f10(esi_14)
sub_5d4120(esi_14)
sub_5d4120(esi_14)
sub_5d4230(esi_14)
int32_t eax_127 = *(esi_14 + 0x120)
*(esi_14 + 0x15c) = 0
*(esi_14 + 0x16c) = 0
*(esi_14 + 0x184) = 0
*(esi_14 + 0x188) = 0
*(esi_14 + 0x18c) = 0
*(esi_14 + 0x140) = eax_127

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t result = 0
int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0

if (var_60 u>= 8)
    result = j__free(var_74.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
