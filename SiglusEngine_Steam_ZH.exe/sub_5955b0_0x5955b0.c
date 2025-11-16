// 函数: sub_5955b0
// 地址: 0x5955b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AAVios_base@2@DPBDI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_ec = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x914) = 1
int32_t var_74 = 7
int32_t var_78 = 0
int16_t var_88 = 0
sub_52e720(&var_88, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
void* hDlg_3 = *(arg1 + 4)
void* var_d4 = hDlg_3

if (arg1 + 0xc0 != &var_88)
    sub_52e3c0(arg1 + 0xc0, &var_88, 0, 0xffffffff)
    hDlg_3 = var_d4

*(arg1 + 0x114) = 4
*(arg1 + 0x118) = 0
HWND eax_3 = GetDlgItem(hDlg_3, 0x47e)
*(arg1 + 0xbc) = eax_3
sub_6c0100(arg1 + 0xb8, eax_3)
var_d4 = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &var_d4)
int32_t var_8_2 = 0xffffffff

if (var_74 u>= 8)
    j__free(var_88.d)

int32_t var_8c = 7
int32_t var_90 = 0
int16_t var_a0 = 0
sub_52e720(&var_a0, &data_ad7c90, nullptr)
int32_t var_8_3 = 1
void* eax_4 = arg1 + 0x3ec
var_d4 = *(arg1 + 4)

if (eax_4 + 8 != &var_a0)
    sub_52e3c0(eax_4 + 8, &var_a0, 0, 0xffffffff)
    eax_4 = arg1 + 0x3ec

void* hDlg = var_d4
*(eax_4 + 0x5c) = 5
*(eax_4 + 0x60) = 0
HWND eax_5 = GetDlgItem(hDlg, 0x47c)
*(arg1 + 0x3f0) = eax_5
sub_6c0100(arg1 + 0x3ec, eax_5)
var_d4 = arg1 + 0x3ec
sub_530ba0(arg1 + 0x64, &var_d4)
int32_t var_8_4 = 0xffffffff

if (var_8c u>= 8)
    j__free(var_a0.d)

int32_t var_a4 = 7
int32_t var_a8 = 0
int16_t var_b8 = 0
sub_52e720(&var_b8, &data_ad7c90, nullptr)
int32_t var_8_5 = 2
void* eax_7 = arg1 + 0x720
var_d4 = *(arg1 + 4)
int32_t var_d8 = eax_7

if (eax_7 + 8 != &var_b8)
    sub_52e3c0(eax_7 + 8, &var_b8, 0, 0xffffffff)
    eax_7 = arg1 + 0x720

void* hDlg_1 = var_d4
*(eax_7 + 0x5c) = 3
*(eax_7 + 0x60) = 0
HWND eax_8 = GetDlgItem(hDlg_1, 0x3f5)
*(arg1 + 0x724) = eax_8
sub_6c0100(arg1 + 0x720, eax_8)
var_d4 = arg1 + 0x720
sub_530ba0(arg1 + 0x64, &var_d4)
int32_t var_8_6 = 0xffffffff

if (var_a4 u>= 8)
    j__free(var_b8.d)

int32_t var_bc = 7
int32_t var_c0 = 0
int16_t var_d0 = 0
sub_52e720(&var_d0, &data_ad7c90, nullptr)
int32_t var_8_7 = 3
void* eax_10 = arg1 + 0x7b0
var_d4 = *(arg1 + 4)

if (eax_10 + 8 != &var_d0)
    sub_52e3c0(eax_10 + 8, &var_d0, 0, 0xffffffff)
    eax_10 = arg1 + 0x7b0

void* hDlg_2 = var_d4
*(eax_10 + 0x5c) = 2
*(eax_10 + 0x60) = 0
HWND eax_11 = GetDlgItem(hDlg_2, 0x4d2)
*(arg1 + 0x7b4) = eax_11
sub_6c0100(arg1 + 0x7b0, eax_11)
var_d4 = arg1 + 0x7b0
sub_530ba0(arg1 + 0x64, &var_d4)
int32_t var_8_8 = 0xffffffff

if (var_bc u>= 8)
    j__free(var_d0.d)

int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, 0xaf0418, 4)
int32_t var_8_9 = 4
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"scn_name", 8)
var_8_9.b = 5
HWND hWnd_9 = *(arg1 + 0xbc)
HWND hWnd_10

if (hWnd_9 != 0)
    hWnd_10 = SendMessageW(hWnd_9, 0x101f, 0, 0)
else
    hWnd_10 = nullptr

int16_t* ecx_21 = &var_2c
LRESULT wParam = SendMessageW(hWnd_10, 0x1200, 0, 0)
int32_t lParam = 7

if (var_18 u>= 8)
    ecx_21 = var_2c.d

HWND hWnd = *(arg1 + 0xbc)
var_d4 = wParam
int32_t var_6c = 0
int32_t var_68 = 0x64
int16_t* var_64 = ecx_21

if (hWnd != 0)
    SendMessageW(hWnd, 0x1061, wParam, &lParam)
    wParam = var_d4

int16_t* var_f0_13 = &var_44
sub_6c6920(arg1 + 0x148, &var_d4, *(arg1 + 0x148) + wParam * 0x18, arg1 + 0x148)

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_8_10 = 0xffffffff
int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
sub_52e720(&var_2c, 0xaf0438, 1)
int32_t var_8_11 = 6
int32_t var_30_2 = 7
int32_t var_34_2 = 0
var_44 = 0
sub_52e720(&var_44, u"finish", 6)
var_8_11.b = 7
LRESULT hWnd_1 = *(arg1 + 0xbc)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x101f, 0, 0)

int16_t* ecx_25 = &var_2c
LRESULT wParam_1 = SendMessageW(hWnd_1, 0x1200, 0, 0)
lParam = 7

if (var_18_1 u>= 8)
    ecx_25 = var_2c.d

HWND hWnd_2 = *(arg1 + 0xbc)
var_d4 = wParam_1
int32_t var_6c_1 = 0
int32_t var_68_1 = 0x1e
int16_t* var_64_1 = ecx_25

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x1061, wParam_1, &lParam)
    wParam_1 = var_d4

int16_t* var_f0_17 = &var_44
sub_6c6920(arg1 + 0x148, &var_d4, *(arg1 + 0x148) + wParam_1 * 0x18, arg1 + 0x148)

if (var_30_2 u>= 8)
    j__free(var_44.d)

int32_t var_8_12 = 0xffffffff
int32_t var_30_3 = 7
int32_t var_34_3 = 0
var_44 = 0

if (var_18_1 u>= 8)
    j__free(var_2c.d)

int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, 0xaf044c, 2)
int32_t var_8_13 = 8
int32_t var_30_4 = 7
int32_t var_34_4 = 0
var_44 = 0
sub_52e720(&var_44, u"read", 4)
var_8_13.b = 9
HWND hWnd_3 = *(arg1 + 0xbc)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x101f, 0, 0)

int16_t* ecx_29 = &var_2c
void* wParam_2 = SendMessageW(hWnd_3, 0x1200, 0, 0)
lParam = 7

if (var_18_2 u>= 8)
    ecx_29 = var_2c.d

HWND hWnd_4 = *(arg1 + 0xbc)
var_d4 = wParam_2
int32_t var_6c_2 = 0
int32_t var_68_2 = 0x64
int16_t* var_64_2 = ecx_29

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0x1061, wParam_2, &lParam)
    wParam_2 = var_d4

int16_t* var_f0_21 = &var_44
sub_6c6920(arg1 + 0x148, &var_d4, *(arg1 + 0x148) + wParam_2 * 0x18, arg1 + 0x148)

if (var_30_4 u>= 8)
    j__free(var_44.d)

int32_t var_8_14 = 0xffffffff
int32_t var_30_5 = 7
int32_t var_34_5 = 0
var_44 = 0

if (var_18_2 u>= 8)
    j__free(var_2c.d)

LRESULT hWnd_5 = *(arg1 + 0xbc)

if (hWnd_5 != 0)
    hWnd_5 = SendMessageW(hWnd_5, 0x1037, 0, 0)

HWND hWnd_11 = *(arg1 + 0xbc)

if (hWnd_11 != 0)
    SendMessageW(hWnd_11, 0x1036, 0, hWnd_5 | 0x20)

sub_52e820(&var_44, 0xaf0460)
int32_t var_8_15 = 0xa
sub_52e820(&var_2c, u"flag")
var_8_15.b = 0xb
LRESULT eax_24
int32_t ecx_34
eax_24, ecx_34 = sub_6c47f0(arg1 + 0x3ec)
int32_t var_f0_25 = ecx_34
sub_6c4880(arg1 + 0x3ec, eax_24, &var_2c, &var_44, 0x64)

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_8_16 = 0xffffffff
int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0

if (var_30_5 u>= 8)
    j__free(var_44.d)

sub_52e820(&var_44, u"dummy")
int32_t var_8_17 = 0xc
sub_52e820(&var_2c, u"dummy")
var_8_17.b = 0xd
LRESULT eax_25
int32_t ecx_39
eax_25, ecx_39 = sub_6c47f0(arg1 + 0x3ec)
int32_t var_f0_28 = ecx_39
sub_6c4880(arg1 + 0x3ec, eax_25, &var_2c, &var_44, 0)

if (var_18_3 u>= 8)
    j__free(var_2c.d)

int32_t var_8_18 = 0xffffffff
int32_t var_18_4 = 7
int32_t var_1c_4 = 0
var_2c = 0

if (var_30_5 u>= 8)
    j__free(var_44.d)

LRESULT hWnd_12 = *(arg1 + 0x3f0)
void* eax_26 = arg1 + 0x3ec

if (hWnd_12 != 0)
    hWnd_12 = SendMessageW(hWnd_12, 0x1037, 0, 0)
    eax_26 = arg1 + 0x3ec

int16_t* hWnd_6 = *(eax_26 + 4)

if (hWnd_6 != 0)
    SendMessageW(hWnd_6, 0x1036, 0, hWnd_12 | 0x24)

var_d4 = arg1 + 0xb8
*(arg1 + 0x890) = 1
*(arg1 + 0x898) = *(arg1 + 0x894)
*(arg1 + 0x8a4) = *(arg1 + 0x8a0)
sub_530ba0(arg1 + 0x894, &var_d4)
var_d4 = arg1 + 0x3ec
sub_530ba0(arg1 + 0x8a0, &var_d4)
var_d8 = var_d8
sub_530ba0(arg1 + 0x8a0, &var_d8)
int16_t var_5c
sub_52e820(&var_5c, u"separater")
int32_t var_8_19 = 0xe
sub_6c46c0(arg1, arg1 + 0x840, &var_5c)
int32_t var_8_20 = 0xffffffff
int32_t var_48

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
var_5c = 0
int32_t var_4c = 0
int16_t* var_fc_16
var_fc_16.o = zx.o(0)
sub_6c2800(arg1, var_fc_16)
sub_6c78f0(arg1 + 0x80)
HWND hWnd_7 = *(arg1 + 4)

if (hWnd_7 != 0)
    UpdateWindow(hWnd_7)

int32_t hWnd_8 = *(arg1 + 4)

if (hWnd_8 != 0 && (GetWindowLongW(hWnd_8, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_8.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_8
