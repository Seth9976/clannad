// 函数: sub_541ff0
// 地址: 0x541ff0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0d79
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t hDlg_7
int32_t eax_2 = __security_cookie ^ &hDlg_7
int32_t __saved_edi
int32_t var_12c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_104 = edi
int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, &data_ad7c90, nullptr)
int32_t var_c_1 = 0
void* eax_5 = *(edi + 4)
int32_t hDlg_4 = *(eax_5 + 4)
hDlg_7 = hDlg_4

if (edi + 0x24 != &var_7c)
    sub_52e3c0(edi + 0x24, &var_7c, 0, 0xffffffff)
    hDlg_4 = hDlg_7

*(edi + 0x78) = 5
*(edi + 0x7c) = 0
HWND eax_6 = GetDlgItem(hDlg_4, 0x45c)
*(edi + 0x20) = eax_6
sub_6c0100(edi + 0x1c, eax_6)
hDlg_7 = edi + 0x1c
sub_530ba0(eax_5 + 0x64, &hDlg_7)
int32_t var_c_2 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, &data_ad7c90, nullptr)
int32_t var_c_3 = 1
void* eax_7 = *(edi + 4)
int32_t hDlg_5 = *(eax_7 + 4)
hDlg_7 = hDlg_5

if (edi + 0x5c4 != &var_4c)
    sub_52e3c0(edi + 0x5c4, &var_4c, 0, 0xffffffff)
    hDlg_5 = hDlg_7

*(edi + 0x618) = 2
*(edi + 0x61c) = 0
HWND eax_8 = GetDlgItem(hDlg_5, 0x45d)
*(edi + 0x5c0) = eax_8
sub_6c0100(edi + 0x5bc, eax_8)
hDlg_7 = edi + 0x5bc
sub_530ba0(eax_7 + 0x64, &hDlg_7)
int32_t var_c_4 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, &data_ad7c90, nullptr)
int32_t var_c_5 = 2
void* eax_9 = *(edi + 4)
int32_t hDlg_6 = *(eax_9 + 4)
hDlg_7 = hDlg_6

if (edi + 0xb4 != &var_c4)
    sub_52e3c0(edi + 0xb4, &var_c4, 0, 0xffffffff)
    hDlg_6 = hDlg_7

*(edi + 0x108) = 7
*(edi + 0x10c) = 0
HWND eax_10 = GetDlgItem(hDlg_6, 0x42b)
*(edi + 0xb0) = eax_10
sub_6c0100(edi + 0xac, eax_10)
hDlg_7 = edi + 0xac
sub_530ba0(eax_9 + 0x64, &hDlg_7)
int32_t var_c_6 = 0xffffffff

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, &data_ad7c90, nullptr)
int32_t var_c_7 = 3
void* eax_12 = edi + 0x13c
void* ecx_16 = *(edi + 4)
hDlg_7 = *(ecx_16 + 4)

if (eax_12 + 8 != &var_ac)
    sub_52e3c0(eax_12 + 8, &var_ac, 0, 0xffffffff)
    eax_12 = edi + 0x13c

int32_t hDlg = hDlg_7
*(eax_12 + 0x5c) = 7
*(eax_12 + 0x60) = 0
HWND eax_13 = GetDlgItem(hDlg, 0x428)
*(edi + 0x140) = eax_13
sub_6c0100(edi + 0x13c, eax_13)
hDlg_7 = edi + 0x13c
sub_530ba0(ecx_16 + 0x64, &hDlg_7)
int32_t var_c_8 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, &data_ad7c90, nullptr)
int32_t var_c_9 = 4
void* eax_15 = edi + 0x1cc
void* ecx_23 = *(edi + 4)
hDlg_7 = *(ecx_23 + 4)

if (eax_15 + 8 != &var_94)
    sub_52e3c0(eax_15 + 8, &var_94, 0, 0xffffffff)
    eax_15 = edi + 0x1cc

int32_t hDlg_1 = hDlg_7
*(eax_15 + 0x5c) = 7
*(eax_15 + 0x60) = 0
HWND eax_16 = GetDlgItem(hDlg_1, 0x42a)
*(edi + 0x1d0) = eax_16
sub_6c0100(edi + 0x1cc, eax_16)
hDlg_7 = edi + 0x1cc
sub_530ba0(ecx_23 + 0x64, &hDlg_7)
int32_t var_c_10 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, &data_ad7c90, nullptr)
int32_t var_c_11 = 5
void* eax_18 = edi + 0x25c
void* ecx_30 = *(edi + 4)
hDlg_7 = *(ecx_30 + 4)

if (eax_18 + 8 != &var_64)
    sub_52e3c0(eax_18 + 8, &var_64, 0, 0xffffffff)
    eax_18 = edi + 0x25c

int32_t hDlg_2 = hDlg_7
*(eax_18 + 0x5c) = 7
*(eax_18 + 0x60) = 0
HWND eax_19 = GetDlgItem(hDlg_2, 0x427)
*(edi + 0x260) = eax_19
sub_6c0100(edi + 0x25c, eax_19)
hDlg_7 = edi + 0x25c
sub_530ba0(ecx_30 + 0x64, &hDlg_7)
int32_t var_c_12 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, &data_ad7c90, nullptr)
int32_t var_c_13 = 6
void* eax_21 = edi + 0x2ec
void* ecx_37 = *(edi + 4)
hDlg_7 = *(ecx_37 + 4)

if (eax_21 + 8 != &var_34)
    sub_52e3c0(eax_21 + 8, &var_34, 0, 0xffffffff)
    eax_21 = edi + 0x2ec

int32_t hDlg_3 = hDlg_7
*(eax_21 + 0x5c) = 7
*(eax_21 + 0x60) = 0
HWND eax_22 = GetDlgItem(hDlg_3, 0x42c)
*(edi + 0x2f0) = eax_22
sub_6c0100(edi + 0x2ec, eax_22)
hDlg_7 = edi + 0x2ec
sub_530ba0(ecx_37 + 0x64, &hDlg_7)
int32_t var_c_14 = 0xffffffff

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_dc
sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_15 = 7
sub_6c4400(*(edi + 4), edi + 0x37c, 0x426, &var_dc, 7, 0)
int32_t var_c_16 = 0xffffffff
int32_t var_c8

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_17 = 8
sub_6c4400(*(edi + 4), edi + 0x40c, 0x429, &var_dc, 7, 0)
int32_t var_c_18 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_19 = 9
sub_6c4400(*(edi + 4), edi + 0x49c, 0x42d, &var_dc, 7, 0)
int32_t var_c_20 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_21 = 0xa
sub_6c4400(*(edi + 4), edi + 0x52c, 0x40f, &var_dc, 3, 0)
int32_t var_c_22 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_23 = 0xb
sub_6c4400(*(edi + 4), edi + 0x64c, 0x490, &var_dc, 1, 0)
int32_t var_c_24 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_25 = 0xc
sub_6c4400(*(edi + 4), edi + 0x6dc, 0x491, &var_dc, 1, 0)
int32_t var_c_26 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, &data_ad7c90)
int32_t var_c_27 = 0xd
sub_6c4400(*(edi + 4), edi + 0x76c, 0x40e, &var_dc, 3, 0)
int32_t var_c_28 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

int32_t var_c8_1 = 7
var_dc.w = 0
int32_t var_cc = 0
sub_6c2db0(edi + 0xac, data_bac510 + 0x108a8)
sub_6c30e0(edi + 0xac)
sub_6c2db0(edi + 0x13c, data_bac510 + 0x108c4)
sub_6c30e0(edi + 0x13c)
sub_6c2db0(edi + 0x1cc, data_bac510 + 0x108e0)
sub_6c30e0(edi + 0x1cc)
sub_6c2db0(edi + 0x25c, data_bac510 + 0x108fc)
sub_6c30e0(edi + 0x25c)
sub_6c2db0(edi + 0x2ec, data_bac510 + 0x10918)
sub_6c30e0(edi + 0x2ec)
sub_6c2db0(edi + 0x37c, data_bac510 + 0x10934)
sub_6c30e0(edi + 0x37c)
sub_6c2db0(edi + 0x40c, data_bac510 + 0x10950)
sub_6c30e0(edi + 0x40c)
sub_6c2db0(edi + 0x49c, data_bac510 + 0x1096c)
int32_t ecx_73 = sub_6c30e0(edi + 0x49c)
char* var_114 = nullptr
int32_t var_110 = 0
int32_t var_10c = 0
int32_t var_130_36 = ecx_73
int32_t var_c_29 = 0xe
sub_543540(&var_114)
void* ecx_75 = data_bac510
char* edx = var_114
*edx = *(ecx_75 + 0x108a4)
edx[0x18] = *(ecx_75 + 0x108c0)
void** hDlg_8 = &edx[4]
edx[0x30] = *(ecx_75 + 0x108dc)
edx[0x48] = *(ecx_75 + 0x108f8)
edx[0x60] = *(ecx_75 + 0x10914)
edx[0x78] = *(ecx_75 + 0x10930)
edx[0x90] = *(ecx_75 + 0x1094c)
edx[0xa8] = *(ecx_75 + 0x10968)
*hDlg_8 = edi + 0xac
*(edx + 0x1c) = edi + 0x13c
int32_t ecx_76 = var_110
*(edx + 0x34) = edi + 0x1cc
*(edx + 0x4c) = edi + 0x25c
*(edx + 0x64) = edi + 0x2ec
*(edx + 0x7c) = edi + 0x37c
*(edx + 0x94) = edi + 0x40c
*(edx + 0xac) = edi + 0x49c
bool cond:0 = *(edi + 0x11) == 0
hDlg_7 = hDlg_8

if (not(cond:0))
    int32_t i_2 = (ecx_76 - edx) s/ 0x18
    edx = var_114
    
    if (i_2 s> 0)
        int32_t i
        
        do
            *edx = 1
            edx = &edx[0x18]
            i = i_2
            i_2 -= 1
        while (i != 1)
        edx = var_114
    
    ecx_76 = var_110

int32_t i_4 = (ecx_76 - edx) s/ 0x18
int32_t var_fc[0x4]

if (i_4 s> 0)
    int32_t i_3 = i_4
    void* edi_2 = &var_114[8]
    int32_t i_1
    
    do
        int32_t* eax_64 = sub_6c1350(*(edi_2 - 4), &var_fc)
        edi_2 += 0x18
        *(edi_2 - 0x18) = *eax_64
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    hDlg_8 = hDlg_7
    edi = var_104

int32_t ecx_84 = 0
int32_t var_118 = 0
int32_t var_11c_7 = 0
hDlg_7 = *(var_114 + 0xc)
int128_t rect

if (i_4 s> 0)
    int32_t i_5 = i_4
    int32_t eax_77
    
    do
        if (hDlg_8[-1].b == 0)
            void* eax_70 = *hDlg_8
            HWND hWnd_1 = *(eax_70 + 4)
            
            if (hWnd_1 != 0)
                if ((GetWindowLongW(hWnd_1, 0xfffffff0) & 0x10000000) s> 0)
                    ShowWindow(*(eax_70 + 4), SW_HIDE)
                
                ecx_84 = var_118
            
            int32_t eax_74
            
            if (var_11c_7 s>= i_5 - 1)
                eax_74 = hDlg_8[4]
            else
                eax_74 = hDlg_8[8]
            
            ecx_84 += eax_74 - hDlg_8[2]
            var_118 = ecx_84
        else
            void* edi_3 = *hDlg_8
            sub_6c1350(edi_3, &rect)
            sub_6c16e0(edi_3, rect.d, rect:4.d - var_118)
            ecx_84 = var_118
            i_5 = i_4
            hDlg_7 = sub_6c1350(*hDlg_8, &var_dc)[3]
        
        hDlg_8 = &hDlg_8[6]
        eax_77 = var_11c_7 + 1
        var_11c_7 = eax_77
    while (eax_77 s< i_5)
    edi = var_104

if (*(edi + 0xc) == 0)
    HWND hWnd = *(edi + 0x20)
    rect = zx.o(0)
    GetWindowRect(hWnd, &rect)
    sub_6c1650(edi + 0x1c, rect:8.d - rect.d, rect:0xc.d - rect:4.d - var_118)
    sub_6c1350(edi + 0x52c, &rect)
    sub_6c16e0(edi + 0x52c, rect.d, rect:4.d - var_118)
    sub_6c1350(edi + 0x76c, &rect)
    sub_6c16e0(edi + 0x76c, rect.d, rect:4.d - var_118)
    sub_6c1350(edi + 0x5bc, &rect)
    sub_6c16e0(edi + 0x5bc, rect.d, rect:4.d - var_118)
    sub_6c1350(edi + 0x64c, &rect)
    sub_6c16e0(edi + 0x64c, rect.d, rect:4.d - var_118)
    sub_6c1350(edi + 0x6dc, &rect)
    sub_6c16e0(edi + 0x6dc, rect.d, rect:4.d - var_118)
    void* esi_4 = *(edi + 4)
    rect = zx.o(0)
    GetWindowRect(*(esi_4 + 4), &rect)
    sub_6c1650(esi_4, rect:8.d - rect.d, rect:0xc.d - rect:4.d - var_118)
    sub_6c1c00(*(edi + 4))

if (*(data_bac510 + 0xbb55) == 0 && *(edi + 0x11) == 0)
    HWND hWnd_2 = *(edi + 0x5c0)
    
    if (hWnd_2 != 0 && (GetWindowLongW(hWnd_2, 0xfffffff0) & 0x10000000) s> 0)
        ShowWindow(*(edi + 0x5c0), SW_HIDE)
    
    HWND hWnd_3 = *(edi + 0x650)
    
    if (hWnd_3 != 0 && (GetWindowLongW(hWnd_3, 0xfffffff0) & 0x10000000) s> 0)
        ShowWindow(*(edi + 0x650), SW_HIDE)
    
    HWND hWnd_4 = *(edi + 0x6e0)
    
    if (hWnd_4 != 0 && (GetWindowLongW(hWnd_4, 0xfffffff0) & 0x10000000) s> 0)
        ShowWindow(*(edi + 0x6e0), SW_HIDE)
    
    int32_t* var_130_55 = &var_dc
    
    if (*(edi + 0xc) != 0)
        void* esi_6 = &sub_6c1350(edi + 0x5bc, var_130_55)[3]
        int32_t* eax_108 = sub_6c1350(edi + 0x1c, &var_fc)
        hDlg_7 = *esi_6 - eax_108[3]
    else
        int32_t hDlg_9 = sub_6c1350(edi + 0x5bc, var_130_55)[3] - hDlg_7
        hDlg_7 = hDlg_9
        sub_6c1350(edi + 0x52c, &rect)
        sub_6c16e0(edi + 0x52c, rect.d, rect:4.d - hDlg_9)
        sub_6c1350(edi + 0x76c, &rect)
        sub_6c16e0(edi + 0x76c, rect.d, rect:4.d - hDlg_9)
    
    void* esi_7 = *(edi + 4)
    rect = zx.o(0)
    GetWindowRect(*(esi_7 + 4), &rect)
    sub_6c1650(esi_7, rect:8.d - rect.d, rect:0xc.d - rect:4.d - hDlg_7)
    sub_6c1c00(*(edi + 4))

if (*(edi + 0x12) != 0)
    sub_6c2db0(edi + 0x76c, &data_b6d0c4)

sub_543330(edi)
int32_t result = j__free(var_114)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &hDlg_7)
return result
