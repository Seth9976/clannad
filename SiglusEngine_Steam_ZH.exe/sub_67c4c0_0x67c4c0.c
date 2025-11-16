// 函数: sub_67c4c0
// 地址: 0x67c4c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c7456
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t var_c4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, u"stc_bitmap", 0xa)
int32_t var_c_1 = 0
HWND hDlg_4 = *(arg1 + 4)

if (arg1 + 0xc4 != &var_4c)
    sub_52e3c0(arg1 + 0xc4, &var_4c, 0, 0xffffffff)

*(arg1 + 0x118) = 5
*(arg1 + 0x11c) = 0
int32_t eax_5 = GetDlgItem(hDlg_4, 0x4f8)
*(arg1 + 0xc0) = eax_5
sub_6c0100(arg1 + 0xbc, eax_5)
int32_t hDlg_5 = arg1 + 0xbc
sub_530ba0(arg1 + 0x64, &hDlg_5)
int32_t var_c_2 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, u"stc_user_name", 0xd)
int32_t var_c_3 = 1
int32_t hDlg = *(arg1 + 4)
hDlg_5 = hDlg

if (arg1 + 0x1c4 != &var_94)
    sub_52e3c0(arg1 + 0x1c4, &var_94, 0, 0xffffffff)
    hDlg = hDlg_5

*(arg1 + 0x218) = 2
*(arg1 + 0x21c) = 0
HWND eax_6 = GetDlgItem(hDlg, 0x4fc)
*(arg1 + 0x1c0) = eax_6
sub_6c0100(arg1 + 0x1bc, eax_6)
hDlg_5 = arg1 + 0x1bc
sub_530ba0(arg1 + 0x64, &hDlg_5)
int32_t var_c_4 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, u"edt_tweet_text", 0xe)
int32_t var_c_5 = 2
int32_t hDlg_1 = *(arg1 + 4)
hDlg_5 = hDlg_1

if (arg1 + 0x254 != &var_7c)
    sub_52e3c0(arg1 + 0x254, &var_7c, 0, 0xffffffff)
    hDlg_1 = hDlg_5

*(arg1 + 0x2a8) = 2
*(arg1 + 0x2ac) = 0
HWND eax_7 = GetDlgItem(hDlg_1, 0x4fb)
*(arg1 + 0x250) = eax_7
sub_6c0100(arg1 + 0x24c, eax_7)
hDlg_5 = arg1 + 0x24c
sub_530ba0(arg1 + 0x64, &hDlg_5)
int32_t var_c_6 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, u"btn_authorize", 0xd)
int32_t var_c_7 = 3
int32_t hDlg_2 = *(arg1 + 4)
hDlg_5 = hDlg_2

if (arg1 + 0x2e4 != &var_64)
    sub_52e3c0(arg1 + 0x2e4, &var_64, 0, 0xffffffff)
    hDlg_2 = hDlg_5

*(arg1 + 0x338) = 3
*(arg1 + 0x33c) = 0
HWND eax_8 = GetDlgItem(hDlg_2, 0x4fa)
*(arg1 + 0x2e0) = eax_8
sub_6c0100(arg1 + 0x2dc, eax_8)
hDlg_5 = arg1 + 0x2dc
sub_530ba0(arg1 + 0x64, &hDlg_5)
int32_t var_c_8 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, u"btn_tweet", 9)
int32_t var_c_9 = 4
int32_t hDlg_3 = *(arg1 + 4)
hDlg_5 = hDlg_3

if (arg1 + 0x374 != &var_ac)
    sub_52e3c0(arg1 + 0x374, &var_ac, 0, 0xffffffff)
    hDlg_3 = hDlg_5

*(arg1 + 0x3c8) = 3
*(arg1 + 0x3cc) = 0
HWND eax_9 = GetDlgItem(hDlg_3, 0x4f9)
*(arg1 + 0x370) = eax_9
sub_6c0100(arg1 + 0x36c, eax_9)
hDlg_5 = arg1 + 0x36c
sub_530ba0(arg1 + 0x64, &hDlg_5)
int32_t var_c_10 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_98_1 = 7
var_ac = 0
int32_t var_9c_1 = 0
int32_t var_c_11 = 5
int16_t var_34
sub_6c8280(arg1 + 0x14c, sub_6643e0(&var_34))
int32_t var_c_12 = 0xffffffff
int32_t var_20

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_20_1 = 7
var_34 = 0
int32_t var_24 = 0
sub_6c2db0(arg1 + 0x24c, data_bac510 + 0xa4dfcc)
sub_67cac0(arg1)
BOOL result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_b4)
return result
