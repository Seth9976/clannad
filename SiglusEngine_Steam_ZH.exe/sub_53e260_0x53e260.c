// 函数: sub_53e260
// 地址: 0x53e260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0ae1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* hDlg_7
int32_t eax_2 = __security_cookie ^ &hDlg_7
int32_t __saved_edi
int32_t var_124 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x1974) = 0x1010101
int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
void* hDlg_8 = *(arg1 + 4)
hDlg_7 = hDlg_8
HWND hDlg_6 = *(hDlg_8 + 4)

if (arg1 + 0x24 != &var_ac)
    sub_52e3c0(arg1 + 0x24, &var_ac, 0, 0xffffffff)

*(arg1 + 0x78) = 7
*(arg1 + 0x7c) = 0
HWND eax_5 = GetDlgItem(hDlg_6, 0x45b)
*(arg1 + 0x20) = eax_5
sub_6c0100(arg1 + 0x1c, eax_5)
void* ecx_4 = hDlg_7 + 0x64
int32_t var_110 = arg1 + 0x1c
sub_530ba0(ecx_4, &var_110)
int32_t var_c_2 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, &data_ad7c90, nullptr)
int32_t var_c_3 = 1
int32_t eax_6 = *(arg1 + 4)
var_110 = eax_6
void* hDlg = *(eax_6 + 4)
hDlg_7 = hDlg

if (arg1 + 0x1d4 != &var_94)
    sub_52e3c0(arg1 + 0x1d4, &var_94, 0, 0xffffffff)
    hDlg = hDlg_7

*(arg1 + 0x228) = 8
*(arg1 + 0x22c) = 0
HWND eax_7 = GetDlgItem(hDlg, 0x464)
*(arg1 + 0x1d0) = eax_7
sub_6c0100(arg1 + 0x1cc, eax_7)
int32_t* ecx_9 = var_110 + 0x64
hDlg_7 = arg1 + 0x1cc
sub_530ba0(ecx_9, &hDlg_7)
int32_t var_c_4 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_5 = 2
int32_t eax_8 = *(arg1 + 4)
var_110 = eax_8
void* hDlg_1 = *(eax_8 + 4)
hDlg_7 = hDlg_1

if (arg1 + 0x534 != &var_7c)
    sub_52e3c0(arg1 + 0x534, &var_7c, 0, 0xffffffff)
    hDlg_1 = hDlg_7

*(arg1 + 0x588) = 8
*(arg1 + 0x58c) = 0
HWND eax_9 = GetDlgItem(hDlg_1, 0x456)
*(arg1 + 0x530) = eax_9
sub_6c0100(arg1 + 0x52c, eax_9)
int32_t* ecx_14 = var_110 + 0x64
hDlg_7 = arg1 + 0x52c
sub_530ba0(ecx_14, &hDlg_7)
int32_t var_c_6 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_e0 = 7
int32_t var_e4 = 0
int16_t var_f4 = 0
sub_52e720(&var_f4, &data_ad7c90, nullptr)
int32_t var_c_7 = 3
int32_t eax_10 = *(arg1 + 4)
var_110 = eax_10
void* hDlg_2 = *(eax_10 + 4)
hDlg_7 = hDlg_2

if (arg1 + 0x9bc != &var_f4)
    sub_52e3c0(arg1 + 0x9bc, &var_f4, 0, 0xffffffff)
    hDlg_2 = hDlg_7

*(arg1 + 0xa10) = 5
*(arg1 + 0xa14) = 0
HWND eax_11 = GetDlgItem(hDlg_2, 0x4d9)
*(arg1 + 0x9b8) = eax_11
sub_6c0100(arg1 + 0x9b4, eax_11)
int32_t* ecx_19 = var_110 + 0x64
hDlg_7 = arg1 + 0x9b4
sub_530ba0(ecx_19, &hDlg_7)
int32_t var_c_8 = 0xffffffff

if (var_e0 u>= 8)
    j__free(var_f4.d)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
int32_t var_c_9 = 4
int32_t eax_12 = *(arg1 + 4)
var_110 = eax_12
void* hDlg_3 = *(eax_12 + 4)
hDlg_7 = hDlg_3

if (arg1 + 0xa4c != &var_64)
    sub_52e3c0(arg1 + 0xa4c, &var_64, 0, 0xffffffff)
    hDlg_3 = hDlg_7

*(arg1 + 0xaa0) = 7
*(arg1 + 0xaa4) = 0
HWND eax_13 = GetDlgItem(hDlg_3, 0x454)
*(arg1 + 0xa48) = eax_13
sub_6c0100(arg1 + 0xa44, eax_13)
int32_t* ecx_24 = var_110 + 0x64
hDlg_7 = arg1 + 0xa44
sub_530ba0(ecx_24, &hDlg_7)
int32_t var_c_10 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_c8 = 7
int32_t var_cc = 0
int16_t var_dc = 0
sub_52e720(&var_dc, &data_ad7c90, nullptr)
int32_t var_c_11 = 5
int32_t eax_14 = *(arg1 + 4)
var_110 = eax_14
void* hDlg_4 = *(eax_14 + 4)
hDlg_7 = hDlg_4

if (arg1 + 0xe3c != &var_dc)
    sub_52e3c0(arg1 + 0xe3c, &var_dc, 0, 0xffffffff)
    hDlg_4 = hDlg_7

*(arg1 + 0xe90) = 8
*(arg1 + 0xe94) = 0
HWND eax_15 = GetDlgItem(hDlg_4, 0x453)
*(arg1 + 0xe38) = eax_15
sub_6c0100(arg1 + 0xe34, eax_15)
int32_t* ecx_29 = var_110 + 0x64
hDlg_7 = arg1 + 0xe34
sub_530ba0(ecx_29, &hDlg_7)
int32_t var_c_12 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc.d)

int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, &data_ad7c90, nullptr)
int32_t var_c_13 = 6
int32_t eax_16 = *(arg1 + 4)
var_110 = eax_16
void* hDlg_5 = *(eax_16 + 4)
hDlg_7 = hDlg_5

if (arg1 + 0xb4 != &var_c4)
    sub_52e3c0(arg1 + 0xb4, &var_c4, 0, 0xffffffff)
    hDlg_5 = hDlg_7

*(arg1 + 0x108) = 7
*(arg1 + 0x10c) = 0
HWND eax_17 = GetDlgItem(hDlg_5, 0x48e)
*(arg1 + 0xb0) = eax_17
sub_6c0100(arg1 + 0xac, eax_17)
int32_t* ecx_34 = var_110 + 0x64
hDlg_7 = arg1 + 0xac
sub_530ba0(ecx_34, &hDlg_7)
int32_t var_c_14 = 0xffffffff

if (var_b0 u>= 8)
    j__free(var_c4.d)

void* var_10c
sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_15 = 7
sub_6c4400(*(arg1 + 4), arg1 + 0x13c, 0x48f, &var_10c, 7, 0)
int32_t var_c_16 = 0xffffffff
int32_t var_f8

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_17 = 8
sub_6c4400(*(arg1 + 4), arg1 + 0x25c, 0x492, &var_10c, 7, 0)
int32_t var_c_18 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_19 = 9
sub_6c4400(*(arg1 + 4), arg1 + 0x2ec, 0x493, &var_10c, 7, 0)
int32_t var_c_20 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_21 = 0xa
sub_6c4400(*(arg1 + 4), arg1 + 0x37c, 0x494, &var_10c, 7, 0)
int32_t var_c_22 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_23 = 0xb
sub_6c4400(*(arg1 + 4), arg1 + 0x40c, 0x495, &var_10c, 7, 0)
int32_t var_c_24 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_25 = 0xc
sub_6c4400(*(arg1 + 4), arg1 + 0x49c, 0x496, &var_10c, 7, 0)
int32_t var_c_26 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_27 = 0xd
sub_6c4400(*(arg1 + 4), arg1 + 0x5bc, 0x4d6, &var_10c, 7, 0)
int32_t var_c_28 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_29 = 0xe
sub_6c4400(*(arg1 + 4), arg1 + 0x64c, 0x3fe, &var_10c, 9, 0)
int32_t var_c_30 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_31 = 0xf
sub_6c4400(*(arg1 + 4), arg1 + 0x6dc, 0x3fd, &var_10c, 9, 0)
int32_t var_c_32 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_33 = 0x10
sub_6c4400(*(arg1 + 4), arg1 + 0x76c, 0x4c4, &var_10c, 7, 0)
int32_t var_c_34 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_35 = 0x11
sub_6c4400(*(arg1 + 4), arg1 + 0x7fc, 0x4c5, &var_10c, 7, 0)
int32_t var_c_36 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_37 = 0x12
sub_6c4400(*(arg1 + 4), arg1 + 0x88c, 0x4d8, &var_10c, 8, 0)
int32_t var_c_38 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_39 = 0x13
sub_6c4400(*(arg1 + 4), arg1 + 0x920, 0x4d7, &var_10c, 8, 0)
int32_t var_c_40 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_41 = 0x14
sub_6c4400(*(arg1 + 4), arg1 + 0xad4, 0x486, &var_10c, 7, 0)
int32_t var_c_42 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_43 = 0x15
sub_6c4400(*(arg1 + 4), arg1 + 0xb64, 0x484, &var_10c, 7, 0)
int32_t var_c_44 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_45 = 0x16
sub_6c4400(*(arg1 + 4), arg1 + 0xbf4, 0x488, &var_10c, 7, 0)
int32_t var_c_46 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_47 = 0x17
sub_6c4400(*(arg1 + 4), arg1 + 0xc84, 0x487, &var_10c, 7, 0)
int32_t var_c_48 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_49 = 0x18
sub_6c4400(*(arg1 + 4), arg1 + 0xd14, 0x485, &var_10c, 7, 0)
int32_t var_c_50 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_51 = 0x19
sub_6c4400(*(arg1 + 4), arg1 + 0xda4, 0x483, &var_10c, 7, 0)
int32_t var_c_52 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_53 = 0x1a
sub_6c4400(*(arg1 + 4), arg1 + 0xec4, 0x4c2, &var_10c, 7, 0)
int32_t var_c_54 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_55 = 0x1b
sub_6c4400(*(arg1 + 4), arg1 + 0xf54, 0x3fb, &var_10c, 7, 0)
int32_t var_c_56 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_57 = 0x1c
sub_6c4400(*(arg1 + 4), arg1 + 0xfe4, 0x4c3, &var_10c, 7, 0)
int32_t var_c_58 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_59 = 0x1d
sub_6c4400(*(arg1 + 4), arg1 + 0x1074, 0x49e, &var_10c, 8, 0)
int32_t var_c_60 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

sub_52e820(&var_10c, &data_ad7c90)
int32_t var_c_61 = 0x1e
sub_6c4400(*(arg1 + 4), arg1 + 0x1104, 0x4c0, &var_10c, 7, 0)
int32_t var_c_62 = 0xffffffff

if (var_f8 u>= 8)
    j__free(var_10c)

int32_t var_f8_1 = 7
hDlg_7 = nullptr
int32_t var_fc = 0
std::char_traits<wchar_t>::assign(sub_52e3b0(&var_10c), &hDlg_7)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_63 = 0x1f
sub_6c4400(*(arg1 + 4), arg1 + 0x1194, 0x3fa, &var_10c, 7, 0)
int32_t var_c_64 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_65 = 0x20
sub_6c4400(*(arg1 + 4), arg1 + 0x1224, 0x4c1, &var_10c, 7, 0)
int32_t var_c_66 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_67 = 0x21
sub_6c4400(*(arg1 + 4), arg1 + 0x12b4, 0x49d, &var_10c, 8, 0)
int32_t var_c_68 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_69 = 0x22
sub_6c4400(*(arg1 + 4), arg1 + 0x1344, 0x417, &var_10c, 7, 0)
int32_t var_c_70 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_71 = 0x23
sub_6c4400(*(arg1 + 4), arg1 + 0x13d4, 0x4be, &var_10c, 7, 0)
int32_t var_c_72 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_73 = 0x24
sub_6c4400(*(arg1 + 4), arg1 + 0x1464, 0x3f9, &var_10c, 7, 0)
int32_t var_c_74 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_75 = 0x25
sub_6c4400(*(arg1 + 4), arg1 + 0x14f4, 0x4bf, &var_10c, 7, 0)
int32_t var_c_76 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_77 = 0x26
sub_6c4400(*(arg1 + 4), arg1 + 0x1584, 0x49c, &var_10c, 8, 0)
int32_t var_c_78 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_79 = 0x27
sub_6c4400(*(arg1 + 4), arg1 + 0x1614, 0x4bc, &var_10c, 7, 0)
int32_t var_c_80 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_81 = 0x28
sub_6c4400(*(arg1 + 4), arg1 + 0x16a4, 0x3f8, &var_10c, 7, 0)
int32_t var_c_82 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_83 = 0x29
sub_6c4400(*(arg1 + 4), arg1 + 0x1734, 0x4bd, &var_10c, 7, 0)
int32_t var_c_84 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_85 = 0x2a
sub_6c4400(*(arg1 + 4), arg1 + 0x17c4, 0x49b, &var_10c, 8, 0)
int32_t var_c_86 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_87 = 0x2b
sub_6c4400(*(arg1 + 4), arg1 + 0x1854, 0x3fc, &var_10c, 3, 0)
int32_t var_c_88 = 0xffffffff
sub_52e8a0(&var_10c)
<lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_10c, 
    &data_ad7c90)
int32_t var_c_89 = 0x2c
sub_6c4400(*(arg1 + 4), arg1 + 0x18e4, 0x40c, &var_10c, 3, 0)
int32_t var_c_90 = 0xffffffff
sub_52e8a0(&var_10c)

if (*(arg1 + 0x12) != 0)
    sub_6c2db0(arg1 + 0x18e4, &data_b6c5e4)

sub_6c3940(arg1 + 0x1074, 0x32, 0x12c)
sub_6c3940(arg1 + 0x12b4, 0x32, 0x12c)
sub_6c3940(arg1 + 0x1584, 0xff9c, 0x64)
sub_6c3940(arg1 + 0x17c4, 0xff9c, 0x64)
WPARAM edi_1 = 0

if (sub_5418e0(data_bac4a4) s> 0)
    int32_t eax_59
    
    do
        void var_4c
        sub_541920(&var_4c, sub_541900(edi_1) + 0x400)
        int32_t var_c_91 = 0x2d
        void var_34
        void** eax_58
        int32_t ecx_134
        eax_58, ecx_134 = sub_6af1e0(&var_34)
        int32_t var_128_48 = ecx_134
        sub_6c3530(arg1 + 0x88c, eax_58, edi_1)
        sub_52e8a0(&var_34)
        int32_t var_c_92 = 0xffffffff
        sub_53f510(&var_4c)
        edi_1 += 1
        eax_59 = sub_5418e0(data_bac4a4)
    while (edi_1 s< eax_59)

sub_6c33f0(arg1 + 0x88c, *(data_bac4e4 + 0x20))
int32_t result = sub_53fdd0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &hDlg_7)
return result
