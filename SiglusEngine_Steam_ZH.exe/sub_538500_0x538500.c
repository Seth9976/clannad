// 函数: sub_538500
// 地址: 0x538500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vrounding_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_94 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0xc)
int32_t ebx

if (eax_3 == 0x64 || eax_3 == 0x65)
    ebx.b = 1
else
    ebx.b = 0

char var_61 = ebx.b

if (eax_3 == 0)
    sub_6c1b50(*(arg1 + 4), &data_b68864)
else if (eax_3 == 0x65)
    sub_6c1b50(*(arg1 + 4), &data_b6884c)

HGDIOBJ wParam_2 = GetStockObject(DEFAULT_GUI_FONT)
int32_t ecx_1 = *(arg1 + 0xc)
HGDIOBJ wParam_1 = wParam_2
HGDIOBJ wParam = wParam_1
int32_t var_84
int32_t var_80
int32_t var_78
int32_t ecx_2

if (ecx_1 == 0 || ecx_1 == 0x65)
    ecx_2 = 0xc
    var_84 = 0x24
    var_80 = 0xc
    var_78 = 0xc
else if (ecx_1 == 1 || ecx_1 == 0x64)
    ecx_2 = 0xc
    var_84 = 0xc
    var_80 = 0xc
    var_78 = 0xc
else
    ecx_2 = var_78

int32_t eax_4 = 0
int32_t ebx_1 = ecx_2
int32_t var_70 = ebx_1

if (ebx.b != 0)
    eax_4 = 0x18

int32_t var_6c = var_80
int32_t var_68
int16_t var_44
int16_t var_2c

if (var_61 != 0)
    int32_t var_18_1 = 7
    var_6c = var_80 + 0x16
    ebx_1 = ecx_2 + 0xc
    var_70 = ebx_1
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_52e720(&var_2c, &data_ad7c90, nullptr)
    int32_t var_8_1 = 0
    int32_t var_30_1 = 7
    int32_t var_34_1 = 0
    var_44 = 0
    sub_52e720(&var_44, &data_ad7c90, nullptr)
    var_8_1.b = 1
    
    if (*(arg1 + 0xa4) != 0)
        sub_6bfcd0(arg1 + 0x1c, &var_44, arg1 + 0x94, &var_2c, var_78, var_80, 0, 0, 0, 0x50000007, 
            WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_30_1 u>= 8)
        j__free(var_44.d)
    
    int32_t var_8_2 = 0xffffffff
    int32_t var_30_2 = 7
    int32_t var_34_2 = 0
    var_44 = 0
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    sub_6c2db0(arg1 + 0x1c, &data_b6887c)
    void* ecx_7 = *(arg1 + 4)
    *(arg1 + 0x78) = 5
    var_68 = arg1 + 0x1c
    *(arg1 + 0x7c) = 0
    sub_530ba0(ecx_7 + 0x64, &var_68)
    wParam_1 = wParam
    SendMessageW(*(arg1 + 0x20), 0x30, wParam_1, 1)

int32_t eax_7 = 0xd8
int32_t var_18_2 = 7

if (var_61 != 0)
    eax_7 = 0x30

int32_t var_1c_2 = 0
var_68 = eax_7
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_3 = 2
int32_t var_30_3 = 7
int32_t var_34_3 = 0
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
var_8_3.b = 3

if (*(arg1 + 0x134) != 0)
    sub_6bfcd0(arg1 + 0xac, &var_44, arg1 + 0x124, &var_2c, ebx_1, var_6c, 0x1c8 - eax_4, var_68, 
        0, 0x50a10101, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_30_3 u>= 8)
    j__free(var_44.d)

int32_t var_8_4 = 0xffffffff
int32_t var_30_4 = 7
int32_t var_34_4 = 0
var_44 = 0

if (var_18_2 u>= 8)
    j__free(var_2c.d)

void* ecx_12 = *(arg1 + 4)
*(arg1 + 0x108) = 5
int32_t var_60 = arg1 + 0xac
*(arg1 + 0x10c) = 0
sub_530ba0(ecx_12 + 0x64, &var_60)
SendMessageW(*(arg1 + 0xb0), 0x30, wParam_1, 1)
int32_t var_18_3 = 7
int32_t var_1c_3 = 0
int32_t ebx_4 = var_6c + 0xc + var_68
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_5 = 4
int32_t var_30_5 = 7
int32_t var_34_5 = 0
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
var_8_5.b = 5

if (*(arg1 + 0x1c4) != 0)
    sub_6bfcd0(arg1 + 0x13c, &var_44, arg1 + 0x1b4, &var_2c, var_70, ebx_4, 0x1c8 - eax_4, 0x10, 0, 
        0x50010003, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_30_5 u>= 8)
    j__free(var_44.d)

int32_t var_8_6 = 0xffffffff
int32_t var_30_6 = 7
int32_t var_34_6 = 0
var_44 = 0

if (var_18_3 u>= 8)
    j__free(var_2c.d)

sub_6c2db0(arg1 + 0x13c, &data_b68894)
void* ecx_18 = *(arg1 + 4)
*(arg1 + 0x198) = 1
var_60 = arg1 + 0x13c
*(arg1 + 0x19c) = 0
sub_530ba0(ecx_18 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x140), 0x30, wParam_1, 1)
int32_t var_18_4 = 7
int32_t var_1c_4 = 0
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_7 = 6
int32_t var_30_7 = 7
int32_t var_34_7 = 0
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
var_8_7.b = 7

if (*(arg1 + 0x254) != 0)
    sub_6bfcd0(arg1 + 0x1cc, &var_44, arg1 + 0x244, &var_2c, var_70, ebx_4 + 0x10, 0x1c8 - eax_4, 
        0x10, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_30_7 u>= 8)
    j__free(var_44.d)

int32_t var_8_8 = 0xffffffff
int32_t var_30_8 = 7
int32_t var_34_8 = 0
var_44 = 0

if (var_18_4 u>= 8)
    j__free(var_2c.d)

sub_6c2db0(arg1 + 0x1cc, &data_b688ac)
void* ecx_24 = *(arg1 + 4)
*(arg1 + 0x228) = 1
var_60 = arg1 + 0x1cc
*(arg1 + 0x22c) = 0
sub_530ba0(ecx_24 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x1d0), 0x30, wParam_1, 1)
void* eax_14 = *(arg1 + 4)
int32_t ebx_6 = ebx_4 + 0x26
int32_t var_18_5 = 7
int32_t var_1c_5 = 0
var_68 = sub_532c20(eax_14, &data_b688c4, *(eax_14 + 4), wParam_1) + 0x14
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_9 = 8
int32_t var_30_9 = 7
int32_t var_34_9 = 0
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
var_8_9.b = 9

if (*(arg1 + 0x2e4) != 0)
    sub_6bfcd0(arg1 + 0x25c, &var_44, arg1 + 0x2d4, &var_2c, var_70, ebx_6, var_68, 0x10, 0, 
        0x50010003, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_30_9 u>= 8)
    j__free(var_44.d)

int32_t var_8_10 = 0xffffffff
int32_t var_30_10 = 7
int32_t var_34_10 = 0
var_44 = 0

if (var_18_5 u>= 8)
    j__free(var_2c.d)

sub_6c2db0(arg1 + 0x25c, &data_b688c4)
void* ecx_31 = *(arg1 + 4)
*(arg1 + 0x2b8) = 1
var_60 = arg1 + 0x25c
*(arg1 + 0x2bc) = 0
sub_530ba0(ecx_31 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x260), 0x30, wParam_1, 1)
int32_t eax_19 = var_70

if (*(arg1 + 0x13) == 0)
    eax_19 = eax_19 + 6 + var_68
else
    ebx_6 += 0x16

void* eax_21 = *(arg1 + 4)
int32_t var_18_6 = 7
int32_t var_1c_6 = 0
var_68 = sub_532c20(eax_21, &data_b688dc, *(eax_21 + 4), wParam_1) + 0x14
var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_11 = 0xa
int32_t var_30_11 = 7
int32_t var_34_11 = 0
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
var_8_11.b = 0xb

if (*(arg1 + 0x374) != 0)
    sub_6bfcd0(arg1 + 0x2ec, &var_44, arg1 + 0x364, &var_2c, eax_19, ebx_6, var_68, 0x10, 0, 
        0x50030009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_30_11 u>= 8)
    j__free(var_44.d)

int32_t var_8_12 = 0xffffffff
int32_t var_30_12 = 7
int32_t var_34_12 = 0
var_44 = 0

if (var_18_6 u>= 8)
    j__free(var_2c.d)

sub_6c2db0(arg1 + 0x2ec, &data_b688dc)
void* ecx_38 = *(arg1 + 4)
*(arg1 + 0x348) = 1
var_60 = arg1 + 0x2ec
*(arg1 + 0x34c) = 0
sub_530ba0(ecx_38 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x2f0), 0x30, wParam_1, 1)
void* eax_26 = *(arg1 + 4)
int32_t var_6c_2 = eax_19 + var_68 + 6
int32_t var_30_13 = 7
int32_t var_34_13 = 0
var_68 = sub_532c20(eax_26, &data_b688f4, *(eax_26 + 4), wParam_1) + 0x14
var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_13 = 0xc
sub_52e820(&var_2c, &data_ad7c90)
var_8_13.b = 0xd

if (*(arg1 + 0x404) != 0)
    sub_6bfcd0(arg1 + 0x37c, &var_2c, arg1 + 0x3f4, &var_44, var_6c_2, ebx_6, var_68, 0x10, 0, 
        0x50010009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_18_6 u>= 8)
    j__free(var_2c.d)

int32_t var_8_14 = 0xffffffff
int32_t var_18_7 = 7
int32_t var_1c_7 = 0
var_2c = 0

if (var_30_13 u>= 8)
    j__free(var_44.d)

sub_6c2db0(arg1 + 0x37c, &data_b688f4)
void* ecx_47 = *(arg1 + 4)
*(arg1 + 0x3d8) = 1
var_60 = arg1 + 0x37c
*(arg1 + 0x3dc) = 0
sub_530ba0(ecx_47 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x380), 0x30, wParam_1, 1)
int32_t var_6c_3

if (*(arg1 + 0x13) == 0)
    var_6c_3 = var_6c_2 + var_68 + 6
else
    ebx_6 += 0x16
    var_6c_3 = var_70

void* eax_34 = *(arg1 + 4)
var_68 = sub_532c20(eax_34, &data_b6890c, *(eax_34 + 4), wParam_1) + 0x14
sub_52e820(&var_44, &data_ad7c90)
int32_t var_8_15 = 0xe
sub_52e820(&var_2c, &data_ad7c90)
var_8_15.b = 0xf

if (*(arg1 + 0x494) != 0)
    sub_6bfcd0(arg1 + 0x40c, &var_2c, arg1 + 0x484, &var_44, var_6c_3, ebx_6, var_68, 0x10, 0, 
        0x50010009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_18_7 u>= 8)
    j__free(var_2c.d)

int32_t var_8_16 = 0xffffffff
int32_t var_18_8 = 7
int32_t var_1c_8 = 0
var_2c = 0

if (var_30_13 u>= 8)
    j__free(var_44.d)

sub_6c2db0(arg1 + 0x40c, &data_b6890c)
void* ecx_54 = *(arg1 + 4)
*(arg1 + 0x468) = 1
var_60 = arg1 + 0x40c
*(arg1 + 0x46c) = 0
sub_530ba0(ecx_54 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x410), 0x30, wParam_1, 1)
var_68 = var_6c_3 + var_68 + 6
void* eax_41 = *(arg1 + 4)
var_60 = sub_532c20(eax_41, &data_b68924, *(eax_41 + 4), wParam_1) + 0x14
sub_52e820(&var_44, &data_ad7c90)
int32_t var_8_17 = 0x10
sub_52e820(&var_2c, &data_ad7c90)
var_8_17.b = 0x11

if (*(arg1 + 0x524) != 0)
    sub_6bfcd0(arg1 + 0x49c, &var_2c, arg1 + 0x514, &var_44, var_68, ebx_6, var_60, 0x10, 0, 
        0x50010009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_18_8 u>= 8)
    j__free(var_2c.d)

int32_t var_8_18 = 0xffffffff
int32_t var_18_9 = 7
int32_t var_1c_9 = 0
var_2c = 0

if (var_30_13 u>= 8)
    j__free(var_44.d)

sub_6c2db0(arg1 + 0x49c, &data_b68924)
void* ecx_63 = *(arg1 + 4)
*(arg1 + 0x4f8) = 1
var_60 = arg1 + 0x49c
*(arg1 + 0x4fc) = 0
sub_530ba0(ecx_63 + 0x64, &var_60)
SendMessageW(*(arg1 + 0x4a0), 0x30, wParam_1, 1)
int16_t* ecx_65 = &var_44
int32_t var_5c
int32_t var_48
int32_t var_18_10
int32_t ebx_7

if (var_61 == 0)
    int32_t var_30_14 = 7
    int32_t var_34_14 = 0
    var_44 = 0
    sub_52e3c0(ecx_65, &data_b6893c, 0, 0xffffffff)
    int32_t var_8_21 = 0x14
    sub_52e820(&var_5c, &data_ad7c90)
    var_8_21.b = 0x15
    sub_52e820(&var_2c, &data_ad7c90)
    var_8_21.b = 0x16
    
    if (*(arg1 + 0x5b4) != 0)
        sub_6bfcd0(arg1 + 0x52c, &var_2c, arg1 + 0x5a4, &var_5c, var_70, ebx_6 + 0x16, 
            0x1c8 - eax_4, 0x20, 0, 0x50000200, WS_EX_STATICEDGE, 0, 0, *(arg1 + 8))
    
    if (var_18_9 u>= 8)
        j__free(var_2c.d)
    
    var_8_21.b = 0x14
    var_18_10 = 7
    int32_t var_1c_11 = 0
    var_2c = 0
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    sub_6c2db0(arg1 + 0x52c, &var_44)
    void* ecx_77 = *(arg1 + 4)
    *(arg1 + 0x588) = 1
    var_60 = arg1 + 0x52c
    *(arg1 + 0x58c) = 0
    sub_530ba0(ecx_77 + 0x64, &var_60)
    SendMessageW(*(arg1 + 0x530), 0x30, wParam, 1)
    ebx_7 = ebx_6 + 0x36
    int32_t var_8_22 = 0xffffffff
    
    if (var_30_14 u>= 8)
        j__free(var_44.d)
else
    sub_52e820(ecx_65, &data_ad7c90)
    int32_t var_8_19 = 0x12
    sub_52e820(&var_2c, &data_ad7c90)
    var_8_19.b = 0x13
    
    if (*(arg1 + 0x644) != 0)
        sub_6bfcd0(arg1 + 0x5bc, &var_2c, arg1 + 0x634, &var_44, var_70 + 0x1c8 - eax_4 - 0x66, 
            ebx_6, 0x66, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_18_9 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_20 = 0xffffffff
    var_18_10 = 7
    int32_t var_1c_10 = 0
    var_2c = 0
    
    if (var_30_13 u>= 8)
        j__free(var_44.d)
    
    sub_6c2db0(arg1 + 0x5bc, &data_b684d4)
    void* ecx_71 = *(arg1 + 4)
    *(arg1 + 0x618) = 3
    var_60 = arg1 + 0x5bc
    *(arg1 + 0x61c) = 0
    sub_530ba0(ecx_71 + 0x64, &var_60)
    SendMessageW(*(arg1 + 0x5c0), 0x30, wParam, 1)
    ebx_7 = ebx_6 + 0x20

sub_6c1650(arg1 + 0x1c, 0x1c8, ebx_7 - var_80)
int32_t ebx_9 = ebx_7 + 0xc

if (var_61 != 0)
    ebx_9 += 0xa0

int32_t eax_52 = *(arg1 + 0xc)
int32_t ebx_10

if (eax_52 == 0)
    ebx_10 = ebx_9 + 6
    sub_52e820(&var_5c, &data_ad7c90)
    int32_t var_8_23 = 0x17
    sub_52e820(&var_2c, &data_ad7c90)
    var_8_23.b = 0x18
    
    if (*(arg1 + 0x6d4) != 0)
        sub_6bfcd0(arg1 + 0x64c, &var_2c, arg1 + 0x6c4, &var_5c, var_78 + 0x178, ebx_10, 0x50, 
            0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_18_10 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_24 = 0xffffffff
    int32_t var_18_11 = 7
    int32_t var_1c_12 = 0
    var_2c = 0
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    int16_t* eax_56 = &data_b684a4
    
    if (*(arg1 + 0x12) == 0)
        eax_56 = &data_b684bc
    
    sub_6c2db0(arg1 + 0x64c, eax_56)
    void* ecx_84 = *(arg1 + 4)
    *(arg1 + 0x6a8) = 3
    var_60 = arg1 + 0x64c
    *(arg1 + 0x6ac) = 0
    sub_530ba0(ecx_84 + 0x64, &var_60)
    SendMessageW(*(arg1 + 0x650), 0x30, wParam, 1)
    sub_52e820(&var_5c, &data_ad7c90)
    int32_t var_8_25 = 0x19
    sub_52e820(&var_2c, &data_ad7c90)
    var_8_25.b = 0x1a
    
    if (*(arg1 + 0x644) != 0)
        sub_6bfcd0(arg1 + 0x5bc, &var_2c, arg1 + 0x634, &var_5c, var_78 + 0x10c, ebx_10, 0x66, 
            0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_18_11 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_26 = 0xffffffff
    int32_t var_18_12 = 7
    int32_t var_1c_13 = 0
    var_2c = 0
    
    if (var_48 u>= 8)
        j__free(var_5c)
    
    sub_6c2db0(arg1 + 0x5bc, &data_b684d4)
    void* ecx_90 = *(arg1 + 4)
    *(arg1 + 0x618) = 3
    var_60 = arg1 + 0x5bc
    *(arg1 + 0x61c) = 0
    sub_530ba0(ecx_90 + 0x64, &var_60)
    int32_t var_98_63 = 1
    int32_t var_a0_1 = 0x30
    SendMessageW(*(arg1 + 0x5c0), 0x30, wParam, 1)
    ebx_9 = ebx_10 + 0x18
else if (eax_52 == 0x65)
    ebx_10 = ebx_9 + 6
    sub_52e820(&var_2c, &data_ad7c90)
    int32_t var_8_27 = 0x1b
    enum WINDOW_STYLE ecx_94 = sub_52e820(&var_5c, &data_ad7c90)
    var_8_27.b = 0x1c
    int32_t var_98_64 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x64c, &var_5c, &var_2c, var_78 + 0x178, ebx_10, 0x50, 0x18, ecx_94, 
        0x50000000, nullptr)
    sub_52e8a0(&var_5c)
    int32_t var_8_28 = 0xffffffff
    sub_52e8a0(&var_2c)
    void** eax_62 = &data_b684a4
    
    if (*(arg1 + 0x12) == 0)
        eax_62 = &data_b684bc
    
    sub_6c2db0(arg1 + 0x64c, eax_62)
    void* ecx_99 = *(arg1 + 4)
    *(arg1 + 0x6a8) = 3
    var_60 = arg1 + 0x64c
    *(arg1 + 0x6ac) = 0
    sub_530ba0(ecx_99 + 0x64, &var_60)
    int32_t var_98_67 = 1
    int32_t var_a0_2 = 0x30
    SendMessageW(*(arg1 + 0x650), 0x30, wParam, 1)
    ebx_9 = ebx_10 + 0x18
BOOL result = sub_530dd0(arg1, 0x1e0, var_84 + ebx_9)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
