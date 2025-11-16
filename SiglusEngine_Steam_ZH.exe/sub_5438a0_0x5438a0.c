// 函数: sub_5438a0
// 地址: 0x5438a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_bc
int32_t eax_2 = __security_cookie ^ &var_bc
int32_t __saved_edi
int32_t var_cc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *(arg1 + 0xc)

if (eax_5 == 0)
    sub_6c1b50(*(arg1 + 4), &data_b6dde4)
else if (eax_5 == 0x6f)
    sub_6c1b50(*(arg1 + 4), &data_b6ddcc)

HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
void* edx = data_bac510
int32_t ecx_1 = 1

if (*(edx + 0xbb51) != 0)
    ecx_1 = 2

if (*(edx + 0xbb52) != 0)
    ecx_1 += 1

if (*(edx + 0xbb53) != 0)
    ecx_1 += 1

if (*(edx + 0xbb54) != 0)
    ecx_1 += 1

if (*(edx + 0xbb55) != 0)
    ecx_1 += 1

int32_t eax_6 = *(arg1 + 0xc)
int32_t esi_3 = ecx_1 * 0x3f - 3
int32_t var_a4

if (eax_6 != 0)
    if (eax_6 == 0x6f || eax_6 == 1 || eax_6 == 0x6e)
        esi_3 += 0x18
    else
        esi_3 = var_a4

int32_t ecx_2

if (eax_6 == 0 || eax_6 == 0)
    ecx_2 = 0xf0
else if (eax_6 != 0x6f)
    if (eax_6 != 1)
        ecx_2 = var_a4
    
    if (eax_6 == 1 || eax_6 == 0x6e)
        ecx_2 = 0xb4
else
    ecx_2 = eax_6 + 0x63

int32_t var_b4
int32_t var_ac
int32_t var_90
int32_t var_8c
int32_t ebx
int32_t eax_7

if (eax_6 != 0)
    if (eax_6 == 0x6f)
        var_8c = 0x13e
        ebx = eax_6 - 0x4b
        eax_7 = esi_3 + 0x9c
        goto label_543a10
    
    if (eax_6 == 1 || eax_6 == 0x6e)
        var_8c = 0x108
        ebx = 0xc
        eax_7 = esi_3 + 0x9c
        goto label_543a10
    
    ebx = var_a4
    var_90 = var_a4
    var_8c = var_a4
    var_ac = var_a4
    var_b4 = var_a4
else
    eax_7 = esi_3 + 0x18
    var_8c = 0x13e
    ebx = 0x24
label_543a10:
    var_90 = eax_7
    var_ac = 0xc
    var_b4 = 0xc
void* eax_13 = *(arg1 + 4)
int32_t ecx_4 = sub_532c20(eax_13, &data_b6dea4, *(eax_13 + 4), wParam) + 0x14
int32_t eax_16
int32_t edx_1
edx_1:eax_16 = sx.q(0x3c - ecx_4)
int32_t eax_18 = (eax_16 - edx_1) s>> 1
int32_t eax_21 = var_ac
int32_t edx_3 = var_90 - eax_21
int32_t var_84 = edx_3 - 0xbc
int32_t ecx_9 = *(arg1 + 0xc)
int32_t var_88 = var_8c - ebx - 0x18

if (ecx_9 == 1 || ecx_9 == 0x6e)
    int32_t eax_23
    int32_t edx_4
    edx_4:eax_23 = sx.q(esi_3 - 0x66)
    var_88 = ecx_2 + 6
    eax_21 = var_ac
    var_84 = (eax_23 - edx_4) s>> 1

int16_t var_7c
int16_t var_64
int32_t ebx_3

if (ecx_9 == 0x6f || ecx_9 == 1 || ecx_9 == 0x6e)
    int32_t var_68_1 = 7
    int32_t var_6c_1 = 0
    var_7c = 0
    sub_52e720(&var_7c, &data_ad7c90, nullptr)
    int32_t var_c_1 = 0
    int32_t var_50_1 = 7
    int32_t var_54_1 = 0
    var_64 = 0
    sub_52e720(&var_64, &data_ad7c90, nullptr)
    var_c_1.b = 1
    int32_t ebx_2 = var_b4
    void* esi_4
    
    if (*(arg1 + 0xa8) == 0)
        esi_4 = arg1 + 0x20
    else
        esi_4 = arg1 + 0x20
        sub_6bfcd0(esi_4, &var_64, esi_4 + 0x78, &var_7c, var_ac, ebx_2, esi_3, 0xf0, 0, 
            0x50000007, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_50_1 u>= 8)
        j__free(var_64.d)
    
    int32_t var_c_2 = 0xffffffff
    int32_t var_50_2 = 7
    int32_t var_54_2 = 0
    var_64 = 0
    
    if (var_68_1 u>= 8)
        j__free(var_7c.d)
    
    sub_6c2db0(esi_4, &data_b6ddfc)
    void* ecx_14 = *(arg1 + 4)
    *(esi_4 + 0x5c) = 4
    var_b4 = esi_4
    *(esi_4 + 0x60) = 0
    sub_530ba0(ecx_14 + 0x64, &var_b4)
    SendMessageW(*(arg1 + 0x24), 0x30, wParam, 1)
    eax_21 = var_ac + 0xc
    ebx_3 = ebx_2 + 0x16
    var_ac = eax_21
else
    ebx_3 = var_b4

var_b4 = eax_21
int32_t var_68_2 = 7
int32_t var_6c_2 = 0
var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_3 = 2
int32_t var_50_3 = 7
int32_t var_54_3 = 0
var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
var_c_3.b = 3

if (*(arg1 + 0x138) != 0)
    sub_6bfcd0(arg1 + 0xb0, &var_64, arg1 + 0x128, &var_7c, var_ac, ebx_3, 0x3c, ecx_2, 0, 
        0x50000307, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_50_3 u>= 8)
    j__free(var_64.d)

int32_t var_c_4 = 0xffffffff
int32_t var_50_4 = 7
int32_t var_54_4 = 0
var_64 = 0

if (var_68_2 u>= 8)
    j__free(var_7c.d)

sub_6c2db0(arg1 + 0xb0, &data_b6de14)
void* ecx_20 = *(arg1 + 4)
*(arg1 + 0x10c) = 4
int32_t var_b8 = arg1 + 0xb0
*(arg1 + 0x110) = 0
sub_530ba0(ecx_20 + 0x64, &var_b8)
SendMessageW(*(arg1 + 0xb4), 0x30, wParam, 1)
int32_t var_68_3 = 7
int32_t var_6c_3 = 0
var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_5 = 4
int32_t var_50_5 = 7
int32_t var_54_5 = 0
var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
var_c_5.b = 5

if (*(arg1 + 0x1c8) != 0)
    sub_6bfcd0(arg1 + 0x140, &var_64, arg1 + 0x1b8, &var_7c, var_ac + 6, ebx_3 + 0x10, 0x30, 
        ecx_2 - 0x2e, 0, 0x5001000a, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_50_5 u>= 8)
    j__free(var_64.d)

int32_t var_c_6 = 0xffffffff
int32_t var_50_6 = 7
int32_t var_54_6 = 0
var_64 = 0

if (var_68_3 u>= 8)
    j__free(var_7c.d)

HWND hWnd_2 = *(arg1 + 0x144)
void* eax_35 = arg1 + 0x140

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x406, 1, 0xff0000)
    eax_35 = arg1 + 0x140

void* ecx_25 = *(arg1 + 4)
*(eax_35 + 0x5c) = 4
var_b8 = eax_35
*(eax_35 + 0x60) = 0
sub_530ba0(ecx_25 + 0x64, &var_b8)
SendMessageW(*(arg1 + 0x144), 0x30, wParam, 1)
int32_t var_68_4 = 7
int32_t var_6c_4 = 0
var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_7 = 6
int32_t var_50_7 = 7
int32_t var_54_7 = 0
var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
var_c_7.b = 7

if (*(arg1 + 0x258) != 0)
    sub_6bfcd0(arg1 + 0x1d0, &var_64, arg1 + 0x248, &var_7c, var_ac + eax_18, ecx_2 - 0x18 + ebx_3, 
        ecx_4, 0x10, 0, 0x50010003, WS_EX_LEFT, 0, 0, *(arg1 + 8))

if (var_50_7 u>= 8)
    j__free(var_64.d)

int32_t var_c_8 = 0xffffffff
int32_t var_50_8 = 7
int32_t var_54_8 = 0
var_64 = 0

if (var_68_4 u>= 8)
    j__free(var_7c.d)

sub_6c2db0(arg1 + 0x1d0, &data_b6dea4)
void* ecx_31 = *(arg1 + 4)
*(arg1 + 0x22c) = 1
var_b8 = arg1 + 0x1d0
*(arg1 + 0x230) = 0
sub_530ba0(ecx_31 + 0x64, &var_b8)
SendMessageW(*(arg1 + 0x1d4), 0x30, wParam, 1)
void* eax_42 = data_bac510

if (*(eax_42 + 0xbb51) != 0)
    int32_t var_68_5 = 7
    var_b4 = var_ac + 0x3f
    int32_t var_6c_5 = 0
    var_7c = 0
    sub_52e720(&var_7c, &data_ad7c90, nullptr)
    int32_t var_c_9 = 8
    int32_t var_50_9 = 7
    int32_t var_54_9 = 0
    var_64 = 0
    sub_52e720(&var_64, &data_ad7c90, nullptr)
    var_c_9.b = 9
    
    if (*(arg1 + 0x2e8) != 0)
        sub_6bfcd0(arg1 + 0x260, &var_64, arg1 + 0x2d8, &var_7c, var_b4, ebx_3, 0x3c, ecx_2, 0, 
            0x50000307, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_50_9 u>= 8)
        j__free(var_64.d)
    
    int32_t var_c_10 = 0xffffffff
    int32_t var_50_10 = 7
    int32_t var_54_10 = 0
    var_64 = 0
    
    if (var_68_5 u>= 8)
        j__free(var_7c.d)
    
    sub_6c2db0(arg1 + 0x260, &data_b6de2c)
    void* ecx_37 = *(arg1 + 4)
    *(arg1 + 0x2bc) = 4
    var_b8 = arg1 + 0x260
    *(arg1 + 0x2c0) = 0
    sub_530ba0(ecx_37 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x264), 0x30, wParam, 1)
    int32_t var_68_6 = 7
    int32_t var_6c_6 = 0
    var_7c = 0
    sub_52e720(&var_7c, &data_ad7c90, nullptr)
    int32_t var_c_11 = 0xa
    int32_t var_50_11 = 7
    int32_t var_54_11 = 0
    var_64 = 0
    sub_52e720(&var_64, &data_ad7c90, nullptr)
    var_c_11.b = 0xb
    
    if (*(arg1 + 0x378) != 0)
        sub_6bfcd0(arg1 + 0x2f0, &var_64, arg1 + 0x368, &var_7c, var_b4 + 6, ebx_3 + 0x10, 0x30, 
            ecx_2 - 0x2e, 0, 0x5001000a, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_50_11 u>= 8)
        j__free(var_64.d)
    
    int32_t var_c_12 = 0xffffffff
    var_50_8 = 7
    int32_t var_54_12 = 0
    var_64 = 0
    
    if (var_68_6 u>= 8)
        j__free(var_7c.d)
    
    HWND hWnd_3 = *(arg1 + 0x2f4)
    void* eax_51 = arg1 + 0x2f0
    
    if (hWnd_3 != 0)
        SendMessageW(hWnd_3, 0x406, 1, 0xff0000)
        eax_51 = arg1 + 0x2f0
    
    void* ecx_42 = *(arg1 + 4)
    *(eax_51 + 0x5c) = 4
    var_b8 = eax_51
    *(eax_51 + 0x60) = 0
    sub_530ba0(ecx_42 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x2f4), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_13 = 0xc
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_13.b = 0xd
    
    if (*(arg1 + 0x408) != 0)
        sub_6bfcd0(arg1 + 0x380, &var_7c, arg1 + 0x3f8, &var_64, var_b4 + eax_18, 
            ecx_2 - 0x18 + ebx_3, ecx_4, 0x10, 0, 0x50010003, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_68_6 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_14 = 0xffffffff
    var_68_4 = 7
    int32_t var_6c_7 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x380, &data_b6dea4)
    void* ecx_48 = *(arg1 + 4)
    *(arg1 + 0x3dc) = 1
    var_b8 = arg1 + 0x380
    *(arg1 + 0x3e0) = 0
    sub_530ba0(ecx_48 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x384), 0x30, wParam, 1)
    eax_42 = data_bac510

if (*(eax_42 + 0xbb52) != 0)
    var_b4 += 0x3f
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_15 = 0xe
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_15.b = 0xf
    
    if (*(arg1 + 0x498) != 0)
        sub_6bfcd0(arg1 + 0x410, &var_7c, arg1 + 0x488, &var_64, var_b4, ebx_3, 0x3c, ecx_2, 0, 
            0x50000307, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_68_4 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_16 = 0xffffffff
    int32_t var_68_7 = 7
    int32_t var_6c_8 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x410, &data_b6de44)
    void* ecx_54 = *(arg1 + 4)
    *(arg1 + 0x46c) = 4
    var_b8 = arg1 + 0x410
    *(arg1 + 0x470) = 0
    sub_530ba0(ecx_54 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x414), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_17 = 0x10
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_17.b = 0x11
    
    if (*(arg1 + 0x528) != 0)
        sub_6bfcd0(arg1 + 0x4a0, &var_7c, arg1 + 0x518, &var_64, var_b4 + 6, ebx_3 + 0x10, 0x30, 
            ecx_2 - 0x2e, 0, 0x5001000a, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_68_7 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_18 = 0xffffffff
    int32_t var_68_8 = 7
    int32_t var_6c_9 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    HWND hWnd_4 = *(arg1 + 0x4a4)
    void* eax_64 = arg1 + 0x4a0
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0x406, 1, 0xff0000)
        eax_64 = arg1 + 0x4a0
    
    void* ecx_59 = *(arg1 + 4)
    *(eax_64 + 0x5c) = 4
    var_b8 = eax_64
    *(eax_64 + 0x60) = 0
    sub_530ba0(ecx_59 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x4a4), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_19 = 0x12
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_19.b = 0x13
    
    if (*(arg1 + 0x5b8) != 0)
        sub_6bfcd0(arg1 + 0x530, &var_7c, arg1 + 0x5a8, &var_64, var_b4 + eax_18, 
            ecx_2 - 0x18 + ebx_3, ecx_4, 0x10, 0, 0x50010003, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_68_8 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_20 = 0xffffffff
    var_68_4 = 7
    int32_t var_6c_10 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x530, &data_b6dea4)
    void* ecx_65 = *(arg1 + 4)
    *(arg1 + 0x58c) = 1
    var_b8 = arg1 + 0x530
    *(arg1 + 0x590) = 0
    sub_530ba0(ecx_65 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x534), 0x30, wParam, 1)
    eax_42 = data_bac510

if (*(eax_42 + 0xbb53) != 0)
    var_b4 += 0x3f
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_21 = 0x14
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_21.b = 0x15
    
    if (*(arg1 + 0x648) != 0)
        sub_6bfcd0(arg1 + 0x5c0, &var_7c, arg1 + 0x638, &var_64, var_b4, ebx_3, 0x3c, ecx_2, 0, 
            0x50000307, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_68_4 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_22 = 0xffffffff
    int32_t var_68_9 = 7
    int32_t var_6c_11 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x5c0, &data_b6de5c)
    void* ecx_71 = *(arg1 + 4)
    *(arg1 + 0x61c) = 4
    var_b8 = arg1 + 0x5c0
    *(arg1 + 0x620) = 0
    sub_530ba0(ecx_71 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x5c4), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_23 = 0x16
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_23.b = 0x17
    
    if (*(arg1 + 0x6d8) != 0)
        sub_6bfcd0(arg1 + 0x650, &var_7c, arg1 + 0x6c8, &var_64, var_b4 + 6, ebx_3 + 0x10, 0x30, 
            ecx_2 - 0x2e, 0, 0x5001000a, WS_EX_LEFT, 0, 0, *(arg1 + 8))
    
    if (var_68_9 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_24 = 0xffffffff
    int32_t var_68_10 = 7
    int32_t var_6c_12 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    HWND hWnd_5 = *(arg1 + 0x654)
    void* eax_77 = arg1 + 0x650
    
    if (hWnd_5 != 0)
        SendMessageW(hWnd_5, 0x406, 1, 0xff0000)
        eax_77 = arg1 + 0x650
    
    void* ecx_76 = *(arg1 + 4)
    *(eax_77 + 0x5c) = 4
    var_b8 = eax_77
    *(eax_77 + 0x60) = 0
    sub_530ba0(ecx_76 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x654), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_25 = 0x18
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_25.b = 0x19
    int32_t var_d0_51 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x6e0, &var_7c, &var_64, var_b4 + eax_18, ecx_2 - 0x18 + ebx_3, ecx_4, 0x10, 
        arg1 + 0x6e0, 0x50010003, nullptr)
    
    if (var_68_10 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_26 = 0xffffffff
    var_68_4 = 7
    int32_t var_6c_13 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x6e0, &data_b6dea4)
    void* ecx_82 = *(arg1 + 4)
    *(arg1 + 0x73c) = 1
    var_b8 = arg1 + 0x6e0
    *(arg1 + 0x740) = 0
    sub_530ba0(ecx_82 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x6e4), 0x30, wParam, 1)
    eax_42 = data_bac510

if (*(eax_42 + 0xbb54) != 0)
    var_b4 += 0x3f
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_27 = 0x1a
    enum WINDOW_STYLE ecx_86 = sub_52e820(&var_7c, &data_ad7c90)
    var_c_27.b = 0x1b
    int32_t var_d0_55 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x770, &var_7c, &var_64, var_b4, ebx_3, 0x3c, ecx_2, ecx_86, 0x50000307, 
        nullptr)
    
    if (var_68_4 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_28 = 0xffffffff
    int32_t var_68_11 = 7
    int32_t var_6c_14 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x770, &data_b6de74)
    void* ecx_89 = *(arg1 + 4)
    *(arg1 + 0x7cc) = 4
    var_b8 = arg1 + 0x770
    *(arg1 + 0x7d0) = 0
    sub_530ba0(ecx_89 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x774), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_29 = 0x1c
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_29.b = 0x1d
    int32_t var_d0_59 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x800, &var_7c, &var_64, var_b4 + 6, ebx_3 + 0x10, 0x30, ecx_2 - 0x2e, 
        arg1 + 0x800, 0x5001000a, nullptr)
    
    if (var_68_11 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_30 = 0xffffffff
    int32_t var_68_12 = 7
    int32_t var_6c_15 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    HWND hWnd = *(arg1 + 0x804)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x406, 1, 0xff0000)
    
    void* ecx_94 = *(arg1 + 4)
    *(arg1 + 0x85c) = 4
    var_b8 = arg1 + 0x800
    *(arg1 + 0x860) = 0
    sub_530ba0(ecx_94 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x804), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_31 = 0x1e
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_31.b = 0x1f
    int32_t var_d0_63 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x890, &var_7c, &var_64, var_b4 + eax_18, ecx_2 - 0x18 + ebx_3, ecx_4, 0x10, 
        arg1 + 0x890, 0x50010003, nullptr)
    
    if (var_68_12 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_32 = 0xffffffff
    var_68_4 = 7
    int32_t var_6c_16 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x890, &data_b6dea4)
    void* ecx_100 = *(arg1 + 4)
    *(arg1 + 0x8ec) = 1
    var_b8 = arg1 + 0x890
    *(arg1 + 0x8f0) = 0
    sub_530ba0(ecx_100 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x894), 0x30, wParam, 1)
    eax_42 = data_bac510

if (*(eax_42 + 0xbb55) != 0)
    var_b4 += 0x3f
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_33 = 0x20
    enum WINDOW_STYLE ecx_104 = sub_52e820(&var_7c, &data_ad7c90)
    var_c_33.b = 0x21
    int32_t var_d0_67 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x920, &var_7c, &var_64, var_b4, ebx_3, 0x3c, ecx_2, ecx_104, 0x50000307, 
        nullptr)
    
    if (var_68_4 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_34 = 0xffffffff
    int32_t var_68_13 = 7
    int32_t var_6c_17 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    sub_6c2db0(arg1 + 0x920, &data_b6de8c)
    void* ecx_107 = *(arg1 + 4)
    *(arg1 + 0x97c) = 4
    var_b8 = arg1 + 0x920
    *(arg1 + 0x980) = 0
    sub_530ba0(ecx_107 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x924), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_35 = 0x22
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_35.b = 0x23
    int32_t var_d0_71 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0x9b0, &var_7c, &var_64, var_b4 + 6, ebx_3 + 0x10, 0x30, ecx_2 - 0x2e, 
        arg1 + 0x9b0, 0x5001000a, nullptr)
    
    if (var_68_13 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_c_36 = 0xffffffff
    int32_t var_68_14 = 7
    int32_t var_6c_18 = 0
    var_7c = 0
    
    if (var_50_8 u>= 8)
        j__free(var_64.d)
    
    HWND hWnd_1 = *(arg1 + 0x9b4)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x406, 1, 0xff0000)
    
    void* ecx_112 = *(arg1 + 4)
    *(arg1 + 0xa0c) = 4
    var_b8 = arg1 + 0x9b0
    *(arg1 + 0xa10) = 0
    sub_530ba0(ecx_112 + 0x64, &var_b8)
    SendMessageW(*(arg1 + 0x9b4), 0x30, wParam, 1)
    sub_52e820(&var_64, &data_ad7c90)
    int32_t var_c_37 = 0x24
    sub_52e820(&var_7c, &data_ad7c90)
    var_c_37.b = 0x25
    int32_t var_d0_75 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0xa40, &var_7c, &var_64, var_b4 + eax_18, ecx_2 - 0x18 + ebx_3, ecx_4, 0x10, 
        arg1 + 0xa40, 0x50010003, nullptr)
    
    if (var_68_14 u>= 8)
        j__free(var_7c.d)
    
    int32_t var_68_15 = 7
    int32_t var_6c_19 = 0
    var_7c = 0
    int32_t var_c_38 = 0xffffffff
    sub_52e8a0(&var_64)
    sub_6c2db0(arg1 + 0xa40, &data_b6dea4)
    void* eax_102 = *(arg1 + 4)
    void* var_d0_77 = arg1 + 0xa40
    var_b8 = arg1 + 0xa40
    *(arg1 + 0xa9c) = 1
    sub_6c10b0(arg1 + 0xa40)
    sub_530ba0(eax_102 + 0x64, &var_b8)
    SendMessageW(sub_6c1000(arg1 + 0xa40), 0x30, wParam, 1)

int32_t eax_104 = *(arg1 + 0xc)

if (eax_104 == 0 || eax_104 == 0x6f)
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_64, 
        &data_ad7c90)
    int32_t var_c_41 = 0x26
    enum WINDOW_STYLE ecx_134 =
        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_7c, &data_ad7c90)
    var_c_41.b = 0x27
    int32_t var_d0_82 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0xb60, &var_7c, &var_64, edx_3 - 0x50, var_8c - ebx - 0x18, 0x50, 0x18, 
        ecx_134, 0x50000000, nullptr)
    sub_52e8a0(&var_7c)
    int32_t var_c_42 = 0xffffffff
    sub_52e8a0(&var_64)
    void** eax_110 = &data_b6dba4
    
    if (*(arg1 + 0x12) == 0)
        eax_110 = &data_b6dbbc
    
    int32_t var_d0_84 = sub_6c2db0(arg1 + 0xb60, eax_110)
    sub_6c4460(*(arg1 + 4), arg1 + 0xb60, 3)
    SendMessageW(sub_6c1000(arg1 + 0xb60), 0x30, wParam, 1)
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_64, 
        &data_ad7c90)
    int32_t var_c_43 = 0x28
    enum WINDOW_STYLE ecx_144 =
        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_7c, &data_ad7c90)
    var_c_43.b = 0x29
    int32_t var_d0_85 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0xad0, &var_7c, &var_64, var_84, var_88, 0x66, 0x18, ecx_144, 0x50000000, 
        nullptr)
    sub_52e8a0(&var_7c)
    int32_t var_c_44 = 0xffffffff
    sub_52e8a0(&var_64)
    int32_t var_d0_86 = sub_6c2db0(arg1 + 0xad0, &data_b6dbd4)
    sub_6c4460(*(arg1 + 4), arg1 + 0xad0, 3)
    int32_t var_d0_87 = 1
    int32_t var_d8_5 = 0x30
    SendMessageW(sub_6c1000(arg1 + 0xad0), 0x30, wParam, 1)
else if (eax_104 == 1 || eax_104 == 0x6e)
    void var_34
    <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(&var_34, 
        &data_ad7c90)
    int32_t var_c_39 = 0x2a
    void var_4c
    enum WINDOW_STYLE ecx_124 =
        <lambda_10dfc4c799aff24d2608c390bae55ac6>::<lambda_10dfc4c799aff24d2608c390bae55ac6>(
        &var_4c, &data_ad7c90)
    var_c_39.b = 0x2b
    int32_t var_d0_79 = *(arg1 + 8)
    sub_6c2d70(arg1 + 0xad0, &var_4c, &var_34, var_ac + var_84, var_88 + ebx_3, 0x66, 0x18, 
        ecx_124, 0x50000000, nullptr)
    sub_52e8a0(&var_4c)
    int32_t var_c_40 = 0xffffffff
    sub_52e8a0(&var_34)
    int32_t var_d0_80 = sub_6c2db0(arg1 + 0xad0, &data_b6dbd4)
    sub_6c4460(*(arg1 + 4), arg1 + 0xad0, 1)
    int32_t var_d0_81 = 1
    int32_t var_d8_2 = 0x30
    SendMessageW(sub_6c1000(arg1 + 0xad0), 0x30, wParam, 1)

BOOL result = sub_530dd0(arg1, var_90, var_8c)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_bc)
return result
