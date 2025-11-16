// 函数: sub_598340
// 地址: 0x598340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8777
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c0 = 7
int32_t var_c4 = 0
int16_t var_d4 = 0
sub_52e720(&var_d4, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t hDlg = *(arg1 + 4)
int32_t wParam = hDlg

if (arg1 + 0x1e0 != &var_d4)
    sub_52e3c0(arg1 + 0x1e0, &var_d4, 0, 0xffffffff)
    hDlg = wParam

*(arg1 + 0x234) = 5
*(arg1 + 0x238) = 0
HWND eax_3 = GetDlgItem(hDlg, 0x46c)
*(arg1 + 0x1dc) = eax_3
sub_6c0100(arg1 + 0x1d8, eax_3)
wParam = arg1 + 0x1d8
sub_530ba0(arg1 + 0x64, &wParam)
int32_t var_8_2 = 0xffffffff

if (var_c0 u>= 8)
    j__free(var_d4.d)

int32_t var_90 = 7
int32_t var_94 = 0
int16_t var_a4 = 0
sub_52e720(&var_a4, &data_ad7c90, nullptr)
int32_t var_8_3 = 1
int32_t hDlg_1 = *(arg1 + 4)
wParam = hDlg_1

if (arg1 + 0x270 != &var_a4)
    sub_52e3c0(arg1 + 0x270, &var_a4, 0, 0xffffffff)
    hDlg_1 = wParam

*(arg1 + 0x2c4) = 6
*(arg1 + 0x2c8) = 0
HWND eax_4 = GetDlgItem(hDlg_1, 0x46d)
*(arg1 + 0x26c) = eax_4
sub_6c0100(arg1 + 0x268, eax_4)
wParam = arg1 + 0x268
sub_530ba0(arg1 + 0x64, &wParam)
int32_t var_8_4 = 0xffffffff

if (var_90 u>= 8)
    j__free(var_a4.d)

int32_t var_78 = 7
int32_t var_7c = 0
int16_t var_8c = 0
sub_52e720(&var_8c, &data_ad7c90, nullptr)
int32_t var_8_5 = 2
int32_t hDlg_2 = *(arg1 + 4)
wParam = hDlg_2

if (arg1 + 0xc0 != &var_8c)
    sub_52e3c0(arg1 + 0xc0, &var_8c, 0, 0xffffffff)
    hDlg_2 = wParam

*(arg1 + 0x114) = 2
*(arg1 + 0x118) = 0
HWND eax_5 = GetDlgItem(hDlg_2, 0x40a)
*(arg1 + 0xbc) = eax_5
sub_6c0100(arg1 + 0xb8, eax_5)
wParam = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &wParam)
int32_t var_8_6 = 0xffffffff

if (var_78 u>= 8)
    j__free(var_8c.d)

int32_t var_a8 = 7
int32_t var_ac = 0
int16_t var_bc = 0
sub_52e720(&var_bc, &data_ad7c90, nullptr)
int32_t var_8_7 = 3
int32_t hDlg_3 = *(arg1 + 4)
wParam = hDlg_3

if (arg1 + 0x150 != &var_bc)
    sub_52e3c0(arg1 + 0x150, &var_bc, 0, 0xffffffff)
    hDlg_3 = wParam

*(arg1 + 0x1a4) = 2
*(arg1 + 0x1a8) = 0
HWND eax_6 = GetDlgItem(hDlg_3, 0x40d)
*(arg1 + 0x14c) = eax_6
sub_6c0100(arg1 + 0x148, eax_6)
wParam = arg1 + 0x148
sub_530ba0(arg1 + 0x64, &wParam)
int32_t var_8_8 = 0xffffffff

if (var_a8 u>= 8)
    j__free(var_bc.d)

*(arg1 + 0x348) = 1
*(arg1 + 0x350) = *(arg1 + 0x34c)
*(arg1 + 0x35c) = *(arg1 + 0x358)
wParam = arg1 + 0x1d8
sub_530ba0(arg1 + 0x34c, &wParam)
wParam = arg1 + 0x268
sub_530ba0(arg1 + 0x358, &wParam)
int32_t var_d8 = 7
int32_t var_dc = 0
int16_t var_ec = 0
sub_52e720(&var_ec, u"spa_v00", 7)
int32_t var_8_9 = 4
wParam = arg1 + 0x2f8

if (arg1 + 0x318 != arg1 + 8)
    sub_52e3c0(arg1 + 0x318, arg1 + 8, 0, 0xffffffff)

if (arg1 + 0x330 != &var_ec)
    sub_52e3c0(arg1 + 0x330, &var_ec, 0, 0xffffffff)

sub_530ba0(arg1 + 0x80, &wParam)
int32_t var_8_10 = 0xffffffff

if (var_d8 u>= 8)
    j__free(var_ec.d)

sub_599240(arg1)
WPARAM wParam_1 = sub_6980b0(data_bac45c, arg1 + 0x364)

if (wParam_1 == 0xffffffff)
    wParam_1 = sub_6980b0(data_bac45c, data_bac510 + 0x84)

HWND hWnd_5 = *(arg1 + 0x1dc)
void* esi_5 = arg1 + 0x1d8

if (hWnd_5 != 0)
    SendMessageW(hWnd_5, 0x186, wParam_1, 0)

sub_5992f0(arg1)
int32_t* ecx_26 = *(arg1 + 0x380)
int32_t* edx = ecx_26
int32_t eax_15 = *(arg1 + 0x384)

if (ecx_26 != eax_15)
    while (*edx != *(arg1 + 0x37c))
        edx = &edx[1]
        
        if (edx == eax_15)
            break
    
    esi_5 = arg1 + 0x1d8

int32_t wParam_2

if (edx != eax_15)
    wParam_2 = (edx - ecx_26) s>> 2
else
    wParam_2 = 0xffffffff

HWND hWnd = *(arg1 + 0x26c)

if (hWnd != 0)
    SendMessageW(hWnd, 0x186, wParam_2, 0)

int32_t var_f0 = 7
int32_t var_f4 = 0
int16_t var_104 = 0
sub_52e720(&var_104, &data_ad7c90, nullptr)
int32_t var_8_11 = 5
int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, &data_ad7c90, nullptr)
var_8_11.b = 6
int32_t var_60 = 7
int32_t var_64 = 0
int16_t var_74 = 0
sub_52e720(&var_74, &data_ad7c90, nullptr)
var_8_11.b = 7
int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, u"db_wnd_info_scn_control", 0x17)
var_8_11.b = 8
int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, u"scn_name_list_top", 0x11)
var_8_11.b = 9
int32_t eax_16 = data_bac3a0

if ((eax_16.b & 1) == 0)
    data_bac3a0 = eax_16 | 1
    var_8_11.b = 0xa
    sub_58fa00()
    _atexit(j_sub_58fec0)
    var_8_11.b = 9

wParam = sub_6bb7d0(&data_bac3a4, &var_2c, nullptr, &var_44, &var_74, &var_5c, &var_104)

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_30_1 = 7
int32_t var_34_1 = 0
var_44 = 0

if (var_60 u>= 8)
    j__free(var_74.d)

int32_t var_60_1 = 7
int32_t var_64_1 = 0
var_74 = 0

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_8_12 = 0xffffffff
int32_t var_48_1 = 7
int32_t var_4c_1 = 0
var_5c = 0

if (var_f0 u>= 8)
    j__free(var_104.d)

HWND hWnd_1 = *(esi_5 + 4)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x197, wParam, 0)

int16_t var_17c
sub_52e820(&var_17c, &data_ad7c90)
int32_t var_8_13 = 0xb
int16_t var_164
sub_52e820(&var_164, &data_ad7c90)
var_8_13.b = 0xc
int16_t var_134
sub_52e820(&var_134, &data_ad7c90)
var_8_13.b = 0xd
int16_t var_11c
sub_52e820(&var_11c, u"db_wnd_info_scn_control")
var_8_13.b = 0xe
int16_t var_14c
sub_52e820(&var_14c, u"z_no_list_top")
var_8_13.b = 0xf
sub_58ff60()
wParam = sub_6bb7d0(&data_bac3a4, &var_14c, nullptr, &var_11c, &var_134, &var_164, &var_17c)
int32_t var_138

if (var_138 u>= 8)
    j__free(var_14c.d)

int32_t var_138_1 = 7
int32_t var_13c = 0
var_14c = 0
int32_t var_108

if (var_108 u>= 8)
    j__free(var_11c.d)

int32_t var_108_1 = 7
int32_t var_10c = 0
var_11c = 0
int32_t var_120

if (var_120 u>= 8)
    j__free(var_134.d)

int32_t var_120_1 = 7
int32_t var_124 = 0
var_134 = 0
int32_t var_150

if (var_150 u>= 8)
    j__free(var_164.d)

int32_t var_8_14 = 0xffffffff
int32_t var_150_1 = 7
int32_t var_154 = 0
var_164 = 0
int32_t var_168

if (var_168 u>= 8)
    j__free(var_17c.d)

int32_t var_168_1 = 7
var_17c = 0
int16_t* hWnd_2 = *(arg1 + 0x26c)
int32_t var_16c = 0

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x197, wParam, 0)

sub_6c78f0(arg1 + 0x80)
int16_t* var_19c_5
var_19c_5.o = zx.o(0)
sub_6c2800(arg1, var_19c_5)
HWND hWnd_3 = *(arg1 + 4)

if (hWnd_3 != 0)
    UpdateWindow(hWnd_3)

int32_t hWnd_4 = *(arg1 + 4)

if (hWnd_4 != 0 && (GetWindowLongW(hWnd_4, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_4.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_4
