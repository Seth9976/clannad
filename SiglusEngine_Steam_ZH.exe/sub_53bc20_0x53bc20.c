// 函数: sub_53bc20
// 地址: 0x53bc20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b06d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t hDlg_7
int32_t eax_2 = __security_cookie ^ &hDlg_7
int32_t __saved_edi
int32_t var_dc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x1c) = 1
int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
int32_t hDlg_8 = *(arg1 + 4)
hDlg_7 = hDlg_8
HWND hDlg_6 = *(hDlg_8 + 4)

if (arg1 + 0x28 != &var_7c)
    sub_52e3c0(arg1 + 0x28, &var_7c, 0, 0xffffffff)

*(arg1 + 0x7c) = 7
*(arg1 + 0x80) = 0
int32_t eax_5 = GetDlgItem(hDlg_6, 0x4c8)
*(arg1 + 0x24) = eax_5
sub_6c0100(arg1 + 0x20, eax_5)
int32_t* ecx_4 = hDlg_7 + 0x64
int32_t var_c8 = arg1 + 0x20
sub_530ba0(ecx_4, &var_c8)
int32_t var_c_2 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, &data_ad7c90, nullptr)
int32_t var_c_3 = 1
int32_t eax_6 = *(arg1 + 4)
var_c8 = eax_6
int32_t hDlg = *(eax_6 + 4)
hDlg_7 = hDlg

if (arg1 + 0xb8 != &var_ac)
    sub_52e3c0(arg1 + 0xb8, &var_ac, 0, 0xffffffff)
    hDlg = hDlg_7

*(arg1 + 0x10c) = 7
*(arg1 + 0x110) = 0
HWND eax_7 = GetDlgItem(hDlg, 0x4c9)
*(arg1 + 0xb4) = eax_7
sub_6c0100(arg1 + 0xb0, eax_7)
int32_t* ecx_9 = var_c8 + 0x64
hDlg_7 = arg1 + 0xb0
sub_530ba0(ecx_9, &hDlg_7)
int32_t var_c_4 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_5 = 2
int32_t eax_8 = *(arg1 + 4)
var_c8 = eax_8
int32_t hDlg_1 = *(eax_8 + 4)
hDlg_7 = hDlg_1

if (arg1 + 0x148 != &var_4c)
    sub_52e3c0(arg1 + 0x148, &var_4c, 0, 0xffffffff)
    hDlg_1 = hDlg_7

*(arg1 + 0x19c) = 7
*(arg1 + 0x1a0) = 0
HWND eax_9 = GetDlgItem(hDlg_1, 0x48c)
*(arg1 + 0x144) = eax_9
sub_6c0100(arg1 + 0x140, eax_9)
int32_t* ecx_14 = var_c8 + 0x64
hDlg_7 = arg1 + 0x140
sub_530ba0(ecx_14, &hDlg_7)
int32_t var_c_6 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, &data_ad7c90, nullptr)
int32_t var_c_7 = 3
int32_t eax_10 = *(arg1 + 4)
var_c8 = eax_10
int32_t hDlg_2 = *(eax_10 + 4)
hDlg_7 = hDlg_2

if (arg1 + 0x1d8 != &var_94)
    sub_52e3c0(arg1 + 0x1d8, &var_94, 0, 0xffffffff)
    hDlg_2 = hDlg_7

*(arg1 + 0x22c) = 7
*(arg1 + 0x230) = 0
HWND eax_11 = GetDlgItem(hDlg_2, 0x48d)
*(arg1 + 0x1d4) = eax_11
sub_6c0100(arg1 + 0x1d0, eax_11)
int32_t* ecx_19 = var_c8 + 0x64
hDlg_7 = arg1 + 0x1d0
sub_530ba0(ecx_19, &hDlg_7)
int32_t var_c_8 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
int32_t var_c_9 = 4
int32_t eax_12 = *(arg1 + 4)
var_c8 = eax_12
int32_t hDlg_3 = *(eax_12 + 4)
hDlg_7 = hDlg_3

if (arg1 + 0x268 != &var_64)
    sub_52e3c0(arg1 + 0x268, &var_64, 0, 0xffffffff)
    hDlg_3 = hDlg_7

*(arg1 + 0x2bc) = 3
*(arg1 + 0x2c0) = 0
HWND eax_13 = GetDlgItem(hDlg_3, 0x402)
*(arg1 + 0x264) = eax_13
sub_6c0100(arg1 + 0x260, eax_13)
int32_t* ecx_24 = var_c8 + 0x64
hDlg_7 = arg1 + 0x260
sub_530ba0(ecx_24, &hDlg_7)
int32_t var_c_10 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_11 = 5
int32_t eax_14 = *(arg1 + 4)
var_c8 = eax_14
int32_t hDlg_4 = *(eax_14 + 4)
hDlg_7 = hDlg_4

if (arg1 + 0x2f8 != &var_34)
    sub_52e3c0(arg1 + 0x2f8, &var_34, 0, 0xffffffff)
    hDlg_4 = hDlg_7

*(arg1 + 0x34c) = 3
*(arg1 + 0x350) = 0
HWND eax_15 = GetDlgItem(hDlg_4, 0x403)
*(arg1 + 0x2f4) = eax_15
sub_6c0100(arg1 + 0x2f0, eax_15)
int32_t* ecx_29 = var_c8 + 0x64
hDlg_7 = arg1 + 0x2f0
sub_530ba0(ecx_29, &hDlg_7)
int32_t var_c_12 = 0xffffffff

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, &data_ad7c90, nullptr)
int32_t var_c_13 = 6
int32_t eax_16 = *(arg1 + 4)
var_c8 = eax_16
HWND hDlg_5 = *(eax_16 + 4)
hDlg_7 = hDlg_5

if (arg1 + 0x388 != &var_c4)
    sub_52e3c0(arg1 + 0x388, &var_c4, 0, 0xffffffff)
    hDlg_5 = hDlg_7

*(arg1 + 0x3dc) = 3
*(arg1 + 0x3e0) = 0
int32_t eax_17 = GetDlgItem(hDlg_5, 0x401)
*(arg1 + 0x384) = eax_17
sub_6c0100(arg1 + 0x380, eax_17)
int32_t* ecx_34 = var_c8 + 0x64
hDlg_7 = arg1 + 0x380
sub_530ba0(ecx_34, &hDlg_7)
int32_t var_c_14 = 0xffffffff

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t result = 0
int32_t var_b0_1 = 7
int32_t var_b4_1 = 0
var_c4 = 0

if (*(arg1 + 0x12) != 0)
    result = sub_6c2db0(arg1 + 0x260, &data_b6a544)

if (*(arg1 + 8) != 0)
    result = sub_53c340(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &hDlg_7)
return result
