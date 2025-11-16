// 函数: sub_53d770
// 地址: 0x53d770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b08bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t hDlg_7
int32_t eax_2 = __security_cookie ^ &hDlg_7
int32_t __saved_edi
int32_t var_10c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
int32_t hDlg_8 = *(arg1 + 4)
hDlg_7 = hDlg_8
HWND hDlg_6 = *(hDlg_8 + 4)

if (arg1 + 0x24 != &var_4c)
    sub_52e3c0(arg1 + 0x24, &var_4c, 0, 0xffffffff)

*(arg1 + 0x78) = 5
*(arg1 + 0x7c) = 0
int32_t eax_5 = GetDlgItem(hDlg_6, 0x45a)
*(arg1 + 0x20) = eax_5
sub_6c0100(arg1 + 0x1c, eax_5)
int32_t* ecx_4 = hDlg_7 + 0x64
int32_t var_f8 = arg1 + 0x1c
sub_530ba0(ecx_4, &var_f8)
int32_t var_c_2 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
int32_t var_c_3 = 1
int32_t eax_6 = *(arg1 + 4)
var_f8 = eax_6
int32_t hDlg = *(eax_6 + 4)
hDlg_7 = hDlg

if (arg1 + 0xb4 != &var_64)
    sub_52e3c0(arg1 + 0xb4, &var_64, 0, 0xffffffff)
    hDlg = hDlg_7

*(arg1 + 0x108) = 7
*(arg1 + 0x10c) = 0
HWND eax_7 = GetDlgItem(hDlg, 0x4cf)
*(arg1 + 0xb0) = eax_7
sub_6c0100(arg1 + 0xac, eax_7)
int32_t* ecx_9 = var_f8 + 0x64
hDlg_7 = arg1 + 0xac
sub_530ba0(ecx_9, &hDlg_7)
int32_t var_c_4 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, &data_ad7c90, nullptr)
int32_t var_c_5 = 2
int32_t eax_8 = *(arg1 + 4)
var_f8 = eax_8
int32_t hDlg_1 = *(eax_8 + 4)
hDlg_7 = hDlg_1

if (arg1 + 0x144 != &var_ac)
    sub_52e3c0(arg1 + 0x144, &var_ac, 0, 0xffffffff)
    hDlg_1 = hDlg_7

*(arg1 + 0x198) = 8
*(arg1 + 0x19c) = 0
HWND eax_9 = GetDlgItem(hDlg_1, 0x4a3)
*(arg1 + 0x140) = eax_9
sub_6c0100(arg1 + 0x13c, eax_9)
int32_t* ecx_14 = var_f8 + 0x64
hDlg_7 = arg1 + 0x13c
sub_530ba0(ecx_14, &hDlg_7)
int32_t var_c_6 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_c8 = 7
int32_t var_cc = 0
int16_t var_dc = 0
sub_52e720(&var_dc, &data_ad7c90, nullptr)
int32_t var_c_7 = 3
int32_t eax_10 = *(arg1 + 4)
var_f8 = eax_10
int32_t hDlg_2 = *(eax_10 + 4)
hDlg_7 = hDlg_2

if (arg1 + 0x1d4 != &var_dc)
    sub_52e3c0(arg1 + 0x1d4, &var_dc, 0, 0xffffffff)
    hDlg_2 = hDlg_7

*(arg1 + 0x228) = 7
*(arg1 + 0x22c) = 0
HWND eax_11 = GetDlgItem(hDlg_2, 0x4ce)
*(arg1 + 0x1d0) = eax_11
sub_6c0100(arg1 + 0x1cc, eax_11)
int32_t* ecx_19 = var_f8 + 0x64
hDlg_7 = arg1 + 0x1cc
sub_530ba0(ecx_19, &hDlg_7)
int32_t var_c_8 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc.d)

int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_9 = 4
int32_t eax_12 = *(arg1 + 4)
var_f8 = eax_12
int32_t hDlg_3 = *(eax_12 + 4)
hDlg_7 = hDlg_3

if (arg1 + 0x264 != &var_7c)
    sub_52e3c0(arg1 + 0x264, &var_7c, 0, 0xffffffff)
    hDlg_3 = hDlg_7

*(arg1 + 0x2b8) = 8
*(arg1 + 0x2bc) = 0
HWND eax_13 = GetDlgItem(hDlg_3, 0x4a2)
*(arg1 + 0x260) = eax_13
sub_6c0100(arg1 + 0x25c, eax_13)
int32_t* ecx_24 = var_f8 + 0x64
hDlg_7 = arg1 + 0x25c
sub_530ba0(ecx_24, &hDlg_7)
int32_t var_c_10 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, &data_ad7c90, nullptr)
int32_t var_c_11 = 5
int32_t eax_14 = *(arg1 + 4)
var_f8 = eax_14
int32_t hDlg_4 = *(eax_14 + 4)
hDlg_7 = hDlg_4

if (arg1 + 0x2f4 != &var_c4)
    sub_52e3c0(arg1 + 0x2f4, &var_c4, 0, 0xffffffff)
    hDlg_4 = hDlg_7

*(arg1 + 0x348) = 7
*(arg1 + 0x34c) = 0
HWND eax_15 = GetDlgItem(hDlg_4, 0x4cd)
*(arg1 + 0x2f0) = eax_15
sub_6c0100(arg1 + 0x2ec, eax_15)
int32_t* ecx_29 = var_f8 + 0x64
hDlg_7 = arg1 + 0x2ec
sub_530ba0(ecx_29, &hDlg_7)
int32_t var_c_12 = 0xffffffff

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, &data_ad7c90, nullptr)
int32_t var_c_13 = 6
void* edi_6 = *(arg1 + 4)
int32_t hDlg_5 = *(edi_6 + 4)
hDlg_7 = hDlg_5

if (arg1 + 0x384 != &var_94)
    sub_52e3c0(arg1 + 0x384, &var_94, 0, 0xffffffff)
    hDlg_5 = hDlg_7

*(arg1 + 0x3d8) = 8
*(arg1 + 0x3dc) = 0
HWND eax_16 = GetDlgItem(hDlg_5, 0x4a1)
*(arg1 + 0x380) = eax_16
sub_6c0100(arg1 + 0x37c, eax_16)
hDlg_7 = arg1 + 0x37c
sub_530ba0(edi_6 + 0x64, &hDlg_7)
int32_t var_c_14 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_e0 = 7
int32_t var_e4 = 0
int16_t var_f4 = 0
sub_52e720(&var_f4, &data_ad7c90, nullptr)
int32_t var_c_15 = 7
sub_6c4400(*(arg1 + 4), arg1 + 0x40c, 0x4d0, &var_f4, 7, 0)
int32_t var_c_16 = 0xffffffff

if (var_e0 u>= 8)
    j__free(var_f4.d)

sub_52e820(&var_f4, &data_ad7c90)
int32_t var_c_17 = 8
sub_6c4400(*(arg1 + 4), arg1 + 0x49c, 0x4a4, &var_f4, 8, 0)
int32_t var_c_18 = 0xffffffff

if (var_e0 u>= 8)
    j__free(var_f4.d)

sub_52e820(&var_f4, &data_ad7c90)
int32_t var_c_19 = 9
sub_6c4400(*(arg1 + 4), arg1 + 0x52c, 0x407, &var_f4, 3, 0)
int32_t var_c_20 = 0xffffffff

if (var_e0 u>= 8)
    j__free(var_f4.d)

int16_t var_34
sub_52e820(&var_34, &data_ad7c90)
int32_t var_c_21 = 0xa
sub_6c4400(*(arg1 + 4), arg1 + 0x5bc, 0x406, &var_34, 3, 0)
int32_t var_c_22 = 0xffffffff
int32_t var_20

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_20_1 = 7
int32_t var_24 = 0
var_34 = 0

if (*(arg1 + 0x12) != 0)
    sub_6c2db0(arg1 + 0x5bc, &data_b6bb04)

HWND hWnd = *(arg1 + 0x140)

if (hWnd != 0)
    SendMessageW(hWnd, 0x406, 1, 0xff0000)

HWND hWnd_1 = *(arg1 + 0x260)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x406, 1, 0xff0000)

HWND hWnd_2 = *(arg1 + 0x380)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x406, 1, 0xff0000)

HWND hWnd_3 = *(arg1 + 0x4a0)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x406, 1, 0xff0000)

int32_t result = sub_53e1b0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &hDlg_7)
return result
