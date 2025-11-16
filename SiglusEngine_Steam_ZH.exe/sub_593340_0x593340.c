// 函数: sub_593340
// 地址: 0x593340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b81b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_318
int32_t eax_2 = __security_cookie ^ &var_318
int32_t __saved_edi
int32_t var_324 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_314 = edi
int16_t* var_2b0 = 0x4ea
*(edi + 0x7d0) = 0x101
int32_t var_2ac = 0x4ec
wchar16 const* const var_2f4 = u"lv_global"
wchar16 const* const var_2f0 = u"lv_local"
RECT var_270
var_270.left = 0xaefe38
var_270.top = 0xaefe3c
int32_t var_24c = 7
int32_t var_250 = 0
int16_t var_260 = 0
sub_52e720(&var_260, &data_ad9610, 3)
void* eax_5 = edi + 0xb8
int32_t var_14_1 = 0
HWND hDlg_1 = *(edi + 4)
void* var_300 = eax_5

if (eax_5 + 8 != &var_260)
    sub_52e3c0(eax_5 + 8, &var_260, 0, 0xffffffff)
    eax_5 = edi + 0xb8

*(eax_5 + 0x5c) = 5
*(eax_5 + 0x60) = 0
HWND eax_6 = GetDlgItem(hDlg_1, 0x4d3)
*(edi + 0xbc) = eax_6
sub_6c0100(edi + 0xb8, eax_6)
int32_t eax_7 = *(edi + 0x68)
void* var_2fc
void** ecx_3 = &var_2fc
var_2fc = edi + 0xb8
void* esi_1 = edi + 0x64

if (&var_2fc u< eax_7)
    ecx_3 = *esi_1

if (&var_2fc u>= eax_7 || ecx_3 u> &var_2fc)
    if (eax_7 == *(esi_1 + 8))
        void** var_328_2 = ecx_3
        sub_530c10(esi_1)
    
    void** eax_10 = *(esi_1 + 4)
    
    if (eax_10 != 0)
        *eax_10 = edi + 0xb8
else
    if (eax_7 == *(esi_1 + 8))
        void** var_328_1 = ecx_3
        sub_530c10(esi_1)
    
    int32_t* ecx_5 = *(esi_1 + 4)
    
    if (ecx_5 != 0)
        *ecx_5 = *(*esi_1 + ((&var_2fc - ecx_3) s>> 2 << 2))
    
    edi = var_314

*(esi_1 + 4) += 4
int32_t var_14_2 = 0xffffffff

if (var_24c u>= 8)
    j__free(var_260.d)

void* edi_3 = edi + 0x154
int32_t i = 0
void* var_310 = edi_3
int32_t i_4 = 0
int32_t point
int32_t var_2c0

do
    int16_t* edx_1 = *(&var_2f4 + i)
    int32_t var_234_1 = 7
    int32_t var_238_1 = 0
    int16_t var_248 = 0
    int32_t ecx_8
    
    if (*edx_1 != 0)
        int16_t* ecx_9 = edx_1
        point = &ecx_9[1]
        int32_t eax_11
        
        do
            eax_11.w = *ecx_9
            ecx_9 = &ecx_9[1]
        while (eax_11.w != 0)
        ecx_8 = (ecx_9 - point) s>> 1
    else
        ecx_8 = 0
    
    sub_52e720(&var_248, edx_1, ecx_8)
    int32_t var_14_3 = 1
    int32_t i_5 = i_4
    int32_t hDlg = *(var_314 + 4)
    var_2c0 = hDlg
    int32_t nIDDlgItem = *(&var_2b0 + i_5)
    point = nIDDlgItem
    
    if (edi_3 != &var_248)
        sub_52e3c0(edi_3, &var_248, 0, 0xffffffff)
        nIDDlgItem = point
        hDlg = var_2c0
    
    *(edi_3 + 0x54) = 5
    *(edi_3 + 0x58) = 1
    HWND eax_12 = GetDlgItem(hDlg, nIDDlgItem)
    *(edi_3 - 4) = eax_12
    sub_6c0100(edi_3 - 8, eax_12)
    int32_t ecx_15 = *(esi_1 + 4)
    void* var_2f8 = edi_3 - 8
    int32_t eax_14
    
    if (&var_2f8 u< ecx_15)
        eax_14 = *esi_1
    
    if (&var_2f8 u>= ecx_15 || eax_14 u> &var_2f8)
        int32_t edx_6 = *(esi_1 + 8)
        
        if (ecx_15 == edx_6 && (edx_6 - ecx_15) s>> 2 u< 1)
            int32_t ecx_24 = (ecx_15 - *esi_1) s>> 2
            
            if (0x3fffffff - ecx_24 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_8 = (edx_6 - *esi_1) s>> 2
            var_2c0 = ecx_24 + 1
            uint32_t ecx_27 = edx_8 u>> 1
            int32_t edx_9
            
            if (0x3fffffff - ecx_27 u>= edx_8)
                edx_9 = edx_8 + ecx_27
            else
                edx_9 = 0
            
            if (edx_9 u< var_2c0)
                edx_9 = var_2c0
            
            sub_530c80(esi_1, edx_9)
        
        void** eax_27 = *(esi_1 + 4)
        
        if (eax_27 != 0)
            *eax_27 = edi_3 - 8
    else
        int32_t edx_2 = *(esi_1 + 8)
        
        if (ecx_15 == edx_2 && (edx_2 - ecx_15) s>> 2 u< 1)
            int32_t ecx_17 = (ecx_15 - *esi_1) s>> 2
            
            if (0x3fffffff - ecx_17 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_4 = (edx_2 - *esi_1) s>> 2
            var_2c0 = ecx_17 + 1
            uint32_t ecx_20 = edx_4 u>> 1
            int32_t edx_5
            
            if (0x3fffffff - ecx_20 u>= edx_4)
                edx_5 = edx_4 + ecx_20
            else
                edx_5 = 0
            
            if (edx_5 u< var_2c0)
                edx_5 = var_2c0
            
            sub_530c80(esi_1, edx_5)
        
        int32_t* ecx_22 = *(esi_1 + 4)
        
        if (ecx_22 != 0)
            *ecx_22 = *(*esi_1 + ((&var_2f8 - eax_14) s>> 2 << 2))
        
        edi_3 = var_310
    
    *(esi_1 + 4) += 4
    int32_t var_14_4 = 0xffffffff
    
    if (var_234_1 u>= 8)
        j__free(var_248.d)
    
    edi_3 += 0x334
    i = i_4 + 4
    var_310 = edi_3
    i_4 = i
while (i s< 8)

int32_t* lParam_1

for (int32_t i_1 = 0; i_1 s< 2; i_1 += 1)
    int16_t* edx_10 = *(&var_270 + (i_1 << 2))
    int32_t var_29c_1 = 7
    int32_t var_2a0_1 = 0
    var_2b0.w = 0
    int32_t ecx_30
    
    if (*edx_10 != 0)
        int16_t* ecx_31 = edx_10
        var_2c0 = &ecx_31[1]
        void* eax_29
        
        do
            eax_29.w = *ecx_31
            ecx_31 = &ecx_31[1]
        while (eax_29.w != 0)
        ecx_30 = (ecx_31 - var_2c0) s>> 1
    else
        ecx_30 = 0
    
    sub_52e720(&var_2b0, edx_10, ecx_30)
    int16_t* eax_30 = &var_2b0
    
    if (var_29c_1 u>= 8)
        eax_30 = var_2b0
    
    void var_230
    _wcscpy_s(&var_230, 0x104, eax_30)
    void* var_280_1 = &var_230
    lParam_1 = 1
    int32_t var_27c_1 = 0x104
    WPARAM wParam = *(var_300 + 0x90)
    *(var_300 + 0x90) = wParam + 1
    HWND hWnd = *(var_300 + 4)
    
    if (hWnd != 0)
        SendMessageW(hWnd, 0x133e, wParam, &lParam_1)
    
    if (var_29c_1 u>= 8)
        j__free(var_2b0)

__builtin_memset(&var_270, 0, 0x10)
GetWindowRect(*(var_300 + 4), &var_270)
HWND hWnd_1 = *(var_300 + 4)

if (hWnd_1 != 0)
    SendMessageW(hWnd_1, 0x1328, 0, &var_270)

uint128_t point_1
point_1.d = var_270.left
point_1:4.d = var_270.top
point_1:8.d = var_270.right
point_1:0xc.d = var_270.bottom
var_2b0.o = point_1
point = point_1
int32_t xmm0 = _mm_bsrli_si128(point_1, 4)
ScreenToClient(*(var_314 + 4), &point)
uint128_t xmm1 = var_2b0.o
int32_t xmm0_2 = _mm_bsrli_si128(xmm1, 8)
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
var_2c0 = xmm0_2
ScreenToClient(*(var_314 + 4), &var_2c0)
var_270.top = xmm0
var_270.right = var_2c0
var_270.bottom = xmm1_1
int32_t i_3 = 2
var_270.left = point - 2
void* esi_4 = var_314 + 0x150
int32_t i_2

do
    LRESULT hWnd_2 = *esi_4
    
    if (hWnd_2 != 0)
        hWnd_2 = SendMessageW(hWnd_2, 0x1037, 0, 0)
    
    HWND hWnd_11 = *esi_4
    
    if (hWnd_11 != 0)
        SendMessageW(hWnd_11, 0x1036, 0, hWnd_2 | 0x31)
    
    int32_t var_278_1 = 7
    int32_t var_27c_2 = 0
    lParam_1.w = 0
    sub_52e720(&lParam_1, 0xaefe40, 3)
    int32_t var_14_5 = 2
    int32_t var_29c_2 = 7
    int32_t var_2a0_2 = 0
    var_2b0.w = 0
    sub_52e720(&var_2b0, u"flag", 4)
    var_14_5.b = 3
    LRESULT hWnd_3 = *esi_4
    
    if (hWnd_3 != 0)
        hWnd_3 = SendMessageW(hWnd_3, 0x101f, 0, 0)
    
    int32_t* lParam_2 = &lParam_1
    LRESULT wParam_1 = SendMessageW(hWnd_3, 0x1200, 0, 0)
    int32_t lParam = 7
    
    if (var_278_1 u>= 8)
        lParam_2 = lParam_1
    
    HWND hWnd_4 = *esi_4
    var_2c0 = wParam_1
    int32_t var_2e8_1 = 0
    int32_t var_2e4_1 = 0x64
    int32_t* lParam_4 = lParam_2
    
    if (hWnd_4 != 0)
        SendMessageW(hWnd_4, 0x1061, wParam_1, &lParam)
        wParam_1 = var_2c0
    
    void** var_328_20 = &var_2b0
    sub_6c6920(esi_4 + 0x8c, &point, *(esi_4 + 0x8c) + wParam_1 * 0x18, &var_2b0)
    
    if (var_29c_2 u>= 8)
        j__free(var_2b0)
    
    int32_t var_14_6 = 0xffffffff
    int32_t var_29c_3 = 7
    int32_t var_2a0_3 = 0
    var_2b0.w = 0
    
    if (var_278_1 u>= 8)
        j__free(lParam_1)
    
    int32_t var_278_2 = 7
    int32_t var_27c_3 = 0
    lParam_1.w = 0
    sub_52e720(&lParam_1, 0xad92cc, 1)
    int32_t var_14_7 = 4
    int32_t var_29c_4 = 7
    int32_t var_2a0_4 = 0
    var_2b0.w = 0
    sub_52e720(&var_2b0, u"value", 5)
    var_14_7.b = 5
    LRESULT hWnd_5 = *esi_4
    
    if (hWnd_5 != 0)
        hWnd_5 = SendMessageW(hWnd_5, 0x101f, 0, 0)
    
    int32_t* lParam_3 = &lParam_1
    LRESULT wParam_2 = SendMessageW(hWnd_5, 0x1200, 0, 0)
    lParam = 7
    
    if (var_278_2 u>= 8)
        lParam_3 = lParam_1
    
    HWND hWnd_6 = *esi_4
    var_2c0 = wParam_2
    int32_t var_2e8_2 = 0
    int32_t var_2e4_2 = 0x64
    int32_t* lParam_5 = lParam_3
    
    if (hWnd_6 != 0)
        SendMessageW(hWnd_6, 0x1061, wParam_2, &lParam)
        wParam_2 = var_2c0
    
    void** var_328_24 = &var_2b0
    sub_6c6920(esi_4 + 0x8c, &i_4, *(esi_4 + 0x8c) + wParam_2 * 0x18, esi_4 + 0x8c)
    
    if (var_29c_4 u>= 8)
        j__free(var_2b0)
    
    int32_t var_14_8 = 0xffffffff
    int32_t var_29c_5 = 7
    int32_t var_2a0_5 = 0
    var_2b0.w = 0
    
    if (var_278_2 u>= 8)
        j__free(lParam_1)
    
    sub_6c65c0(esi_4 - 4)
    int128_t xmm0_3
    xmm0_3.d = var_270.left
    xmm0_3:4.d = var_270.top
    xmm0_3:8.d = var_270.right
    xmm0_3:0xc.d = var_270.bottom
    *(esi_4 + 0x44) = xmm0_3
    esi_4 += 0x334
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
int32_t* var_334_12
var_334_12.o = zx.o(0)
sub_6c2800(var_314, var_334_12)
WPARAM wParam_3 = *(var_314 + 0x7cc)
HWND hWnd_7 = *(var_300 + 4)

if (hWnd_7 != 0)
    SendMessageW(hWnd_7, 0x130c, wParam_3, 0)

sub_5920f0(var_314, wParam_3)
HWND hWnd_8 = *(var_314 + 4)

if (hWnd_8 != 0)
    var_2c0.o = zx.o(0)
    GetClientRect(hWnd_8, &var_2c0)
    HWND hWnd_12 = *(var_314 + 4)
    int16_t var_2b8
    int16_t var_2b4
    
    if (hWnd_12 != 0)
        SendMessageW(hWnd_12, 5, 0, zx.d(var_2b4 - xmm1_1.w) << 0x10 | zx.d(var_2b8 - var_2c0.w))

HWND hWnd_9 = *(var_314 + 4)

if (hWnd_9 != 0)
    UpdateWindow(hWnd_9)

int32_t hWnd_10 = *(var_314 + 4)

if (hWnd_10 != 0 && (GetWindowLongW(hWnd_10, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(var_314 + 4), SW_SHOW)

hWnd_10.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_318)
return hWnd_10
