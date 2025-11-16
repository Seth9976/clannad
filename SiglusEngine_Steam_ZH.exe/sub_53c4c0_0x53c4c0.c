// 函数: sub_53c4c0
// 地址: 0x53c4c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b07d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_74
int32_t eax_2 = __security_cookie ^ &var_74
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 0xc)
char var_71_1

if (eax_5 != 0x64)
    var_71_1 = 0

if (eax_5 == 0x64 || eax_5 == 0x65)
    var_71_1 = 1

if (eax_5 == 0)
    sub_6c1b50(*(arg1 + 4), &data_b6b4ec)

HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
int32_t ecx_1 = 0xa0
int32_t edx = *(arg1 + 0xc)

if (*(arg1 + 0x13) != 0)
    ecx_1 = 0xcc

int32_t var_70
int32_t var_50
int32_t edx_1
int32_t ebx

if (edx == 0)
    edx_1 = 0xc
    var_50 = 0x24
    ebx = 0xc
else if (edx == 0x65)
    edx_1 = 0xc
    var_50 = 0x24
    ebx = ecx_1 + 0x12
else if (edx != 0x64)
    edx_1 = var_70
    ebx = var_70
    var_50 = var_70
else
    edx_1 = 0xc
    ebx = ecx_1 + 0x12
    var_50 = 0xc

int32_t eax_7 = 0
int32_t edi = edx_1

if (var_71_1 != 0)
    eax_7 = 0x18

int32_t var_5c = edi
int32_t var_60 = ebx
int16_t var_4c
int16_t var_34

if (var_71_1 != 0)
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    var_34 = 0
    sub_52e720(&var_34, &data_ad7c90, nullptr)
    int32_t var_c_1 = 0
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    var_c_1.b = 1
    
    if (*(arg1 + 0xa4) != 0)
        sub_6bfcd0(arg1 + 0x1c, &var_4c, arg1 + 0x94, &var_34, edx_1, ebx, 0, 0, 0, 0x50000007, 
            WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_38_2 = 7
    int32_t var_3c_2 = 0
    var_4c = 0
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(arg1 + 0x1c, &data_b6b504)
    void* ecx_7 = *(arg1 + 4)
    *(arg1 + 0x78) = 2
    var_60 = arg1 + 0x1c
    *(arg1 + 0x7c) = 0
    sub_530ba0(ecx_7 + 0x64, &var_60)
    SendMessageW(*(arg1 + 0x20), 0x30, wParam, 1)
    edi = edx_1 + 0xc
    var_60 = ebx + 0x16
    var_5c = edi

void* eax_10 = *(arg1 + 4)
int32_t var_68 = sub_532c20(eax_10, &data_b6b51c, *(eax_10 + 4), wParam)
int32_t var_20_2 = 7
int32_t var_24_2 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_3 = 2
int32_t var_38_3 = 7
int32_t var_3c_3 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_3.b = 3

if (*(arg1 + 0x254) != 0)
    sub_6bfcd0(arg1 + 0x1cc, &var_4c, arg1 + 0x244, &var_34, edi, var_60, var_68, 0x10, 0, 
        0x50000200, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_3 u>= 8)
    j__free(var_4c.d)

int32_t var_c_4 = 0xffffffff
int32_t var_38_4 = 7
int32_t var_3c_4 = 0
var_4c = 0

if (var_20_2 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0x1cc, &data_b6b51c)
void* ecx_14 = *(arg1 + 4)
int32_t eax_13 = 7
var_68 = 1

if (var_71_1 != 0)
    eax_13 = var_68

*(arg1 + 0x228) = eax_13
var_70 = arg1 + 0x1cc
*(arg1 + 0x22c) = 0
sub_530ba0(ecx_14 + 0x64, &var_70)
SendMessageW(*(arg1 + 0x1d0), 0x30, wParam, 1)
void* eax_14 = *(arg1 + 4)
var_70 = sub_532c20(eax_14, &data_b6b534, *(eax_14 + 4), wParam)
int32_t var_20_3 = 7
int32_t var_24_3 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_5 = 4
int32_t var_38_5 = 7
int32_t var_3c_5 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_5.b = 5
void* edi_5

if (*(arg1 + 0x2e4) == 0)
    edi_5 = arg1 + 0x25c
else
    int32_t ecx_19 = var_70
    edi_5 = arg1 + 0x25c
    sub_6bfcd0(edi_5, &var_4c, edi_5 + 0x78, &var_34, edi - ecx_19 + 0x1c8 - eax_7, var_60, ecx_19, 
        0x10, 0, 0x50000200, WS_EX_RIGHT, 0, 0, *(arg1 + 8))

if (var_38_5 u>= 8)
    j__free(var_4c.d)

int32_t var_c_6 = 0xffffffff
int32_t var_38_6 = 7
int32_t var_3c_6 = 0
var_4c = 0

if (var_20_3 u>= 8)
    j__free(var_34.d)

sub_6c2db0(edi_5, &data_b6b534)
void* ecx_22 = *(arg1 + 4)
int32_t eax_17 = 9

if (var_71_1 != 0)
    eax_17 = 3

var_70 = edi_5
*(edi_5 + 0x5c) = eax_17
*(edi_5 + 0x60) = 0
sub_530ba0(ecx_22 + 0x64, &var_70)
SendMessageW(*(arg1 + 0x260), 0x30, wParam, 1)
int32_t var_20_4 = 7
int32_t edi_7 = var_60 + 0x16
int32_t var_24_4 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_7 = 6
int32_t var_38_7 = 7
int32_t var_3c_7 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_7.b = 7

if (*(arg1 + 0x134) != 0)
    sub_6bfcd0(arg1 + 0xac, &var_4c, arg1 + 0x124, &var_34, var_5c, edi_7, 0x1c8 - eax_7, 0x20, 0, 
        0x50000004, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_7 u>= 8)
    j__free(var_4c.d)

int32_t var_c_8 = 0xffffffff
int32_t var_38_8 = 7
int32_t var_3c_8 = 0
var_4c = 0

if (var_20_4 u>= 8)
    j__free(var_34.d)

HWND hWnd = *(arg1 + 0xb0)
void* eax_19 = arg1 + 0xac

if (hWnd != 0)
    SendMessageW(hWnd, 0x406, 1, 0x640000)
    eax_19 = arg1 + 0xac

int32_t edx_3 = 8
void* ecx_27 = *(arg1 + 4)
var_70 = 2

if (var_71_1 != 0)
    edx_3 = var_70

*(eax_19 + 0x5c) = edx_3
var_68 = eax_19
*(eax_19 + 0x60) = 0
var_70 = edx_3
sub_530ba0(ecx_27 + 0x64, &var_68)
SendMessageW(*(arg1 + 0xb0), 0x30, wParam, 1)
int32_t var_20_5 = 7
int32_t var_24_5 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_9 = 8
int32_t var_38_9 = 7
int32_t var_3c_9 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_9.b = 9

if (*(arg1 + 0x1c4) != 0)
    sub_6bfcd0(arg1 + 0x13c, &var_4c, arg1 + 0x1b4, &var_34, var_5c, edi_7 + 0x26, 0x1c8 - eax_7, 
        0x20, 0, 0x50000200, WS_EX_STATICEDGE, 0, 0, *(arg1 + 8))

if (var_38_9 u>= 8)
    j__free(var_4c.d)

int32_t var_c_10 = 0xffffffff
int32_t var_38_10 = 7
int32_t var_3c_10 = 0
var_4c = 0

if (var_20_5 u>= 8)
    j__free(var_34.d)

int32_t var_c_11 = 0xa
sub_6c2db0(arg1 + 0x13c, sub_53c420(arg1, &var_34))
int32_t var_c_12 = 0xffffffff

if (var_20_5 u>= 8)
    j__free(var_34.d)

int32_t* ecx_35 = *(arg1 + 4) + 0x64
*(arg1 + 0x198) = var_70
var_68 = arg1 + 0x13c
*(arg1 + 0x19c) = 0
sub_530ba0(ecx_35, &var_68)
SendMessageW(*(arg1 + 0x140), 0x30, wParam, 1)
void* eax_23 = *(arg1 + 4)
int32_t edi_9 = edi_7 + 0x52
int32_t var_20_6 = 7
int32_t var_24_6 = 0
var_70 = sub_532c20(eax_23, &data_b6b54c, *(eax_23 + 4), wParam) + 0x14
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_13 = 0xb
int32_t var_38_11 = 7
int32_t var_3c_11 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_13.b = 0xc

if (*(arg1 + 0x374) != 0)
    sub_6bfcd0(arg1 + 0x2ec, &var_4c, arg1 + 0x364, &var_34, var_5c, edi_9, var_70, 0x10, 0, 
        0x50010003, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_11 u>= 8)
    j__free(var_4c.d)

int32_t var_c_14 = 0xffffffff
int32_t var_38_12 = 7
int32_t var_3c_12 = 0
var_4c = 0

if (var_20_6 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0x2ec, &data_b6b54c)
void* ecx_41 = *(arg1 + 4)
*(arg1 + 0x348) = 1
var_70 = arg1 + 0x2ec
*(arg1 + 0x34c) = 0
sub_530ba0(ecx_41 + 0x64, &var_70)
SendMessageW(*(arg1 + 0x2f0), 0x30, wParam, 1)

if (var_71_1 != 0)
    int32_t var_38_13 = 7
    int32_t var_3c_13 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    int32_t var_c_15 = 0xd
    sub_52e820(&var_34, &data_ad7c90)
    var_c_15.b = 0xe
    
    if (*(arg1 + 0x404) != 0)
        sub_6bfcd0(arg1 + 0x37c, &var_34, arg1 + 0x3f4, &var_4c, var_5c + 0x1c8 - eax_7 - 0x66, 
            edi_9, 0x66, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_20_6 u>= 8)
        j__free(var_34.d)
    
    int32_t var_c_16 = 0xffffffff
    int32_t var_20_7 = 7
    int32_t var_24_7 = 0
    var_34 = 0
    
    if (var_38_13 u>= 8)
        j__free(var_4c.d)
    
    sub_6c2db0(arg1 + 0x37c, &data_b6b054)
    void* ecx_49 = *(arg1 + 4)
    *(arg1 + 0x3d8) = 3
    var_70 = arg1 + 0x37c
    *(arg1 + 0x3dc) = 0
    sub_530ba0(ecx_49 + 0x64, &var_70)
    SendMessageW(*(arg1 + 0x380), 0x30, wParam, 1)
    edi_9 += 0x20
else if (*(arg1 + 0xc) == 0)
    sub_52e820(&var_4c, &data_ad7c90)
    int32_t var_c_17 = 0xf
    sub_52e820(&var_34, &data_ad7c90)
    var_c_17.b = 0x10
    
    if (*(arg1 + 0x494) != 0)
        sub_6bfcd0(arg1 + 0x40c, &var_34, arg1 + 0x484, &var_4c, var_5c + 0x1c8 - eax_7 - 0x50, 
            edi_9, 0x50, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_20_6 u>= 8)
        j__free(var_34.d)
    
    int32_t var_c_18 = 0xffffffff
    int32_t var_20_8 = 7
    int32_t var_24_8 = 0
    var_34 = 0
    
    if (var_38_12 u>= 8)
        j__free(var_4c.d)
    
    void** eax_34 = &data_b6b024
    
    if (*(arg1 + 0x12) == 0)
        eax_34 = &data_b6b03c
    
    sub_6c2db0(arg1 + 0x40c, eax_34)
    void* ecx_57 = *(arg1 + 4)
    *(arg1 + 0x468) = 3
    var_70 = arg1 + 0x40c
    *(arg1 + 0x46c) = 0
    sub_530ba0(ecx_57 + 0x64, &var_70)
    SendMessageW(*(arg1 + 0x410), 0x30, wParam, 1)
    sub_52e820(&var_4c, &data_ad7c90)
    int32_t var_c_19 = 0x11
    sub_52e820(&var_34, &data_ad7c90)
    var_c_19.b = 0x12
    
    if (*(arg1 + 0x404) != 0)
        sub_6bfcd0(arg1 + 0x37c, &var_34, arg1 + 0x3f4, &var_4c, edx_1 + 0x10c, edi_9, 0x66, 0x18, 
            0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_20_8 u>= 8)
        j__free(var_34.d)
    
    int32_t var_20_9 = 7
    int32_t var_24_9 = 0
    var_34 = 0
    int32_t var_c_20 = 0xffffffff
    sub_52e8a0(&var_4c)
    sub_6c2db0(arg1 + 0x37c, &data_b6b054)
    void* ecx_64 = *(arg1 + 4)
    *(arg1 + 0x3d8) = 3
    var_70 = arg1 + 0x37c
    *(arg1 + 0x3dc) = 0
    sub_530ba0(ecx_64 + 0x64, &var_70)
    SendMessageW(*(arg1 + 0x380), 0x30, wParam, 1)
    edi_9 += 0x18

int32_t edi_10 = edi_9 - ebx
int32_t result = sub_6c1650(arg1 + 0x1c, 0x1c8, edi_10)

if (*(arg1 + 0xc) == 0)
    result = sub_530dd0(arg1, 0x1e0, var_50 + edi_10 + ebx)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_74)
return result
