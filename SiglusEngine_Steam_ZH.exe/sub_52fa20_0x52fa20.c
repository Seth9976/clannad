// 函数: sub_52fa20
// 地址: 0x52fa20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AAVios_base@2@AAHAA_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_cc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND var_dc = 0x54020103
HWND hWnd = CreateStatusWindowW(0x54020103, &data_ad7c90, *(arg1 + 4), 0xc350)
*(arg1 + 0x7c) = hWnd

if (hWnd != 0)
    SendMessageW(hWnd, 0x40b, 0x100, &data_ad7c90)
    *(arg1 + 0x78) = 1
else
    *(arg1 + 0x78) = hWnd.b

int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, u"TAB_BASE", 8)
int32_t var_8_1 = 0
int32_t hDlg_3 = *(arg1 + 4)
int32_t hDlg_4 = hDlg_3

if (arg1 + 0xc4 != &var_74)
    sub_52e3c0(arg1 + 0xc4, &var_74, 0, 0xffffffff)
    hDlg_3 = hDlg_4

*(arg1 + 0x118) = 5
*(arg1 + 0x11c) = 0
HWND eax_3 = GetDlgItem(hDlg_3, 0x4d4)
*(arg1 + 0xc0) = eax_3
sub_6c0100(arg1 + 0xbc, eax_3)
hDlg_4 = arg1 + 0xbc
sub_530ba0(arg1 + 0x64, &hDlg_4)
int32_t var_8_2 = 0xffffffff

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_78 = 7
int32_t var_7c = 0
int16_t var_8c = 0
sub_52e720(&var_8c, &data_ad7c90, nullptr)
int32_t var_8_3 = 1
void* eax_4 = arg1 + 0x274
hDlg_4 = *(arg1 + 4)

if (eax_4 + 8 != &var_8c)
    sub_52e3c0(eax_4 + 8, &var_8c, 0, 0xffffffff)
    eax_4 = arg1 + 0x274

int32_t hDlg = hDlg_4
*(eax_4 + 0x5c) = 1
*(eax_4 + 0x60) = 0
HWND eax_5 = GetDlgItem(hDlg, 0x4c4)
*(arg1 + 0x278) = eax_5
sub_6c0100(arg1 + 0x274, eax_5)
hDlg_4 = arg1 + 0x274
sub_530ba0(arg1 + 0x64, &hDlg_4)
int32_t var_8_4 = 0xffffffff

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_90 = 7
int32_t var_94 = 0
int16_t var_a4 = 0
sub_52e720(&var_a4, &data_ad7c90, nullptr)
int32_t var_8_5 = 2
void* eax_7 = arg1 + 0x154
hDlg_4 = *(arg1 + 4)

if (eax_7 + 8 != &var_a4)
    sub_52e3c0(eax_7 + 8, &var_a4, 0, 0xffffffff)
    eax_7 = arg1 + 0x154

int32_t hDlg_1 = hDlg_4
*(eax_7 + 0x5c) = 3
*(eax_7 + 0x60) = 0
HWND eax_8 = GetDlgItem(hDlg_1, 0x3e9)
*(arg1 + 0x158) = eax_8
sub_6c0100(arg1 + 0x154, eax_8)
hDlg_4 = arg1 + 0x154
sub_530ba0(arg1 + 0x64, &hDlg_4)
int32_t var_8_6 = 0xffffffff

if (var_90 u>= 8)
    j__free(var_a4.d)

int32_t var_a8 = 7
int32_t var_ac = 0
int16_t var_bc = 0
sub_52e720(&var_bc, &data_ad7c90, nullptr)
int32_t var_8_7 = 3
void* eax_10 = arg1 + 0x1e4
hDlg_4 = *(arg1 + 4)

if (eax_10 + 8 != &var_bc)
    sub_52e3c0(eax_10 + 8, &var_bc, 0, 0xffffffff)
    eax_10 = arg1 + 0x1e4

int32_t hDlg_2 = hDlg_4
*(eax_10 + 0x5c) = 3
*(eax_10 + 0x60) = 0
HWND eax_11 = GetDlgItem(hDlg_2, 0x3f2)
*(arg1 + 0x1e8) = eax_11
sub_6c0100(arg1 + 0x1e4, eax_11)
hDlg_4 = arg1 + 0x1e4
sub_530ba0(arg1 + 0x64, &hDlg_4)
int32_t var_8_8 = 0xffffffff

if (var_a8 u>= 8)
    j__free(var_bc.d)

sub_530590(arg1)
*(arg1 + 0x150) = arg1
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, &data_ad7c90, nullptr)
int32_t var_8_9 = 4
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"TAB_SELECT_NO", 0xd)
var_8_9.b = 5
WPARAM wParam = sub_6c2460(arg1 + 0xbc, &var_44, nullptr, &var_5c)

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_8_10 = 0xffffffff
int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_48_1 = 7
int32_t var_4c_1 = 0
var_5c = 0

if (wParam s< 0 || wParam s>= (*(arg1 + 0x314) - *(arg1 + 0x310)) s>> 2)
    wParam = 0

HWND hWnd_1 = *(arg1 + 0xc0)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x130c, wParam, 0)

sub_6c2db0(arg1 + 0x274, data_bac510 + 0x34)
sub_6c30e0(arg1 + 0x274)
var_dc.o = zx.o(0)
sub_6c2800(arg1, var_dc)

if (*(arg1 + 0xb8) != 0)
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    int16_t var_2c = 0
    sub_52e720(&var_2c, 0xad7cb0, 0xc)
    int32_t var_8_11 = 6
    sub_6c1b50(arg1, &var_2c)
    int32_t var_8_12 = 0xffffffff
    
    if (var_18_1 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_2 = 7
    int32_t var_1c_2 = 0
    var_2c = 0

HWND hWnd_2 = *(arg1 + 4)

if (hWnd_2 != 0)
    UpdateWindow(hWnd_2)

HWND hWnd_3 = *(arg1 + 4)

if (hWnd_3 != 0 && (GetWindowLongW(hWnd_3, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

sub_530900(arg1)
int32_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
