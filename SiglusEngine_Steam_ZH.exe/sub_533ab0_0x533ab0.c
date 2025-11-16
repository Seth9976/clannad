// 函数: sub_533ab0
// 地址: 0x533ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b0010
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_a8
int32_t eax_2 = __security_cookie ^ &var_a8
int32_t __saved_edi
int32_t var_b4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg1
int32_t var_8c = esi
int32_t eax_5 = *(esi + 0xc)
char var_9d_1

if (eax_5 != 1 && eax_5 != 0x78)
    var_9d_1 = 0

if (eax_5 == 1 || eax_5 == 0x78 || eax_5 == 0x79)
    var_9d_1 = 1

char var_9e_1

if (eax_5 != 0x78)
    var_9e_1 = 0

if (eax_5 == 0x78 || eax_5 == 0x79)
    var_9e_1 = 1

if (eax_5 == 0)
    sub_6c1b50(*(esi + 4), &data_b674b4)

HGDIOBJ wParam = GetStockObject(DEFAULT_GUI_FONT)
int32_t ecx_1 = *(esi + 0xc)
int32_t var_94
int32_t var_84
int32_t var_6c
char edx

if (ecx_1 == 0 || ecx_1 == 0x79)
    var_6c = 0x24
label_533b75:
    edx = var_9e_1
    int32_t eax_6 = 0
    var_94 = 0xc
    
    if (edx != 0)
        eax_6 = 0xa6
    
    var_84 = eax_6 + 0xc
else
    if (ecx_1 == 1 || ecx_1 == 0x78)
        var_6c = 0xc
        goto label_533b75
    
    edx = var_9e_1

int32_t edi = 0x120

if (ecx_1 == 0)
    edi = 0x180

int32_t eax_8 = 0
int32_t var_90 = edi

if (edx != 0)
    eax_8 = 0xa6

int32_t eax_9 = eax_8 + edi
int32_t eax_11 = 0

if (var_9d_1 != 0)
    eax_11 = 0x18

int32_t cx = edi - eax_11
int32_t eax_12 = 0

if (var_9d_1 != 0)
    eax_12 = 0x1e

int32_t var_7c = var_84
int32_t var_78 = var_94
int32_t i_3
int16_t rect
int16_t var_3c

if (var_9d_1 != 0)
    int32_t var_28_1 = 7
    int32_t var_2c_1 = 0
    var_3c = 0
    sub_52e720(&var_3c, &data_ad7c90, nullptr)
    int32_t var_14_1 = 0
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    rect = 0
    sub_52e720(&rect, &data_ad7c90, nullptr)
    var_14_1.b = 1
    
    if (*(esi + 0xa4) != 0)
        sub_6bfcd0(esi + 0x1c, &rect, esi + 0x94, &var_3c, var_84, var_94, 0, 0, 0, 0x50000007, 
            WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_4c_1 u>= 8)
        j__free(rect.d)
    
    int32_t var_14_2 = 0xffffffff
    int32_t var_4c_2 = 7
    int32_t var_50_2 = 0
    rect = 0
    
    if (var_28_1 u>= 8)
        j__free(var_3c.d)
    
    sub_6c2db0(esi + 0x1c, &data_b674cc)
    void* ecx_7 = *(esi + 4)
    *(esi + 0x78) = 5
    i_3 = esi + 0x1c
    *(esi + 0x7c) = 0
    sub_530ba0(ecx_7 + 0x64, &i_3)
    SendMessageW(*(esi + 0x20), 0x30, wParam, 1)
    var_7c = var_84 + 0xc
    var_78 = var_94 + 0x16

int32_t var_28_2 = 7
int32_t var_2c_2 = 0
var_3c = 0
sub_52e720(&var_3c, &data_ad7c90, nullptr)
int32_t var_14_3 = 2
int32_t var_4c_3 = 7
int32_t var_50_3 = 0
rect = 0
sub_52e720(&rect, &data_ad7c90, nullptr)
var_14_3.b = 3

if (*(esi + 0x134) != 0)
    sub_6bfcd0(esi + 0xac, &rect, esi + 0x124, &var_3c, var_7c, var_78, cx, 0xa0 - eax_12, 0, 
        0x50001000, WS_EX_LEFT, 0, 0, *(esi + 8))

if (var_4c_3 u>= 8)
    j__free(rect.d)

int32_t var_14_4 = 0xffffffff
int32_t var_4c_4 = 7
int32_t var_50_4 = 0
rect = 0

if (var_28_2 u>= 8)
    j__free(var_3c.d)

void* ecx_12 = *(esi + 4)
*(esi + 0x108) = 5
i_3 = esi + 0xac
*(esi + 0x10c) = 0
sub_530ba0(ecx_12 + 0x64, &i_3)
SendMessageW(*(esi + 0xb0), 0x30, wParam, 1)
int32_t var_28_3 = 7
int32_t var_2c_3 = 0
var_3c = 0
sub_52e720(&var_3c, &data_ad7c90, nullptr)
int32_t var_14_5 = 4
int32_t var_4c_5 = 7
int32_t var_50_5 = 0
rect = 0
sub_52e720(&rect, &data_ad7c90, nullptr)
var_14_5.b = 5

if (*(esi + 0x1c8) != 0)
    sub_6bfcd0(esi + 0x140, &rect, esi + 0x1b8, &var_3c, cx - 0x13 + var_7c, var_78 + 1, 0x12, 
        0xa0 - eax_12 - 2, 0, 0x50000001, WS_EX_LEFT, 0, 0, *(esi + 8))

if (var_4c_5 u>= 8)
    j__free(rect.d)

int32_t var_14_6 = 0xffffffff
int32_t var_4c_6 = 7
int32_t var_50_6 = 0
rect = 0

if (var_28_3 u>= 8)
    j__free(var_3c.d)

void* ecx_17 = *(esi + 4)
*(esi + 0x19c) = 6
i_3 = esi + 0x140
*(esi + 0x1a0) = 0
sub_530ba0(ecx_17 + 0x64, &i_3)
SendMessageW(*(esi + 0x144), 0x30, wParam, 1)
int32_t* eax_31 = data_bac4ec
*(esi + 0x13c) = esi
*(esi + 0x414) = 0xfffffc19
*(esi + 0x418) = 0xfffffc19
*(esi + 0x410) = 0
int32_t edi_2 = *eax_31
int32_t edx_2 = eax_31[1]

if (edi_2 != edx_2)
    int32_t i_5 = edx_2 - edi_2
    i_3 = i_5
    int32_t i = 0
    int32_t eax_32
    int32_t edx_3
    edx_3:eax_32 = muls.dp.d(0x92492493, i_5)
    int32_t edx_5 = (edx_3 + i_3) s>> 4
    
    if ((edx_5 u>> 0x1f) + edx_5 s> 0)
        int32_t eax_36 = 0
        int32_t edi_3 = edi_2
        int32_t* eax_38
        
        do
            if (*(edi_3 + eax_36 + 0x10) != 0)
                *(esi + 0x410) += 1
            
            eax_38 = data_bac4ec
            i_3 = i + 1
            edi_3 = *eax_38
            i = i_3
            eax_36 += 0x1c
        while (i s< (eax_38[1] - edi_3) s/ 0x1c)

int32_t eax_43 = *(esi + 0x410)
void* edi_6

if (eax_43 s<= 0)
    HWND hWnd_6 = *(esi + 0x144)
    edi_6 = esi + 0x140
    
    if (hWnd_6 != 0 && (GetWindowLongW(hWnd_6, 0xfffffff0) & 0x10000000) s> 0)
        ShowWindow(*(edi_6 + 4), SW_HIDE)
else
    sub_535920(esi + 0x420, eax_43)
    int32_t* eax_44 = data_bac4ec
    int32_t i_4 = 0
    int32_t i_6 = *eax_44
    int32_t ecx_24 = eax_44[1] - i_6
    i_3 = i_6
    
    if (ecx_24 s/ 0x1c s> 0)
        int32_t* esi_1 = nullptr
        int32_t edx_12 = 0
        int32_t i_1 = 0
        int32_t ecx_26
        
        do
            if (*(i_3 + edx_12 + 0x10) != 0)
                *(esi_1 + *(esi + 0x420)) = i_1
                esi_1 = &esi_1[0x4b]
            
            int32_t* eax_51 = data_bac4ec
            i_4 += 1
            int32_t i_7 = *eax_51
            ecx_26 = eax_51[1] - i_7
            i_3 = i_7
            i_1 = i_4
            edx_12 += 0x1c
        while (i_1 s< ecx_26 s/ 0x1c)
        esi = var_8c
    
    bool cond:7_1 = *(esi + 0x410) s<= 0
    *(esi + 0x41c) = 0
    i_3 = 0
    
    if (not(cond:7_1))
        int32_t* edi_5 = nullptr
        int32_t i_2
        
        do
            int32_t var_28_4 = 7
            int32_t var_2c_4 = 0
            var_8c = *data_bac4ec + *(edi_5 + *(esi + 0x420)) * 0x1c
            var_3c = 0
            sub_52e720(&var_3c, &data_ad7c90, nullptr)
            int32_t var_14_7 = 6
            int32_t var_4c_7 = 7
            int32_t var_50_7 = 0
            rect = 0
            sub_52e720(&rect, &data_ad7c90, nullptr)
            var_14_7.b = 7
            void* ecx_33 = *(esi + 0x420) + 4 + edi_5
            
            if (*(ecx_33 + 0x88) != 0)
                sub_6bfcd0(ecx_33, &rect, ecx_33 + 0x78, &var_3c, 0, 0, 0xa, 0xa, 0, 0x50030023, 
                    WS_EX_RIGHT, 0, 0, *(esi + 0xb0))
            
            if (var_4c_7 u>= 8)
                j__free(rect.d)
            
            int32_t var_14_8 = 0xffffffff
            int32_t var_4c_8 = 7
            int32_t var_50_8 = 0
            rect = 0
            
            if (var_28_4 u>= 8)
                j__free(var_3c.d)
            
            SendMessageW(*(edi_5 + *(esi + 0x420) + 8), 0x30, wParam, 1)
            int32_t eax_63 = var_8c
            
            if (*(eax_63 + 0x18) == 0)
                eax_63 = data_bac510 + 0x103f4
            
            sub_6c2db0(*(esi + 0x420) + 4 + edi_5, eax_63)
            *(edi_5 + *(esi + 0x420) + 0x94) = esi
            void* ecx_38 = *(esi + 0x420) + edi_5
            void* var_b8_18 = ecx_38
            int32_t eax_66 = sub_6c3030(ecx_38 + 4, 0x14)
            
            if (*(esi + 0x41c) s< eax_66)
                *(esi + 0x41c) = eax_66
            
            int32_t var_28_5 = 7
            int32_t var_2c_5 = 0
            var_3c = 0
            sub_52e720(&var_3c, &data_ad7c90, nullptr)
            int32_t var_14_9 = 8
            int32_t var_4c_9 = 7
            int32_t var_50_9 = 0
            rect = 0
            sub_52e720(&rect, &data_ad7c90, nullptr)
            var_14_9.b = 9
            void* ecx_44 = *(esi + 0x420) + 0x98 + edi_5
            
            if (*(ecx_44 + 0x88) != 0)
                sub_6bfcd0(ecx_44, &rect, ecx_44 + 0x78, &var_3c, 0, 0, 0xa, 0x1a, 0, 0x50030018, 
                    WS_EX_LEFT, 0, 0, *(esi + 0xb0))
            
            if (var_4c_9 u>= 8)
                j__free(rect.d)
            
            int32_t var_14_10 = 0xffffffff
            var_4c_6 = 7
            int32_t var_50_10 = 0
            rect = 0
            
            if (var_28_5 u>= 8)
                j__free(var_3c.d)
            
            var_28_3 = 7
            var_3c = 0
            int32_t var_2c_6 = 0
            *(edi_5 + *(esi + 0x420) + 0x128) = esi
            HWND hWnd_2 = *(edi_5 + *(esi + 0x420) + 0x9c)
            
            if (hWnd_2 != 0)
                SendMessageW(hWnd_2, 0x406, 1, 0xff0000)
            
            edi_5 = &edi_5[0x4b]
            i_2 = i_3 + 1
            i_3 = i_2
        while (i_2 s< *(esi + 0x410))
    
    edi_6 = esi + 0x140

sub_5355b0(esi)
HWND hWnd_3 = *(edi_6 + 4)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0xe0, 0, 1)

int32_t ecx_82

if (var_9d_1 == 0)
    sub_6c1650(esi + 0xac, cx, 0xa0 - eax_12)
    sub_6c1650(edi_6, 0x12, 0xa0 - eax_12 - 2)
    sub_52e820(&rect, &data_ad7c90)
    int32_t var_14_17 = 0x10
    sub_52e820(&var_3c, &data_ad7c90)
    var_14_17.b = 0x11
    
    if (*(esi + 0x408) != 0)
        sub_6bfcd0(esi + 0x380, &var_3c, esi + 0x3f8, &rect, var_84 + eax_9 - 0x50, var_94 + 0xac, 
            0x50, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_3 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_18 = 0xffffffff
    int32_t var_28_10 = 7
    int32_t var_2c_11 = 0
    var_3c = 0
    
    if (var_4c_6 u>= 8)
        j__free(rect.d)
    
    void** eax_94 = &data_b66ee4
    
    if (*(esi + 0x12) == 0)
        eax_94 = &data_b66efc
    
    sub_6c2db0(esi + 0x380, eax_94)
    void* ecx_91 = *(esi + 4)
    *(esi + 0x3dc) = 3
    var_90 = esi + 0x380
    *(esi + 0x3e0) = 0
    sub_530ba0(ecx_91 + 0x64, &var_90)
    SendMessageW(*(esi + 0x384), 0x30, wParam, 1)
    sub_52e820(&rect, &data_ad7c90)
    int32_t var_14_19 = 0x12
    sub_52e820(&var_3c, &data_ad7c90)
    var_14_19.b = 0x13
    
    if (*(esi + 0x378) != 0)
        sub_6bfcd0(esi + 0x2f0, &var_3c, esi + 0x368, &rect, var_84 + eax_9 - 0xbc, var_94 + 0xac, 
            0x66, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_10 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_20 = 0xffffffff
    int32_t var_28_11 = 7
    int32_t var_2c_12 = 0
    var_3c = 0
    
    if (var_4c_6 u>= 8)
        j__free(rect.d)
    
    sub_6c2db0(esi + 0x2f0, &data_b66f14)
    void* ecx_99 = *(esi + 4)
    *(esi + 0x34c) = 3
    var_90 = esi + 0x2f0
    *(esi + 0x350) = 0
    sub_530ba0(ecx_99 + 0x64, &var_90)
    SendMessageW(*(esi + 0x2f4), 0x30, wParam, 1)
    sub_52e820(&rect, &data_ad7c90)
    int32_t var_14_21 = 0x14
    sub_52e820(&var_3c, &data_ad7c90)
    var_14_21.b = 0x15
    
    if (*(esi + 0x2e8) != 0)
        sub_6bfcd0(esi + 0x260, &var_3c, esi + 0x2d8, &rect, var_84 + eax_9 - 0x10a, var_94 + 0xac, 
            0x48, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_11 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_22 = 0xffffffff
    int32_t var_28_12 = 7
    int32_t var_2c_13 = 0
    var_3c = 0
    
    if (var_4c_6 u>= 8)
        j__free(rect.d)
    
    sub_6c2db0(esi + 0x260, &data_b674fc)
    void* ecx_107 = *(esi + 4)
    *(esi + 0x2bc) = 3
    var_90 = esi + 0x260
    *(esi + 0x2c0) = 0
    sub_530ba0(ecx_107 + 0x64, &var_90)
    SendMessageW(*(esi + 0x264), 0x30, wParam, 1)
    sub_52e820(&rect, &data_ad7c90)
    int32_t var_14_23 = 0x16
    sub_52e820(&var_3c, &data_ad7c90)
    var_14_23.b = 0x17
    
    if (*(esi + 0x258) != 0)
        sub_6bfcd0(esi + 0x1d0, &var_3c, esi + 0x248, &rect, var_84 + eax_9 - 0x158, var_94 + 0xac, 
            0x48, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_12 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_24 = 0xffffffff
    int32_t var_28_13 = 7
    int32_t var_2c_14 = 0
    var_3c = 0
    
    if (var_4c_6 u>= 8)
        j__free(rect.d)
    
    sub_6c2db0(esi + 0x1d0, &data_b674e4)
    void* ecx_115 = *(esi + 4)
    *(esi + 0x22c) = 3
    var_90 = esi + 0x1d0
    *(esi + 0x230) = 0
    sub_530ba0(ecx_115 + 0x64, &var_90)
    SendMessageW(*(esi + 0x1d4), 0x30, wParam, 1)
    ecx_82 = var_6c + 0x18 + var_94 + 0xac
else
    HWND hWnd_4 = *(esi + 0xb0)
    
    if (hWnd_4 != 0)
        SetWindowPos(hWnd_4, nullptr, 0, 0, cx, 0xa0 - eax_12 - 0x1e, 0x16)
    
    rect.o = zx.o(0)
    GetWindowRect(*(esi + 0xb0), &rect)
    HWND hWnd = *(esi + 0xb0)
    *(esi + 0xd4) = rect.o
    rect.o = zx.o(0)
    GetClientRect(hWnd, &rect)
    *(esi + 0xe4) = rect.o
    sub_6c1460(esi + 0xac)
    HWND hWnd_5 = *(esi + 0x144)
    
    if (hWnd_5 != 0)
        SetWindowPos(hWnd_5, nullptr, 0, 0, 0x12, 0xa0 - eax_12 - 0x1e, 0x16)
    
    rect.o = zx.o(0)
    GetWindowRect(*(esi + 0x144), &rect)
    HWND hWnd_1 = *(esi + 0x144)
    *(esi + 0x168) = rect.o
    rect.o = zx.o(0)
    GetClientRect(hWnd_1, &rect)
    *(esi + 0x178) = rect.o
    sub_6c1460(esi + 0x140)
    int32_t var_4c_10 = 7
    int32_t var_50_11 = 0
    rect = 0
    sub_52e720(&rect, &data_ad7c90, nullptr)
    int32_t var_14_11 = 0xa
    int32_t var_28_6 = 7
    int32_t var_2c_7 = 0
    var_3c = 0
    sub_52e720(&var_3c, &data_ad7c90, nullptr)
    var_14_11.b = 0xb
    
    if (*(esi + 0x378) != 0)
        sub_6bfcd0(esi + 0x2f0, &var_3c, esi + 0x368, &rect, cx + var_7c - 0x66, 
            0xa0 - eax_12 + var_78 - 0x18, 0x66, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_6 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_12 = 0xffffffff
    int32_t var_28_7 = 7
    int32_t var_2c_8 = 0
    var_3c = 0
    
    if (var_4c_10 u>= 8)
        j__free(rect.d)
    
    sub_6c2db0(esi + 0x2f0, &data_b66f14)
    void* ecx_57 = *(esi + 4)
    *(esi + 0x34c) = 3
    var_8c = esi + 0x2f0
    *(esi + 0x350) = 0
    sub_530ba0(ecx_57 + 0x64, &var_8c)
    SendMessageW(*(esi + 0x2f4), 0x30, wParam, 1)
    sub_52e820(&rect, &data_ad7c90)
    int32_t var_14_13 = 0xc
    sub_52e820(&var_3c, &data_ad7c90)
    var_14_13.b = 0xd
    
    if (*(esi + 0x2e8) != 0)
        sub_6bfcd0(esi + 0x260, &var_3c, esi + 0x2d8, &rect, cx + var_7c - 0xb4, 
            0xa0 - eax_12 + var_78 - 0x18, 0x48, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_7 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_14 = 0xffffffff
    int32_t var_28_8 = 7
    int32_t var_2c_9 = 0
    var_3c = 0
    
    if (var_4c_10 u>= 8)
        j__free(rect.d)
    
    sub_6c2db0(esi + 0x260, &data_b674fc)
    void* ecx_67 = *(esi + 4)
    *(esi + 0x2bc) = 3
    var_8c = esi + 0x260
    *(esi + 0x2c0) = 0
    sub_530ba0(ecx_67 + 0x64, &var_8c)
    SendMessageW(*(esi + 0x264), 0x30, wParam, 1)
    sub_52e820(&rect, &data_ad7c90)
    int32_t var_14_15 = 0xe
    sub_52e820(&var_3c, &data_ad7c90)
    var_14_15.b = 0xf
    
    if (*(esi + 0x258) != 0)
        sub_6bfcd0(esi + 0x1d0, &var_3c, esi + 0x248, &rect, cx + var_7c - 0x102, 
            0xa0 - eax_12 + var_78 - 0x18, 0x48, 0x18, 0, 0x50000000, WS_EX_LEFT, 0, 0, *(esi + 8))
    
    if (var_28_8 u>= 8)
        j__free(var_3c.d)
    
    int32_t var_14_16 = 0xffffffff
    int32_t var_28_9 = 7
    int32_t var_2c_10 = 0
    var_3c = 0
    
    if (var_4c_10 u>= 8)
        j__free(rect.d)
    
    sub_6c2db0(esi + 0x1d0, &data_b674e4)
    void* ecx_77 = *(esi + 4)
    *(esi + 0x22c) = 3
    var_8c = esi + 0x1d0
    *(esi + 0x230) = 0
    sub_530ba0(ecx_77 + 0x64, &var_8c)
    SendMessageW(*(esi + 0x1d4), 0x30, wParam, 1)
    sub_6c1650(esi + 0x1c, var_90, 0xa0)
    ecx_82 = var_94 + 0xa0 + var_6c

BOOL result = *(esi + 0xc)

if (result == 1 || result == 0)
    result = sub_530dd0(esi, eax_9 + 0x18, ecx_82)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_a8)
return result
