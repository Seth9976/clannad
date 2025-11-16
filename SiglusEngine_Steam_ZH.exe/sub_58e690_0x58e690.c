// 函数: sub_58e690
// 地址: 0x58e690
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b7ab7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_fc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x5c0) = 1
*(arg1 + 0x5a4) = 0
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, u"stc_koe", 7)
int32_t var_8_1 = 0
int32_t hDlg = *(arg1 + 4)
int32_t hDlg_7 = hDlg

if (arg1 + 0xc0 != &var_5c)
    sub_52e3c0(arg1 + 0xc0, &var_5c, 0, 0xffffffff)
    hDlg = hDlg_7

*(arg1 + 0x114) = 8
*(arg1 + 0x118) = 0
HWND eax_3 = GetDlgItem(hDlg, 0x4d2)
*(arg1 + 0xbc) = eax_3
sub_6c0100(arg1 + 0xb8, eax_3)
hDlg_7 = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_2 = 0xffffffff

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_a8 = 7
int32_t var_ac = 0
int16_t var_bc = 0
sub_52e720(&var_bc, u"prg_koe", 7)
int32_t var_8_3 = 1
int32_t hDlg_1 = *(arg1 + 4)
hDlg_7 = hDlg_1

if (arg1 + 0x270 != &var_bc)
    sub_52e3c0(arg1 + 0x270, &var_bc, 0, 0xffffffff)
    hDlg_1 = hDlg_7

*(arg1 + 0x2c4) = 8
*(arg1 + 0x2c8) = 0
HWND eax_4 = GetDlgItem(hDlg_1, 0x4f4)
*(arg1 + 0x26c) = eax_4
sub_6c0100(arg1 + 0x268, eax_4)
hDlg_7 = arg1 + 0x268
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_4 = 0xffffffff

if (var_a8 u>= 8)
    j__free(var_bc.d)

int32_t var_78 = 7
int32_t var_7c = 0
int16_t var_8c = 0
sub_52e720(&var_8c, u"pct_koe", 7)
int32_t var_8_5 = 2
int32_t hDlg_2 = *(arg1 + 4)
hDlg_7 = hDlg_2

if (arg1 + 0x300 != &var_8c)
    sub_52e3c0(arg1 + 0x300, &var_8c, 0, 0xffffffff)
    hDlg_2 = hDlg_7

*(arg1 + 0x354) = 5
*(arg1 + 0x358) = 0
HWND eax_5 = GetDlgItem(hDlg_2, 0x4f6)
*(arg1 + 0x2fc) = eax_5
sub_6c0100(arg1 + 0x2f8, eax_5)
hDlg_7 = arg1 + 0x2f8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_6 = 0xffffffff

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"stc_pct_koe_rect", 0x10)
int32_t var_8_7 = 3
int32_t hDlg_3 = *(arg1 + 4)
hDlg_7 = hDlg_3

if (arg1 + 0x390 != &var_2c)
    sub_52e3c0(arg1 + 0x390, &var_2c, 0, 0xffffffff)
    hDlg_3 = hDlg_7

*(arg1 + 0x3e4) = 5
*(arg1 + 0x3e8) = 0
HWND eax_6 = GetDlgItem(hDlg_3, 0x4f7)
*(arg1 + 0x38c) = eax_6
sub_6c0100(arg1 + 0x388, eax_6)
hDlg_7 = arg1 + 0x388
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_8 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"stc_koe_length", 0xe)
int32_t var_8_9 = 4
int32_t hDlg_4 = *(arg1 + 4)
hDlg_7 = hDlg_4

if (arg1 + 0x1e0 != &var_44)
    sub_52e3c0(arg1 + 0x1e0, &var_44, 0, 0xffffffff)
    hDlg_4 = hDlg_7

*(arg1 + 0x234) = 3
*(arg1 + 0x238) = 0
HWND eax_7 = GetDlgItem(hDlg_4, 0x4fd)
*(arg1 + 0x1dc) = eax_7
sub_6c0100(arg1 + 0x1d8, eax_7)
hDlg_7 = arg1 + 0x1d8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_10 = 0xffffffff

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, u"stc_koe_now", 0xb)
int32_t var_8_11 = 5
int32_t hDlg_5 = *(arg1 + 4)
hDlg_7 = hDlg_5

if (arg1 + 0x150 != &var_74)
    sub_52e3c0(arg1 + 0x150, &var_74, 0, 0xffffffff)
    hDlg_5 = hDlg_7

*(arg1 + 0x1a4) = 2
*(arg1 + 0x1a8) = 0
HWND eax_8 = GetDlgItem(hDlg_5, 0x4ff)
*(arg1 + 0x14c) = eax_8
sub_6c0100(arg1 + 0x148, eax_8)
hDlg_7 = arg1 + 0x148
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_12 = 0xffffffff

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_90 = 7
int32_t var_94 = 0
int16_t var_a4 = 0
sub_52e720(&var_a4, u"btn_copy", 8)
int32_t var_8_13 = 6
HWND hDlg_6 = *(arg1 + 4)
hDlg_7 = hDlg_6

if (arg1 + 0x420 != &var_a4)
    sub_52e3c0(arg1 + 0x420, &var_a4, 0, 0xffffffff)
    hDlg_6 = hDlg_7

*(arg1 + 0x474) = 1
*(arg1 + 0x478) = 0
int32_t eax_9 = GetDlgItem(hDlg_6, 0x500)
*(arg1 + 0x41c) = eax_9
sub_6c0100(arg1 + 0x418, eax_9)
hDlg_7 = arg1 + 0x418
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_8_14 = 0xffffffff

if (var_90 u>= 8)
    j__free(var_a4.d)

int32_t var_c0 = 7
int32_t var_c4 = 0
int16_t var_d4 = 0
sub_52e720(&var_d4, u"chk_copy", 8)
int32_t var_8_15 = 7
int32_t var_10c = 0x501
sub_6c4400(arg1, arg1 + 0x4a8, 0x501, &var_d4, 9, 0)
int32_t var_8_16 = 0xffffffff

if (var_c0 u>= 8)
    j__free(var_d4.d)

*(arg1 + 0x340) = *(arg1 + 0x3d0)
var_10c.o = zx.o(0)
sub_6c2800(arg1, var_10c)
int32_t var_ec
sub_52e820(&var_ec, &data_ad7c90)
int32_t var_8_17 = 8
sub_6c3230(arg1 + 0x4a8, 0, &var_ec)
int32_t var_d8

if (var_d8 u>= 8)
    j__free(var_ec)

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    UpdateWindow(hWnd)

HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

sub_6c1c00(arg1)
LRESULT result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
