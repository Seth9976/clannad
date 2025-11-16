// 函数: sub_530ec0
// 地址: 0x530ec0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9afd00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t var_94 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
char ecx = *(arg1 + 0x13)
int32_t edi = 0

if (ecx != 0)
    edi = 0x60

int32_t eax_5 = 0

if (ecx != 0)
    eax_5 = 0x18

void* eax_7 = *(arg1 + 4)
int32_t eax_8 = sub_532c20(eax_7, &data_b65fcc, *(eax_7 + 4), wParam)
char edx = *(arg1 + 0x10)
int32_t ecx_2 = 0
int32_t var_7c = 0xc
int32_t var_74 = 0xc

if (edx != 0)
    ecx_2 = 0x18

int32_t eax_11 = 0
int32_t edi_3 = edi + 0x1c8 - ecx_2

if (edx != 0)
    eax_11 = 0x1e

int32_t var_60 = edi_3 - 0x50
int32_t var_68 = eax_8 + 0xe
int32_t var_64 = edi_3 - 0xbc
int16_t var_4c
int16_t var_34

if (edx != 0)
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    int32_t var_c_1 = 0
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    var_34 = 0
    sub_52e720(&var_34, &data_ad7c90, nullptr)
    var_c_1.b = 1
    
    if (*(arg1 + 0xa4) != 0)
        sub_6bfcd0(arg1 + 0x1c, &var_34, arg1 + 0x94, &var_4c, 0xc, 0xc, edi + 0x1c8, 0xc0, 0, 
            0x50000007, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_20_2 = 7
    int32_t var_24_2 = 0
    var_34 = 0
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    sub_6c2db0(arg1 + 0x1c, &data_b65f6c)
    void* ecx_9 = *(arg1 + 4)
    *(arg1 + 0x78) = 5
    var_74 = arg1 + 0x1c
    *(arg1 + 0x7c) = 0
    sub_530ba0(ecx_9 + 0x64, &var_74)
    SendMessageW(*(arg1 + 0x20), 0x30, wParam, 1)
    var_7c = 0x18
    var_74 = 0x22
else
    sub_6c1b50(*(arg1 + 4), &data_b65f54)

int32_t var_38_2 = 7
int32_t var_3c_2 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_3 = 2
int32_t var_20_3 = 7
int32_t var_24_3 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
var_c_3.b = 3

if (*(arg1 + 0x134) != 0)
    sub_6bfcd0(arg1 + 0xac, &var_34, arg1 + 0x124, &var_4c, var_7c, var_74, edi_3, 0xc, 0, 
        0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_20_3 u>= 8)
    j__free(var_34.d)

int32_t var_c_4 = 0xffffffff
int32_t var_20_4 = 7
int32_t var_24_4 = 0
var_34 = 0

if (var_38_2 u>= 8)
    j__free(var_4c.d)

sub_6c2db0(arg1 + 0xac, &data_b65f84)
void* ecx_15 = *(arg1 + 4)
*(arg1 + 0x108) = 0
int32_t var_80 = arg1 + 0xac
*(arg1 + 0x10c) = 0
sub_530ba0(ecx_15 + 0x64, &var_80)
SendMessageW(*(arg1 + 0xb0), 0x30, wParam, 1)
int32_t var_38_3 = 7
int32_t ebx_3 = var_74 + 0x18
int32_t var_3c_3 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_5 = 4
int32_t var_20_5 = 7
int32_t var_24_5 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
var_c_5.b = 5

if (*(arg1 + 0x1c4) != 0)
    sub_6bfcd0(arg1 + 0x13c, &var_34, arg1 + 0x1b4, &var_4c, var_7c, ebx_3, edi_3, 0x38, 0, 
        0x50000007, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_20_5 u>= 8)
    j__free(var_34.d)

int32_t var_c_6 = 0xffffffff
int32_t var_20_6 = 7
int32_t var_24_6 = 0
var_34 = 0

if (var_38_3 u>= 8)
    j__free(var_4c.d)

sub_6c2db0(arg1 + 0x13c, &data_b65f9c)
void* ecx_21 = *(arg1 + 4)
*(arg1 + 0x198) = 8
var_80 = arg1 + 0x13c
*(arg1 + 0x19c) = 0
sub_530ba0(ecx_21 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x140), 0x30, wParam, 1)
int32_t var_38_4 = 7
int32_t var_3c_4 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_7 = 6
int32_t var_20_7 = 7
int32_t var_24_7 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
var_c_7.b = 7

if (*(arg1 + 0x254) != 0)
    sub_6bfcd0(arg1 + 0x1cc, &var_34, arg1 + 0x244, &var_4c, var_7c + 0xc, ebx_3 + 0x14, 
        eax_5 + 0x48, 0x18, 0, 0x50000201, WS_EX_STATICEDGE, 0, 0, *(arg1 + 8))

if (var_20_7 u>= 8)
    j__free(var_34.d)

int32_t var_c_8 = 0xffffffff
int32_t var_20_8 = 7
int32_t var_24_8 = 0
var_34 = 0

if (var_38_4 u>= 8)
    j__free(var_4c.d)

int32_t var_38_5 = 7
int32_t var_3c_5 = 0
var_4c = 0
sub_52e720(&var_4c, u"Static", 6)
int32_t var_c_9 = 8
sub_6c2db0(arg1 + 0x1cc, &var_4c)
int32_t var_c_10 = 0xffffffff

if (var_38_5 u>= 8)
    j__free(var_4c.d)

void* ecx_28 = *(arg1 + 4)
*(arg1 + 0x228) = 7
var_80 = arg1 + 0x1cc
*(arg1 + 0x22c) = 0
sub_530ba0(ecx_28 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x1d0), 0x30, wParam, 1)
int32_t var_38_6 = 7
int32_t var_3c_6 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_11 = 9
int32_t var_20_9 = 7
int32_t var_24_9 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
var_c_11.b = 0xa

if (*(arg1 + 0x2e4) != 0)
    sub_6bfcd0(arg1 + 0x25c, &var_34, arg1 + 0x2d4, &var_4c, var_7c + 0x12 + eax_5 + 0x48, 
        ebx_3 + 0x10, edi_3 - (eax_5 + 0x48) - 0x1e, 0x20, 0, 0x50030005, WS_EX_LEFT, 0, 0, 
        *(arg1 + 8))

if (var_20_9 u>= 8)
    j__free(var_34.d)

int32_t var_c_12 = 0xffffffff
int32_t var_20_10 = 7
int32_t var_24_10 = 0
var_34 = 0

if (var_38_6 u>= 8)
    j__free(var_4c.d)

HWND hWnd_1 = *(arg1 + 0x260)
void* eax_35 = arg1 + 0x25c

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x406, 1, 0x320000)
    eax_35 = arg1 + 0x25c

void* ecx_33 = *(arg1 + 4)
*(eax_35 + 0x5c) = 8
var_80 = eax_35
*(eax_35 + 0x60) = 0
sub_530ba0(ecx_33 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x260), 0x30, wParam, 1)
int32_t var_38_7 = 7
int32_t var_3c_7 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_13 = 0xb
int32_t var_20_11 = 7
int32_t var_24_11 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
var_c_13.b = 0xc

if (*(arg1 + 0x374) != 0)
    sub_6bfcd0(arg1 + 0x2ec, &var_34, arg1 + 0x364, &var_4c, var_7c, ebx_3 + 0x44, edi_3, 0x38, 0, 
        0x50000007, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_20_11 u>= 8)
    j__free(var_34.d)

int32_t var_c_14 = 0xffffffff
int32_t var_20_12 = 7
int32_t var_24_12 = 0
var_34 = 0

if (var_38_7 u>= 8)
    j__free(var_4c.d)

sub_6c2db0(arg1 + 0x2ec, &data_b65fb4)
void* ecx_39 = *(arg1 + 4)
*(arg1 + 0x348) = 8
var_80 = arg1 + 0x2ec
*(arg1 + 0x34c) = 0
sub_530ba0(ecx_39 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x2f0), 0x30, wParam, 1)
sub_52e820(&var_34, &data_ad7c90)
int32_t var_c_15 = 0xd
sub_52e820(&var_4c, &data_ad7c90)
var_c_15.b = 0xe

if (*(arg1 + 0x404) != 0)
    sub_6bfcd0(arg1 + 0x37c, &var_4c, arg1 + 0x3f4, &var_34, var_7c + 0xc, ebx_3 + 0x58, 
        eax_5 + 0x48, 0x18, 0, 0x50000201, WS_EX_STATICEDGE, 0, 0, *(arg1 + 8))

if (var_38_7 u>= 8)
    j__free(var_4c.d)

int32_t var_c_16 = 0xffffffff
int32_t var_38_8 = 7
int32_t var_3c_8 = 0
var_4c = 0

if (var_20_12 u>= 8)
    j__free(var_34.d)

sub_52e820(&var_4c, u"Static")
int32_t var_c_17 = 0xf
sub_6c2db0(arg1 + 0x37c, &var_4c)
int32_t var_c_18 = 0xffffffff

if (var_38_8 u>= 8)
    j__free(var_4c.d)

void* ecx_46 = *(arg1 + 4)
*(arg1 + 0x3d8) = 7
var_80 = arg1 + 0x37c
*(arg1 + 0x3dc) = 0
sub_530ba0(ecx_46 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x380), 0x30, wParam, 1)
sub_52e820(&var_34, &data_ad7c90)
int32_t var_c_19 = 0x10
sub_52e820(&var_4c, &data_ad7c90)
var_c_19.b = 0x11

if (*(arg1 + 0x494) != 0)
    sub_6bfcd0(arg1 + 0x40c, &var_4c, arg1 + 0x484, &var_34, var_7c + eax_5 + 0x5a, ebx_3 + 0x54, 
        edi_3 - (eax_5 + 0x48) - 0x1e, 0x20, 0, 0x50030005, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_8 u>= 8)
    j__free(var_4c.d)

int32_t var_c_20 = 0xffffffff
int32_t var_38_9 = 7
int32_t var_3c_9 = 0
var_4c = 0

if (var_20_12 u>= 8)
    j__free(var_34.d)

HWND hWnd = *(arg1 + 0x410)

if (hWnd != 0)
    SendMessageW(hWnd, 0x406, 1, 0x320000)

void* ecx_53 = *(arg1 + 4)
*(arg1 + 0x468) = 8
var_80 = arg1 + 0x40c
*(arg1 + 0x46c) = 0
sub_530ba0(ecx_53 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x410), 0x30, wParam, 1)
sub_52e820(&var_34, &data_ad7c90)
int32_t var_c_21 = 0x12
sub_52e820(&var_4c, &data_ad7c90)
var_c_21.b = 0x13

if (*(arg1 + 0x524) != 0)
    sub_6bfcd0(arg1 + 0x49c, &var_4c, arg1 + 0x514, &var_34, var_7c, ebx_3 + 0x88, eax_8 + 8, 0x18, 
        0, 0x50000200, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_9 u>= 8)
    j__free(var_4c.d)

int32_t eax_48 = 0
int32_t var_c_22 = 0xffffffff
int32_t var_38_10 = 7
int32_t var_3c_10 = 0
var_4c = 0

if (var_20_12 u>= 8)
    eax_48 = j__free(var_34.d)

int32_t var_c_23 = 0x14
sub_6c2db0(arg1 + 0x49c, sub_532b80(eax_48, &data_b65fcc, &var_4c, 0xad7d10))
int32_t var_c_24 = 0xffffffff

if (var_38_10 u>= 8)
    j__free(var_4c.d)

void* ecx_60 = *(arg1 + 4)
*(arg1 + 0x4f8) = 7
var_80 = arg1 + 0x49c
*(arg1 + 0x4fc) = 0
sub_530ba0(ecx_60 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x4a0), 0x30, wParam, 1)
sub_52e820(&var_34, &data_ad7c90)
int32_t var_c_25 = 0x15
sub_52e820(&var_4c, &data_ad7c90)
var_c_25.b = 0x16

if (*(arg1 + 0x5b4) != 0)
    sub_6bfcd0(arg1 + 0x52c, &var_4c, arg1 + 0x5a4, &var_34, var_7c + var_68, ebx_3 + 0x88, 
        eax_5 + 0x48, 0x18, 0, 0x50000201, WS_EX_STATICEDGE, 0, 0, *(arg1 + 8))

if (var_38_10 u>= 8)
    j__free(var_4c.d)

int32_t var_c_26 = 0xffffffff
int32_t var_38_11 = 7
int32_t var_3c_11 = 0
var_4c = 0

if (var_20_12 u>= 8)
    j__free(var_34.d)

sub_52e820(&var_4c, &data_ad7c90)
int32_t var_c_27 = 0x17
sub_6c2db0(arg1 + 0x52c, &var_4c)
int32_t var_c_28 = 0xffffffff

if (var_38_11 u>= 8)
    j__free(var_4c.d)

void* ecx_67 = *(arg1 + 4)
*(arg1 + 0x588) = 7
var_68 = arg1 + 0x52c
*(arg1 + 0x58c) = 0
sub_530ba0(ecx_67 + 0x64, &var_68)
SendMessageW(*(arg1 + 0x530), 0x30, wParam, 1)

if (*(arg1 + 0x10) == 0)
    sub_52e820(&var_34, &data_ad7c90)
    int32_t var_c_29 = 0x18
    sub_52e820(&var_4c, &data_ad7c90)
    var_c_29.b = 0x19
    
    if (*(arg1 + 0x6d4) != 0)
        sub_6bfcd0(arg1 + 0x64c, &var_4c, arg1 + 0x6c4, &var_34, var_7c + var_60, 
            var_74 + 0xc0 - eax_11 - 0x18, 0x50, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_11 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_30 = 0xffffffff
    int32_t var_38_12 = 7
    int32_t var_3c_12 = 0
    var_4c = 0
    
    if (var_20_12 u>= 8)
        j__free(var_34.d)
    
    void** eax_58 = &data_b65924
    
    if (*(arg1 + 0x12) == 0)
        eax_58 = &data_b6593c
    
    sub_6c2db0(arg1 + 0x64c, eax_58)
    void* ecx_73 = *(arg1 + 4)
    *(arg1 + 0x6a8) = 3
    var_60 = arg1 + 0x64c
    *(arg1 + 0x6ac) = 0
    sub_530ba0(ecx_73 + 0x64, &var_60)
    SendMessageW(*(arg1 + 0x650), 0x30, wParam, 1)
    sub_52e820(&var_34, &data_ad7c90)
    int32_t var_c_31 = 0x1a
    sub_52e820(&var_4c, &data_ad7c90)
    var_c_31.b = 0x1b
    
    if (*(arg1 + 0x644) != 0)
        sub_6bfcd0(arg1 + 0x5bc, &var_4c, arg1 + 0x634, &var_34, var_7c + var_64, 
            var_74 + 0xc0 - eax_11 - 0x18, 0x66, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_12 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_32 = 0xffffffff
    int32_t var_38_13 = 7
    int32_t var_3c_13 = 0
    var_4c = 0
    
    if (var_20_12 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(arg1 + 0x5bc, &data_b65954)
    void* ecx_79 = *(arg1 + 4)
    *(arg1 + 0x618) = 3
    var_64 = arg1 + 0x5bc
    *(arg1 + 0x61c) = 0
    sub_530ba0(ecx_79 + 0x64, &var_64)
    SendMessageW(*(arg1 + 0x5c0), 0x30, wParam, 1)

BOOL result = sub_530dd0(arg1, edi + 0x1e0, 0xf0)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_84)
return result
