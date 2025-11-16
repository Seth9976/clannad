// 函数: sub_5893e0
// 地址: 0x5893e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x47c) = 0
int32_t var_74 = 7
int32_t var_78 = 0
int16_t var_88 = 0
sub_52e720(&var_88, 0xaef624, 2)
int32_t var_8_1 = 0
int32_t hDlg = *(arg1 + 4)
int32_t hDlg_3 = hDlg

if (arg1 + 0xc0 != &var_88)
    sub_52e3c0(arg1 + 0xc0, &var_88, 0, 0xffffffff)
    hDlg = hDlg_3

*(arg1 + 0x114) = 5
*(arg1 + 0x118) = 0
HWND eax_3 = GetDlgItem(hDlg, 0x46e)
*(arg1 + 0xbc) = eax_3
sub_6c0100(arg1 + 0xb8, eax_3)
hDlg_3 = arg1 + 0xb8
void* wParam_2 = arg1 + 0x64
sub_530ba0(arg1 + 0x64, &hDlg_3)
int32_t var_8_2 = 0xffffffff

if (var_74 u>= 8)
    j__free(var_88.d)

int32_t var_8c = 7
int32_t var_90 = 0
int16_t var_a0 = 0
sub_52e720(&var_a0, u"chk_only_error", 0xe)
int32_t var_8_3 = 1
int32_t hDlg_1 = *(arg1 + 4)
hDlg_3 = arg1 + 0x3ec
int32_t hDlg_2 = hDlg_1

if (arg1 + 0x3f4 != &var_a0)
    sub_52e3c0(arg1 + 0x3f4, &var_a0, 0, 0xffffffff)
    hDlg_1 = hDlg_2

*(arg1 + 0x448) = 1
*(arg1 + 0x44c) = 0
HWND eax_5 = GetDlgItem(hDlg_1, 0x4dd)
*(arg1 + 0x3f0) = eax_5
sub_6c0100(arg1 + 0x3ec, eax_5)
void* wParam_3 = wParam_2
hDlg_2 = arg1 + 0x3ec
sub_530ba0(wParam_3, &hDlg_2)
int32_t var_8_4 = 0xffffffff

if (var_8c u>= 8)
    j__free(var_a0.d)

HWND hWnd = *(arg1 + 0xbc)
LRESULT eax_6

if (hWnd != 0)
    eax_6 = SendMessageW(hWnd, 0x1037, 0, 0)
else
    eax_6 = 0

HWND hWnd_7 = *(arg1 + 0xbc)

if (hWnd_7 != 0)
    SendMessageW(hWnd_7, 0x1036, 0, eax_6 | 0x31)

int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, 0xad9408, 4)
int32_t var_8_5 = 2
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"type", 4)
var_8_5.b = 3
LRESULT hWnd_1 = *(arg1 + 0xbc)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x101f, 0, 0)

int16_t* ecx_10 = &var_44
void* wParam = SendMessageW(hWnd_1, 0x1200, 0, 0)
int32_t lParam = 7

if (var_30 u>= 8)
    ecx_10 = var_44.d

HWND hWnd_2 = *(arg1 + 0xbc)
wParam_2 = wParam
int32_t var_6c = 0
int32_t var_68 = 0x64
int16_t* var_64 = ecx_10

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x1061, wParam, &lParam)
    wParam = wParam_2

int16_t* var_c0_8 = &var_2c
sub_6c6920(arg1 + 0x148, &wParam_2, *(arg1 + 0x148) + wParam * 0x18, arg1 + 0x148)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_8_6 = 0xffffffff
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0
sub_52e720(&var_44, 0xaef64c, 3)
int32_t var_8_7 = 4
int32_t var_18_2 = 7
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, u"error", 5)
var_8_7.b = 5
HWND hWnd_3 = *(arg1 + 0xbc)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x101f, 0, 0)

int16_t* ecx_14 = &var_44
void* wParam_1 = SendMessageW(hWnd_3, 0x1200, 0, 0)
lParam = 7

if (var_30_1 u>= 8)
    ecx_14 = var_44.d

HWND hWnd_4 = *(arg1 + 0xbc)
wParam_2 = wParam_1
int32_t var_6c_1 = 0
int32_t var_68_1 = 0x12c
int16_t* var_64_1 = ecx_14

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0x1061, wParam_1, &lParam)
    wParam_1 = wParam_2

int16_t* var_c0_12 = &var_2c
sub_6c6920(arg1 + 0x148, &wParam_2, *(arg1 + 0x148) + wParam_1 * 0x18, arg1 + 0x148)

if (var_18_2 u>= 8)
    j__free(var_2c.d)

int32_t var_8_8 = 0xffffffff
int32_t var_18_3 = 7
int32_t var_1c_3 = 0
var_2c = 0

if (var_30_1 u>= 8)
    j__free(var_44.d)

sub_6c65c0(arg1 + 0xb8)
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, &data_ad7c90, nullptr)
int32_t var_8_9 = 6
sub_6c3230(hDlg_3, 0, &var_5c)
int32_t var_8_10 = 0xffffffff

if (var_48 u>= 8)
    j__free(var_5c.d)

var_5c = 0
int32_t var_48_1 = 7
int32_t var_4c_1 = 0
int32_t* var_cc_10
var_cc_10.o = zx.o(0)
sub_6c2800(arg1, var_cc_10)
HWND hWnd_5 = *(arg1 + 4)

if (hWnd_5 != 0)
    UpdateWindow(hWnd_5)

int32_t hWnd_6 = *(arg1 + 4)

if (hWnd_6 != 0 && (GetWindowLongW(hWnd_6, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_6.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_6
