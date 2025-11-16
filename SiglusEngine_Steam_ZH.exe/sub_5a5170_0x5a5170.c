// 函数: sub_5a5170
// 地址: 0x5a5170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?wait_for_all@agent@Concurrency@@SAXIPAPAV12@PAW4agent_status@2@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_2f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x424) = 0xffffffff
*(arg1 + 0x428) = 0xffffffff
*(arg1 + 0x42c) = 0
int32_t eax_3 = *(arg1 + 0x42c)
*(arg1 + 0x430) = *(arg1 + 0x424)
*(arg1 + 0x438) = eax_3
*(arg1 + 0x43c) = 0xa
*(arg1 + 0x440) = 0
int32_t var_2b4 = 7
int32_t var_2b8 = 0
int16_t var_2c8 = 0
sub_52e720(&var_2c8, &data_ad7c90, nullptr)
int32_t var_8_1 = 0
int32_t hDlg_2 = *(arg1 + 4)
int32_t hDlg_6 = hDlg_2

if (arg1 + 0xc0 != &var_2c8)
    sub_52e3c0(arg1 + 0xc0, &var_2c8, 0, 0xffffffff)
    hDlg_2 = hDlg_6

*(arg1 + 0x114) = 3
*(arg1 + 0x118) = 0
HWND eax_4 = GetDlgItem(hDlg_2, 0x413)
*(arg1 + 0xbc) = eax_4
sub_6c0100(arg1 + 0xb8, eax_4)
hDlg_6 = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &hDlg_6)
int32_t var_8_2 = 0xffffffff

if (var_2b4 u>= 8)
    j__free(var_2c8.d)

int32_t var_2cc = 7
int32_t var_2d0 = 0
int16_t var_2e0 = 0
sub_52e720(&var_2e0, u"CHK_CLICK", 9)
void* eax_5 = arg1 + 0x148
int32_t var_8_3 = 1
HWND hDlg_5 = *(arg1 + 4)

if (eax_5 + 8 != &var_2e0)
    sub_52e3c0(eax_5 + 8, &var_2e0, 0, 0xffffffff)
    eax_5 = arg1 + 0x148

*(eax_5 + 0x5c) = 3
*(eax_5 + 0x60) = 0
HWND eax_6 = GetDlgItem(hDlg_5, 0x414)
*(arg1 + 0x14c) = eax_6
sub_6c0100(arg1 + 0x148, eax_6)
hDlg_6 = arg1 + 0x148
sub_530ba0(arg1 + 0x64, &hDlg_6)
int32_t var_8_4 = 0xffffffff

if (var_2cc u>= 8)
    j__free(var_2e0.d)

int32_t var_254 = 7
int32_t var_258 = 0
int16_t var_268 = 0
sub_52e720(&var_268, u"CHK_TRACE", 9)
int32_t var_8_5 = 2
void* edx = arg1 + 0x1d8
hDlg_6 = *(arg1 + 4)
int32_t hDlg_3 = hDlg_6

if (edx + 8 != &var_268)
    sub_52e3c0(edx + 8, &var_268, 0, 0xffffffff)
    hDlg_3 = hDlg_6
    edx = arg1 + 0x1d8

*(edx + 0x5c) = 3
*(edx + 0x60) = 0
HWND eax_9 = GetDlgItem(hDlg_3, 0x42d)
*(arg1 + 0x1dc) = eax_9
sub_6c0100(arg1 + 0x1d8, eax_9)
hDlg_6 = arg1 + 0x1d8
sub_530ba0(arg1 + 0x64, &hDlg_6)
int32_t var_8_6 = 0xffffffff

if (var_254 u>= 8)
    j__free(var_268.d)

int32_t var_29c = 7
int32_t var_2a0 = 0
int16_t var_2b0 = 0
sub_52e720(&var_2b0, u"CMB_FONT_SIZE", 0xd)
int32_t var_8_7 = 3
void* eax_11 = arg1 + 0x268
hDlg_6 = *(arg1 + 4)

if (eax_11 + 8 != &var_2b0)
    sub_52e3c0(eax_11 + 8, &var_2b0, 0, 0xffffffff)
    eax_11 = arg1 + 0x268

int32_t hDlg = hDlg_6
*(eax_11 + 0x5c) = 3
*(eax_11 + 0x60) = 0
HWND eax_12 = GetDlgItem(hDlg, 0x434)
*(arg1 + 0x26c) = eax_12
sub_6c0100(arg1 + 0x268, eax_12)
hDlg_6 = arg1 + 0x268
sub_530ba0(arg1 + 0x64, &hDlg_6)
int32_t var_8_8 = 0xffffffff

if (var_29c u>= 8)
    j__free(var_2b0.d)

int32_t var_26c = 7
int32_t var_270 = 0
int16_t var_280 = 0
sub_52e720(&var_280, &data_ad7c90, nullptr)
int32_t var_8_9 = 4
int32_t hDlg_4 = *(arg1 + 4)
hDlg_6 = hDlg_4

if (arg1 + 0x304 != &var_280)
    sub_52e3c0(arg1 + 0x304, &var_280, 0, 0xffffffff)
    hDlg_4 = hDlg_6

*(arg1 + 0x358) = 1
*(arg1 + 0x35c) = 0
HWND eax_13 = GetDlgItem(hDlg_4, 0x409)
*(arg1 + 0x300) = eax_13
sub_6c0100(arg1 + 0x2fc, eax_13)
hDlg_6 = arg1 + 0x2fc
sub_530ba0(arg1 + 0x64, &hDlg_6)
int32_t var_8_10 = 0xffffffff

if (var_26c u>= 8)
    j__free(var_280.d)

int32_t var_284 = 7
int32_t var_288 = 0
int16_t var_298 = 0
sub_52e720(&var_298, &data_ad7c90, nullptr)
int32_t var_8_11 = 5
void* eax_14 = arg1 + 0x38c
hDlg_6 = *(arg1 + 4)

if (eax_14 + 8 != &var_298)
    sub_52e3c0(eax_14 + 8, &var_298, 0, 0xffffffff)
    eax_14 = arg1 + 0x38c

HWND hDlg_1 = hDlg_6
*(eax_14 + 0x5c) = 5
*(eax_14 + 0x60) = 0
int32_t eax_15 = GetDlgItem(hDlg_1, 0x4d3)
*(arg1 + 0x390) = eax_15
sub_6c0100(arg1 + 0x38c, eax_15)
hDlg_6 = arg1 + 0x38c
HWND hWnd_3 = sub_530ba0(arg1 + 0x64, &hDlg_6)
int32_t var_8_12 = 0xffffffff

if (var_284 u>= 8)
    hWnd_3 = j__free(var_298.d)

int32_t* var_234

for (WPARAM wParam_1 = 0; wParam_1 s< 0xc; wParam_1 += 1)
    *((wParam_1 << 2) + &data_ada7a0)
    HWND hWnd_4 = hWnd_3
    int16_t* lParam_1 = sub_6ad9b0(&var_234)
    
    if (*(lParam_1 + 0x14) u>= 8)
        lParam_1 = *lParam_1
    
    hWnd_3 = *(arg1 + 0x26c)
    
    if (hWnd_3 != 0)
        hWnd_3 = SendMessageW(hWnd_3, 0x14a, wParam_1, lParam_1)
    
    int32_t var_220
    
    if (var_220 u>= 8)
        hWnd_3 = j__free(var_234)

int32_t i = 0
*(arg1 + 0x420) = arg1

if (*(arg1 + 0x43c) s> 0)
    do
        int32_t var_220_1 = 7
        int32_t var_224_1 = 0
        var_234.w = 0
        sub_52e720(&var_234, 0xaf17c4, 1)
        int32_t* eax_17 = &var_234
        
        if (var_220_1 u>= 8)
            eax_17 = var_234
        
        void var_21c
        _wcscpy_s(&var_21c, 0x104, eax_17)
        WPARAM wParam = *(arg1 + 0x41c)
        void* var_244_1 = &var_21c
        int32_t lParam = 1
        int32_t var_240_1 = 0x104
        *(arg1 + 0x41c) = wParam + 1
        HWND hWnd = *(arg1 + 0x390)
        
        if (hWnd != 0)
            SendMessageW(hWnd, 0x133e, wParam, &lParam)
        
        if (var_220_1 u>= 8)
            j__free(var_234)
        
        i += 1
    while (i s< *(arg1 + 0x43c))

int32_t var_220_2 = 7
int32_t var_224_2 = 0
var_234.w = 0
sub_52e720(&var_234, &data_ad7c90, nullptr)
int32_t var_8_13 = 6
sub_6c3230(arg1 + 0x148, 1, &var_234)
int32_t var_8_14 = 0xffffffff

if (var_220_2 u>= 8)
    j__free(var_234)

sub_52e820(&var_234, &data_ad7c90)
int32_t var_8_15 = 7
sub_6c3230(arg1 + 0x1d8, 1, &var_234)
int32_t var_8_16 = 0xffffffff

if (var_220_2 u>= 8)
    j__free(var_234)

int32_t var_8_17 = 8
int16_t var_24c
int16_t* var_2f8_27 = &var_24c
sub_6c3610(arg1 + 0x268, sub_52e820(&var_24c, &data_ad7c90))
int32_t var_8_18 = 0xffffffff
int32_t var_238

if (var_238 u>= 8)
    j__free(var_24c.d)

int32_t var_238_1 = 7
var_24c = 0
int32_t var_23c = 0
HWND var_304
var_304.o = zx.o(0)
sub_6c2800(arg1, var_304)
sub_5a60e0(arg1, *(data_bac4a0 + 0x1e9))
HWND hWnd_1 = *(arg1 + 4)

if (hWnd_1 != 0)
    UpdateWindow(hWnd_1)

int32_t hWnd_2 = *(arg1 + 4)

if (hWnd_2 != 0 && (GetWindowLongW(hWnd_2, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_2.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_2
