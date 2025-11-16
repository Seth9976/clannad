// 函数: sub_571cf0
// 地址: 0x571cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b4197
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t hDlg_7
int32_t eax_2 = __security_cookie ^ &hDlg_7
int32_t __saved_edi
int32_t var_104 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, u"stc_ss", 6)
int32_t var_c_1 = 0
int32_t hDlg_4 = *(arg1 + 4)
hDlg_7 = hDlg_4

if (arg1 + 0xc0 != &var_64)
    sub_52e3c0(arg1 + 0xc0, &var_64, 0, 0xffffffff)
    hDlg_4 = hDlg_7

*(arg1 + 0x114) = 7
*(arg1 + 0x118) = 0
HWND eax_5 = GetDlgItem(hDlg_4, 0x4d1)
*(arg1 + 0xbc) = eax_5
sub_6c0100(arg1 + 0xb8, eax_5)
hDlg_7 = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_2 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, u"edt_ss", 6)
int32_t var_c_3 = 1
void* eax_6 = arg1 + 0x148
hDlg_7 = *(arg1 + 4)

if (eax_6 + 8 != &var_7c)
    sub_52e3c0(eax_6 + 8, &var_7c, 0, 0xffffffff)
    eax_6 = arg1 + 0x148

int32_t hDlg = hDlg_7
*(eax_6 + 0x5c) = 8
*(eax_6 + 0x60) = 0
HWND eax_7 = GetDlgItem(hDlg, 0x440)
*(arg1 + 0x14c) = eax_7
sub_6c0100(arg1 + 0x148, eax_7)
hDlg_7 = arg1 + 0x148
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_4 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, u"stc_editor", 0xa)
int32_t var_c_5 = 2
int32_t hDlg_5 = *(arg1 + 4)
hDlg_7 = hDlg_5

if (arg1 + 0x1e0 != &var_ac)
    sub_52e3c0(arg1 + 0x1e0, &var_ac, 0, 0xffffffff)
    hDlg_5 = hDlg_7

*(arg1 + 0x234) = 7
*(arg1 + 0x238) = 0
HWND eax_9 = GetDlgItem(hDlg_5, 0x4ba)
*(arg1 + 0x1dc) = eax_9
sub_6c0100(arg1 + 0x1d8, eax_9)
hDlg_7 = arg1 + 0x1d8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_6 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_e0 = 7
int32_t var_e4 = 0
int16_t var_f4 = 0
sub_52e720(&var_f4, u"edt_editor", 0xa)
int32_t var_c_7 = 3
int32_t hDlg_6 = *(arg1 + 4)
hDlg_7 = hDlg_6

if (arg1 + 0x270 != &var_f4)
    sub_52e3c0(arg1 + 0x270, &var_f4, 0, 0xffffffff)
    hDlg_6 = hDlg_7

*(arg1 + 0x2c4) = 8
*(arg1 + 0x2c8) = 0
HWND eax_10 = GetDlgItem(hDlg_6, 0x435)
*(arg1 + 0x26c) = eax_10
sub_6c0100(arg1 + 0x268, eax_10)
hDlg_7 = arg1 + 0x268
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_8 = 0xffffffff

if (var_e0 u>= 8)
    j__free(var_f4.d)

int32_t var_c8 = 7
int32_t var_cc = 0
int16_t var_dc = 0
sub_52e720(&var_dc, u"stc_koe", 7)
int32_t var_c_9 = 4
void* eax_12 = arg1 + 0x2f8
hDlg_7 = *(arg1 + 4)

if (eax_12 + 8 != &var_dc)
    sub_52e3c0(eax_12 + 8, &var_dc, 0, 0xffffffff)
    eax_12 = arg1 + 0x2f8

int32_t hDlg_1 = hDlg_7
*(eax_12 + 0x5c) = 7
*(eax_12 + 0x60) = 0
HWND eax_13 = GetDlgItem(hDlg_1, 0x4d2)
*(arg1 + 0x2fc) = eax_13
sub_6c0100(arg1 + 0x2f8, eax_13)
hDlg_7 = arg1 + 0x2f8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_10 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc.d)

int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, u"edt_koe", 7)
int32_t var_c_11 = 5
void* eax_15 = arg1 + 0x388
hDlg_7 = *(arg1 + 4)

if (eax_15 + 8 != &var_c4)
    sub_52e3c0(eax_15 + 8, &var_c4, 0, 0xffffffff)
    eax_15 = arg1 + 0x388

int32_t hDlg_2 = hDlg_7
*(eax_15 + 0x5c) = 8
*(eax_15 + 0x60) = 0
HWND eax_16 = GetDlgItem(hDlg_2, 0x441)
*(arg1 + 0x38c) = eax_16
sub_6c0100(arg1 + 0x388, eax_16)
hDlg_7 = arg1 + 0x388
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_12 = 0xffffffff

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, u"stc_koe_tool", 0xc)
int32_t var_c_13 = 6
void* eax_18 = arg1 + 0x418
hDlg_7 = *(arg1 + 4)

if (eax_18 + 8 != &var_94)
    sub_52e3c0(eax_18 + 8, &var_94, 0, 0xffffffff)
    eax_18 = arg1 + 0x418

int32_t hDlg_3 = hDlg_7
*(eax_18 + 0x5c) = 7
*(eax_18 + 0x60) = 0
HWND eax_19 = GetDlgItem(hDlg_3, 0x4d3)
*(arg1 + 0x41c) = eax_19
sub_6c0100(arg1 + 0x418, eax_19)
hDlg_7 = arg1 + 0x418
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_14 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, u"edt_koe_tool", 0xc)
int32_t var_c_15 = 7
sub_6c4400(arg1, arg1 + 0x4a8, 0x442, &var_4c, 8, 0)
int32_t var_c_16 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int16_t var_34
sub_52e820(&var_34, u"btn_open")
int32_t var_c_17 = 8
int32_t var_114 = 0x4ed
sub_6c4400(arg1, arg1 + 0x538, 0x4ed, &var_34, 3, 0)
int32_t var_c_18 = 0xffffffff
int32_t var_20

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_20_1 = 7
var_34 = 0
int32_t var_24 = 0
sub_6c2db0(arg1 + 0x148, data_bac4e4 + 0x1a0)
sub_6c2db0(arg1 + 0x268, data_bac4e4 + 0x1b8)
sub_6c2db0(arg1 + 0x388, data_bac4e4 + 0x1d0)
sub_6c2db0(arg1 + 0x4a8, data_bac4e4 + 0x1e8)
var_114.o = zx.o(0)
sub_6c2800(arg1, var_114)
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    UpdateWindow(hWnd)

int32_t hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0 && (GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_1.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &hDlg_7)
return hWnd_1
