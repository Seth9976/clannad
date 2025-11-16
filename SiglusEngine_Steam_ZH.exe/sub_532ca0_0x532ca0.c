// 函数: sub_532ca0
// 地址: 0x532ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9aff20
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_9c
int32_t eax_2 = __security_cookie ^ &var_9c
int32_t __saved_edi
int32_t var_ac = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xc) == 0)
    sub_6c1b50(*(arg1 + 4), &data_b6671c)

HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
int32_t edi = *(arg1 + 0xc)
int32_t var_98
int32_t var_94
int32_t var_88_1
int32_t var_84
int32_t var_80_1
int32_t var_7c_1
int32_t var_78
int32_t var_74_1
int32_t var_70_1
int32_t var_6c_1
int32_t var_68_1
int32_t var_60
int32_t var_5c
int32_t ebx
int32_t edi_1

if (edi == 0)
    ebx = 0xc
    edi_1 = 0xc
    var_5c = 0xde
    __builtin_memcpy(&var_88_1, 
        "\xbc\x00\x00\x00\xbc\x00\x00\x00\x0e\x01\x00\x00\xd4\x00\x00\x00\xbc\x00\x00\x00\x1e\x00\x00\x"
    "00\x80\x00\x00\x00\xde\x00\x00\x00\x18\x00\x00\x00", 
        0x24)
    var_94 = 0x46
    var_60 = 0x30
else if (edi == 0x6f || edi == 0x6e)
    var_84 = 0x78
    var_5c = 0xf0
    int32_t eax_17 = sub_543840()
    int32_t var_8c_1
    
    if (edi == 0x6f)
        var_8c_1 = 0xc
        ebx = eax_17 + 0x18
        var_7c_1 = eax_17 + 0x9c
        var_80_1 = 0x13e
    else if (edi != 0x6e)
        ebx = var_94
        var_7c_1 = var_94
        var_8c_1 = var_94
        var_80_1 = var_94
    else
        var_8c_1 = 0xc
        ebx = eax_17 + 0x18
        var_7c_1 = eax_17 + 0x9c
        var_80_1 = 0x126
    
    var_88_1 = 0x60
    edi_1 = var_8c_1
    int32_t eax_20 = 0x7e
    var_6c_1 = 0xd8
    
    if (edi == 0x6e)
        eax_20 = 0x60
    
    var_78 = 0x60
    var_68_1 = 0x30
    var_94 = 0x18
    var_74_1 = 0x36
    var_70_1 = eax_20
    var_60 = 0x30
else
    ebx = var_94
    edi_1 = var_94
    var_7c_1 = var_94
    var_80_1 = var_94
    var_84 = var_98
    var_5c = var_98
    var_88_1 = var_98
    var_6c_1 = var_98
    var_78 = var_98
    var_68_1 = var_98
    var_60 = var_98
    var_70_1 = var_98
    var_94 = var_98
    var_74_1 = var_98

void* eax_21 = *(arg1 + 4)
int32_t eax_22 = sub_532c20(eax_21, &data_b66764, *(eax_21 + 4), wParam)
int32_t ecx_5 = var_88_1
int32_t eax_25
int32_t edx_1
edx_1:eax_25 = sx.q(ecx_5 - (eax_22 + 0x14))
int32_t var_64 = (eax_25 - edx_1) s>> 1
var_98 = ecx_5 - 0x50
int32_t var_88_2 = var_6c_1 - 0x18
int32_t edx_6 = *(arg1 + 0xc)
int32_t var_8c_2 = ecx_5 - 0xbc

if (edx_6 == 0x6e)
    int32_t eax_33
    int32_t edx_7
    edx_7:eax_33 = sx.q(ecx_5 - 0x66)
    edx_6 = *(arg1 + 0xc)
    var_8c_2 = (eax_33 - edx_7) s>> 1
    var_88_2 = var_6c_1 - 0x20

int16_t var_4c
int16_t var_34

if (edx_6 == 0x6f || edx_6 == 0x6e)
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
        sub_6bfcd0(arg1 + 0x1c, &var_4c, arg1 + 0x94, &var_34, ebx, edi_1, var_84, var_5c, 0, 
            0x50000007, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_1 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_38_2 = 7
    int32_t var_3c_2 = 0
    var_4c = 0
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(arg1 + 0x1c, &data_b66734)
    void* ecx_10 = *(arg1 + 4)
    *(arg1 + 0x78) = 4
    var_84 = arg1 + 0x1c
    *(arg1 + 0x7c) = 0
    sub_530ba0(ecx_10 + 0x64, &var_84)
    SendMessageW(*(arg1 + 0x20), 0x30, wParam, 1)
    ebx += 0xc
    edi_1 += 0x16

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

if (*(arg1 + 0x134) != 0)
    sub_6bfcd0(arg1 + 0xac, &var_4c, arg1 + 0x124, &var_34, ebx, edi_1, var_78, var_68_1, 0, 
        0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_3 u>= 8)
    j__free(var_4c.d)

int32_t var_c_4 = 0xffffffff
int32_t var_38_4 = 7
int32_t var_3c_4 = 0
var_4c = 0

if (var_20_2 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0xac, &data_b6674c)
void* ecx_16 = *(arg1 + 4)
*(arg1 + 0x108) = 7
var_78 = arg1 + 0xac
*(arg1 + 0x10c) = 0
sub_530ba0(ecx_16 + 0x64, &var_78)
SendMessageW(*(arg1 + 0xb0), 0x30, wParam, 1)
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

if (*(arg1 + 0x1c4) != 0)
    sub_6bfcd0(arg1 + 0x13c, &var_4c, arg1 + 0x1b4, &var_34, var_94 + ebx, var_74_1 + edi_1, 
        var_60, var_70_1, 0, 0x5001000a, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_38_5 u>= 8)
    j__free(var_4c.d)

int32_t var_c_6 = 0xffffffff
int32_t var_38_6 = 7
int32_t var_3c_6 = 0
var_4c = 0

if (var_20_3 u>= 8)
    j__free(var_34.d)

HWND hWnd = *(arg1 + 0x140)
void* eax_47 = arg1 + 0x13c

if (hWnd != 0)
    SendMessageW(hWnd, 0x406, 1, 0xff0000)
    eax_47 = arg1 + 0x13c

void* ecx_21 = *(arg1 + 4)
*(eax_47 + 0x5c) = 4
var_94 = eax_47
*(eax_47 + 0x60) = 0
sub_530ba0(ecx_21 + 0x64, &var_94)
SendMessageW(*(arg1 + 0x140), 0x30, wParam, 1)
int32_t var_20_4 = 7
int32_t var_24_4 = 0
var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_7 = 6
int32_t var_38_7 = 7
int32_t var_3c_7 = 0
var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
var_c_7.b = 7

if (*(arg1 + 0x254) != 0)
    sub_6bfcd0(arg1 + 0x1cc, &var_4c, arg1 + 0x244, &var_34, var_64 + ebx, 
        var_74_1 + var_70_1 + 6 + edi_1, eax_22 + 0x14, 0x10, 0, 0x50010003, WS_EX_LEFT, 0, 0, 
        *(arg1 + 8))

if (var_38_7 u>= 8)
    j__free(var_4c.d)

int32_t var_c_8 = 0xffffffff
int32_t var_38_8 = 7
int32_t var_3c_8 = 0
var_4c = 0

if (var_20_4 u>= 8)
    j__free(var_34.d)

sub_6c2db0(arg1 + 0x1cc, &data_b66764)
void* ecx_27 = *(arg1 + 4)
*(arg1 + 0x228) = 1
var_64 = arg1 + 0x1cc
*(arg1 + 0x22c) = 0
sub_530ba0(ecx_27 + 0x64, &var_64)
SendMessageW(*(arg1 + 0x1d0), 0x30, wParam, 1)
LRESULT result = *(arg1 + 0xc)
void* ecx_39
void* ebx_1

if (result == 0)
    int32_t var_20_5 = 7
    LRESULT result_1 = result
    var_34 = result.w
    sub_52e720(&var_34, &data_ad7c90, result)
    int32_t var_c_9 = 8
    int32_t var_38_9 = 7
    int32_t var_3c_9 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    var_c_9.b = 9
    
    if (*(arg1 + 0x374) != 0)
        sub_6bfcd0(arg1 + 0x2ec, &var_4c, arg1 + 0x364, &var_34, var_98 + ebx, 
            var_6c_1 - 0x18 + edi_1, 0x50, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_9 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_10 = 0xffffffff
    int32_t var_38_10 = 7
    int32_t var_3c_10 = 0
    var_4c = 0
    
    if (var_20_5 u>= 8)
        j__free(var_34.d)
    
    int16_t* eax_59 = &data_b66404
    
    if (*(arg1 + 0x12) == 0)
        eax_59 = &data_b6641c
    
    sub_6c2db0(arg1 + 0x2ec, eax_59)
    void* ecx_33 = *(arg1 + 4)
    *(arg1 + 0x348) = 3
    var_98 = arg1 + 0x2ec
    *(arg1 + 0x34c) = 0
    sub_530ba0(ecx_33 + 0x64, &var_98)
    SendMessageW(*(arg1 + 0x2f0), 0x30, wParam, 1)
    int32_t var_20_6 = 7
    int32_t var_24_5 = 0
    var_34 = 0
    sub_52e720(&var_34, &data_ad7c90, nullptr)
    int32_t var_c_11 = 0xa
    int32_t var_38_11 = 7
    int32_t var_3c_11 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    var_c_11.b = 0xb
    
    if (*(arg1 + 0x2e4) == 0)
        ebx_1 = arg1 + 0x25c
    else
        ebx_1 = arg1 + 0x25c
        sub_6bfcd0(ebx_1, &var_4c, ebx_1 + 0x78, &var_34, var_8c_2 + ebx, var_88_2 + edi_1, 0x66, 
            0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_11 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_12 = 0xffffffff
    int32_t var_38_12 = 7
    int32_t var_3c_12 = 0
    var_4c = 0
    
    if (var_20_6 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(ebx_1, &data_b66434)
    ecx_39 = *(arg1 + 4)
    *(ebx_1 + 0x5c) = 3
label_533816:
    var_98 = ebx_1
    *(ebx_1 + 0x60) = 0
    sub_530ba0(ecx_39 + 0x64, &var_98)
    result = SendMessageW(*(arg1 + 0x260), 0x30, wParam, 1)
else if (result == 0x6e)
    int32_t var_20_7 = 7
    int32_t var_24_6 = 0
    var_34 = 0
    sub_52e720(&var_34, &data_ad7c90, nullptr)
    int32_t var_c_13 = 0xc
    int32_t var_38_13 = 7
    int32_t var_3c_13 = 0
    var_4c = 0
    sub_52e720(&var_4c, &data_ad7c90, nullptr)
    var_c_13.b = 0xd
    
    if (*(arg1 + 0x2e4) == 0)
        ebx_1 = arg1 + 0x25c
    else
        ebx_1 = arg1 + 0x25c
        sub_6bfcd0(ebx_1, &var_4c, ebx_1 + 0x78, &var_34, var_8c_2 + ebx, var_88_2 + edi_1, 0x66, 
            0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_38_13 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_c_14 = 0xffffffff
    int32_t var_38_14 = 7
    int32_t var_3c_14 = 0
    var_4c = 0
    
    if (var_20_7 u>= 8)
        j__free(var_34.d)
    
    sub_6c2db0(ebx_1, &data_b66434)
    ecx_39 = *(arg1 + 4)
    *(ebx_1 + 0x5c) = 1
    goto label_533816

if (*(arg1 + 0xc) == 0)
    result = sub_530dd0(arg1, var_7c_1, var_80_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_9c)
return result
