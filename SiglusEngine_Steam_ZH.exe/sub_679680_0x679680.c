// 函数: sub_679680
// 地址: 0x679680
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c7241
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_10c
int32_t eax_2 = __security_cookie ^ &var_10c
int32_t __saved_edi
int32_t var_11c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_e0 = 7
int32_t var_e4 = 0
int16_t var_f4 = 0
sub_52e720(&var_f4, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
int32_t var_f8 = 7
int32_t var_fc = 0
var_10c = 0
sub_52e720(&var_10c, u"TAB_SELECT_NO", 0xd)
var_c_1.b = 1
HWND hWnd = *(arg1 + 0x24)
LRESULT eax_5

if (hWnd != 0)
    eax_5 = SendMessageW(hWnd, 0x130b, 0, 0)
else
    eax_5 = 0

sub_6c1f80(arg1 + 0x20, &var_10c, eax_5, &var_f4)

if (var_f8 u>= 8)
    j__free(var_10c.d)

int32_t var_c_2 = 0xffffffff
int32_t var_f8_1 = 7
int32_t var_fc_1 = 0
var_10c = 0

if (var_e0 u>= 8)
    j__free(var_f4.d)

int32_t var_e0_1 = 7
int32_t var_e4_1 = 0
var_f4 = 0
sub_52e720(&var_f4, &data_ad7c90, nullptr)
int32_t var_c_3 = 2
int32_t var_f8_2 = 7
int32_t var_fc_2 = 0
var_10c = 0
sub_52e720(&var_10c, u"LIST_TOP_NO", 0xb)
var_c_3.b = 3
LRESULT hWnd_1 = *(arg1 + 0xbc)

if (hWnd_1 != 0)
    hWnd_1 = SendMessageW(hWnd_1, 0x1027, 0, 0)

sub_6c1f80(arg1 + 0xb8, &var_10c, hWnd_1, &var_f4)

if (var_f8_2 u>= 8)
    j__free(var_10c.d)

int32_t var_c_4 = 0xffffffff
int32_t var_f8_3 = 7
int32_t var_fc_3 = 0
var_10c = 0

if (var_e0_1 u>= 8)
    j__free(var_f4.d)

int32_t var_e0_2 = 7
int32_t var_e4_2 = 0
var_f4 = 0
sub_52e720(&var_f4, &data_ad7c90, nullptr)
int32_t var_c_5 = 4
int32_t var_f8_4 = 7
int32_t var_fc_4 = 0
var_10c = 0
sub_52e720(&var_10c, u"LIST_SELECT_NO", 0xe)
var_c_5.b = 5
sub_6c1f80(arg1 + 0xb8, &var_10c, sub_6c4be0(arg1 + 0xb8), &var_f4)

if (var_f8_4 u>= 8)
    j__free(var_10c.d)

int32_t result = 0
int32_t var_c_6 = 0xffffffff
int32_t var_f8_5 = 7
int32_t var_fc_5 = 0
var_10c = 0

if (var_e0_2 u>= 8)
    result = j__free(var_f4.d)

if (*(arg1 + 0x12) != 0)
    int32_t var_98_1 = 7
    int32_t var_9c_1 = 0
    int16_t var_ac = 0
    sub_52e720(&var_ac, &data_ad7c90, nullptr)
    int32_t var_c_7 = 6
    int32_t var_e0_3 = 7
    int32_t var_e4_3 = 0
    var_f4 = 0
    sub_52e720(&var_f4, &data_ad7c90, nullptr)
    var_c_7.b = 7
    int32_t var_b0_1 = 7
    int32_t var_b4_1 = 0
    int16_t var_c4 = 0
    sub_52e720(&var_c4, &data_ad7c90, nullptr)
    var_c_7.b = 8
    int32_t var_c8_1 = 7
    int32_t var_cc_1 = 0
    int16_t var_dc = 0
    sub_52e720(&var_dc, u"SAVELOAD_MODAL_DIALOG", 0x15)
    var_c_7.b = 9
    int32_t var_f8_6 = 7
    int32_t var_fc_6 = 0
    var_10c = 0
    sub_52e720(&var_10c, u"TAB_SELECT_NO", 0xd)
    var_c_7.b = 0xa
    HWND hWnd_2 = *(arg1 + 0x24)
    
    if (hWnd_2 != 0)
        SendMessageW(hWnd_2, 0x130b, 0, 0)
    
    int32_t ecx_16 = data_bac3a0
    
    if ((ecx_16.b & 1) == 0)
        data_bac3a0 = ecx_16 | 1
        var_c_7.b = 0xb
        sub_58fa00()
        ecx_16 = _atexit(j_sub_58fec0)
        var_c_7.b = 0xa
    
    int32_t var_120_9 = ecx_16
    var_c_7.b = 0xc
    struct _EXCEPTION_REGISTRATION_RECORD* var_34
    sub_6bad30(&data_bac3a4, &var_10c, sub_6ad9b0(&var_34), &var_dc, &var_c4, &var_f4, &var_ac)
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34)
    
    if (var_f8_6 u>= 8)
        j__free(var_10c.d)
    
    int32_t var_f8_7 = 7
    int32_t var_fc_7 = 0
    var_10c = 0
    
    if (var_c8_1 u>= 8)
        j__free(var_dc.d)
    
    int32_t var_c8_2 = 7
    int32_t var_cc_2 = 0
    var_dc = 0
    
    if (var_b0_1 u>= 8)
        j__free(var_c4.d)
    
    int32_t var_b0_2 = 7
    int32_t var_b4_2 = 0
    var_c4 = 0
    
    if (var_e0_3 u>= 8)
        j__free(var_f4.d)
    
    int32_t var_c_8 = 0xffffffff
    int32_t var_e0_4 = 7
    int32_t var_e4_4 = 0
    var_f4 = 0
    
    if (var_98_1 u>= 8)
        j__free(var_ac.d)
    
    int32_t var_98_2 = 7
    int32_t var_9c_2 = 0
    var_ac = 0
    sub_52e720(&var_ac, &data_ad7c90, nullptr)
    int32_t var_c_9 = 0xd
    int32_t var_f8_8 = 7
    int32_t var_fc_8 = 0
    var_10c = 0
    sub_52e720(&var_10c, &data_ad7c90, nullptr)
    var_c_9.b = 0xe
    int32_t var_c8_3 = 7
    int32_t var_cc_3 = 0
    var_dc = 0
    sub_52e720(&var_dc, &data_ad7c90, nullptr)
    var_c_9.b = 0xf
    int32_t var_b0_3 = 7
    int32_t var_b4_3 = 0
    var_c4 = 0
    sub_52e720(&var_c4, u"SAVELOAD_MODAL_DIALOG", 0x15)
    var_c_9.b = 0x10
    int32_t var_e0_5 = 7
    int32_t var_e4_5 = 0
    var_f4 = 0
    sub_52e720(&var_f4, u"LIST_TOP_NO", 0xb)
    var_c_9.b = 0x11
    LRESULT hWnd_3 = *(arg1 + 0xbc)
    
    if (hWnd_3 != 0)
        hWnd_3 = SendMessageW(hWnd_3, 0x1027, 0, 0)
    
    sub_58ff60()
    sub_6bb310(&data_bac3a4, &var_f4, hWnd_3, &var_c4, &var_dc, &var_10c, &var_ac)
    
    if (var_e0_5 u>= 8)
        j__free(var_f4.d)
    
    int32_t var_e0_6 = 7
    int32_t var_e4_6 = 0
    var_f4 = 0
    
    if (var_b0_3 u>= 8)
        j__free(var_c4.d)
    
    int32_t var_b0_4 = 7
    int32_t var_b4_4 = 0
    var_c4 = 0
    
    if (var_c8_3 u>= 8)
        j__free(var_dc.d)
    
    int32_t var_c8_4 = 7
    int32_t var_cc_4 = 0
    var_dc = 0
    
    if (var_f8_8 u>= 8)
        j__free(var_10c.d)
    
    int32_t var_c_10 = 0xffffffff
    int32_t var_f8_9 = 7
    int32_t var_fc_9 = 0
    var_10c = 0
    
    if (var_98_2 u>= 8)
        j__free(var_ac.d)
    
    sub_52e820(&var_34, &data_ad7c90)
    int32_t var_c_11 = 0x12
    int16_t var_64
    sub_52e820(&var_64, &data_ad7c90)
    var_c_11.b = 0x13
    int16_t var_94
    sub_52e820(&var_94, &data_ad7c90)
    var_c_11.b = 0x14
    int16_t var_4c
    sub_52e820(&var_4c, u"SAVELOAD_MODAL_DIALOG")
    var_c_11.b = 0x15
    int16_t var_7c
    sub_52e820(&var_7c, u"LIST_SELECT_NO")
    var_c_11.b = 0x16
    WPARAM eax_9 = sub_6c4be0(arg1 + 0xb8)
    sub_58ff60()
    sub_6bb310(&data_bac3a4, &var_7c, eax_9, &var_4c, &var_94, &var_64, &var_34)
    int32_t var_68
    
    if (var_68 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_68_1 = 7
    int32_t var_6c_1 = 0
    var_7c = 0
    int32_t var_38
    
    if (var_38 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_80
    
    if (var_80 u>= 8)
        j__free(var_94.d)
    
    int32_t var_80_1 = 7
    int32_t var_84_1 = 0
    var_94 = 0
    int32_t var_50
    
    if (var_50 u>= 8)
        j__free(var_64.d)
    
    result = 0
    int32_t var_50_1 = 7
    int32_t var_54_1 = 0
    var_64 = 0
    
    if (var_20 u>= 8)
        result = j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_10c)
return result
