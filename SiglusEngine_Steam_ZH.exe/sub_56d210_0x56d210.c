// 函数: sub_56d210
// 地址: 0x56d210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b3ac3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_100 = 3
int32_t var_88 = 7
void* const var_104 = &data_ad9610
int32_t var_8c = 0
int16_t var_9c = 0
sub_52e720(&var_9c, var_104, var_100)
void* eax_3 = arg1 + 0xb8
int32_t var_8_1 = 0
HWND hDlg_1 = *(arg1 + 4)

if (eax_3 + 8 != &var_9c)
    sub_52e3c0(eax_3 + 8, &var_9c, 0, 0xffffffff)
    eax_3 = arg1 + 0xb8

int32_t nIDDlgItem = 0x4d3
*(eax_3 + 0x5c) = 5
*(eax_3 + 0x60) = 0
HWND eax_4 = GetDlgItem(hDlg_1, nIDDlgItem)
*(arg1 + 0xbc) = eax_4
sub_6c0100(arg1 + 0xb8, eax_4)
int32_t var_a0 = arg1 + 0xb8
sub_530ba0(arg1 + 0x64, &var_a0)
int32_t var_8_2 = 0xffffffff

if (var_88 u>= 8)
    j__free(var_9c.d)

void* var_100_5 = 0xc
int32_t var_58 = 7
wchar16 const* const var_104_3 = u"lst_original"
int32_t var_5c = 0
int16_t var_6c = 0
sub_52e720(&var_6c, var_104_3, var_100_5)
int32_t var_8_3 = 1
int32_t hDlg = *(arg1 + 4)
var_a0 = hDlg

if (arg1 + 0x154 != &var_6c)
    sub_52e3c0(arg1 + 0x154, &var_6c, 0, 0xffffffff)
    hDlg = var_a0

int32_t nIDDlgItem_1 = 0x46a
*(arg1 + 0x1a8) = 5
*(arg1 + 0x1ac) = 0
HWND eax_5 = GetDlgItem(hDlg, nIDDlgItem_1)
*(arg1 + 0x150) = eax_5
sub_6c0100(arg1 + 0x14c, eax_5)
var_a0 = arg1 + 0x14c
sub_530ba0(arg1 + 0x64, &var_a0)
int32_t var_8_4 = 0xffffffff

if (var_58 u>= 8)
    j__free(var_6c.d)

void* var_100_10 = 9
int32_t var_70 = 7
wchar16 const* const var_104_6 = u"lst_group"
int32_t var_74 = 0
int16_t var_84 = 0
sub_52e720(&var_84, var_104_6, var_100_10)
void* edx = arg1 + 0x480
int32_t var_8_5 = 2
int32_t y_1 = *(arg1 + 4)
var_a0 = edx
POINT var_a8
var_a8.y = y_1

if (edx + 8 != &var_84)
    sub_52e3c0(edx + 8, &var_84, 0, 0xffffffff)
    y_1 = var_a8.y
    edx = arg1 + 0x480

int32_t nIDDlgItem_2 = 0x469
*(edx + 0x5c) = 5
*(edx + 0x60) = 0
HWND eax_6 = GetDlgItem(y_1, nIDDlgItem_2)
*(arg1 + 0x484) = eax_6
sub_6c0100(arg1 + 0x480, eax_6)
var_a8.y = arg1 + 0x480
var_a4
sub_530ba0(arg1 + 0x64, &var_a4)
int32_t var_8_6 = 0xffffffff

if (var_70 u>= 8)
    j__free(var_84.d)

void* var_100_15 = 4
int32_t var_18 = 7
void* const var_104_9 = &data_ad9648
int32_t var_1c = 0
int16_t var_2c = 0
sub_52e720(&var_2c, var_104_9, var_100_15)
sub_6c3970(arg1 + 0xb8, &var_2c)

if (var_18 u>= 8)
    j__free(var_2c.d)

void* var_100_18 = 4
int32_t var_18_1 = 7
void* const var_104_10 = &data_ad9654
int32_t var_1c_1 = 0
var_2c = 0
sub_52e720(&var_2c, var_104_10, var_100_18)
sub_6c3970(arg1 + 0xb8, &var_2c)

if (var_18_1 u>= 8)
    j__free(var_2c.d)

RECT lParam_1
RECT* lpRect = &lParam_1
HWND hWnd = *(arg1 + 0xbc)
__builtin_memset(&lParam_1, 0, 0x10)
GetWindowRect(hWnd, lpRect)
HWND hWnd_3 = *(arg1 + 0xbc)

if (hWnd_3 != 0)
    SendMessageW(hWnd_3, 0x1328, 0, &lParam_1)

uint128_t xmm0
xmm0.d = lParam_1.left
xmm0:4.d = lParam_1.top
xmm0:8.d = lParam_1.right
xmm0:0xc.d = lParam_1.bottom
POINT* lpPoint = &var_a8
HWND hWnd_1 = *(arg1 + 4)
var_a8.x = xmm0
var_a8.y = _mm_bsrli_si128(xmm0, 4)
ScreenToClient(hWnd_1, lpPoint)
POINT var_c0
POINT* lpPoint_1 = &var_c0
HWND hWnd_2 = *(arg1 + 4)
int32_t xmm1_1 = _mm_bsrli_si128(xmm0, 0xc)
var_c0.x = _mm_bsrli_si128(xmm0, 8)
var_c0.y = xmm1_1
ScreenToClient(hWnd_2, lpPoint_1)
lParam_1.top = var_a8.y
lParam_1.right = var_c0.x
lParam_1.bottom = var_c0.y
int32_t var_18_2 = 7
lParam_1.left = var_a8.x - 2
void* const var_100_22 = nullptr
int32_t* var_104_12 = &data_ad7c90
int32_t var_1c_2 = 0
var_2c = 0
sub_52e720(&var_2c, var_104_12, var_100_22)
int32_t var_8_7 = 3
void* const var_100_23 = 0xd
uint128_t var_3c
var_3c:0xc.d = 7
int32_t* var_104_13 = u"TAB_SELECT_NO"
var_3c:8.d = 0
int16_t var_44 = 0
sub_52e720(&var_44, var_104_13, var_100_23)
var_8_7.b = 4
int32_t* wParam = sub_6c2460(arg1 + 0xb8, &var_44, nullptr, &var_2c)

if (var_3c:0xc.d u>= 8)
    j__free(var_44.d)

int32_t var_8_8 = 0xffffffff
var_3c:0xc.d = 7
var_3c:8.d = 0
var_44 = 0

if (var_18_2 u>= 8)
    j__free(var_2c.d)

HWND hWnd_4 = *(arg1 + 0xbc)

if (hWnd_4 != 0)
    SendMessageW(hWnd_4, 0x130c, wParam, 0)

LRESULT hWnd_5 = *(arg1 + 0x150)

if (hWnd_5 != 0)
    hWnd_5 = SendMessageW(hWnd_5, 0x1037, 0, 0)

HWND hWnd_13 = *(arg1 + 0x150)

if (hWnd_13 != 0)
    SendMessageW(hWnd_13, 0x1036, 0, hWnd_5 | 0x21)

int128_t xmm0_4
xmm0_4.d = lParam_1.left
xmm0_4:4.d = lParam_1.top
xmm0_4:8.d = lParam_1.right
xmm0_4:0xc.d = lParam_1.bottom
int32_t i = 0
*(arg1 + 0x194) = xmm0_4
void* i_6
int32_t var_18_3

do
    int16_t* edx_1 = *(i + &data_ad9850)
    var_18_3 = 7
    int32_t var_1c_3 = 0
    var_2c = 0
    int32_t ecx_20
    
    if (*edx_1 != 0)
        int16_t* ecx_21 = edx_1
        var_a8.y = &ecx_21[1]
        void* eax_13
        
        do
            eax_13.w = *ecx_21
            ecx_21 = &ecx_21[1]
        while (eax_13.w != 0)
        ecx_20 = (ecx_21 - var_a8.y) s>> 1
    else
        ecx_20 = 0
    
    sub_52e720(&var_2c, edx_1, ecx_20)
    int32_t var_8_9 = 5
    int16_t* edx_2 = *(i + &data_ad9880)
    var_3c:0xc.d = 7
    var_3c:8.d = 0
    var_44 = 0
    int32_t ecx_24
    
    if (*edx_2 != 0)
        int16_t* ecx_25 = edx_2
        var_a8.y = &ecx_25[1]
        void* eax_14
        
        do
            eax_14.w = *ecx_25
            ecx_25 = &ecx_25[1]
        while (eax_14.w != 0)
        ecx_24 = (ecx_25 - var_a8.y) s>> 1
    else
        ecx_24 = 0
    
    sub_52e720(&var_44, edx_2, ecx_24)
    var_8_9.b = 6
    var_a8.y = *(i + U"#d(<")
    LRESULT hWnd_6 = *(arg1 + 0x150)
    
    if (hWnd_6 != 0)
        hWnd_6 = SendMessageW(hWnd_6, 0x101f, 0, 0)
    
    int16_t* ecx_28 = &var_2c
    LRESULT wParam_1 = SendMessageW(hWnd_6, 0x1200, 0, 0)
    int32_t lParam = 7
    
    if (var_18_3 u>= 8)
        ecx_28 = var_2c.d
    
    int32_t y = var_a8.y
    HWND hWnd_7 = *(arg1 + 0x150)
    int32_t var_e8_1 = 0
    int16_t* var_e0_1 = ecx_28
    
    if (hWnd_7 != 0)
        SendMessageW(hWnd_7, 0x1061, wParam_1, &lParam)
    
    int16_t* var_100_35 = &var_44
    sub_6c6920(arg1 + 0x1dc, &i_6, *(arg1 + 0x1dc) + wParam_1 * 0x18, arg1 + 0x1dc)
    
    if (var_3c:0xc.d u>= 8)
        j__free(var_44.d)
    
    int32_t var_8_10 = 0xffffffff
    var_3c:0xc.d = 7
    var_3c:8.d = 0
    var_44 = 0
    
    if (var_18_3 u>= 8)
        j__free(var_2c.d)
    
    i += 4
while (i s< 0x24)

sub_6c65c0(arg1 + 0x14c)
int32_t* eax_20 = data_bac474
int32_t edx_4 = *eax_20
int32_t ecx_31 = eax_20[1]
var_a8.y = edx_4
int16_t var_118

if (edx_4 != ecx_31)
    var_3c:0xc.d = 7
    var_3c:8.d = 0
    var_44 = 0
    int32_t var_8_11 = 7
    void* i_1 = nullptr
    i_6 = nullptr
    
    if ((ecx_31 - edx_4) s/ 0x4c s> 0)
        void* var_ac_1 = var_a8.y + 0x20
        int32_t edx_8
        
        do
            void* i_4 = i_1
            int32_t var_104_24 = 7
            int32_t var_108_13 = 0
            var_118 = 0
            sub_52e720(&var_118, u"%03d", 4)
            int16_t* eax_27 = sub_6ae4c0(&var_2c, var_118)
            var_8_11.b = 8
            int32_t ecx_35 = *(data_bac4e0 + 0x18)
            
            if (ecx_35 != 0)
                ecx_35(*(arg1 + 0x150), 0, eax_27, eax_2)
            
            var_8_11.b = 7
            
            if (var_18_3 u>= 8)
                j__free(var_2c.d)
            
            var_18_3 = 7
            var_2c = 0
            int32_t var_1c_4 = 0
            int32_t ecx_36 = *(data_bac4e0 + 0x34)
            
            if (ecx_36 != 0)
                ecx_36(*(arg1 + 0x150), i_1, 1, var_ac_1 - 0x20, eax_2)
            
            int32_t var_100_41 = *(var_ac_1 - 8)
            sub_52e820(&var_118, u"flag[%04d]")
            int16_t* eax_32 = sub_6ae4c0(&var_2c, var_118)
            var_8_11.b = 9
            int32_t ecx_39 = *(data_bac4e0 + 0x34)
            
            if (ecx_39 != 0)
                ecx_39(*(arg1 + 0x150), i_1, 3, eax_32, eax_2)
            
            var_8_11.b = 7
            
            if (var_18_3 u>= 8)
                j__free(var_2c.d)
            
            void* eax_33 = var_ac_1
            int32_t j = 0
            var_a8.y = eax_33
            
            do
                int32_t var_100_44 = *eax_33
                sub_52e820(&var_118, u"%03d")
                int16_t* eax_34
                int128_t xmm0_6
                eax_34, xmm0_6 = sub_6ae4c0(&var_2c)
                var_8_11.b = 0xa
                int32_t ecx_42 = *(data_bac4e0 + 0x34)
                
                if (ecx_42 != 0)
                    ecx_42(*(arg1 + 0x150), i_6, j + 4, eax_34, eax_2)
                
                var_8_11.b = 7
                
                if (var_18_3 u>= 8)
                    j__free(var_2c.d)
                
                j += 1
                eax_33 = var_a8.y + 4
                var_a8.y = eax_33
            while (j s< 5)
            
            var_ac_1 += 0x4c
            i_1 = i_6 + 1
            i_6 = i_1
            int32_t eax_38
            int32_t edx_7
            edx_7:eax_38 = muls.dp.d(0x6bca1af3, eax_20[1] - *eax_20)
            edx_8 = edx_7 s>> 5
        while (i_1 s< (edx_8 u>> 0x1f) + edx_8)
    
    int32_t var_8_12 = 0xffffffff

LRESULT hWnd_8 = *(arg1 + 0x484)

if (hWnd_8 != 0)
    hWnd_8 = SendMessageW(hWnd_8, 0x1037, 0, 0)

HWND hWnd_14 = *(arg1 + 0x484)

if (hWnd_14 != 0)
    SendMessageW(hWnd_14, 0x1036, 0, hWnd_8 | 0x21)

int128_t xmm0_7
xmm0_7.d = lParam_1.left
xmm0_7:4.d = lParam_1.top
xmm0_7:8.d = lParam_1.right
xmm0_7:0xc.d = lParam_1.bottom
int32_t i_2 = 0
*(arg1 + 0x4c8) = xmm0_7
int32_t edi_1 = var_a0

do
    sub_52e820(&var_44, *(i_2 + &data_ad97a0))
    int32_t var_8_13 = 0xb
    sub_52e820(&var_2c, *(i_2 + &data_ad97e0))
    var_8_13.b = 0xc
    var_a8.y = *(i_2 + &data_ad9690)
    HWND hWnd_9 = *(edi_1 + 4)
    
    if (hWnd_9 != 0)
        hWnd_9 = SendMessageW(hWnd_9, 0x101f, 0, 0)
    
    WPARAM eax_44
    int32_t ecx_47
    eax_44, ecx_47 = SendMessageW(hWnd_9, 0x1200, 0, 0)
    int32_t var_100_53 = ecx_47
    sub_6c4880(edi_1, eax_44, &var_2c, &var_44, var_a8.y)
    
    if (var_18_3 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_8_14 = 0xffffffff
    var_18_3 = 7
    int32_t var_1c_5 = 0
    var_2c = 0
    
    if (var_3c:0xc.d u>= 8)
        j__free(var_44.d)
    
    i_2 += 4
while (i_2 s< 0x38)

sub_6c65c0(var_a0)
int32_t* ecx_50 = eax_20
void* edi_2 = arg1

if (ecx_50[7] != ecx_50[8])
    var_3c:0xc.d = 7
    var_3c:8.d = 0
    var_44 = 0
    int32_t var_8_15 = 0xd
    int32_t i_3 = 0
    int32_t i_7 = 0
    
    if (((ecx_50[8] - ecx_50[7]) & 0xfffffffc) s> 0)
        do
            int32_t i_5 = i_3
            i_6 = *(ecx_50[7] + (i_3 << 2))
            sub_52e820(&var_118, u"%03d")
            int16_t* eax_50 = sub_6ae4c0(&var_2c, var_118)
            var_8_15.b = 0xe
            int32_t ecx_53 = *(data_bac4e0 + 0x18)
            
            if (ecx_53 != 0)
                ecx_53(*(edi_2 + 0x484), 0, eax_50, eax_2)
            
            var_8_15.b = 0xd
            
            if (var_18_3 u>= 8)
                j__free(var_2c.d)
            
            var_18_3 = 7
            var_2c = 0
            int32_t var_1c_6 = 0
            int32_t eax_52 = *(data_bac4e0 + 0x34)
            
            if (eax_52 != 0)
                eax_52(*(edi_2 + 0x484), i_3, 1, i_6, eax_2)
            
            int32_t var_100_59 = *(i_6 + 0x18)
            sub_52e820(&var_118, u"flag[%04d]")
            int16_t* eax_54 = sub_6ae4c0(&var_2c)
            var_8_15.b = 0xf
            int32_t ecx_56 = *(data_bac4e0 + 0x34)
            
            if (ecx_56 != 0)
                ecx_56(*(edi_2 + 0x484), i_3, 8, eax_54, eax_2)
            
            var_8_15.b = 0xd
            
            if (var_18_3 u>= 8)
                j__free(var_2c.d)
            
            int32_t esi_4 = 9
            void* edi_4 = i_6 + 0x20
            var_a0 = 5
            int32_t j_1
            
            do
                int32_t var_100_62 = *(edi_4 + 0x18)
                sub_52e820(&var_118, u"%03d")
                int16_t* eax_55 = sub_6ae4c0(&var_2c)
                var_8_15.b = 0x10
                int32_t ecx_59 = *(data_bac4e0 + 0x34)
                
                if (ecx_59 != 0)
                    ecx_59(*(arg1 + 0x484), i_7, esi_4 - 6, eax_55, eax_2)
                
                var_8_15.b = 0xd
                
                if (var_18_3 u>= 8)
                    j__free(var_2c.d)
                
                int32_t var_100_65 = *edi_4
                sub_52e820(&var_118, u"%03d")
                int16_t* eax_58 = sub_6ae4c0(&var_2c)
                var_8_15.b = 0x11
                int32_t ecx_62 = *(data_bac4e0 + 0x34)
                
                if (ecx_62 != 0)
                    ecx_62(*(arg1 + 0x484), i_7, esi_4, eax_58, eax_2)
                
                var_8_15.b = 0xd
                
                if (var_18_3 u>= 8)
                    j__free(var_2c.d)
                
                edi_4 += 4
                esi_4 += 1
                j_1 = var_a0
                var_a0 -= 1
            while (j_1 != 1)
            ecx_50 = eax_20
            edi_2 = arg1
            i_3 = i_7 + 1
            i_7 = i_3
        while (i_3 s< (ecx_50[8] - ecx_50[7]) s>> 2)
    
    int32_t var_8_16 = 0xffffffff

int16_t* var_10c_16
var_10c_16.o = zx.o(0)
int32_t ecx_64 = sub_6c2800(edi_2, var_10c_16)
HWND hWnd_10 = *(edi_2 + 0xbc)

if (hWnd_10 != 0)
    ecx_64 = SendMessageW(hWnd_10, 0x130b, 0, 0)

int32_t var_100_69 = ecx_64
sub_56e4b0(edi_2)
sub_6c1c00(edi_2)
HWND hWnd_11 = *(edi_2 + 4)

if (hWnd_11 != 0)
    UpdateWindow(hWnd_11)

int32_t hWnd_12 = *(edi_2 + 4)

if (hWnd_12 != 0 && (GetWindowLongW(hWnd_12, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(edi_2 + 4), SW_SHOW)

hWnd_12.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return hWnd_12
