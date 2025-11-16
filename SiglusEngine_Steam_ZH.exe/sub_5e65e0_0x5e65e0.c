// 函数: sub_5e65e0
// 地址: 0x5e65e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bcaeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t var_138 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_10c = edi
int16_t var_30

if (*(edi + 0x1ac) == 0xa)
    void* var_13c_1 = 0x4a
    int32_t var_1c_1 = 7
    void* const var_140_1 = &data_af3080
    int32_t var_20_1 = 0
    var_30 = 0
    sub_52e720(&var_30, var_140_1, var_13c_1)
    int32_t var_8_1 = 0
    sub_684160(data_bac424, 3, &var_30)
    int32_t var_8_2 = 0xffffffff
    
    if (var_1c_1 u>= 8)
        j__free(var_30.d)

int32_t esi = *(edi + 0x1ac)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(ecx_3 + arg2[3]) = esi
int32_t eax_7 = arg2[3] + 4
arg2[3] = eax_7
int32_t esi_1 = *(edi + 0x1b0)
sub_5979b0(arg2, eax_7 + 4)
int32_t* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

*(ecx_5 + arg2[3]) = esi_1
int32_t eax_11 = arg2[3] + 4
arg2[3] = eax_11
int32_t esi_2 = *(edi + 0x1b4)
sub_5979b0(arg2, eax_11 + 4)
int32_t* ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = nullptr

*(ecx_7 + arg2[3]) = esi_2
int32_t eax_15 = arg2[3] + 4
arg2[3] = eax_15
int32_t esi_3 = *(edi + 0x1b8)
sub_5979b0(arg2, eax_15 + 4)
int32_t* ecx_9 = *arg2

if (ecx_9 == arg2[1])
    ecx_9 = nullptr

*(ecx_9 + arg2[3]) = esi_3
int32_t eax_19 = arg2[3] + 4
arg2[3] = eax_19
int128_t xmm0 = *(edi + 0x1bc)
int32_t esi_4 = *(edi + 0x1cc)
sub_5979b0(arg2, eax_19 + 0x14)
int32_t ecx_11 = *arg2

if (ecx_11 == arg2[1])
    ecx_11 = 0

int128_t* eax_21 = arg2[3]
*(eax_21 + ecx_11) = xmm0
*(eax_21 + ecx_11 + 0x10) = esi_4
int32_t eax_23 = arg2[3] + 0x14
arg2[3] = eax_23
int128_t xmm0_2 = *(edi + 0x1d0)
int128_t xmm0_3 = *(edi + 0x1e0)
sub_5979b0(arg2, eax_23 + 0x20)
int32_t ecx_13 = *arg2

if (ecx_13 == arg2[1])
    ecx_13 = 0

int128_t* eax_25 = arg2[3]
*(eax_25 + ecx_13) = xmm0_2
*(eax_25 + ecx_13 + 0x10) = xmm0_3
int32_t eax_27 = arg2[3] + 0x20
arg2[3] = eax_27
int128_t xmm0_6 = *(edi + 0x1f0)
int32_t esi_5 = *(edi + 0x208)
int128_t var_f8_1
var_f8_1:8.q = *(edi + 0x200)
sub_5979b0(arg2, eax_27 + 0x1c)
int32_t eax_29 = *arg2

if (eax_29 == arg2[1])
    eax_29 = 0

int128_t* ecx_15 = arg2[3]
*(ecx_15 + eax_29) = xmm0_6
*(ecx_15 + eax_29 + 0x10) = var_f8_1:8.q
*(ecx_15 + eax_29 + 0x18) = esi_5
arg2[3] += 0x1c
int128_t var_150
char* var_140

if (*(edi + 0x1ac) == 4)
    int128_t xmm0_10 = *(edi + 0x20c)
    int128_t xmm0_11 = *(edi + 0x21c)
    int128_t xmm0_12 = *(edi + 0x22c)
    int128_t xmm0_13 = *(edi + 0x23c)
    var_150 = *(edi + 0x24c)
    var_140.q = *(edi + 0x25c)
    sub_5f1820(xmm0_10, xmm0_11, xmm0_12, xmm0_13, var_150, var_140)

int32_t esi_6 = *(edi + 0x264)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_18 = *arg2

if (ecx_18 == arg2[1])
    ecx_18 = nullptr

*(ecx_18 + arg2[3]) = esi_6
int32_t eax_34 = arg2[3] + 4
arg2[3] = eax_34
int32_t esi_7 = *(edi + 0x268)
sub_5979b0(arg2, eax_34 + 4)
int32_t* ecx_20 = *arg2

if (ecx_20 == arg2[1])
    ecx_20 = nullptr

*(ecx_20 + arg2[3]) = esi_7
arg2[3] += 4

if (*(edi + 0x1ac) == 0xc)
    int128_t xmm0_16 = *(edi + 0x26c)
    int128_t xmm0_17 = *(edi + 0x27c)
    var_150 = *(edi + 0x28c)
    var_140.q = *(edi + 0x29c)
    sub_5f1870(arg2, xmm0_16, xmm0_17, var_150, var_140)

int32_t eax_38 = arg2[3] + 4

if (*(edi + 0x334) != 0)
    sub_5979b0(arg2, eax_38)
    int32_t* ecx_24 = *arg2
    
    if (ecx_24 == arg2[1])
        ecx_24 = nullptr
    
    *(ecx_24 + arg2[3]) = 1
    int32_t eax_42 = arg2[3] + 4
    arg2[3] = eax_42
    void var_e8
    __builtin_memcpy(&var_e8, edi + 0x2a4, 0xb8)
    sub_5979b0(arg2, eax_42 + 0xb8)
    int32_t eax_44 = *arg2
    
    if (eax_44 == arg2[1])
        eax_44 = 0
    
    __builtin_memcpy(arg2[3] + eax_44, &var_e8, 0xb8)
    arg2[3] += 0xb8
    edi = var_10c
else
    sub_5979b0(arg2, eax_38)
    int32_t* ecx_23 = *arg2
    
    if (ecx_23 == arg2[1])
        ecx_23 = nullptr
    
    *(ecx_23 + arg2[3]) = 0
    arg2[3] += 4

int32_t esi_9 = *(edi + 0x35c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_27 = *arg2

if (ecx_27 == arg2[1])
    ecx_27 = nullptr

*(ecx_27 + arg2[3]) = esi_9
int32_t eax_49 = arg2[3] + 4
arg2[3] = eax_49
int128_t xmm0_20 = *(edi + 0x360)
int32_t esi_10 = *(edi + 0x388)
int128_t xmm0_21 = *(edi + 0x370)
var_f8_1:8.q = *(edi + 0x380)
sub_5979b0(arg2, eax_49 + 0x2c)
int32_t eax_51 = *arg2

if (eax_51 == arg2[1])
    eax_51 = 0

int128_t* ecx_30 = arg2[3] + eax_51
*ecx_30 = xmm0_20
ecx_30[1] = xmm0_21
ecx_30[2].q = var_f8_1:8.q
*(ecx_30 + 0x28) = esi_10
int32_t eax_53 = arg2[3] + 0x2c
arg2[3] = eax_53
int32_t esi_11 = *(edi + 0x38c)
int32_t edi_3 = *(edi + 0x390)
sub_5979b0(arg2, eax_53 + 8)
int32_t* ecx_32 = *arg2

if (ecx_32 == arg2[1])
    ecx_32 = nullptr

int32_t eax_55 = arg2[3]
*(ecx_32 + eax_55) = esi_11
*(ecx_32 + eax_55 + 4) = edi_3
void* edi_4 = var_10c
int32_t eax_57 = arg2[3] + 8
arg2[3] = eax_57
int32_t esi_12 = *(edi_4 + 0x394)
sub_5979b0(arg2, eax_57 + 4)
int32_t* ecx_34 = *arg2

if (ecx_34 == arg2[1])
    ecx_34 = nullptr

*(ecx_34 + arg2[3]) = esi_12
int32_t eax_61 = arg2[3] + 4
arg2[3] = eax_61
int32_t esi_13 = *(edi_4 + 0x398)
sub_5979b0(arg2, eax_61 + 4)
int32_t* ecx_36 = *arg2

if (ecx_36 == arg2[1])
    ecx_36 = nullptr

*(ecx_36 + arg2[3]) = esi_13
int32_t eax_65 = arg2[3] + 4
arg2[3] = eax_65
int32_t esi_14 = *(edi_4 + 0x3bc)
sub_5979b0(arg2, eax_65 + 4)
int32_t* ecx_38 = *arg2

if (ecx_38 == arg2[1])
    ecx_38 = nullptr

*(ecx_38 + arg2[3]) = esi_14
int32_t eax_69 = arg2[3] + 4
arg2[3] = eax_69

if (*(edi_4 + 0x3bc) == 0xffffffff)
    int32_t esi_16 = *(edi_4 + 0x3a0)
    sub_5979b0(arg2, eax_69 + 4)
    int32_t* ecx_42 = *arg2
    
    if (ecx_42 == arg2[1])
        ecx_42 = nullptr
    
    *(ecx_42 + arg2[3]) = esi_16
    arg2[3] += 4
else
    int128_t xmm0_26 = *(edi_4 + 0x39c)
    int32_t esi_15 = *(edi_4 + 0x3c4)
    int128_t xmm0_27 = *(edi_4 + 0x3ac)
    var_f8_1:8.q = *(edi_4 + 0x3bc)
    sub_5979b0(arg2, eax_69 + 0x2c)
    int32_t eax_71 = *arg2
    
    if (eax_71 == arg2[1])
        eax_71 = 0
    
    int128_t* ecx_41 = arg2[3] + eax_71
    *ecx_41 = xmm0_26
    ecx_41[1] = xmm0_27
    ecx_41[2].q = var_f8_1:8.q
    *(ecx_41 + 0x28) = esi_15
    arg2[3] += 0x2c

int32_t esi_17 = *(edi_4 + 0x3e8)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_44 = *arg2

if (ecx_44 == arg2[1])
    ecx_44 = nullptr

*(ecx_44 + arg2[3]) = esi_17
int32_t eax_78 = arg2[3] + 4
arg2[3] = eax_78

if (*(edi_4 + 0x3e8) == 0xffffffff)
    int32_t esi_19 = *(edi_4 + 0x3cc)
    sub_5979b0(arg2, eax_78 + 4)
    int32_t* ecx_48 = *arg2
    
    if (ecx_48 == arg2[1])
        ecx_48 = nullptr
    
    *(ecx_48 + arg2[3]) = esi_19
    arg2[3] += 4
else
    int128_t xmm0_32 = *(edi_4 + 0x3c8)
    int32_t esi_18 = *(edi_4 + 0x3f0)
    int128_t xmm0_33 = *(edi_4 + 0x3d8)
    var_f8_1:8.q = *(edi_4 + 0x3e8)
    sub_5979b0(arg2, eax_78 + 0x2c)
    int32_t eax_80 = *arg2
    
    if (eax_80 == arg2[1])
        eax_80 = 0
    
    int128_t* ecx_47 = arg2[3] + eax_80
    *ecx_47 = xmm0_32
    ecx_47[1] = xmm0_33
    ecx_47[2].q = var_f8_1:8.q
    *(ecx_47 + 0x28) = esi_18
    arg2[3] += 0x2c

int32_t esi_20 = *(edi_4 + 0x414)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_50 = *arg2

if (ecx_50 == arg2[1])
    ecx_50 = nullptr

*(ecx_50 + arg2[3]) = esi_20
int32_t eax_87 = arg2[3] + 4
arg2[3] = eax_87

if (*(edi_4 + 0x414) == 0xffffffff)
    int32_t esi_22 = *(edi_4 + 0x3f8)
    sub_5979b0(arg2, eax_87 + 4)
    int32_t* ecx_54 = *arg2
    
    if (ecx_54 == arg2[1])
        ecx_54 = nullptr
    
    *(ecx_54 + arg2[3]) = esi_22
    arg2[3] += 4
else
    int128_t xmm0_38 = *(edi_4 + 0x3f4)
    int32_t esi_21 = *(edi_4 + 0x41c)
    int128_t xmm0_39 = *(edi_4 + 0x404)
    var_f8_1:8.q = *(edi_4 + 0x414)
    sub_5979b0(arg2, eax_87 + 0x2c)
    int32_t eax_89 = *arg2
    
    if (eax_89 == arg2[1])
        eax_89 = 0
    
    int128_t* ecx_53 = arg2[3] + eax_89
    *ecx_53 = xmm0_38
    ecx_53[1] = xmm0_39
    ecx_53[2].q = var_f8_1:8.q
    *(ecx_53 + 0x28) = esi_21
    arg2[3] += 0x2c

int32_t esi_23 = *(edi_4 + 0x440)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_56 = *arg2

if (ecx_56 == arg2[1])
    ecx_56 = nullptr

*(ecx_56 + arg2[3]) = esi_23
int32_t eax_96 = arg2[3] + 4
arg2[3] = eax_96

if (*(edi_4 + 0x440) == 0xffffffff)
    int32_t esi_25 = *(edi_4 + 0x424)
    sub_5979b0(arg2, eax_96 + 4)
    int32_t* ecx_60 = *arg2
    
    if (ecx_60 == arg2[1])
        ecx_60 = nullptr
    
    *(ecx_60 + arg2[3]) = esi_25
    arg2[3] += 4
else
    int128_t xmm0_44 = *(edi_4 + 0x420)
    int32_t esi_24 = *(edi_4 + 0x448)
    int128_t xmm0_45 = *(edi_4 + 0x430)
    var_f8_1:8.q = *(edi_4 + 0x440)
    sub_5979b0(arg2, eax_96 + 0x2c)
    int32_t eax_98 = *arg2
    
    if (eax_98 == arg2[1])
        eax_98 = 0
    
    int128_t* ecx_59 = arg2[3] + eax_98
    *ecx_59 = xmm0_44
    ecx_59[1] = xmm0_45
    ecx_59[2].q = var_f8_1:8.q
    *(ecx_59 + 0x28) = esi_24
    arg2[3] += 0x2c

int32_t esi_26 = *(edi_4 + 0x46c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_62 = *arg2

if (ecx_62 == arg2[1])
    ecx_62 = nullptr

*(ecx_62 + arg2[3]) = esi_26
int32_t eax_105 = arg2[3] + 4
arg2[3] = eax_105

if (*(edi_4 + 0x46c) == 0xffffffff)
    int32_t esi_28 = *(edi_4 + 0x450)
    sub_5979b0(arg2, eax_105 + 4)
    int32_t* ecx_66 = *arg2
    
    if (ecx_66 == arg2[1])
        ecx_66 = nullptr
    
    *(ecx_66 + arg2[3]) = esi_28
    arg2[3] += 4
else
    int128_t xmm0_50 = *(edi_4 + 0x44c)
    int32_t esi_27 = *(edi_4 + 0x474)
    int128_t xmm0_51 = *(edi_4 + 0x45c)
    var_f8_1:8.q = *(edi_4 + 0x46c)
    sub_5979b0(arg2, eax_105 + 0x2c)
    int32_t eax_107 = *arg2
    
    if (eax_107 == arg2[1])
        eax_107 = 0
    
    int128_t* ecx_65 = arg2[3] + eax_107
    *ecx_65 = xmm0_50
    ecx_65[1] = xmm0_51
    ecx_65[2].q = var_f8_1:8.q
    *(ecx_65 + 0x28) = esi_27
    arg2[3] += 0x2c

int32_t esi_29 = *(edi_4 + 0x498)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_68 = *arg2

if (ecx_68 == arg2[1])
    ecx_68 = nullptr

*(ecx_68 + arg2[3]) = esi_29
int32_t eax_114 = arg2[3] + 4
arg2[3] = eax_114

if (*(edi_4 + 0x498) == 0xffffffff)
    int32_t esi_31 = *(edi_4 + 0x47c)
    sub_5979b0(arg2, eax_114 + 4)
    int32_t* ecx_72 = *arg2
    
    if (ecx_72 == arg2[1])
        ecx_72 = nullptr
    
    *(ecx_72 + arg2[3]) = esi_31
    arg2[3] += 4
else
    int128_t xmm0_56 = *(edi_4 + 0x478)
    int32_t esi_30 = *(edi_4 + 0x4a0)
    int128_t xmm0_57 = *(edi_4 + 0x488)
    var_f8_1:8.q = *(edi_4 + 0x498)
    sub_5979b0(arg2, eax_114 + 0x2c)
    int32_t eax_116 = *arg2
    
    if (eax_116 == arg2[1])
        eax_116 = 0
    
    int128_t* ecx_71 = arg2[3] + eax_116
    *ecx_71 = xmm0_56
    ecx_71[1] = xmm0_57
    ecx_71[2].q = var_f8_1:8.q
    *(ecx_71 + 0x28) = esi_30
    arg2[3] += 0x2c

int32_t esi_32 = *(edi_4 + 0x4c4)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_74 = *arg2

if (ecx_74 == arg2[1])
    ecx_74 = nullptr

*(ecx_74 + arg2[3]) = esi_32
int32_t eax_123 = arg2[3] + 4
arg2[3] = eax_123

if (*(edi_4 + 0x4c4) == 0xffffffff)
    int32_t esi_34 = *(edi_4 + 0x4a8)
    sub_5979b0(arg2, eax_123 + 4)
    int32_t* ecx_78 = *arg2
    
    if (ecx_78 == arg2[1])
        ecx_78 = nullptr
    
    *(ecx_78 + arg2[3]) = esi_34
    arg2[3] += 4
else
    int128_t xmm0_62 = *(edi_4 + 0x4a4)
    int32_t esi_33 = *(edi_4 + 0x4cc)
    int128_t xmm0_63 = *(edi_4 + 0x4b4)
    var_f8_1:8.q = *(edi_4 + 0x4c4)
    sub_5979b0(arg2, eax_123 + 0x2c)
    int32_t eax_125 = *arg2
    
    if (eax_125 == arg2[1])
        eax_125 = 0
    
    int128_t* ecx_77 = arg2[3] + eax_125
    *ecx_77 = xmm0_62
    ecx_77[1] = xmm0_63
    ecx_77[2].q = var_f8_1:8.q
    *(ecx_77 + 0x28) = esi_33
    arg2[3] += 0x2c

int32_t esi_35 = *(edi_4 + 0x4f0)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_80 = *arg2

if (ecx_80 == arg2[1])
    ecx_80 = nullptr

*(ecx_80 + arg2[3]) = esi_35
int32_t eax_132 = arg2[3] + 4
arg2[3] = eax_132

if (*(edi_4 + 0x4f0) == 0xffffffff)
    int32_t esi_37 = *(edi_4 + 0x4d4)
    sub_5979b0(arg2, eax_132 + 4)
    int32_t* ecx_84 = *arg2
    
    if (ecx_84 == arg2[1])
        ecx_84 = nullptr
    
    *(ecx_84 + arg2[3]) = esi_37
    arg2[3] += 4
else
    int128_t xmm0_68 = *(edi_4 + 0x4d0)
    int32_t esi_36 = *(edi_4 + 0x4f8)
    int128_t xmm0_69 = *(edi_4 + 0x4e0)
    var_f8_1:8.q = *(edi_4 + 0x4f0)
    sub_5979b0(arg2, eax_132 + 0x2c)
    int32_t eax_134 = *arg2
    
    if (eax_134 == arg2[1])
        eax_134 = 0
    
    int128_t* ecx_83 = arg2[3] + eax_134
    *ecx_83 = xmm0_68
    ecx_83[1] = xmm0_69
    ecx_83[2].q = var_f8_1:8.q
    *(ecx_83 + 0x28) = esi_36
    arg2[3] += 0x2c

int32_t esi_38 = *(edi_4 + 0x51c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_86 = *arg2

if (ecx_86 == arg2[1])
    ecx_86 = nullptr

*(ecx_86 + arg2[3]) = esi_38
int32_t eax_141 = arg2[3] + 4
arg2[3] = eax_141

if (*(edi_4 + 0x51c) == 0xffffffff)
    int32_t esi_40 = *(edi_4 + 0x500)
    sub_5979b0(arg2, eax_141 + 4)
    int32_t* ecx_90 = *arg2
    
    if (ecx_90 == arg2[1])
        ecx_90 = nullptr
    
    *(ecx_90 + arg2[3]) = esi_40
    arg2[3] += 4
else
    int128_t xmm0_74 = *(edi_4 + 0x4fc)
    int32_t esi_39 = *(edi_4 + 0x524)
    int128_t xmm0_75 = *(edi_4 + 0x50c)
    var_f8_1:8.q = *(edi_4 + 0x51c)
    sub_5979b0(arg2, eax_141 + 0x2c)
    int32_t eax_143 = *arg2
    
    if (eax_143 == arg2[1])
        eax_143 = 0
    
    int128_t* ecx_89 = arg2[3] + eax_143
    *ecx_89 = xmm0_74
    ecx_89[1] = xmm0_75
    ecx_89[2].q = var_f8_1:8.q
    *(ecx_89 + 0x28) = esi_39
    arg2[3] += 0x2c

int32_t esi_41 = *(edi_4 + 0x548)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_92 = *arg2

if (ecx_92 == arg2[1])
    ecx_92 = nullptr

*(ecx_92 + arg2[3]) = esi_41
int32_t eax_150 = arg2[3] + 4
arg2[3] = eax_150

if (*(edi_4 + 0x548) == 0xffffffff)
    int32_t esi_43 = *(edi_4 + 0x52c)
    sub_5979b0(arg2, eax_150 + 4)
    int32_t* ecx_96 = *arg2
    
    if (ecx_96 == arg2[1])
        ecx_96 = nullptr
    
    *(ecx_96 + arg2[3]) = esi_43
    arg2[3] += 4
else
    int128_t xmm0_80 = *(edi_4 + 0x528)
    int32_t esi_42 = *(edi_4 + 0x550)
    int128_t xmm0_81 = *(edi_4 + 0x538)
    var_f8_1:8.q = *(edi_4 + 0x548)
    sub_5979b0(arg2, eax_150 + 0x2c)
    int32_t eax_152 = *arg2
    
    if (eax_152 == arg2[1])
        eax_152 = 0
    
    int128_t* ecx_95 = arg2[3] + eax_152
    *ecx_95 = xmm0_80
    ecx_95[1] = xmm0_81
    ecx_95[2].q = var_f8_1:8.q
    *(ecx_95 + 0x28) = esi_42
    arg2[3] += 0x2c

int32_t esi_44 = *(edi_4 + 0x574)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_98 = *arg2

if (ecx_98 == arg2[1])
    ecx_98 = nullptr

*(ecx_98 + arg2[3]) = esi_44
int32_t eax_159 = arg2[3] + 4
arg2[3] = eax_159

if (*(edi_4 + 0x574) == 0xffffffff)
    int32_t esi_46 = *(edi_4 + 0x558)
    sub_5979b0(arg2, eax_159 + 4)
    int32_t* ecx_102 = *arg2
    
    if (ecx_102 == arg2[1])
        ecx_102 = nullptr
    
    *(ecx_102 + arg2[3]) = esi_46
    arg2[3] += 4
else
    int128_t xmm0_86 = *(edi_4 + 0x554)
    int32_t esi_45 = *(edi_4 + 0x57c)
    int128_t xmm0_87 = *(edi_4 + 0x564)
    var_f8_1:8.q = *(edi_4 + 0x574)
    sub_5979b0(arg2, eax_159 + 0x2c)
    int32_t eax_161 = *arg2
    
    if (eax_161 == arg2[1])
        eax_161 = 0
    
    int128_t* ecx_101 = arg2[3] + eax_161
    *ecx_101 = xmm0_86
    ecx_101[1] = xmm0_87
    ecx_101[2].q = var_f8_1:8.q
    *(ecx_101 + 0x28) = esi_45
    arg2[3] += 0x2c

int32_t esi_47 = *(edi_4 + 0x5a0)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_104 = *arg2

if (ecx_104 == arg2[1])
    ecx_104 = nullptr

*(ecx_104 + arg2[3]) = esi_47
int32_t eax_168 = arg2[3] + 4
arg2[3] = eax_168

if (*(edi_4 + 0x5a0) == 0xffffffff)
    int32_t esi_49 = *(edi_4 + 0x584)
    sub_5979b0(arg2, eax_168 + 4)
    int32_t* ecx_108 = *arg2
    
    if (ecx_108 == arg2[1])
        ecx_108 = nullptr
    
    *(ecx_108 + arg2[3]) = esi_49
    arg2[3] += 4
else
    int128_t xmm0_92 = *(edi_4 + 0x580)
    int32_t esi_48 = *(edi_4 + 0x5a8)
    int128_t xmm0_93 = *(edi_4 + 0x590)
    var_f8_1:8.q = *(edi_4 + 0x5a0)
    sub_5979b0(arg2, eax_168 + 0x2c)
    int32_t eax_170 = *arg2
    
    if (eax_170 == arg2[1])
        eax_170 = 0
    
    int128_t* ecx_107 = arg2[3] + eax_170
    *ecx_107 = xmm0_92
    ecx_107[1] = xmm0_93
    ecx_107[2].q = var_f8_1:8.q
    *(ecx_107 + 0x28) = esi_48
    arg2[3] += 0x2c

int32_t esi_50 = *(edi_4 + 0x5cc)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_110 = *arg2

if (ecx_110 == arg2[1])
    ecx_110 = nullptr

*(ecx_110 + arg2[3]) = esi_50
int32_t eax_177 = arg2[3] + 4
arg2[3] = eax_177

if (*(edi_4 + 0x5cc) == 0xffffffff)
    int32_t esi_52 = *(edi_4 + 0x5b0)
    sub_5979b0(arg2, eax_177 + 4)
    int32_t* ecx_114 = *arg2
    
    if (ecx_114 == arg2[1])
        ecx_114 = nullptr
    
    *(ecx_114 + arg2[3]) = esi_52
    arg2[3] += 4
else
    int128_t xmm0_98 = *(edi_4 + 0x5ac)
    int32_t esi_51 = *(edi_4 + 0x5d4)
    int128_t xmm0_99 = *(edi_4 + 0x5bc)
    var_f8_1:8.q = *(edi_4 + 0x5cc)
    sub_5979b0(arg2, eax_177 + 0x2c)
    int32_t eax_179 = *arg2
    
    if (eax_179 == arg2[1])
        eax_179 = 0
    
    int128_t* ecx_113 = arg2[3] + eax_179
    *ecx_113 = xmm0_98
    ecx_113[1] = xmm0_99
    ecx_113[2].q = var_f8_1:8.q
    *(ecx_113 + 0x28) = esi_51
    arg2[3] += 0x2c

int32_t esi_53 = *(edi_4 + 0x5f8)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_116 = *arg2

if (ecx_116 == arg2[1])
    ecx_116 = nullptr

*(ecx_116 + arg2[3]) = esi_53
int32_t eax_186 = arg2[3] + 4
arg2[3] = eax_186

if (*(edi_4 + 0x5f8) == 0xffffffff)
    int32_t esi_55 = *(edi_4 + 0x5dc)
    sub_5979b0(arg2, eax_186 + 4)
    int32_t* ecx_120 = *arg2
    
    if (ecx_120 == arg2[1])
        ecx_120 = nullptr
    
    *(ecx_120 + arg2[3]) = esi_55
    arg2[3] += 4
else
    int128_t xmm0_104 = *(edi_4 + 0x5d8)
    int32_t esi_54 = *(edi_4 + 0x600)
    int128_t xmm0_105 = *(edi_4 + 0x5e8)
    var_f8_1:8.q = *(edi_4 + 0x5f8)
    sub_5979b0(arg2, eax_186 + 0x2c)
    int32_t eax_188 = *arg2
    
    if (eax_188 == arg2[1])
        eax_188 = 0
    
    int128_t* ecx_119 = arg2[3] + eax_188
    *ecx_119 = xmm0_104
    ecx_119[1] = xmm0_105
    ecx_119[2].q = var_f8_1:8.q
    *(ecx_119 + 0x28) = esi_54
    arg2[3] += 0x2c

int32_t esi_56 = *(edi_4 + 0x624)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_122 = *arg2

if (ecx_122 == arg2[1])
    ecx_122 = nullptr

*(ecx_122 + arg2[3]) = esi_56
int32_t eax_195 = arg2[3] + 4
arg2[3] = eax_195

if (*(edi_4 + 0x624) == 0xffffffff)
    int32_t esi_58 = *(edi_4 + 0x608)
    sub_5979b0(arg2, eax_195 + 4)
    int32_t* ecx_126 = *arg2
    
    if (ecx_126 == arg2[1])
        ecx_126 = nullptr
    
    *(ecx_126 + arg2[3]) = esi_58
    arg2[3] += 4
else
    int128_t xmm0_110 = *(edi_4 + 0x604)
    int32_t esi_57 = *(edi_4 + 0x62c)
    int128_t xmm0_111 = *(edi_4 + 0x614)
    var_f8_1:8.q = *(edi_4 + 0x624)
    sub_5979b0(arg2, eax_195 + 0x2c)
    int32_t eax_197 = *arg2
    
    if (eax_197 == arg2[1])
        eax_197 = 0
    
    int128_t* ecx_125 = arg2[3] + eax_197
    *ecx_125 = xmm0_110
    ecx_125[1] = xmm0_111
    ecx_125[2].q = var_f8_1:8.q
    *(ecx_125 + 0x28) = esi_57
    arg2[3] += 0x2c

int32_t esi_59 = *(edi_4 + 0x630)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_128 = *arg2

if (ecx_128 == arg2[1])
    ecx_128 = nullptr

*(ecx_128 + arg2[3]) = esi_59
int32_t eax_204 = arg2[3] + 4
arg2[3] = eax_204
int32_t esi_60 = *(edi_4 + 0x654)
sub_5979b0(arg2, eax_204 + 4)
int32_t* ecx_130 = *arg2

if (ecx_130 == arg2[1])
    ecx_130 = nullptr

*(ecx_130 + arg2[3]) = esi_60
int32_t eax_208 = arg2[3] + 4
arg2[3] = eax_208

if (*(edi_4 + 0x654) == 0xffffffff)
    int32_t esi_62 = *(edi_4 + 0x638)
    sub_5979b0(arg2, eax_208 + 4)
    int32_t* ecx_134 = *arg2
    
    if (ecx_134 == arg2[1])
        ecx_134 = nullptr
    
    *(ecx_134 + arg2[3]) = esi_62
    arg2[3] += 4
else
    int128_t xmm0_116 = *(edi_4 + 0x634)
    int32_t esi_61 = *(edi_4 + 0x65c)
    int128_t xmm0_117 = *(edi_4 + 0x644)
    var_f8_1:8.q = *(edi_4 + 0x654)
    sub_5979b0(arg2, eax_208 + 0x2c)
    int32_t eax_210 = *arg2
    
    if (eax_210 == arg2[1])
        eax_210 = 0
    
    int128_t* ecx_133 = arg2[3] + eax_210
    *ecx_133 = xmm0_116
    ecx_133[1] = xmm0_117
    ecx_133[2].q = var_f8_1:8.q
    *(ecx_133 + 0x28) = esi_61
    arg2[3] += 0x2c

int32_t esi_63 = *(edi_4 + 0x680)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_136 = *arg2

if (ecx_136 == arg2[1])
    ecx_136 = nullptr

*(ecx_136 + arg2[3]) = esi_63
int32_t eax_217 = arg2[3] + 4
arg2[3] = eax_217

if (*(edi_4 + 0x680) == 0xffffffff)
    int32_t esi_65 = *(edi_4 + 0x664)
    sub_5979b0(arg2, eax_217 + 4)
    int32_t* ecx_140 = *arg2
    
    if (ecx_140 == arg2[1])
        ecx_140 = nullptr
    
    *(ecx_140 + arg2[3]) = esi_65
    arg2[3] += 4
else
    int128_t xmm0_122 = *(edi_4 + 0x660)
    int32_t esi_64 = *(edi_4 + 0x688)
    int128_t xmm0_123 = *(edi_4 + 0x670)
    var_f8_1:8.q = *(edi_4 + 0x680)
    sub_5979b0(arg2, eax_217 + 0x2c)
    int32_t eax_219 = *arg2
    
    if (eax_219 == arg2[1])
        eax_219 = 0
    
    int128_t* ecx_139 = arg2[3] + eax_219
    *ecx_139 = xmm0_122
    ecx_139[1] = xmm0_123
    ecx_139[2].q = var_f8_1:8.q
    *(ecx_139 + 0x28) = esi_64
    arg2[3] += 0x2c

int32_t esi_66 = *(edi_4 + 0x6ac)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_142 = *arg2

if (ecx_142 == arg2[1])
    ecx_142 = nullptr

*(ecx_142 + arg2[3]) = esi_66
int32_t eax_226 = arg2[3] + 4
arg2[3] = eax_226

if (*(edi_4 + 0x6ac) == 0xffffffff)
    int32_t esi_68 = *(edi_4 + 0x690)
    sub_5979b0(arg2, eax_226 + 4)
    int32_t* ecx_146 = *arg2
    
    if (ecx_146 == arg2[1])
        ecx_146 = nullptr
    
    *(ecx_146 + arg2[3]) = esi_68
    arg2[3] += 4
else
    int128_t xmm0_128 = *(edi_4 + 0x68c)
    int32_t esi_67 = *(edi_4 + 0x6b4)
    int128_t xmm0_129 = *(edi_4 + 0x69c)
    var_f8_1:8.q = *(edi_4 + 0x6ac)
    sub_5979b0(arg2, eax_226 + 0x2c)
    int32_t eax_228 = *arg2
    
    if (eax_228 == arg2[1])
        eax_228 = 0
    
    int128_t* ecx_145 = arg2[3] + eax_228
    *ecx_145 = xmm0_128
    ecx_145[1] = xmm0_129
    ecx_145[2].q = var_f8_1:8.q
    *(ecx_145 + 0x28) = esi_67
    arg2[3] += 0x2c

int32_t esi_69 = *(edi_4 + 0x6d8)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_148 = *arg2

if (ecx_148 == arg2[1])
    ecx_148 = nullptr

*(ecx_148 + arg2[3]) = esi_69
int32_t eax_235 = arg2[3] + 4
arg2[3] = eax_235

if (*(edi_4 + 0x6d8) == 0xffffffff)
    int32_t esi_71 = *(edi_4 + 0x6bc)
    sub_5979b0(arg2, eax_235 + 4)
    int32_t* ecx_152 = *arg2
    
    if (ecx_152 == arg2[1])
        ecx_152 = nullptr
    
    *(ecx_152 + arg2[3]) = esi_71
    arg2[3] += 4
else
    int128_t xmm0_134 = *(edi_4 + 0x6b8)
    int32_t esi_70 = *(edi_4 + 0x6e0)
    int128_t xmm0_135 = *(edi_4 + 0x6c8)
    var_f8_1:8.q = *(edi_4 + 0x6d8)
    sub_5979b0(arg2, eax_235 + 0x2c)
    int32_t eax_237 = *arg2
    
    if (eax_237 == arg2[1])
        eax_237 = 0
    
    int128_t* ecx_151 = arg2[3] + eax_237
    *ecx_151 = xmm0_134
    ecx_151[1] = xmm0_135
    ecx_151[2].q = var_f8_1:8.q
    *(ecx_151 + 0x28) = esi_70
    arg2[3] += 0x2c

int32_t esi_72 = *(edi_4 + 0x6e4)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_154 = *arg2

if (ecx_154 == arg2[1])
    ecx_154 = nullptr

*(ecx_154 + arg2[3]) = esi_72
int32_t eax_244 = arg2[3] + 4
arg2[3] = eax_244
int32_t esi_73 = *(edi_4 + 0x708)
sub_5979b0(arg2, eax_244 + 4)
int32_t* ecx_156 = *arg2

if (ecx_156 == arg2[1])
    ecx_156 = nullptr

*(ecx_156 + arg2[3]) = esi_73
int32_t eax_248 = arg2[3] + 4
arg2[3] = eax_248

if (*(edi_4 + 0x708) == 0xffffffff)
    int32_t esi_75 = *(edi_4 + 0x6ec)
    sub_5979b0(arg2, eax_248 + 4)
    int32_t* ecx_160 = *arg2
    
    if (ecx_160 == arg2[1])
        ecx_160 = nullptr
    
    *(ecx_160 + arg2[3]) = esi_75
    arg2[3] += 4
else
    int128_t xmm0_140 = *(edi_4 + 0x6e8)
    int32_t esi_74 = *(edi_4 + 0x710)
    int128_t xmm0_141 = *(edi_4 + 0x6f8)
    var_f8_1:8.q = *(edi_4 + 0x708)
    sub_5979b0(arg2, eax_248 + 0x2c)
    int32_t eax_250 = *arg2
    
    if (eax_250 == arg2[1])
        eax_250 = 0
    
    int128_t* ecx_159 = arg2[3] + eax_250
    *ecx_159 = xmm0_140
    ecx_159[1] = xmm0_141
    ecx_159[2].q = var_f8_1:8.q
    *(ecx_159 + 0x28) = esi_74
    arg2[3] += 0x2c

int32_t esi_76 = *(edi_4 + 0x734)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_162 = *arg2

if (ecx_162 == arg2[1])
    ecx_162 = nullptr

*(ecx_162 + arg2[3]) = esi_76
int32_t eax_257 = arg2[3] + 4
arg2[3] = eax_257

if (*(edi_4 + 0x734) == 0xffffffff)
    int32_t esi_78 = *(edi_4 + 0x718)
    sub_5979b0(arg2, eax_257 + 4)
    int32_t* ecx_166 = *arg2
    
    if (ecx_166 == arg2[1])
        ecx_166 = nullptr
    
    *(ecx_166 + arg2[3]) = esi_78
    arg2[3] += 4
else
    int128_t xmm0_146 = *(edi_4 + 0x714)
    int32_t esi_77 = *(edi_4 + 0x73c)
    int128_t xmm0_147 = *(edi_4 + 0x724)
    var_f8_1:8.q = *(edi_4 + 0x734)
    sub_5979b0(arg2, eax_257 + 0x2c)
    int32_t eax_259 = *arg2
    
    if (eax_259 == arg2[1])
        eax_259 = 0
    
    int128_t* ecx_165 = arg2[3] + eax_259
    *ecx_165 = xmm0_146
    ecx_165[1] = xmm0_147
    ecx_165[2].q = var_f8_1:8.q
    *(ecx_165 + 0x28) = esi_77
    arg2[3] += 0x2c

int32_t esi_79 = *(edi_4 + 0x760)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_168 = *arg2

if (ecx_168 == arg2[1])
    ecx_168 = nullptr

*(ecx_168 + arg2[3]) = esi_79
int32_t eax_266 = arg2[3] + 4
arg2[3] = eax_266

if (*(edi_4 + 0x760) == 0xffffffff)
    int32_t esi_81 = *(edi_4 + 0x744)
    sub_5979b0(arg2, eax_266 + 4)
    int32_t* ecx_172 = *arg2
    
    if (ecx_172 == arg2[1])
        ecx_172 = nullptr
    
    *(ecx_172 + arg2[3]) = esi_81
    arg2[3] += 4
else
    int128_t xmm0_152 = *(edi_4 + 0x740)
    int32_t esi_80 = *(edi_4 + 0x768)
    int128_t xmm0_153 = *(edi_4 + 0x750)
    var_f8_1:8.q = *(edi_4 + 0x760)
    sub_5979b0(arg2, eax_266 + 0x2c)
    int32_t eax_268 = *arg2
    
    if (eax_268 == arg2[1])
        eax_268 = 0
    
    int128_t* ecx_171 = arg2[3] + eax_268
    *ecx_171 = xmm0_152
    ecx_171[1] = xmm0_153
    ecx_171[2].q = var_f8_1:8.q
    *(ecx_171 + 0x28) = esi_80
    arg2[3] += 0x2c

int32_t esi_82 = *(edi_4 + 0x78c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_174 = *arg2

if (ecx_174 == arg2[1])
    ecx_174 = nullptr

*(ecx_174 + arg2[3]) = esi_82
int32_t eax_275 = arg2[3] + 4
arg2[3] = eax_275

if (*(edi_4 + 0x78c) == 0xffffffff)
    int32_t esi_84 = *(edi_4 + 0x770)
    sub_5979b0(arg2, eax_275 + 4)
    int32_t* ecx_178 = *arg2
    
    if (ecx_178 == arg2[1])
        ecx_178 = nullptr
    
    *(ecx_178 + arg2[3]) = esi_84
    arg2[3] += 4
else
    int128_t xmm0_158 = *(edi_4 + 0x76c)
    int32_t esi_83 = *(edi_4 + 0x794)
    int128_t xmm0_159 = *(edi_4 + 0x77c)
    var_f8_1:8.q = *(edi_4 + 0x78c)
    sub_5979b0(arg2, eax_275 + 0x2c)
    int32_t eax_277 = *arg2
    
    if (eax_277 == arg2[1])
        eax_277 = 0
    
    int128_t* ecx_177 = arg2[3] + eax_277
    *ecx_177 = xmm0_158
    ecx_177[1] = xmm0_159
    ecx_177[2].q = var_f8_1:8.q
    *(ecx_177 + 0x28) = esi_83
    arg2[3] += 0x2c

int32_t esi_85 = *(edi_4 + 0x7b8)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_180 = *arg2

if (ecx_180 == arg2[1])
    ecx_180 = nullptr

*(ecx_180 + arg2[3]) = esi_85
int32_t eax_284 = arg2[3] + 4
arg2[3] = eax_284

if (*(edi_4 + 0x7b8) == 0xffffffff)
    int32_t esi_87 = *(edi_4 + 0x79c)
    sub_5979b0(arg2, eax_284 + 4)
    int32_t* ecx_184 = *arg2
    
    if (ecx_184 == arg2[1])
        ecx_184 = nullptr
    
    *(ecx_184 + arg2[3]) = esi_87
    arg2[3] += 4
else
    int128_t xmm0_164 = *(edi_4 + 0x798)
    int32_t esi_86 = *(edi_4 + 0x7c0)
    int128_t xmm0_165 = *(edi_4 + 0x7a8)
    var_f8_1:8.q = *(edi_4 + 0x7b8)
    sub_5979b0(arg2, eax_284 + 0x2c)
    int32_t eax_286 = *arg2
    
    if (eax_286 == arg2[1])
        eax_286 = 0
    
    int128_t* ecx_183 = arg2[3] + eax_286
    *ecx_183 = xmm0_164
    ecx_183[1] = xmm0_165
    ecx_183[2].q = var_f8_1:8.q
    *(ecx_183 + 0x28) = esi_86
    arg2[3] += 0x2c

int32_t esi_88 = *(edi_4 + 0x7e4)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_186 = *arg2

if (ecx_186 == arg2[1])
    ecx_186 = nullptr

*(ecx_186 + arg2[3]) = esi_88
int32_t eax_293 = arg2[3] + 4
arg2[3] = eax_293
int128_t var_170
int128_t var_160

if (*(edi_4 + 0x7e4) == 0xffffffff)
    int32_t esi_89 = *(edi_4 + 0x7c8)
    sub_5979b0(arg2, eax_293 + 4)
    int32_t* ecx_189 = *arg2
    
    if (ecx_189 == arg2[1])
        ecx_189 = nullptr
    
    *(ecx_189 + arg2[3]) = esi_89
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x7c4)
    var_160 = *(edi_4 + 0x7d4)
    var_150:0xc.q = *(edi_4 + 0x7e4)
    int32_t var_13c_95 = *(edi_4 + 0x7ec)
    sub_5f18d0(arg2)

int32_t esi_90 = *(edi_4 + 0x810)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_191 = *arg2

if (ecx_191 == arg2[1])
    ecx_191 = nullptr

*(ecx_191 + arg2[3]) = esi_90
int32_t eax_301 = arg2[3] + 4
arg2[3] = eax_301

if (*(edi_4 + 0x810) == 0xffffffff)
    int32_t esi_91 = *(edi_4 + 0x7f4)
    sub_5979b0(arg2, eax_301 + 4)
    int32_t* ecx_194 = *arg2
    
    if (ecx_194 == arg2[1])
        ecx_194 = nullptr
    
    *(ecx_194 + arg2[3]) = esi_91
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x7f0)
    var_160 = *(edi_4 + 0x800)
    var_150:0xc.q = *(edi_4 + 0x810)
    int32_t var_13c_98 = *(edi_4 + 0x818)
    sub_5f18d0(arg2)

int32_t esi_92 = *(edi_4 + 0x83c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_196 = *arg2

if (ecx_196 == arg2[1])
    ecx_196 = nullptr

*(ecx_196 + arg2[3]) = esi_92
int32_t eax_309 = arg2[3] + 4
arg2[3] = eax_309

if (*(edi_4 + 0x83c) == 0xffffffff)
    int32_t esi_93 = *(edi_4 + 0x820)
    sub_5979b0(arg2, eax_309 + 4)
    int32_t* ecx_199 = *arg2
    
    if (ecx_199 == arg2[1])
        ecx_199 = nullptr
    
    *(ecx_199 + arg2[3]) = esi_93
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x81c)
    var_160 = *(edi_4 + 0x82c)
    var_150:0xc.q = *(edi_4 + 0x83c)
    int32_t var_13c_101 = *(edi_4 + 0x844)
    sub_5f18d0(arg2)

int32_t esi_94 = *(edi_4 + 0x868)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_201 = *arg2

if (ecx_201 == arg2[1])
    ecx_201 = nullptr

*(ecx_201 + arg2[3]) = esi_94
int32_t eax_317 = arg2[3] + 4
arg2[3] = eax_317

if (*(edi_4 + 0x868) == 0xffffffff)
    int32_t esi_95 = *(edi_4 + 0x84c)
    sub_5979b0(arg2, eax_317 + 4)
    int32_t* ecx_204 = *arg2
    
    if (ecx_204 == arg2[1])
        ecx_204 = nullptr
    
    *(ecx_204 + arg2[3]) = esi_95
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x848)
    var_160 = *(edi_4 + 0x858)
    var_150:0xc.q = *(edi_4 + 0x868)
    int32_t var_13c_104 = *(edi_4 + 0x870)
    sub_5f18d0(arg2)

int32_t esi_96 = *(edi_4 + 0x894)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_206 = *arg2

if (ecx_206 == arg2[1])
    ecx_206 = nullptr

*(ecx_206 + arg2[3]) = esi_96
int32_t eax_325 = arg2[3] + 4
arg2[3] = eax_325

if (*(edi_4 + 0x894) == 0xffffffff)
    int32_t esi_97 = *(edi_4 + 0x878)
    sub_5979b0(arg2, eax_325 + 4)
    int32_t* ecx_209 = *arg2
    
    if (ecx_209 == arg2[1])
        ecx_209 = nullptr
    
    *(ecx_209 + arg2[3]) = esi_97
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x874)
    var_160 = *(edi_4 + 0x884)
    var_150:0xc.q = *(edi_4 + 0x894)
    int32_t var_13c_107 = *(edi_4 + 0x89c)
    sub_5f18d0(arg2)

int32_t esi_98 = *(edi_4 + 0x8c0)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_211 = *arg2

if (ecx_211 == arg2[1])
    ecx_211 = nullptr

*(ecx_211 + arg2[3]) = esi_98
int32_t eax_333 = arg2[3] + 4
arg2[3] = eax_333

if (*(edi_4 + 0x8c0) == 0xffffffff)
    int32_t esi_99 = *(edi_4 + 0x8a4)
    sub_5979b0(arg2, eax_333 + 4)
    int32_t* ecx_214 = *arg2
    
    if (ecx_214 == arg2[1])
        ecx_214 = nullptr
    
    *(ecx_214 + arg2[3]) = esi_99
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x8a0)
    var_160 = *(edi_4 + 0x8b0)
    var_150:0xc.q = *(edi_4 + 0x8c0)
    int32_t var_13c_110 = *(edi_4 + 0x8c8)
    sub_5f18d0(arg2)

int32_t esi_100 = *(edi_4 + 0x8ec)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_216 = *arg2

if (ecx_216 == arg2[1])
    ecx_216 = nullptr

*(ecx_216 + arg2[3]) = esi_100
int32_t eax_341 = arg2[3] + 4
arg2[3] = eax_341

if (*(edi_4 + 0x8ec) == 0xffffffff)
    int32_t esi_101 = *(edi_4 + 0x8d0)
    sub_5979b0(arg2, eax_341 + 4)
    int32_t* ecx_219 = *arg2
    
    if (ecx_219 == arg2[1])
        ecx_219 = nullptr
    
    *(ecx_219 + arg2[3]) = esi_101
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x8cc)
    var_160 = *(edi_4 + 0x8dc)
    var_150:0xc.q = *(edi_4 + 0x8ec)
    int32_t var_13c_113 = *(edi_4 + 0x8f4)
    sub_5f18d0(arg2)

int32_t esi_102 = *(edi_4 + 0x918)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_221 = *arg2

if (ecx_221 == arg2[1])
    ecx_221 = nullptr

*(ecx_221 + arg2[3]) = esi_102
int32_t eax_349 = arg2[3] + 4
arg2[3] = eax_349

if (*(edi_4 + 0x918) == 0xffffffff)
    int32_t esi_103 = *(edi_4 + 0x8fc)
    sub_5979b0(arg2, eax_349 + 4)
    int32_t* ecx_224 = *arg2
    
    if (ecx_224 == arg2[1])
        ecx_224 = nullptr
    
    *(ecx_224 + arg2[3]) = esi_103
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x8f8)
    var_160 = *(edi_4 + 0x908)
    var_150:0xc.q = *(edi_4 + 0x918)
    int32_t var_13c_116 = *(edi_4 + 0x920)
    sub_5f18d0(arg2)

int32_t esi_104 = *(edi_4 + 0x944)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_226 = *arg2

if (ecx_226 == arg2[1])
    ecx_226 = nullptr

*(ecx_226 + arg2[3]) = esi_104
int32_t eax_357 = arg2[3] + 4
arg2[3] = eax_357

if (*(edi_4 + 0x944) == 0xffffffff)
    int32_t esi_105 = *(edi_4 + 0x928)
    sub_5979b0(arg2, eax_357 + 4)
    int32_t* ecx_229 = *arg2
    
    if (ecx_229 == arg2[1])
        ecx_229 = nullptr
    
    *(ecx_229 + arg2[3]) = esi_105
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x924)
    var_160 = *(edi_4 + 0x934)
    var_150:0xc.q = *(edi_4 + 0x944)
    int32_t var_13c_119 = *(edi_4 + 0x94c)
    sub_5f18d0(arg2)

int32_t esi_106 = *(edi_4 + 0x970)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_231 = *arg2

if (ecx_231 == arg2[1])
    ecx_231 = nullptr

*(ecx_231 + arg2[3]) = esi_106
int32_t eax_365 = arg2[3] + 4
arg2[3] = eax_365

if (*(edi_4 + 0x970) == 0xffffffff)
    int32_t esi_107 = *(edi_4 + 0x954)
    sub_5979b0(arg2, eax_365 + 4)
    int32_t* ecx_234 = *arg2
    
    if (ecx_234 == arg2[1])
        ecx_234 = nullptr
    
    *(ecx_234 + arg2[3]) = esi_107
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x950)
    var_160 = *(edi_4 + 0x960)
    var_150:0xc.q = *(edi_4 + 0x970)
    int32_t var_13c_122 = *(edi_4 + 0x978)
    sub_5f18d0(arg2)

int32_t esi_108 = *(edi_4 + 0x99c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_236 = *arg2

if (ecx_236 == arg2[1])
    ecx_236 = nullptr

*(ecx_236 + arg2[3]) = esi_108
int32_t eax_373 = arg2[3] + 4
arg2[3] = eax_373

if (*(edi_4 + 0x99c) == 0xffffffff)
    int32_t esi_109 = *(edi_4 + 0x980)
    sub_5979b0(arg2, eax_373 + 4)
    int32_t* ecx_239 = *arg2
    
    if (ecx_239 == arg2[1])
        ecx_239 = nullptr
    
    *(ecx_239 + arg2[3]) = esi_109
    arg2[3] += 4
else
    var_170 = *(edi_4 + 0x97c)
    var_160 = *(edi_4 + 0x98c)
    var_150:0xc.q = *(edi_4 + 0x99c)
    int32_t var_13c_125 = *(edi_4 + 0x9a4)
    sub_5f18d0(arg2)

int32_t esi_110 = *(edi_4 + 0x9a8)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_241 = *arg2

if (ecx_241 == arg2[1])
    ecx_241 = nullptr

*(ecx_241 + arg2[3]) = esi_110
int32_t eax_381 = arg2[3] + 4
arg2[3] = eax_381
int32_t esi_111 = *(edi_4 + 0x9ac)
sub_5979b0(arg2, eax_381 + 4)
int32_t* ecx_243 = *arg2

if (ecx_243 == arg2[1])
    ecx_243 = nullptr

*(ecx_243 + arg2[3]) = esi_111
int32_t eax_385 = arg2[3] + 4
arg2[3] = eax_385
int32_t esi_112 = *(edi_4 + 0x9b0)
sub_5979b0(arg2, eax_385 + 4)
int32_t* ecx_245 = *arg2

if (ecx_245 == arg2[1])
    ecx_245 = nullptr

*(ecx_245 + arg2[3]) = esi_112
int32_t eax_389 = arg2[3] + 4
arg2[3] = eax_389
int32_t esi_113 = *(edi_4 + 0x9b4)
sub_5979b0(arg2, eax_389 + 4)
int32_t* ecx_247 = *arg2

if (ecx_247 == arg2[1])
    ecx_247 = nullptr

*(ecx_247 + arg2[3]) = esi_113
int32_t eax_393 = arg2[3] + 4
arg2[3] = eax_393
int32_t esi_114 = *(edi_4 + 0x9b8)
sub_5979b0(arg2, eax_393 + 4)
int32_t* ecx_249 = *arg2

if (ecx_249 == arg2[1])
    ecx_249 = nullptr

*(ecx_249 + arg2[3]) = esi_114
int32_t eax_397 = arg2[3] + 4
arg2[3] = eax_397
int32_t esi_115 = *(edi_4 + 0x9bc)
sub_5979b0(arg2, eax_397 + 4)
int32_t* ecx_251 = *arg2

if (ecx_251 == arg2[1])
    ecx_251 = nullptr

*(ecx_251 + arg2[3]) = esi_115
int32_t eax_401 = arg2[3] + 4
arg2[3] = eax_401
int32_t esi_116 = *(edi_4 + 0x9c0)
sub_5979b0(arg2, eax_401 + 4)
int32_t* ecx_253 = *arg2

if (ecx_253 == arg2[1])
    ecx_253 = nullptr

*(ecx_253 + arg2[3]) = esi_116
int32_t eax_405 = arg2[3] + 4
arg2[3] = eax_405
int32_t esi_117 = *(edi_4 + 0x9c4)
sub_5979b0(arg2, eax_405 + 4)
int32_t* ecx_255 = *arg2

if (ecx_255 == arg2[1])
    ecx_255 = nullptr

*(ecx_255 + arg2[3]) = esi_117
int32_t eax_409 = arg2[3] + 4
arg2[3] = eax_409
int32_t esi_118 = *(edi_4 + 0x9c8)
sub_5979b0(arg2, eax_409 + 4)
int32_t* ecx_257 = *arg2
int32_t** var_13c_136 = arg2

if (ecx_257 == arg2[1])
    ecx_257 = nullptr

*(ecx_257 + arg2[3]) = esi_118
arg2[3] += 4
sub_5f1310(edi_4 + 0x9cc, var_13c_136)
sub_5f1310(edi_4 + 0xa88, arg2)
sub_5f1310(edi_4 + 0xb44, arg2)
sub_5f1310(edi_4 + 0xc00, arg2)
sub_5b6110(edi_4 + 0xcbc, arg2)
int32_t var_1c_2 = 7
int32_t var_13c_141 = 0xffffffff
int32_t var_140_2 = 0
var_30 = 0
int32_t var_20_2 = 0
var_150:0xc.d = edi_4 + 0xd74
sub_52e3c0(&var_30)
int32_t var_8_3 = 1
sub_5b0590(arg2, &var_30)
int32_t var_8_4 = 0xffffffff

if (var_1c_2 u>= 8)
    j__free(var_30.d)

int32_t var_114 = 7
int32_t var_13c_144 = 0xffffffff
int32_t var_140_3 = 0
int16_t var_128 = 0
int32_t var_118 = 0
var_150:0xc.d = edi_4 + 0xd8c
sub_52e3c0(&var_128)
int32_t var_8_5 = 2
sub_5b0590(arg2, &var_128)
int32_t var_8_6 = 0xffffffff

if (var_114 u>= 8)
    j__free(var_128.d)

int32_t var_114_1 = 7
var_128 = 0
int32_t var_118_1 = 0
var_160:0xc.d = edi_4 + 0xe64
sub_536170(&var_150)
sub_5ad970(var_150.d)
var_160:0xc.d = edi_4 + 0xe7c
sub_536170(&var_150)
sub_5ad970()

if (*(edi_4 + 0x1ac) == 0xc)
    void* esi_119 = edi_4 + 0xda4
    int32_t i_1 = 8
    int32_t i
    
    do
        var_160:0xc.d = esi_119
        sub_536170(&var_150)
        sub_5ad970()
        esi_119 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)
    edi_4 = var_10c

sub_5bf8a0(edi_4 + 0xe94, arg2)
sub_5f14e0(edi_4 + 0x1160, arg2)
sub_686a90(edi_4 + 0x1298, arg2)
int32_t result = sub_5e4630(edi_4 + 0x1390, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
