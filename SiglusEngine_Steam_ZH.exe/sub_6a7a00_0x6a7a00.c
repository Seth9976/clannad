// 函数: sub_6a7a00
// 地址: 0x6a7a00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ca4ce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_514 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HMENU hMenu = arg1[4]

if (hMenu != 0)
    if (arg1[5].b == 0)
        arg1[4] = 0
    else
        DestroyMenu(hMenu)

arg1[4] = 0
arg1[5].b = 0
HMENU eax_3 = CreateMenu()
arg1[4] = eax_3

if (eax_3 != 0)
    arg1[5].b = 1

HMENU hMenu_1 = arg1[6]

if (hMenu_1 != 0)
    if (arg1[7].b == 0)
        arg1[6] = 0
    else
        DestroyMenu(hMenu_1)

arg1[6] = 0
arg1[7].b = 0
HMENU eax_4 = CreateMenu()
arg1[6] = eax_4

if (eax_4 != 0)
    arg1[7].b = 1

void* var_518_3 = 5
int32_t var_1e0 = 7
void* const var_51c = &data_aff500
int32_t var_1e4 = 0
int16_t var_1f4 = 0
sub_52e720(&var_1f4, var_51c, var_518_3)
HMENU hMenu_2 = arg1[6]

if (hMenu_2 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_2), 0x4b0, &var_1f4, 1, 0)

if (var_1e0 u>= 8)
    j__free(var_1f4.d)

void* var_518_7 = 5
int32_t var_1e0_1 = 7
void* const var_51c_2 = &data_aff520
int32_t var_1e4_1 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_2, var_518_7)
HMENU hMenu_3 = arg1[6]

if (hMenu_3 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_3), 0x4b4, &var_1f4, 1, 0)

if (var_1e0_1 u>= 8)
    j__free(var_1f4.d)

void* var_518_11 = 8
int32_t var_1e0_2 = 7
void* const var_51c_4 = &data_aff50c
int32_t var_1e4_2 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_4, var_518_11)
HMENU hMenu_4 = arg1[6]

if (hMenu_4 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_4), 0x4b5, &var_1f4, 1, 0)

if (var_1e0_2 u>= 8)
    j__free(var_1f4.d)

void* var_518_15 = 0xd
int32_t var_1e0_3 = 7
void* const var_51c_6 = &data_aff538
int32_t var_1e4_3 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_6, var_518_15)
HMENU hMenu_5 = arg1[6]

if (hMenu_5 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_5), 0x4b6, &var_1f4, 1, 0)

if (var_1e0_3 u>= 8)
    j__free(var_1f4.d)

void* var_518_19 = 5
int32_t var_1e0_4 = 7
void* const var_51c_8 = &data_aff52c
int32_t var_1e4_4 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_8, var_518_19)
HMENU hMenu_6 = arg1[6]

if (hMenu_6 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_6), 0x4b1, &var_1f4, 1, 0)

if (var_1e0_4 u>= 8)
    j__free(var_1f4.d)

void* var_518_23 = 0xa
int32_t var_1e0_5 = 7
void* const var_51c_10 = &data_aff56c
int32_t var_1e4_5 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_10, var_518_23)
HMENU hMenu_7 = arg1[6]

if (hMenu_7 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_7), 0x4b2, &var_1f4, 1, 0)

if (var_1e0_5 u>= 8)
    j__free(var_1f4.d)

void* var_518_27 = 0xa
int32_t var_1e0_6 = 7
void* const var_51c_12 = &data_aff554
int32_t var_1e4_6 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_12, var_518_27)
HMENU hMenu_8 = arg1[6]

if (hMenu_8 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_8), 0x4b3, &var_1f4, 1, 0)

if (var_1e0_6 u>= 8)
    j__free(var_1f4.d)

void* var_518_31 = 0xc
int32_t var_1e0_7 = 7
void* const var_51c_14 = &data_aff590
int32_t var_1e4_7 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_14, var_518_31)
HMENU hMenu_9 = arg1[6]

if (hMenu_9 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_9), 0x4ba, &var_1f4, 1, 0)

if (var_1e0_7 u>= 8)
    j__free(var_1f4.d)

void* var_518_35 = 5
int32_t var_1e0_8 = 7
void* const var_51c_16 = &data_aff584
int32_t var_1e4_8 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_16, var_518_35)
HMENU hMenu_10 = arg1[6]

if (hMenu_10 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_10), 0x4b7, &var_1f4, 1, 0)

if (var_1e0_8 u>= 8)
    j__free(var_1f4.d)

void* var_518_39 = 0xb
int32_t var_1e0_9 = 7
void* const var_51c_18 = &data_aff5cc
int32_t var_1e4_9 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_18, var_518_39)
HMENU hMenu_11 = arg1[6]

if (hMenu_11 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_11), 0x4b8, &var_1f4, 1, 0)

if (var_1e0_9 u>= 8)
    j__free(var_1f4.d)

void* var_518_43 = 0xe
int32_t var_1e0_10 = 7
void* const var_51c_20 = &data_aff5ac
int32_t var_1e4_10 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_20, var_518_43)
HMENU hMenu_12 = arg1[6]

if (hMenu_12 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_12), 0x4b9, &var_1f4, 1, 0)

if (var_1e0_10 u>= 8)
    j__free(var_1f4.d)

void* var_518_47 = 9
int32_t var_1e0_11 = 7
void* const var_51c_22 = &data_aff5f4
int32_t var_1e4_11 = 0
var_1f4 = 0
sub_52e720(&var_1f4, var_51c_22, var_518_47)
HMENU hMenu_13 = arg1[6]

if (hMenu_13 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_13), 0x4bb, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff5e4)
HMENU hMenu_14 = arg1[6]

if (hMenu_14 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_14), 0x4bc, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, "]0n0")
HMENU hMenu_15 = arg1[6]

if (hMenu_15 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_15), 0x4bd, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff608)
HMENU hMenu_16 = arg1[6]

if (hMenu_16 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_16), 0x4be, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff634)
HMENU hMenu_17 = arg1[6]

if (hMenu_17 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_17), 0x4bf, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff628)
HMENU hMenu_18 = arg1[6]

if (hMenu_18 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_18), 0x4e2, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff684)
HMENU hMenu_19 = arg1[6]

if (hMenu_19 != 0)
    sub_6c7d00(&arg1[6], GetMenuItemCount(hMenu_19), 0x4e3, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_6c7c60(&arg1[8])
sub_52e820(&var_1f4, &data_aff650)
HMENU hMenu_20 = arg1[8]

if (hMenu_20 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_20), 0x514, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff6dc)
HMENU hMenu_21 = arg1[8]

if (hMenu_21 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_21), 0x518, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff698)
HMENU hMenu_22 = arg1[8]

if (hMenu_22 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_22), 0x519, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff760)
HMENU hMenu_23 = arg1[8]

if (hMenu_23 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_23), 0x51a, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff71c)
HMENU hMenu_24 = arg1[8]

if (hMenu_24 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_24), 0x515, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff808)
HMENU hMenu_25 = arg1[8]

if (hMenu_25 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_25), 0x516, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff554)
HMENU hMenu_26 = arg1[8]

if (hMenu_26 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_26), 0x517, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff7b0)
HMENU hMenu_27 = arg1[8]

if (hMenu_27 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_27), 0x51e, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff584)
HMENU hMenu_28 = arg1[8]

if (hMenu_28 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_28), 0x51b, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff5cc)
HMENU hMenu_29 = arg1[8]

if (hMenu_29 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_29), 0x51c, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff5ac)
HMENU hMenu_30 = arg1[8]

if (hMenu_30 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_30), 0x51d, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff5f4)
HMENU hMenu_31 = arg1[8]

if (hMenu_31 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_31), 0x51f, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff5e4)
HMENU hMenu_32 = arg1[8]

if (hMenu_32 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_32), 0x520, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, "]0n0")
HMENU hMenu_33 = arg1[8]

if (hMenu_33 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_33), 0x521, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff608)
HMENU hMenu_34 = arg1[8]

if (hMenu_34 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_34), 0x522, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff878)
HMENU hMenu_35 = arg1[8]

if (hMenu_35 != 0)
    sub_6c7d00(&arg1[8], GetMenuItemCount(hMenu_35), 0x523, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_6c7c60(&arg1[0xc])
sub_6c7c60(&arg1[0xa])
sub_52e820(&var_1f4, &data_aff850)
int32_t eax_39 = arg1[0xc]
HMENU hMenu_36 = arg1[0xa]

if (hMenu_36 != 0)
    int32_t eax_40
    int32_t ecx_73
    eax_40, ecx_73 = GetMenuItemCount(hMenu_36)
    int32_t var_518_141 = ecx_73
    sub_6c7e30(&arg1[0xa], eax_40, 0x3e9, &var_1f4, eax_39, 1)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff8bc)
HMENU hMenu_37 = arg1[0xa]

if (hMenu_37 != 0)
    sub_6c7d00(&arg1[0xa], GetMenuItemCount(hMenu_37), 0x579, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff8a4)
HMENU hMenu_38 = arg1[0xa]

if (hMenu_38 != 0)
    sub_6c7d00(&arg1[0xa], GetMenuItemCount(hMenu_38), 0x57a, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_52e820(&var_1f4, &data_aff8e4)
HMENU hMenu_39 = arg1[0xa]

if (hMenu_39 != 0)
    sub_6c7d00(&arg1[0xa], GetMenuItemCount(hMenu_39), 0x57b, &var_1f4, 1, 0)

if (var_1e0_11 u>= 8)
    j__free(var_1f4.d)

sub_6c7c60(&arg1[2])
sub_52e820(&var_1f4, &data_aff8c8)
int32_t eax_44 = arg1[4]

if (arg1[2] != 0)
    int32_t eax_45
    int32_t ecx_84
    eax_45, ecx_84 = sub_6c7ca0(&arg1[2])
    int32_t var_518_156 = ecx_84
    sub_6c7e30(&arg1[2], eax_45, 0x578, &var_1f4, eax_44, 1)

sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff910)
sub_6c7cc0(&arg1[2], 0x3ea, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff8fc)
sub_6c7cc0(&arg1[2], 0x3eb, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff92c)
sub_6c7cc0(&arg1[2], 0x3ec, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
int32_t var_518_164 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff91c)
sub_6c7df0(&arg1[2], 0x3ed, &var_1f4, sub_54d1f0(&arg1[6]), 1)
sub_52e8a0(&var_1f4)
int32_t var_518_166 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff954)
sub_6c7df0(&arg1[2], 0x3ee, &var_1f4, sub_54d1f0(&arg1[8]), 1)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff940)
sub_6c7cc0(&arg1[2], 0x3f1, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
int32_t var_518_170 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff994)
sub_6c7df0(&arg1[2], 0x3f0, &var_1f4, sub_54d1f0(&arg1[0xa]), 1)
sub_52e8a0(&var_1f4)
sub_6c7c60(&arg1[0xe])
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff974)
sub_6c7cc0(&arg1[0xe], 0x7d1, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff9c4)
sub_6c7cc0(&arg1[0xe], 0x7d2, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff9a4)
sub_6c7cc0(&arg1[0xe], 0x7d3, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
sub_6c7c60(&arg1[0x12])
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff9ec)
sub_6c7cc0(&arg1[0x12], 0xc1c, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff9dc)
sub_6c7cc0(&arg1[0x12], 0xc1d, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
sub_6c7c60(&arg1[0x14])
int32_t var_518_182 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    Direct3D")
sub_6c7df0(&arg1[0x14], 0xc80, &var_1f4, sub_54d1f0(&arg1[0x12]), 1)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_af11d4)
sub_6c7cc0(&arg1[0x14], 0xc81, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aee288)
sub_6c7cc0(&arg1[0x14], 0xc82, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_af115c)
sub_6c7cc0(&arg1[0x14], 0xc83, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_af03b0)
sub_6c7cc0(&arg1[0x14], 0xc84, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
sub_6c7c60(&arg1[0x16])
void var_1dc
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1dc, 
    ABCDEFXSHIJ")
int32_t var_8_1 = 0
void var_1c4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1c4, 
    &(*ABCDEFXSHIJ")[1])
var_8_1.b = 1
void var_1ac
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1ac, 
    &(*ABCDEFXSHIJ")[2])
var_8_1.b = 2
void var_194
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_194, 
    &(*ABCDEFXSHIJ")[3])
var_8_1.b = 3
void var_17c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_17c, 
    &(*ABCDEFXSHIJ")[4])
var_8_1.b = 4
void var_164
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_164, 
    &(*ABCDEFXSHIJ")[5])
var_8_1.b = 5
void var_14c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_14c, 
    &(*ABCDEFXSHIJ")[6])
var_8_1.b = 6
void var_134
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_134, 
    &(*ABCDEFXSHIJ")[7])
var_8_1.b = 7
void var_11c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_11c, 
    &data_af1d3c)
var_8_1.b = 8
void var_104
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_104, 
    &data_af1d40)
var_8_1.b = 9
void var_ec
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_ec, 
    &data_af1d44)
var_8_1.b = 0xa
void var_d4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_d4, 
    &data_af9ec8)
var_8_1.b = 0xb
void var_bc
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_bc, 
    &data_af9ecc)
void* edi_4 = &var_1dc
int32_t var_8_2 = 0xc
void var_538
void var_20c

for (int32_t i = 0; i s< 0xd; )
    char var_518_204 = 0
    char var_51c_68 = 1
    int32_t* var_520_57 = sub_52e3b0(edi_4)
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_538, 
        0xaf9ef8)
    sub_6c7cc0(&arg1[0x16], i + 0xce4, sub_6ae4c0(&var_20c, var_538), var_51c_68, var_518_204)
    sub_52e8a0(&var_20c)
    i += 1
    edi_4 += 0x18

sub_6c7c60(&arg1[0x18])

for (int32_t i_1 = 0; i_1 s< 0x14; i_1 += 1)
    int32_t* edi_5 = data_bac428
    char var_518_206 = 0
    char var_51c_69 = 1
    
    if (std::_Func_class<void,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil,struct std::_Nil>::_Empty(
            sub_58c570(edi_5, i_1)) == 0)
        sub_6c7cc0(&arg1[0x18], i_1 + 0xcf8, sub_58c570(edi_5, i_1), var_51c_69, var_518_206)
    else
        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
            &var_538, 0xaf9f38)
        sub_6c7cc0(&arg1[0x18], i_1 + 0xcf8, sub_6ae4c0(&var_20c), var_51c_69, var_518_206)
        sub_52e8a0(&var_20c)

sub_6c7c60(&arg1[0x1a])
void var_a4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_a4, 
    back.object")
var_8_2.b = 0xd
void var_8c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_8c, 
    front.object")
var_8_2.b = 0xe
void var_74
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_74, 
    next.object")
var_8_2.b = 0xf
void var_5c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_5c, 
    excall.back.object")
var_8_2.b = 0x10
void var_44
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_44, 
    excall.front.object")
var_8_2.b = 0x11
void var_2c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_2c, 
    excall.next.object")
void* edi_6 = &var_a4
var_8_2.b = 0x12

for (int32_t i_2 = 0; i_2 s< 6; )
    sub_6c7cc0(&arg1[0x1a], i_2 + 0xd16, edi_6, 1, 0)
    i_2 += 1
    edi_6 += 0x18

sub_6c7c60(&arg1[0x10])
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1f4, 
    &data_aff9fc)
sub_6c7cc0(&arg1[0x10], 0xbb9, &var_1f4, 1, 0)
sub_52e8a0(&var_1f4)
void var_4c4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_4c4, 
    &data_affa38)
sub_6c7cc0(&arg1[0x10], 0xbba, &var_4c4, 1, 0)
sub_52e8a0(&var_4c4)
void var_254
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_254, 
    &data_affa24)
sub_6c7cc0(&arg1[0x10], 0xbbb, &var_254, 1, 0)
sub_52e8a0(&var_254)
void var_3d4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_3d4, 
    "|Ts0")
sub_6c7cc0(&arg1[0x10], 0xbbc, &var_3d4, 1, 0)
sub_52e8a0(&var_3d4)
void var_284
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_284, 
    &data_af0518)
sub_6c7cc0(&arg1[0x10], 0xbbd, &var_284, 1, 0)
sub_52e8a0(&var_284)
void var_494
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_494, 
    &data_affa68)
sub_6c7cc0(&arg1[0x10], 0xbbe, &var_494, 1, 0)
sub_52e8a0(&var_494)
sub_6c7f20(&arg1[0x10])
void var_2b4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_2b4, 
    &data_affa4c)
sub_6c7cc0(&arg1[0x10], 0xbbf, &var_2b4, 1, 0)
sub_52e8a0(&var_2b4)
void var_404
int32_t var_518_229 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_404, 
    &data_af11d4)
sub_6c7df0(&arg1[0x10], 0xbc0, &var_404, sub_54d1f0(&arg1[0x14]), 1)
sub_52e8a0(&var_404)
void var_2e4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_2e4, 
    &data_af0660)
sub_6c7cc0(&arg1[0x10], 0xbc2, &var_2e4, 1, 0)
sub_52e8a0(&var_2e4)
void var_4f4
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_4f4, 
    &data_aef88c)
sub_6c7cc0(&arg1[0x10], 0xbc1, &var_4f4, 1, 0)
sub_52e8a0(&var_4f4)
void var_314
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_314, 
    &data_affa8c)
sub_6c7cc0(&arg1[0x10], 0xbce, &var_314, 1, 0)
sub_52e8a0(&var_314)
void var_434
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_434, 
    &data_aefcf4)
sub_6c7cc0(&arg1[0x10], 0xbc3, &var_434, 1, 0)
sub_52e8a0(&var_434)
void var_344
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_344, 
    &data_affa7c)
sub_6c7cc0(&arg1[0x10], 0xbc4, &var_344, 1, 0)
sub_52e8a0(&var_344)
void var_464
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_464, 
    &data_affaac)
sub_6c7cc0(&arg1[0x10], 0xbc5, &var_464, 1, 0)
sub_52e8a0(&var_464)
void var_374
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_374, 
    &data_affa98)
sub_6c7cc0(&arg1[0x10], 0xbc6, &var_374, 1, 0)
sub_52e8a0(&var_374)
sub_6c7f20(&arg1[0x10])
void var_224
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_224, 
    &data_affacc)
sub_6c7cc0(&arg1[0x10], 0xbc7, &var_224, 1, 0)
sub_52e8a0(&var_224)
void var_3a4
int32_t var_518_247 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_3a4, 
    &data_affac0)
sub_6c7df0(&arg1[0x10], 0xbc8, &var_3a4, sub_54d1f0(&arg1[0x16]), 1)
sub_52e8a0(&var_3a4)
void var_47c
int32_t var_518_249 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_47c, 
    Flag.ini")
sub_6c7df0(&arg1[0x10], 0xbc9, &var_47c, sub_54d1f0(&arg1[0x18]), 1)
sub_52e8a0(&var_47c)
void var_23c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_23c, 
    &data_affae0)
sub_6c7cc0(&arg1[0x10], 0xbca, &var_23c, 1, 0)
sub_52e8a0(&var_23c)
void var_26c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_26c, 
    &data_af18a8)
sub_6c7cc0(&arg1[0x10], 0xbcb, &var_26c, 1, 0)
sub_52e8a0(&var_26c)
void var_29c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_29c, 
    "\rTMR")
sub_6c7cc0(&arg1[0x10], 0xbcc, &var_29c, 1, 0)
sub_52e8a0(&var_29c)
void var_2cc
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_2cc, 
    &data_aedca0)
sub_6c7cc0(&arg1[0x10], 0xbcd, &var_2cc, 1, 0)
sub_52e8a0(&var_2cc)
void var_2fc
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_2fc, 
    &data_af1964)
sub_6c7cc0(&arg1[0x10], 0xbd0, &var_2fc, 1, 0)
sub_52e8a0(&var_2fc)
void var_32c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_32c, 
    &data_aef858)
sub_6c7cc0(&arg1[0x10], 0xbcf, &var_32c, 1, 0)
sub_52e8a0(&var_32c)
void var_35c
int32_t var_518_263 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_35c, 
    &data_affb0c)
sub_6c7df0(&arg1[0x10], 0xbd1, &var_35c, sub_54d1f0(&arg1[0x1a]), 1)
sub_52e8a0(&var_35c)
void var_38c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_38c, 
    &data_affb4c)
sub_6c7cc0(&arg1[0x10], 0xbd2, &var_38c, 1, 0)
sub_52e8a0(&var_38c)
void var_3bc
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_3bc, 
    &data_af0fb8)
sub_6c7cc0(&arg1[0x10], 0xbd3, &var_3bc, 1, 0)
sub_52e8a0(&var_3bc)
void var_3ec
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_3ec, 
    &data_affb30)
sub_6c7cc0(&arg1[0x10], 0xbd4, &var_3ec, 1, 0)
sub_52e8a0(&var_3ec)
void var_41c
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_41c, 
    &data_affb74)
sub_6c7cc0(&arg1[0x10], 0xbd5, &var_41c, 1, 0)
sub_52e8a0(&var_41c)
sub_6c7c60(&arg1[0x1c])
sub_6c7c60(arg1)
void var_44c
int32_t var_518_273 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_44c, 
    &data_affb68)
sub_6c7df0(arg1, 0x3e8, &var_44c, sub_54d1f0(&arg1[2]), 1)
sub_52e8a0(&var_44c)
void var_4ac
int32_t var_518_275 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_4ac, 
    &data_affb94)
sub_6c7df0(arg1, 0x7d0, &var_4ac, sub_54d1f0(&arg1[0xe]), 1)
sub_52e8a0(&var_4ac)
void var_4dc
int32_t var_518_277 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_4dc, 
    &data_affb84)
sub_6c7df0(arg1, 0xbb8, &var_4dc, sub_54d1f0(&arg1[0x10]), 1)
sub_52e8a0(&var_4dc)
int32_t var_518_279 =
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_20c, 
    &data_aef41c)
sub_6c7df0(arg1, 0xfa0, &var_20c, sub_54d1f0(&arg1[0x1c]), 1)
sub_52e8a0(&var_20c)
var_8_2.b = 0xc
`eh vector vbase constructor iterator'(&var_a4, 0x18, 6, sub_52e8a0)
int32_t var_8_3 = 0xffffffff
int32_t result = `eh vector vbase constructor iterator'(&var_1dc, 0x18, 0xd, sub_52e8a0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
