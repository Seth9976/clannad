// 函数: sub_616470
// 地址: 0x616470
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bf3b0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_8c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int16_t var_74
sub_6c1b50(arg1, sub_61ff70(&var_74))
int32_t var_8_2 = 0xffffffff
int32_t var_60

if (var_60 u>= 8)
    j__free(var_74.d)

HWND hWnd_1 = *(arg1 + 4)
var_74 = 0
int32_t* eax_4 = data_bac4b4
int32_t var_60_1 = 7
int32_t var_64 = 0

if (hWnd_1 != 0)
    SetClassLongW(hWnd_1, 0xfffffff2, *eax_4)
    eax_4 = data_bac4b4

HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    SetClassLongW(hWnd, 0xffffffde, eax_4[1])

int32_t var_30 = 7
int32_t var_34 = 0
int16_t var_44 = 0
sub_52e720(&var_44, &data_ad7c90, nullptr)
int32_t var_8_3 = 1
HWND hDlg_2 = *(arg1 + 4)

if (arg1 + 0xa0 != &var_44)
    sub_52e3c0(arg1 + 0xa0, &var_44, 0, 0xffffffff)

*(arg1 + 0xf4) = 0
*(arg1 + 0xf8) = 0
int32_t eax_5 = GetDlgItem(hDlg_2, 0x4dc)
*(arg1 + 0x9c) = eax_5
sub_6c0100(arg1 + 0x98, eax_5)
int32_t hDlg_3 = arg1 + 0x98
sub_530ba0(arg1 + 0x64, &hDlg_3)
int32_t var_8_4 = 0xffffffff

if (var_30 u>= 8)
    j__free(var_44.d)

int32_t var_48 = 7
int32_t var_4c = 0
int16_t var_5c = 0
sub_52e720(&var_5c, &data_ad7c90, nullptr)
int32_t var_8_5 = 2
int32_t hDlg = *(arg1 + 4)
hDlg_3 = hDlg

if (arg1 + 0x130 != &var_5c)
    sub_52e3c0(arg1 + 0x130, &var_5c, 0, 0xffffffff)
    hDlg = hDlg_3

*(arg1 + 0x184) = 0
*(arg1 + 0x188) = 0
HWND eax_6 = GetDlgItem(hDlg, 0x4da)
*(arg1 + 0x12c) = eax_6
sub_6c0100(arg1 + 0x128, eax_6)
hDlg_3 = arg1 + 0x128
sub_530ba0(arg1 + 0x64, &hDlg_3)
int32_t var_8_6 = 0xffffffff

if (var_48 u>= 8)
    j__free(var_5c.d)

int32_t var_18 = 7
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, &data_ad7c90, nullptr)
int32_t var_8_7 = 3
int32_t hDlg_1 = *(arg1 + 4)
hDlg_3 = hDlg_1

if (arg1 + 0x1c0 != &var_2c)
    sub_52e3c0(arg1 + 0x1c0, &var_2c, 0, 0xffffffff)
    hDlg_1 = hDlg_3

*(arg1 + 0x214) = 0
*(arg1 + 0x218) = 0
int32_t eax_7 = GetDlgItem(hDlg_1, 0x4db)
*(arg1 + 0x1bc) = eax_7
sub_6c0100(arg1 + 0x1b8, eax_7)
hDlg_3 = arg1 + 0x1b8
sub_530ba0(arg1 + 0x64, &hDlg_3)
int32_t var_8_8 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t var_18_1 = 7
int32_t var_1c_1 = 0
var_2c = 0
*(arg1 + 0x248) = 0x14
sub_616730(arg1)
SetTimer(*(arg1 + 4), 0, 0x3e8, nullptr)
SetFocus(*(arg1 + 0x1bc))
HWND result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
