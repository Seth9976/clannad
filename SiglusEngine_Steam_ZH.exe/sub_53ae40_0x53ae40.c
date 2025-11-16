// 函数: sub_53ae40
// 地址: 0x53ae40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0660
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t var_9c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 0xc)
char var_85

if (eax_5 == 1 || eax_5 == 0x78 || eax_5 == 0x79)
    var_85 = 1
else
    var_85 = 0

char var_79_1

if (eax_5 != 0x78)
    var_79_1 = 0

if (eax_5 == 0x78 || eax_5 == 0x79)
    var_79_1 = 1

if (eax_5 == 0)
    sub_6c1b50(*(arg1 + 4), &data_b69fbc)
else if (eax_5 == 0x79)
    sub_6c1b50(*(arg1 + 4), &data_b69fa4)

HGDIOBJ wParam_2 = GetStockObject(DEFAULT_GUI_FONT)
int32_t ecx_1 = *(arg1 + 0xc)
HGDIOBJ wParam_1 = wParam_2
HGDIOBJ wParam = wParam_1
int32_t var_74
int32_t var_68
int32_t var_50
int32_t ebx

if (ecx_1 == 0 || ecx_1 == 0x79)
    ebx = 0xc
    var_50 = 0x24
    var_68 = 0xc
    var_74 = 0xc
else if (ecx_1 == 1 || ecx_1 == 0x78)
    ebx = 0xc
    var_50 = 0xc
    var_68 = 0xc
    var_74 = 0xc
else
    ebx = var_68

int32_t var_78 = 0x18
int32_t edx = 0xa0

if (ecx_1 == 0)
    edx = 0xbc

int32_t eax_6 = 0
int32_t var_5c = edx

if (var_79_1 != 0)
    eax_6 = 0x126

int32_t eax_7 = eax_6 + edx
int32_t eax_9 = 0

if (var_85 != 0)
    eax_9 = var_78

var_78 = ebx
int32_t eax_10 = 0
int32_t var_60 = edx - eax_9

if (var_85 != 0)
    eax_10 = 0x1e

int32_t var_70 = var_74
int16_t var_4c
int16_t var_34

if (var_85 != 0)
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
        sub_6bfcd0(arg1 + 0x1c, &var_4c, arg1 + 0x94, &var_34, var_74, ebx, 0, 0, 0, 0x50000007, 
            WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_38_2 = 7
    int32_t var_3c_2 = 0
    var_4c = 0
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(arg1 + 0x1c, &data_b69fd4)
    void* ecx_7 = *(arg1 + 4)
    *(arg1 + 0x78) = 4
    var_78 = arg1 + 0x1c
    *(arg1 + 0x7c) = 0
    sub_530ba0(ecx_7 + 0x64, &var_78)
    wParam_1 = wParam
    SendMessageW(*(arg1 + 0x20), 0x30, wParam_1, 1)
    var_70 = var_74 + 0xc
    var_78 = ebx + 0x16

void* eax_16 = *(arg1 + 4)
int32_t var_20_2 = 7
int32_t var_24_2 = 0
int32_t var_84 = sub_532c20(eax_16, &data_b69fec, *(eax_16 + 4), wParam_1) + 0x14
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_3 = 2
int32_t var_38_3 = 7
int32_t var_3c_3 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_3.b = 3

if (*(arg1 + 0x134) != 0)
    sub_6bfcd0(arg1 + 0xac, &var_4c, arg1 + 0x124, &var_34, var_70, var_78, var_84, 0x10, 0, 
        0x50030009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_3 u>= 8)
    j__free(var_4c.d)

int32_t var_c_4 = 0xffffffff
int32_t var_38_4 = 7
int32_t var_3c_4 = 0
var_4c = 0

if (var_20_2 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0xac, &data_b69fec)
void* ecx_14 = *(arg1 + 4)
*(arg1 + 0x108) = 7
var_84 = arg1 + 0xac
*(arg1 + 0x10c) = 0
sub_530ba0(ecx_14 + 0x64, &var_84)
SendMessageW(*(arg1 + 0xb0), 0x30, wParam_1, 1)
var_84 = var_78 + 0x16
void* eax_23 = *(arg1 + 4)
int32_t var_20_3 = 7
int32_t var_24_3 = 0
int32_t var_80 = sub_532c20(eax_23, &data_b6a004, *(eax_23 + 4), wParam_1) + 0x14
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_5 = 4
int32_t var_38_5 = 7
int32_t var_3c_5 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_5.b = 5

if (*(arg1 + 0x1c4) != 0)
    sub_6bfcd0(arg1 + 0x13c, &var_4c, arg1 + 0x1b4, &var_34, var_70, var_84, var_80, 0x10, 0, 
        0x50010009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_5 u>= 8)
    j__free(var_4c.d)

int32_t var_c_6 = 0xffffffff
int32_t var_38_6 = 7
int32_t var_3c_6 = 0
var_4c = 0

if (var_20_3 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0x13c, &data_b6a004)
void* ecx_22 = *(arg1 + 4)
*(arg1 + 0x198) = 7
var_80 = arg1 + 0x13c
*(arg1 + 0x19c) = 0
sub_530ba0(ecx_22 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x140), 0x30, wParam_1, 1)
void* eax_28 = *(arg1 + 4)
var_84 += 0x16
int32_t var_20_4 = 7
int32_t var_24_4 = 0
var_80 = sub_532c20(eax_28, &data_b6a01c, *(eax_28 + 4), wParam_1) + 0x14
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_7 = 6
int32_t var_38_7 = 7
int32_t var_3c_7 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_7.b = 7

if (*(arg1 + 0x254) != 0)
    sub_6bfcd0(arg1 + 0x1cc, &var_4c, arg1 + 0x244, &var_34, var_70, var_84, var_80, 0x10, 0, 
        0x50010009, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_7 u>= 8)
    j__free(var_4c.d)

int32_t var_c_8 = 0xffffffff
int32_t var_38_8 = 7
int32_t var_3c_8 = 0
var_4c = 0

if (var_20_4 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0x1cc, &data_b6a01c)
void* ecx_30 = *(arg1 + 4)
*(arg1 + 0x228) = 7
var_80 = arg1 + 0x1cc
*(arg1 + 0x22c) = 0
sub_530ba0(ecx_30 + 0x64, &var_80)
SendMessageW(*(arg1 + 0x1d0), 0x30, wParam, 1)
BOOL result = *(arg1 + 0xc)

if (result == 0x78 || result == 0x79)
    int32_t var_64_1 = 0xa0 - eax_10 + var_78
    int32_t var_20_6 = 7
    int32_t var_24_6 = 0
    var_34 = 0
    sub_52e720(&var_34, &data_ad7c90, nullptr)
    int32_t var_c_13 = 8
    int32_t var_38_10 = 7
    int32_t var_3c_10 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    var_c_13.b = 9
    
    if (*(arg1 + 0x2e4) != 0)
        sub_6bfcd0(arg1 + 0x25c, &var_4c, arg1 + 0x2d4, &var_34, var_70 + var_60 - 0x66, 
            var_64_1 - 0x18, 0x66, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_10 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_14 = 0xffffffff
    int32_t var_38_11 = 7
    int32_t var_3c_11 = 0
    var_4c = 0
    
    if (var_20_6 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(arg1 + 0x25c, &data_b69a94)
    void* ecx_63 = *(arg1 + 4)
    *(arg1 + 0x2b8) = 1
    var_60 = arg1 + 0x25c
    *(arg1 + 0x2bc) = 0
    sub_530ba0(ecx_63 + 0x64, &var_60)
    SendMessageW(*(arg1 + 0x260), 0x30, wParam, 1)
    int32_t esi_5 = ebx + 0xa0
    
    if (var_85 != 0)
        sub_6c1650(arg1 + 0x1c, var_5c, 0xa0)
    
    if (*(arg1 + 0xc) == 0x79)
        int32_t var_20_7 = 7
        int32_t var_24_7 = 0
        var_34 = 0
        sub_52e720(&var_34, &data_ad7c90, nullptr)
        int32_t var_c_15 = 0xa
        int32_t var_38_12 = 7
        int32_t var_3c_12 = 0
        var_4c = 0
        sub_52e720(&var_4c, &data_ad7c90, nullptr)
        var_c_15.b = 0xb
        
        if (*(arg1 + 0x374) != 0)
            sub_6bfcd0(arg1 + 0x2ec, &var_4c, arg1 + 0x364, &var_34, var_74 + eax_7 - 0x50, 
                esi_5 + 6, 0x50, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
        
        if (var_38_12 u>= 8)
            j__free(var_4c.d)
        
        int32_t var_c_16 = 0xffffffff
        int32_t var_38_13 = 7
        int32_t var_3c_13 = 0
        var_4c = 0
        
        if (var_20_7 u>= 8)
            j__free(var_34.d)
        
        void** eax_48 = &data_b69a64
        
        if (*(arg1 + 0x12) == 0)
            eax_48 = &data_b69a7c
        
        sub_6c2db0(arg1 + 0x2ec, eax_48)
        void* ecx_73 = *(arg1 + 4)
        *(arg1 + 0x348) = 3
        var_5c = arg1 + 0x2ec
        *(arg1 + 0x34c) = 0
        sub_530ba0(ecx_73 + 0x64, &var_5c)
        SendMessageW(*(arg1 + 0x2f0), 0x30, wParam, 1)
        ebx = var_68
        esi_5 += 0x1e
    
    result = sub_530dd0(arg1, eax_7 + 0x18, esi_5 - ebx + 0x30)
else if (result == 1 || result == 0)
    var_84 += 0x1c
    int32_t var_38_9 = 7
    int32_t var_3c_9 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    int32_t var_c_9 = 0xc
    int32_t var_20_5 = 7
    int32_t var_24_5 = 0
    var_34 = 0
    enum WINDOW_STYLE ecx_34 = sub_52e720(&var_34, &data_ad7c90, nullptr)
    var_c_9.b = 0xd
    int32_t var_a0_21 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x2ec, &var_34, &var_4c, var_74 + eax_7 - 0x50, var_84, 0x50, 0x18, ecx_34, 
        0x50000000, nullptr)
    sub_52e8a0(&var_34)
    int32_t var_c_10 = 0xffffffff
    sub_52e8a0(&var_4c)
    int16_t* eax_34 = &data_b69a64
    
    if (*(arg1 + 0x12) == 0)
        eax_34 = &data_b69a7c
    
    sub_6c2db0(arg1 + 0x2ec, eax_34)
    void* ecx_42 = *(arg1 + 4)
    *(arg1 + 0x348) = 3
    var_80 = arg1 + 0x2ec
    *(arg1 + 0x34c) = 0
    sub_530ba0(ecx_42 + 0x64, &var_80)
    SendMessageW(*(arg1 + 0x2f0), 0x30, wParam, 1)
    sub_52e820(&var_4c, &data_ad7c90)
    int32_t var_c_11 = 0xe
    enum WINDOW_STYLE ecx_46 = sub_52e820(&var_34, &data_ad7c90)
    var_c_11.b = 0xf
    int32_t var_a0_24 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x25c, &var_34, &var_4c, var_74 + eax_7 - 0xbc, var_84, 0x66, 0x18, ecx_46, 
        0x50000000, nullptr)
    sub_52e8a0(&var_34)
    int32_t var_c_12 = 0xffffffff
    sub_52e8a0(&var_4c)
    sub_6c2db0(arg1 + 0x25c, &data_b69a94)
    void* ecx_53 = *(arg1 + 4)
    *(arg1 + 0x2b8) = 3
    var_80 = arg1 + 0x25c
    *(arg1 + 0x2bc) = 0
    sub_530ba0(ecx_53 + 0x64, &var_80)
    SendMessageW(*(arg1 + 0x260), 0x30, wParam, 1)
    result = sub_530dd0(arg1, eax_7 + 0x18, var_50 + var_84 + 0x18)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_8c)
return result
