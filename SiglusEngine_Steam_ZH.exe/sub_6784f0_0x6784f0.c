// 函数: sub_6784f0
// 地址: 0x6784f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9c711f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1c8
int32_t eax_2 = __security_cookie ^ &var_1c8
int32_t __saved_edi
int32_t var_1d4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x1c) = 0xffffffff
int32_t var_b8 = 7
int32_t var_bc = 0
int16_t var_cc = 0
sub_52e720(&var_cc, u"TAB_SAVELOAD", 0xc)
int32_t var_14_1 = 0
void* eax_5 = *(arg1 + 4)
POINT point_1
point_1.x = eax_5
void* hDlg_4 = *(eax_5 + 4)
void* point = hDlg_4

if (arg1 + 0x28 != &var_cc)
    sub_52e3c0(arg1 + 0x28, &var_cc, 0, 0xffffffff)
    hDlg_4 = point

*(arg1 + 0x7c) = 5
*(arg1 + 0x80) = 0
HWND eax_6 = GetDlgItem(hDlg_4, 0x4d5)
*(arg1 + 0x24) = eax_6
sub_6c0100(arg1 + 0x20, eax_6)
int32_t* ecx_4 = point_1.x + 0x64
point = arg1 + 0x20
sub_530ba0(ecx_4, &point)
int32_t var_14_2 = 0xffffffff

if (var_b8 u>= 8)
    j__free(var_cc.d)

int32_t var_d0 = 7
int32_t var_d4 = 0
int16_t var_e4 = 0
sub_52e720(&var_e4, u"LST_SAVELOAD", 0xc)
int32_t var_14_3 = 1
void* eax_7 = *(arg1 + 4)
point_1.x = eax_7
void* hDlg_5 = *(eax_7 + 4)
point = hDlg_5

if (arg1 + 0xc0 != &var_e4)
    sub_52e3c0(arg1 + 0xc0, &var_e4, 0, 0xffffffff)
    hDlg_5 = point

*(arg1 + 0x114) = 5
*(arg1 + 0x118) = 0
HWND eax_8 = GetDlgItem(hDlg_5, 0x46b)
*(arg1 + 0xbc) = eax_8
sub_6c0100(arg1 + 0xb8, eax_8)
int32_t* ecx_9 = point_1.x + 0x64
point = arg1 + 0xb8
sub_530ba0(ecx_9, &point)
int32_t var_14_4 = 0xffffffff

if (var_d0 u>= 8)
    j__free(var_e4.d)

int32_t var_e8 = 7
int32_t var_ec = 0
int16_t var_fc = 0
sub_52e720(&var_fc, &data_ad7c90, nullptr)
int32_t var_14_5 = 2
void* eax_9 = *(arg1 + 4)
point_1.x = eax_9
void* hDlg_6 = *(eax_9 + 4)
point = hDlg_6

if (arg1 + 0x3f8 != &var_fc)
    sub_52e3c0(arg1 + 0x3f8, &var_fc, 0, 0xffffffff)
    hDlg_6 = point

*(arg1 + 0x44c) = 1
*(arg1 + 0x450) = 0
HWND eax_10 = GetDlgItem(hDlg_6, 0x433)
*(arg1 + 0x3f4) = eax_10
sub_6c0100(arg1 + 0x3f0, eax_10)
int32_t* ecx_14 = point_1.x + 0x64
point = arg1 + 0x3f0
sub_530ba0(ecx_14, &point)
int32_t var_14_6 = 0xffffffff

if (var_e8 u>= 8)
    j__free(var_fc.d)

int32_t var_88 = 7
int32_t var_8c = 0
int16_t var_9c = 0
sub_52e720(&var_9c, &data_ad7c90, nullptr)
int32_t var_14_7 = 3
void* eax_11 = arg1 + 0x484
void* ecx_16 = *(arg1 + 4)
point_1.x = ecx_16
point = *(ecx_16 + 4)

if (eax_11 + 8 != &var_9c)
    sub_52e3c0(eax_11 + 8, &var_9c, 0, 0xffffffff)
    eax_11 = arg1 + 0x484

void* hDlg = point
*(eax_11 + 0x5c) = 1
*(eax_11 + 0x60) = 0
HWND eax_12 = GetDlgItem(hDlg, 0x415)
*(arg1 + 0x488) = eax_12
sub_6c0100(arg1 + 0x484, eax_12)
int32_t x = point_1.x
point = arg1 + 0x484
sub_530ba0(x + 0x64, &point)
int32_t var_14_8 = 0xffffffff

if (var_88 u>= 8)
    j__free(var_9c.d)

int32_t var_70 = 7
int32_t var_74 = 0
int16_t var_84 = 0
sub_52e720(&var_84, &data_ad7c90, nullptr)
int32_t var_14_9 = 4
void* eax_14 = arg1 + 0x518
void* ecx_22 = *(arg1 + 4)
point_1.x = ecx_22
point = *(ecx_22 + 4)

if (eax_14 + 8 != &var_84)
    sub_52e3c0(eax_14 + 8, &var_84, 0, 0xffffffff)
    eax_14 = arg1 + 0x518

void* hDlg_1 = point
*(eax_14 + 0x5c) = 3
*(eax_14 + 0x60) = 0
HWND eax_15 = GetDlgItem(hDlg_1, 0x408)
*(arg1 + 0x51c) = eax_15
sub_6c0100(arg1 + 0x518, eax_15)
int32_t x_1 = point_1.x
point = arg1 + 0x518
sub_530ba0(x_1 + 0x64, &point)
int32_t var_14_10 = 0xffffffff

if (var_70 u>= 8)
    j__free(var_84.d)

int32_t var_a0 = 7
int32_t var_a4 = 0
int16_t var_b4 = 0
sub_52e720(&var_b4, &data_ad7c90, nullptr)
int32_t var_14_11 = 5
void* eax_17 = arg1 + 0x5ac
void* ecx_28 = *(arg1 + 4)
point_1.x = ecx_28
point = *(ecx_28 + 4)

if (eax_17 + 8 != &var_b4)
    sub_52e3c0(eax_17 + 8, &var_b4, 0, 0xffffffff)
    eax_17 = arg1 + 0x5ac

void* hDlg_2 = point
*(eax_17 + 0x5c) = 3
*(eax_17 + 0x60) = 0
HWND eax_18 = GetDlgItem(hDlg_2, 0x40b)
*(arg1 + 0x5b0) = eax_18
sub_6c0100(arg1 + 0x5ac, eax_18)
int32_t x_2 = point_1.x
point = arg1 + 0x5ac
sub_530ba0(x_2 + 0x64, &point)
int32_t var_14_12 = 0xffffffff

if (var_a0 u>= 8)
    j__free(var_b4.d)

int32_t var_100 = 7
int32_t var_104 = 0
int16_t var_114 = 0
sub_52e720(&var_114, &data_ad7c90, nullptr)
int32_t var_14_13 = 6
void* eax_20 = arg1 + 0x640
void* ecx_34 = *(arg1 + 4)
point_1.x = ecx_34
point = *(ecx_34 + 4)

if (eax_20 + 8 != &var_114)
    sub_52e3c0(eax_20 + 8, &var_114, 0, 0xffffffff)
    eax_20 = arg1 + 0x640

void* hDlg_3 = point
*(eax_20 + 0x5c) = 3
*(eax_20 + 0x60) = 0
HWND eax_21 = GetDlgItem(hDlg_3, 0x3f2)
*(arg1 + 0x644) = eax_21
sub_6c0100(arg1 + 0x640, eax_21)
int32_t x_3 = point_1.x
point = arg1 + 0x640
sub_530ba0(x_3 + 0x64, &point)
int32_t var_14_14 = 0xffffffff

if (var_100 u>= 8)
    j__free(var_114.d)

int32_t var_100_1 = 7
var_114 = 0
void* eax_23 = data_bac510
int32_t var_104_1 = 0
*(arg1 + 0xb4) = arg1
*(arg1 + 0x3ec) = arg1
*(arg1 + 0x480) = arg1
*(arg1 + 0x514) = arg1
*(arg1 + 0x5a8) = arg1
*(arg1 + 0x63c) = arg1
*(arg1 + 0x6d0) = arg1
int32_t ecx_39 = *(eax_23 + 0x1098c)
*(arg1 + 0x6d8) = ecx_39
int32_t eax_25 = *(eax_23 + 0x10b88) - 1
point = arg1 + 0x6d8
*(arg1 + 0x6d4) = divs.dp.d(sx.q(eax_25 + ecx_39), ecx_39)
void* eax_29 = data_bac510
int32_t ecx_40 = *(eax_29 + 0x10b88)

if (ecx_40 s> 0x64)
    int32_t eax_30
    eax_30.b = ecx_40 s> 0x3e8
    *(arg1 + 0x6dc) = eax_30 + 1
    eax_29 = data_bac510
else
    *(arg1 + 0x6dc) = 0

void* eax_32

if (*(arg1 + 0xc) != 0x3e8)
    eax_32 = eax_29 + 0x10a68
else
    eax_32 = eax_29 + 0x109a8

sub_6c2db0(arg1 + 0x5ac, eax_32)
sub_6c2db0(arg1 + 0x640, &data_b898a8)
void* eax_33 = data_bac510
void** eax_34

if (*(arg1 + 0xc) != 0x3e8)
    eax_34 = eax_33 + 0x10a98
else
    eax_34 = eax_33 + 0x109d8

sub_6c2db0(arg1 + 0x3f0, eax_34)
sub_6c30e0(arg1 + 0x3f0)
void* eax_35 = data_bac510
void** eax_36

if (*(arg1 + 0xc) != 0x3e8)
    eax_36 = eax_35 + 0x10ab0
else
    eax_36 = eax_35 + 0x109f0

sub_6c2db0(arg1 + 0x484, eax_36)
sub_6c30e0(arg1 + 0x484)
data_bac504
int32_t eax_37
void* point_2
eax_37, point_2 = sub_6a53f0()
*(arg1 + 0x70c) = 0xffffffff

if (eax_37 s>= 0)
    point_2 = data_bac510
    
    if (eax_37 s< *(point_2 + 0x10b88))
        point_2 = point
        int32_t temp0_1 = divs.dp.d(sx.q(eax_37), *point_2)
        *point_2
        
        if (temp0_1 s>= 0 && temp0_1 s< *(arg1 + 0x6d4))
            *(arg1 + 0x70c) = temp0_1

int32_t var_58 = 7
int32_t var_5c = 0
int16_t var_6c = 0
void* i = nullptr
int32_t var_14_15 = 7
int16_t var_1a8
int32_t var_194
struct _EXCEPTION_REGISTRATION_RECORD* var_144
int32_t var_130

if (*(arg1 + 0x6d4) s> 0)
    do
        void* point_5 = point_2
        point = i + 1
        int16_t* eax_41 = sub_6ad9b0(&var_144)
        var_14_15.b = 8
        int16_t* eax_42 = sub_548cb0(eax_41, 0xaf4300, &var_1a8, eax_41)
        var_14_15.b = 9
        
        if (&var_6c != eax_42)
            sub_52e3c0(&var_6c, eax_42, 0, 0xffffffff)
        
        if (var_194 u>= 8)
            j__free(var_1a8.d)
        
        var_14_15.b = 7
        var_194 = 7
        int32_t var_198_1 = 0
        var_1a8 = 0
        
        if (var_130 u>= 8)
            j__free(var_144)
        
        if (i == *(arg1 + 0x70c))
            sub_532910(&var_6c, 0xaf97b4, 2)
        
        point_2 = sub_6c3970(arg1 + 0x20, &var_6c)
        i = point
    while (i s< *(arg1 + 0x6d4))

HWND hWnd = *(arg1 + 0x24)
uint128_t point_7 = zx.o(0)
GetWindowRect(hWnd, &point_7)
HWND hWnd_7 = *(arg1 + 0x24)

if (hWnd_7 != 0)
    SendMessageW(hWnd_7, 0x1328, 0, &point_7)

void* edi_3 = *(arg1 + 4)
uint128_t point_4 = point_7
HWND hWnd_1 = *(edi_3 + 4)
uint128_t point_6 = point_4
point = point_4
int32_t Y = _mm_bsrli_si128(point_4, 4)
ScreenToClient(hWnd_1, &point)
uint128_t point_8 = point_6
int32_t xmm1 = _mm_bsrli_si128(point_8, 0xc)
HWND hWnd_2 = *(edi_3 + 4)
point_1.x = _mm_bsrli_si128(point_8, 8)
point_1.y = xmm1
ScreenToClient(hWnd_2, &point_1)
HWND hWnd_9 = *(arg1 + 0xbc)

if (hWnd_9 != 0)
    SetWindowPos(hWnd_9, nullptr, point - 2, Y, point_1.x - (point - 2), point_1.y - Y, 0x14)

sub_6c13f0(arg1 + 0xb8)
sub_52e820(&var_1a8, 0xaf97bc)
var_14_15.b = 0xa
sub_52e820(&point_6, 0xaf97c4)
var_14_15.b = 0xb
LRESULT hWnd_3 = *(arg1 + 0xbc)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x101f, 0, 0)

LRESULT eax_47
int32_t ecx_58
eax_47, ecx_58 = SendMessageW(hWnd_3, 0x1200, 0, 0)
int32_t var_1d8_32 = ecx_58
sub_6c4880(arg1 + 0xb8, eax_47, &point_6, &var_1a8, 0x1e)
int32_t var_17c

if (var_17c u>= 8)
    j__free(point_6.d)

var_14_15.b = 7
int32_t var_17c_1 = 7
int32_t var_180 = 0
point_6.w = 0

if (var_194 u>= 8)
    j__free(var_1a8.d)

sub_52e820(&var_1a8, u"Data")
var_14_15.b = 0xc
sub_52e820(&point_6, u"data")
var_14_15.b = 0xd
HWND hWnd_4 = *(arg1 + 0xbc)

if (hWnd_4 != 0)
    hWnd_4 = SendMessageW(hWnd_4, 0x101f, 0, 0)

WPARAM eax_48
int32_t ecx_62
eax_48, ecx_62 = SendMessageW(hWnd_4, 0x1200, 0, 0)
int32_t var_1d8_35 = ecx_62
sub_6c4880(arg1 + 0xb8, eax_48, &point_6, &var_1a8, 0xa)

if (var_17c_1 u>= 8)
    j__free(point_6.d)

var_14_15.b = 7
int32_t var_17c_2 = 7
int32_t var_180_1 = 0
point_6.w = 0

if (var_194 u>= 8)
    j__free(var_1a8.d)

LRESULT hWnd_5 = *(arg1 + 0xbc)

if (hWnd_5 != 0)
    hWnd_5 = SendMessageW(hWnd_5, 0x1037, 0, 0)

HWND hWnd_8 = *(arg1 + 0xbc)

if (hWnd_8 != 0)
    SendMessageW(hWnd_8, 0x1036, 0, hWnd_5 | 0x20)

sub_6c4950(arg1 + 0xb8)
struct _EXCEPTION_REGISTRATION_RECORD** ecx_65 = &var_144
int32_t var_15c
int16_t var_12c
int32_t var_118

if (*(arg1 + 0x12) == 0)
    sub_52e820(ecx_65, &data_ad7c90)
    var_14_15.b = 0x14
    sub_52e820(&var_1a8, u"TAB_SELECT_NO")
    var_14_15.b = 0x15
    point = sub_6c2460(arg1 + 0x20, &var_1a8, nullptr, &var_144)
else
    sub_52e820(ecx_65, &data_ad7c90)
    var_14_15.b = 0xe
    sub_52e820(&var_1a8, &data_ad7c90)
    var_14_15.b = 0xf
    sub_52e820(&var_12c, &data_ad7c90)
    var_14_15.b = 0x10
    sub_52e820(&point_7, u"SAVELOAD_MODAL_DIALOG")
    var_14_15.b = 0x11
    sub_52e820(&point_6, u"TAB_SELECT_NO")
    var_14_15.b = 0x12
    int32_t eax_50 = data_bac3a0
    
    if ((eax_50.b & 1) == 0)
        data_bac3a0 = eax_50 | 1
        var_14_15.b = 0x13
        sub_58fa00()
        _atexit(j_sub_58fec0)
        var_14_15.b = 0x12
    
    point = sub_6bb7d0(&data_bac3a4, &point_6, nullptr, &point_7, &var_12c, &var_1a8, &var_144)
    
    if (var_17c_2 u>= 8)
        j__free(point_6.d)
    
    var_17c_2 = 7
    int32_t var_180_2 = 0
    point_6.w = 0
    
    if (var_15c u>= 8)
        j__free(point_7.d)
    
    var_15c = 7
    int32_t var_160_1 = 0
    point_7.w = 0
    
    if (var_118 u>= 8)
        j__free(var_12c.d)
    
    var_118 = 7
    int32_t var_11c_1 = 0
    var_12c = 0

if (var_194 u>= 8)
    j__free(var_1a8.d)

var_14_15.b = 7
var_1a8 = 0
int32_t var_198_2 = 0
int32_t var_194_1 = 7

if (var_130 u>= 8)
    j__free(var_144)

void* wParam = point

if (wParam s< 0 || wParam s>= *(arg1 + 0x6d4))
    wParam = nullptr

HWND hWnd_6 = *(arg1 + 0x24)

if (hWnd_6 != 0)
    SendMessageW(hWnd_6, 0x130c, wParam, 0)

*(arg1 + 0x6e0) = 0xffffffff
sub_67a890(arg1)
uint128_t* ecx_86

if (*(arg1 + 0x12) == 0)
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_1a8, 
        &data_ad7c90)
    var_14_15.b = 0x22
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_144, 
        LIST_TOP_NO")
    var_14_15.b = 0x23
    point = sub_6c2460(arg1 + 0xb8, &var_144, 0xffffffff, &var_1a8)
    sub_52e8a0(&var_144)
    var_14_15.b = 7
    sub_52e8a0(&var_1a8)
    void var_3c
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_3c, 
        &data_ad7c90)
    var_14_15.b = 0x24
    void var_54
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_54, 
        LIST_SELECT_NO")
    var_14_15.b = 0x25
    point_1.x = sub_6c2460(arg1 + 0xb8, &var_54, 0xffffffff, &var_3c)
    sub_52e8a0(&var_54)
    ecx_86 = &var_3c
else
    sub_52e820(&var_144, &data_ad7c90)
    var_14_15.b = 0x16
    sub_52e820(&point_7, &data_ad7c90)
    var_14_15.b = 0x17
    sub_52e820(&point_6, &data_ad7c90)
    var_14_15.b = 0x18
    sub_52e820(&var_12c, u"SAVELOAD_MODAL_DIALOG")
    var_14_15.b = 0x19
    sub_52e820(&var_1a8, u"LIST_TOP_NO")
    var_14_15.b = 0x1a
    int32_t eax_54 = data_bac3a0
    
    if ((eax_54.b & 1) == 0)
        data_bac3a0 = eax_54 | 1
        var_14_15.b = 0x1b
        sub_58fa00()
        _atexit(j_sub_58fec0)
        var_14_15.b = 0x1a
    
    point = sub_6bb7d0(&data_bac3a4, &var_1a8, 0xffffffff, &var_12c, &point_6, &point_7, &var_144)
    
    if (var_194_1 u>= 8)
        j__free(var_1a8.d)
    
    int32_t var_194_2 = 7
    int32_t var_198_3 = 0
    var_1a8 = 0
    
    if (var_118 u>= 8)
        j__free(var_12c.d)
    
    int32_t var_118_1 = 7
    int32_t var_11c_2 = 0
    var_12c = 0
    
    if (var_17c_2 u>= 8)
        j__free(point_6.d)
    
    int32_t var_17c_3 = 7
    int32_t var_180_3 = 0
    point_6.w = 0
    
    if (var_15c u>= 8)
        j__free(point_7.d)
    
    var_14_15.b = 7
    int32_t var_15c_1 = 7
    int32_t var_160_2 = 0
    point_7.w = 0
    
    if (var_130 u>= 8)
        j__free(var_144)
    
    sub_52e820(&point_7, &data_ad7c90)
    var_14_15.b = 0x1c
    sub_52e820(&point_6, &data_ad7c90)
    var_14_15.b = 0x1d
    sub_52e820(&var_12c, &data_ad7c90)
    var_14_15.b = 0x1e
    sub_52e820(&var_144, u"SAVELOAD_MODAL_DIALOG")
    var_14_15.b = 0x1f
    sub_52e820(&var_1a8, u"LIST_SELECT_NO")
    var_14_15.b = 0x20
    int32_t eax_57 = data_bac3a0
    
    if ((eax_57.b & 1) == 0)
        data_bac3a0 = eax_57 | 1
        var_14_15.b = 0x21
        sub_58fa00()
        _atexit(j_sub_58fec0)
        var_14_15.b = 0x20
    
    point_1.x =
        sub_6bb7d0(&data_bac3a4, &var_1a8, 0xffffffff, &var_144, &var_12c, &point_6, &point_7)
    
    if (var_194_2 u>= 8)
        j__free(var_1a8.d)
    
    int32_t var_194_3 = 7
    int32_t var_198_4 = 0
    var_1a8 = 0
    sub_52e8a0(&var_144)
    sub_52e8a0(&var_12c)
    sub_52e8a0(&point_6)
    ecx_86 = &point_7

var_14_15.b = 7
sub_52e8a0(ecx_86)

if (point s>= 0)
    LRESULT eax_62 = sub_6c4ae0(arg1 + 0xb8)
    void* point_3 = point
    
    if (point_3 s< eax_62)
        sub_6c4a30(arg1 + 0xb8, point_3)

if (point_1.x s>= 0)
    LRESULT eax_63 = sub_6c4ae0(arg1 + 0xb8)
    WPARAM x_4 = point_1.x
    
    if (x_4 s< eax_63)
        WPARAM x_5 = x_4
        int32_t var_1d8_57 = sub_6c4b00(arg1 + 0xb8, x_4)
        sub_6c4ba0(arg1 + 0xb8, point_1.x)

void* eax_64 = data_bac510
void** eax_65

if (*(arg1 + 0xc) != 0x3e8)
    eax_65 = eax_64 + 0x10a50
else
    eax_65 = eax_64 + 0x10990

sub_6c1b50(*(arg1 + 4), eax_65)
sub_67acd0(arg1)
sub_6c1a50(arg1 + 0xb8)
sub_67a830(arg1)
sub_52e8a0(&var_6c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_1c8)
return 0
