// 函数: sub_573490
// 地址: 0x573490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b438b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t hDlg_7
int32_t eax_2 = __security_cookie ^ &hDlg_7
int32_t __saved_edi
int32_t var_ec = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_68 = 7
int32_t var_6c = 0
int16_t var_7c = 0
sub_52e720(&var_7c, u"tv_element", 0xa)
int32_t var_c_1 = 0
int32_t hDlg_6 = *(arg1 + 4)
hDlg_7 = hDlg_6

if (arg1 + 0xc0 != &var_7c)
    sub_52e3c0(arg1 + 0xc0, &var_7c, 0, 0xffffffff)
    hDlg_6 = hDlg_7

*(arg1 + 0x114) = 4
*(arg1 + 0x118) = 0
HWND eax_5 = GetDlgItem(hDlg_6, 0x4de)
*(arg1 + 0xbc) = eax_5
sub_6c0100(arg1 + 0xb8, eax_5)
hDlg_7 = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_2 = 0xffffffff

if (var_68 u>= 8)
    j__free(var_7c.d)

int32_t var_38 = 7
int32_t var_3c = 0
int16_t var_4c = 0
sub_52e720(&var_4c, u"lv_element", 0xa)
int32_t var_c_3 = 1
void* eax_7 = arg1 + 0x148
hDlg_7 = *(arg1 + 4)

if (eax_7 + 8 != &var_4c)
    sub_52e3c0(eax_7 + 8, &var_4c, 0, 0xffffffff)
    eax_7 = arg1 + 0x148

int32_t hDlg = hDlg_7
*(eax_7 + 0x5c) = 5
*(eax_7 + 0x60) = 0
HWND eax_8 = GetDlgItem(hDlg, 0x4df)
*(arg1 + 0x14c) = eax_8
sub_6c0100(arg1 + 0x148, eax_8)
hDlg_7 = arg1 + 0x148
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_4 = 0xffffffff

if (var_38 u>= 8)
    j__free(var_4c.d)

int32_t var_b0 = 7
int32_t var_b4 = 0
int16_t var_c4 = 0
sub_52e720(&var_c4, u"lv_list", 7)
int32_t var_c_5 = 2
void* eax_10 = arg1 + 0x47c
hDlg_7 = *(arg1 + 4)

if (eax_10 + 8 != &var_c4)
    sub_52e3c0(eax_10 + 8, &var_c4, 0, 0xffffffff)
    eax_10 = arg1 + 0x47c

int32_t hDlg_1 = hDlg_7
*(eax_10 + 0x5c) = 2
*(eax_10 + 0x60) = 0
HWND eax_11 = GetDlgItem(hDlg_1, 0x4e0)
*(arg1 + 0x480) = eax_11
sub_6c0100(arg1 + 0x47c, eax_11)
hDlg_7 = arg1 + 0x47c
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_6 = 0xffffffff

if (var_b0 u>= 8)
    j__free(var_c4.d)

int32_t var_98 = 7
int32_t var_9c = 0
int16_t var_ac = 0
sub_52e720(&var_ac, u"lv_int_list", 0xb)
int32_t var_c_7 = 3
void* eax_13 = arg1 + 0x7b0
hDlg_7 = *(arg1 + 4)

if (eax_13 + 8 != &var_ac)
    sub_52e3c0(eax_13 + 8, &var_ac, 0, 0xffffffff)
    eax_13 = arg1 + 0x7b0

int32_t hDlg_2 = hDlg_7
*(eax_13 + 0x5c) = 2
*(eax_13 + 0x60) = 0
HWND eax_14 = GetDlgItem(hDlg_2, 0x4e3)
*(arg1 + 0x7b4) = eax_14
sub_6c0100(arg1 + 0x7b0, eax_14)
hDlg_7 = arg1 + 0x7b0
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_8 = 0xffffffff

if (var_98 u>= 8)
    j__free(var_ac.d)

int32_t var_80 = 7
int32_t var_84 = 0
int16_t var_94 = 0
sub_52e720(&var_94, u"lv_str_list", 0xb)
int32_t var_c_9 = 4
void* eax_16 = arg1 + 0xae4
hDlg_7 = *(arg1 + 4)

if (eax_16 + 8 != &var_94)
    sub_52e3c0(eax_16 + 8, &var_94, 0, 0xffffffff)
    eax_16 = arg1 + 0xae4

int32_t hDlg_3 = hDlg_7
*(eax_16 + 0x5c) = 2
*(eax_16 + 0x60) = 0
HWND eax_17 = GetDlgItem(hDlg_3, 0x4e4)
*(arg1 + 0xae8) = eax_17
sub_6c0100(arg1 + 0xae4, eax_17)
hDlg_7 = arg1 + 0xae4
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_10 = 0xffffffff

if (var_80 u>= 8)
    j__free(var_94.d)

int32_t var_50 = 7
int32_t var_54 = 0
int16_t var_64 = 0
sub_52e720(&var_64, u"lv_counter_list", 0xf)
int32_t var_c_11 = 5
void* eax_19 = arg1 + 0xe18
hDlg_7 = *(arg1 + 4)

if (eax_19 + 8 != &var_64)
    sub_52e3c0(eax_19 + 8, &var_64, 0, 0xffffffff)
    eax_19 = arg1 + 0xe18

int32_t hDlg_4 = hDlg_7
*(eax_19 + 0x5c) = 2
*(eax_19 + 0x60) = 0
HWND eax_20 = GetDlgItem(hDlg_4, 0x4e5)
*(arg1 + 0xe1c) = eax_20
sub_6c0100(arg1 + 0xe18, eax_20)
hDlg_7 = arg1 + 0xe18
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_12 = 0xffffffff

if (var_50 u>= 8)
    j__free(var_64.d)

int32_t var_20 = 7
int32_t var_24 = 0
int16_t var_34 = 0
sub_52e720(&var_34, u"lv_mask_list", 0xc)
int32_t var_c_13 = 6
void* eax_22 = arg1 + 0x114c
hDlg_7 = *(arg1 + 4)

if (eax_22 + 8 != &var_34)
    sub_52e3c0(eax_22 + 8, &var_34, 0, 0xffffffff)
    eax_22 = arg1 + 0x114c

int32_t hDlg_5 = hDlg_7
*(eax_22 + 0x5c) = 2
*(eax_22 + 0x60) = 0
HWND eax_23 = GetDlgItem(hDlg_5, 0x4ef)
*(arg1 + 0x1150) = eax_23
sub_6c0100(arg1 + 0x114c, eax_23)
hDlg_7 = arg1 + 0x114c
sub_530ba0(arg1 + 0x64, &hDlg_7)
int32_t var_c_14 = 0xffffffff

if (var_20 u>= 8)
    j__free(var_34.d)

int32_t var_dc
sub_52e820(&var_dc, u"lv_object_list")
int32_t var_c_15 = 7
sub_6c4400(arg1, arg1 + 0x1480, 0x4e1, &var_dc, 2, 0)
int32_t var_c_16 = 0xffffffff
int32_t var_c8

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_group_list")
int32_t var_c_17 = 8
sub_6c4400(arg1, arg1 + 0x17b4, 0x4eb, &var_dc, 2, 0)
int32_t var_c_18 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_mwnd_list")
int32_t var_c_19 = 9
sub_6c4400(arg1, arg1 + 0x1ae8, 0x4e2, &var_dc, 2, 0)
int32_t var_c_20 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_effect_list")
int32_t var_c_21 = 0xa
sub_6c4400(arg1, arg1 + 0x1e1c, 0x4f0, &var_dc, 2, 0)
int32_t var_c_22 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_quake_list")
int32_t var_c_23 = 0xb
sub_6c4400(arg1, arg1 + 0x2150, 0x4ec, &var_dc, 2, 0)
int32_t var_c_24 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_world_list")
int32_t var_c_25 = 0xc
sub_6c4400(arg1, arg1 + 0x2484, 0x4ee, &var_dc, 2, 0)
int32_t var_c_26 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_pcmch_list")
int32_t var_c_27 = 0xd
sub_6c4400(arg1, arg1 + 0x27b8, 0x4e6, &var_dc, 2, 0)
int32_t var_c_28 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_pcm_event_list")
int32_t var_c_29 = 0xe
sub_6c4400(arg1, arg1 + 0x2aec, 0x4e9, &var_dc, 2, 0)
int32_t var_c_30 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_frame_action_list")
int32_t var_c_31 = 0xf
sub_6c4400(arg1, arg1 + 0x2e20, 0x4ed, &var_dc, 2, 0)
int32_t var_c_32 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"lv_call_list")
int32_t var_c_33 = 0x10
sub_6c4400(arg1, arg1 + 0x3154, 0x4ea, &var_dc, 2, 0)
int32_t var_c_34 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"btn_open_element")
int32_t var_c_35 = 0x11
sub_6c4400(arg1, arg1 + 0x3488, 0x4e8, &var_dc, 8, 0)
int32_t var_c_36 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"btn_open_list")
int32_t var_c_37 = 0x12
sub_6c4400(arg1, arg1 + 0x3518, 0x4e7, &var_dc, 2, 0)
int32_t var_c_38 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"separater_1")
int32_t var_c_39 = 0x13
sub_6c46c0(arg1, arg1 + 0x35a8, &var_dc)
int32_t var_c_40 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

sub_52e820(&var_dc, u"separater_2")
int32_t var_c_41 = 0x14
sub_6c46c0(arg1, arg1 + 0x3614, &var_dc)
int32_t var_c_42 = 0xffffffff

if (var_c8 u>= 8)
    j__free(var_dc)

HWND hWnd = *(arg1 + 0xbc)

if (hWnd != 0)
    int32_t eax_38 = GetWindowLongW(hWnd, 0xfffffff0)
    HWND hWnd_5 = *(arg1 + 0xbc)
    
    if (hWnd_5 != 0)
        SetWindowLongW(hWnd_5, 0xfffffff0, eax_38 | 0x1226)

hDlg_7 = arg1 + 0x47c
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x7b0
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0xae4
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0xe18
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x114c
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x1480
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x17b4
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x1ae8
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x1e1c
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x2150
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x2484
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x27b8
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x2aec
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x2e20
sub_530ba0(arg1 + 0x3688, &hDlg_7)
hDlg_7 = arg1 + 0x3154
sub_530ba0(arg1 + 0x3688, &hDlg_7)
int32_t* i = *(arg1 + 0x3688) + 4

while (i != *(arg1 + 0x368c))
    int128_t xmm0_1 = *sub_6c1350(arg1 + 0x47c, &var_dc)
    void* eax_56 = *i
    i = &i[1]
    *(eax_56 + 0x48) = xmm0_1

LRESULT hWnd_1 = sub_6c1c00(arg1)

for (int32_t* i_1 = *(arg1 + 0x3688); i_1 != *(arg1 + 0x368c); i_1 = &i_1[1])
    int32_t hDlg_8 = *i_1
    hDlg_7 = hDlg_8
    hWnd_1 = *(hDlg_8 + 4)
    
    if (hWnd_1 != 0)
        hWnd_1 = GetWindowLongW(hWnd_1, 0xfffffff0)
        
        if ((hWnd_1 & 0x10000000) s> 0)
            hWnd_1 = ShowWindow(*(hDlg_7 + 4), SW_HIDE)

sub_57a800(hWnd_1, 1, 0, arg1 + 0x148)
sub_57a800(arg1 + 0x7b0, 1, 0xb, arg1 + 0x7b0)
sub_57a800(arg1 + 0xae4, 1, 0x15, arg1 + 0xae4)
sub_57a800(arg1 + 0xe18, 1, 0x4b1, arg1 + 0xe18)
sub_57a800(arg1 + 0x114c, 1, 0x47f, arg1 + 0x114c)
sub_57a800(arg1 + 0x1480, 1, 0x51f, arg1 + 0x1480)
sub_57a800(arg1 + 0x17b4, 1, 0x533, arg1 + 0x17b4)
sub_57a800(arg1 + 0x1ae8, 1, 0x529, arg1 + 0x1ae8)
sub_57a800(arg1 + 0x1e1c, 1, 0x565, arg1 + 0x1e1c)
sub_57a800(arg1 + 0x2150, 1, 0x551, arg1 + 0x2150)
sub_57a800(arg1 + 0x2484, 1, 0x50b, arg1 + 0x2484)
sub_57a800(arg1 + 0x27b8, 1, 0x58e, arg1 + 0x27b8)
sub_57a800(arg1 + 0x2aec, 1, 0x5ab, arg1 + 0x2aec)
sub_57a800(arg1 + 0x2e20, 1, 0x4bb, arg1 + 0x2e20)
sub_57a800(arg1 + 0x3154, 1, 0x3fd, arg1 + 0x3154)
HWND hWnd_6 = *(arg1 + 0x14c)
LRESULT ecx_79

if (hWnd_6 != 0)
    ecx_79 = SendMessageW(hWnd_6, 0x1037, 0, 0)
else
    ecx_79 = 0

HWND hWnd_8 = *(arg1 + 0x14c)

if (hWnd_8 != 0)
    SendMessageW(hWnd_8, 0x1036, 0, ecx_79 | 0x31)

for (int32_t* i_2 = *(arg1 + 0x3688); i_2 != *(arg1 + 0x368c); i_2 = &i_2[1])
    int32_t hDlg_9 = *i_2
    hDlg_7 = hDlg_9
    LRESULT hWnd_2 = *(hDlg_9 + 4)
    
    if (hWnd_2 != 0)
        hWnd_2 = SendMessageW(hWnd_2, 0x1037, 0, 0)
    
    HWND hWnd_7 = *(hDlg_7 + 4)
    
    if (hWnd_7 != 0)
        SendMessageW(hWnd_7, 0x1036, 0, hWnd_2 | 0x31)

*(arg1 + 0x35f8) = 1
*(arg1 + 0x3600) = *(arg1 + 0x35fc)
*(arg1 + 0x360c) = *(arg1 + 0x3608)
hDlg_7 = arg1 + 0xb8
sub_530ba0(arg1 + 0x35fc, &hDlg_7)
hDlg_7 = arg1 + 0x148
sub_530ba0(arg1 + 0x3608, &hDlg_7)
hDlg_7 = arg1 + 0x3488
sub_530ba0(arg1 + 0x3608, &hDlg_7)
hDlg_7 = arg1 + 0x3518
sub_530ba0(arg1 + 0x3608, &hDlg_7)

for (int32_t* i_3 = *(arg1 + 0x3688); i_3 != *(arg1 + 0x368c); i_3 = &i_3[1])
    hDlg_7 = *i_3
    sub_530ba0(arg1 + 0x3608, &hDlg_7)

*(arg1 + 0x3664) = 0
*(arg1 + 0x366c) = *(arg1 + 0x3668)
*(arg1 + 0x3678) = *(arg1 + 0x3674)
hDlg_7 = arg1 + 0x148
sub_530ba0(arg1 + 0x3668, &hDlg_7)
int32_t* i_4 = *(arg1 + 0x3688)

if (i_4 != *(arg1 + 0x368c))
    void* ecx_88 = arg1 + 0x3674
    
    do
        hDlg_7 = *i_4
        sub_530ba0(ecx_88, &hDlg_7)
        i_4 = &i_4[1]
        ecx_88 = arg1 + 0x3674
    while (i_4 != *(arg1 + 0x368c))

sub_574e90(arg1)
HWND hWnd_3 = *(arg1 + 4)

if (hWnd_3 != 0)
    UpdateWindow(hWnd_3)

int32_t hWnd_4 = *(arg1 + 4)

if (hWnd_4 != 0 && (GetWindowLongW(hWnd_4, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_4.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &hDlg_7)
return hWnd_4
