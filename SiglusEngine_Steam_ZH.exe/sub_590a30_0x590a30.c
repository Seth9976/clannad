// 函数: sub_590a30
// 地址: 0x590a30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_9b7e44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_348
int32_t eax_2 = __security_cookie ^ &var_348
int32_t __saved_edi
int32_t var_354 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t point = 0x471
*(arg1 + 0x7d0) = 0x101
int32_t var_330 = 0x476
wchar16 const* const point_1 = u"back"
wchar16 const* const var_328 = u"front"
int32_t var_24c = 7
int32_t var_250 = 0
int16_t var_260 = 0
sub_52e720(&var_260, &data_ad9610, 3)
int32_t var_14_1 = 0
HWND hDlg_1 = *(arg1 + 4)

if (arg1 + 0xc0 != &var_260)
    sub_52e3c0(arg1 + 0xc0, &var_260, 0, 0xffffffff)

*(arg1 + 0x114) = 5
*(arg1 + 0x118) = 0
HWND eax_5 = GetDlgItem(hDlg_1, 0x4d3)
*(arg1 + 0xbc) = eax_5
sub_6c0100(arg1 + 0xb8, eax_5)
void* var_324
int32_t* ecx_3 = &var_324
var_324 = arg1 + 0xb8
int32_t eax_6 = *(arg1 + 0x68)

if (&var_324 u< eax_6)
    ecx_3 = *(arg1 + 0x64)

if (&var_324 u>= eax_6 || ecx_3 u> &var_324)
    if (eax_6 == *(arg1 + 0x6c))
        int32_t* var_358_2 = ecx_3
        sub_530c10(arg1 + 0x64)
    
    void** eax_9 = *(arg1 + 0x68)
    
    if (eax_9 != 0)
        *eax_9 = arg1 + 0xb8
else
    if (eax_6 == *(arg1 + 0x6c))
        int32_t* var_358_1 = ecx_3
        sub_530c10(arg1 + 0x64)
    
    int32_t* ecx_5 = *(arg1 + 0x68)
    
    if (ecx_5 != 0)
        *ecx_5 = *(*(arg1 + 0x64) + ((&var_324 - ecx_3) s>> 2 << 2))

*(arg1 + 0x68) += 4
int32_t var_14_2 = 0xffffffff

if (var_24c u>= 8)
    j__free(var_260.d)

int32_t i_3 = 0
int32_t* edi_4 = arg1 + 0x154
int32_t nIDDlgItem_1
int32_t i

do
    int32_t var_264_1 = 7
    int32_t var_268_1 = 0
    int16_t var_278 = 0
    sub_52e720(&var_278, u"lv_front", 8)
    int32_t var_14_3 = 1
    int32_t nIDDlgItem = (&point)[i_3]
    HWND hDlg = *(arg1 + 4)
    nIDDlgItem_1 = nIDDlgItem
    
    if (edi_4 != &var_278)
        sub_52e3c0(edi_4, &var_278, 0, 0xffffffff)
        nIDDlgItem = nIDDlgItem_1
    
    edi_4[0x15] = 5
    edi_4[0x16] = 1
    HWND eax_11 = GetDlgItem(hDlg, nIDDlgItem)
    edi_4[-1] = eax_11
    sub_6c0100(&edi_4[-2], eax_11)
    int32_t ecx_11 = *(arg1 + 0x68)
    void* var_320 = &edi_4[-2]
    int32_t edx_1
    
    if (&var_320 u< ecx_11)
        edx_1 = *(arg1 + 0x64)
    
    if (&var_320 u>= ecx_11 || edx_1 u> &var_320)
        int32_t edx_6 = *(arg1 + 0x6c)
        
        if (ecx_11 == edx_6 && (edx_6 - ecx_11) s>> 2 u< 1)
            int32_t ecx_21 = (ecx_11 - *(arg1 + 0x64)) s>> 2
            
            if (0x3fffffff - ecx_21 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_8 = (edx_6 - *(arg1 + 0x64)) s>> 2
            uint32_t ecx_24 = edx_8 u>> 1
            int32_t edx_9
            
            if (0x3fffffff - ecx_24 u>= edx_8)
                edx_9 = edx_8 + ecx_24
            else
                edx_9 = 0
            
            if (edx_9 u< ecx_21 + 1)
                edx_9 = ecx_21 + 1
            
            sub_530c80(arg1 + 0x64, edx_9)
        
        void** eax_28 = *(arg1 + 0x68)
        
        if (eax_28 != 0)
            *eax_28 = &edi_4[-2]
    else
        int32_t edx_2 = *(arg1 + 0x6c)
        nIDDlgItem_1 = (&var_320 - edx_1) s>> 2
        
        if (ecx_11 == edx_2 && (edx_2 - ecx_11) s>> 2 u< 1)
            int32_t ecx_13 = (ecx_11 - *(arg1 + 0x64)) s>> 2
            
            if (0x3fffffff - ecx_13 u< 1)
                sub_743191("vector<T> too long")
                noreturn
            
            int32_t edx_4 = (edx_2 - *(arg1 + 0x64)) s>> 2
            uint32_t ecx_16 = edx_4 u>> 1
            int32_t edx_5
            
            if (0x3fffffff - ecx_16 u>= edx_4)
                edx_5 = edx_4 + ecx_16
            else
                edx_5 = 0
            
            if (edx_5 u< ecx_13 + 1)
                edx_5 = ecx_13 + 1
            
            sub_530c80(arg1 + 0x64, edx_5)
        
        int32_t* ecx_19 = *(arg1 + 0x68)
        
        if (ecx_19 != 0)
            *ecx_19 = *(*(arg1 + 0x64) + (nIDDlgItem_1 << 2))
    
    *(arg1 + 0x68) += 4
    int32_t var_14_4 = 0xffffffff
    
    if (var_264_1 u>= 8)
        j__free(var_278.d)
    
    edi_4 = &edi_4[0xcd]
    i = i_3 + 1
    i_3 = i
while (i s< 2)
int16_t var_2f0
int32_t lParam_1

for (int32_t i_1 = 0; i_1 s< 2; i_1 += 1)
    int16_t* edx_10 = (&point_1)[i_1]
    int32_t var_2dc_1 = 7
    int32_t var_2e0_1 = 0
    var_2f0 = 0
    int32_t ecx_27
    
    if (*edx_10 != 0)
        int16_t* ecx_28 = edx_10
        void* eax_30
        
        do
            eax_30.w = *ecx_28
            ecx_28 = &ecx_28[1]
        while (eax_30.w != 0)
        ecx_27 = (ecx_28 - &ecx_28[1]) s>> 1
    else
        ecx_27 = 0
    
    sub_52e720(&var_2f0, edx_10, ecx_27)
    int16_t* eax_31 = &var_2f0
    
    if (var_2dc_1 u>= 8)
        eax_31 = var_2f0.d
    
    void var_230
    _wcscpy_s(&var_230, 0x104, eax_31)
    void* var_288_1 = &var_230
    lParam_1 = 1
    int32_t var_284_1 = 0x104
    WPARAM wParam_2 = *(arg1 + 0x148)
    *(arg1 + 0x148) = wParam_2 + 1
    HWND hWnd_1 = *(arg1 + 0xbc)
    
    if (hWnd_1 != 0)
        SendMessageW(hWnd_1, 0x133e, wParam_2, &lParam_1)
    
    if (var_2dc_1 u>= 8)
        j__free(var_2f0.d)

RECT var_2b0
__builtin_memset(&var_2b0, 0, 0x10)
GetWindowRect(*(arg1 + 0xbc), &var_2b0)
HWND hWnd_2 = *(arg1 + 0xbc)

if (hWnd_2 != 0)
    SendMessageW(hWnd_2, 0x1328, 0, &var_2b0)

uint128_t point_2
point_2.d = var_2b0.left
point_2:4.d = var_2b0.top
point_2:8.d = var_2b0.right
point_2:0xc.d = var_2b0.bottom
HWND hWnd = *(arg1 + 4)
var_2f0.o = point_2
point_1 = point_2
int32_t xmm0 = _mm_bsrli_si128(point_2, 4)
ScreenToClient(hWnd, &point_1)
uint128_t xmm1 = var_2f0.o
int32_t point_3 = _mm_bsrli_si128(xmm1, 8)
int32_t xmm1_1 = _mm_bsrli_si128(xmm1, 0xc)
point = point_3
ScreenToClient(*(arg1 + 4), &point)
var_2b0.top = xmm0
var_2b0.right = point
var_2b0.bottom = xmm1_1
int32_t i_4 = 2
var_2b0.left = &point_1[-1]
void* esi_5 = arg1 + 0x150
int32_t i_2

do
    LRESULT hWnd_3 = *esi_5
    
    if (hWnd_3 != 0)
        hWnd_3 = SendMessageW(hWnd_3, 0x1037, 0, 0)
    
    HWND hWnd_13 = *esi_5
    
    if (hWnd_13 != 0)
        SendMessageW(hWnd_13, 0x1036, 0, hWnd_3 | 0x31)
    
    int32_t var_2b4_1 = 7
    int32_t var_2b8_1 = 0
    int16_t var_2c8 = 0
    sub_52e720(&var_2c8, 0xaee058, 2)
    int32_t var_14_5 = 2
    int32_t var_2dc_2 = 7
    int32_t var_2e0_2 = 0
    var_2f0 = 0
    sub_52e720(&var_2f0, 0xaee060, 2)
    var_14_5.b = 3
    LRESULT hWnd_4 = *esi_5
    
    if (hWnd_4 != 0)
        hWnd_4 = SendMessageW(hWnd_4, 0x101f, 0, 0)
    
    LRESULT wParam = SendMessageW(hWnd_4, 0x1200, 0, 0)
    int16_t* ecx_33 = &var_2c8
    
    if (var_2b4_1 u>= 8)
        ecx_33 = var_2c8.d
    
    int16_t* var_310_1 = ecx_33
    HWND hWnd_14 = *esi_5
    int32_t lParam = 7
    int32_t var_318_1 = 0
    int32_t var_314_1 = 0x14
    
    if (hWnd_14 != 0)
        SendMessageW(hWnd_14, 0x1061, wParam, &lParam)
    
    int16_t* var_358_19 = &var_2f0
    sub_6c6920(esi_5 + 0x8c, &nIDDlgItem_1, *(esi_5 + 0x8c) + wParam * 0x18, &var_2f0)
    
    if (var_2dc_2 u>= 8)
        j__free(var_2f0.d)
    
    int32_t var_14_6 = 0xffffffff
    int32_t var_2dc_3 = 7
    int32_t var_2e0_3 = 0
    var_2f0 = 0
    
    if (var_2b4_1 u>= 8)
        j__free(var_2c8.d)
    
    int32_t var_2b4_2 = 7
    int32_t var_2b8_2 = 0
    var_2c8 = 0
    sub_52e720(&var_2c8, 0xaefc90, 5)
    int32_t var_14_7 = 4
    var_2f0 = 0
    int32_t var_2dc_4 = 7
    int32_t var_2e0_4 = 0
    sub_52e720(&var_2f0, u"world", 5)
    var_14_7.b = 5
    LRESULT hWnd_5 = *esi_5
    
    if (hWnd_5 != 0)
        hWnd_5 = SendMessageW(hWnd_5, 0x101f, 0, 0)
    
    LRESULT wParam_1 = SendMessageW(hWnd_5, 0x1200, 0, 0)
    int16_t* ecx_39 = &var_2c8
    
    if (var_2b4_2 u>= 8)
        ecx_39 = var_2c8.d
    
    int16_t* var_310_2 = ecx_39
    HWND hWnd_15 = *esi_5
    lParam = 7
    int32_t var_318_2 = 0
    int32_t var_314_2 = 0x14
    
    if (hWnd_15 != 0)
        SendMessageW(hWnd_15, 0x1061, wParam_1, &lParam)
    
    int16_t* var_358_24 = &var_2f0
    sub_6c6920(esi_5 + 0x8c, &point_1, *(esi_5 + 0x8c) + wParam_1 * 0x18, &var_2f0)
    
    if (var_2dc_4 u>= 8)
        j__free(var_2f0.d)
    
    int32_t var_14_8 = 0xffffffff
    int32_t var_2dc_5 = 7
    int32_t var_2e0_5 = 0
    var_2f0 = 0
    
    if (var_2b4_2 u>= 8)
        j__free(var_2c8.d)
    
    int32_t var_2b4_3 = 7
    int32_t var_2b8_3 = 0
    var_2c8 = 0
    sub_52e720(&var_2c8, 0xaefc9c, 4)
    int32_t var_14_9 = 6
    var_2f0 = 0
    int32_t var_2dc_6 = 7
    int32_t var_2e0_6 = 0
    sub_52e720(&var_2f0, u"layer", 5)
    var_14_9.b = 7
    LRESULT hWnd_6 = *esi_5
    
    if (hWnd_6 != 0)
        hWnd_6 = SendMessageW(hWnd_6, 0x101f, 0, 0)
    
    int16_t* ecx_45 = &var_2c8
    LRESULT wParam_3 = SendMessageW(hWnd_6, 0x1200, 0, 0)
    lParam = 7
    
    if (var_2b4_3 u>= 8)
        ecx_45 = var_2c8.d
    
    HWND hWnd_7 = *esi_5
    int32_t var_318_3 = 0
    int32_t var_314_3 = 0x14
    int16_t* var_310_3 = ecx_45
    
    if (hWnd_7 != 0)
        SendMessageW(hWnd_7, 0x1061, wParam_3, &lParam)
    
    int16_t* var_358_29 = &var_2f0
    sub_6c6920(esi_5 + 0x8c, &point, *(esi_5 + 0x8c) + wParam_3 * 0x18, esi_5 + 0x8c)
    
    if (var_2dc_6 u>= 8)
        j__free(var_2f0.d)
    
    int32_t var_14_10 = 0xffffffff
    int32_t var_2dc_7 = 7
    int32_t var_2e0_7 = 0
    var_2f0 = 0
    
    if (var_2b4_3 u>= 8)
        j__free(var_2c8.d)
    
    sub_52e820(&var_2f0, 0xaefca8)
    int32_t var_14_11 = 8
    sub_52e820(&var_2c8, u"appear")
    var_14_11.b = 9
    HWND hWnd_8 = *esi_5
    
    if (hWnd_8 != 0)
        hWnd_8 = SendMessageW(hWnd_8, 0x101f, 0, 0)
    
    void* var_358_32 = esi_5 - 4
    sub_6c4880(esi_5 - 4, SendMessageW(hWnd_8, 0x1200, 0, 0), &var_2c8, &var_2f0, 0x14)
    
    if (var_2b4_3 u>= 8)
        j__free(var_2c8.d)
    
    int32_t var_14_12 = 0xffffffff
    int32_t var_2b4_4 = 7
    int32_t var_2b8_4 = 0
    var_2c8 = 0
    
    if (var_2dc_7 u>= 8)
        j__free(var_2f0.d)
    
    sub_52e820(&lParam_1, 0xaef088)
    int32_t var_14_13 = 0xa
    int16_t var_248
    sub_52e820(&var_248, 0xaef080)
    var_14_13.b = 0xb
    HWND hWnd_9 = *esi_5
    
    if (hWnd_9 != 0)
        hWnd_9 = SendMessageW(hWnd_9, 0x101f, 0, 0)
    
    WPARAM eax_50
    int32_t ecx_52
    eax_50, ecx_52 = SendMessageW(hWnd_9, 0x1200, 0, 0)
    int32_t var_358_35 = ecx_52
    sub_6c4880(esi_5 - 4, eax_50, &var_248, &lParam_1, 0x14)
    int32_t var_234
    
    if (var_234 u>= 8)
        j__free(var_248.d)
    
    int32_t var_14_14 = 0xffffffff
    var_234 = 7
    int32_t var_238_1 = 0
    var_248 = 0
    int32_t var_280
    
    if (var_280 u>= 8)
        j__free(lParam_1)
    
    var_280 = 7
    int32_t var_284_2 = 0
    lParam_1.w = 0
    sub_6c65c0(esi_5 - 4)
    int128_t xmm0_2
    xmm0_2.d = var_2b0.left
    xmm0_2:4.d = var_2b0.top
    xmm0_2:8.d = var_2b0.right
    xmm0_2:0xc.d = var_2b0.bottom
    *(esi_5 + 0x44) = xmm0_2
    esi_5 += 0x334
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
int16_t* var_364_22
var_364_22.o = zx.o(0)
sub_6c2800(arg1, var_364_22)
WPARAM wParam_4 = *(arg1 + 0x7cc)
HWND hWnd_10 = *(arg1 + 0xbc)

if (hWnd_10 != 0)
    SendMessageW(hWnd_10, 0x130c, wParam_4, 0)

sub_5920f0(arg1, wParam_4)
HWND hWnd_11 = *(arg1 + 4)

if (hWnd_11 != 0)
    UpdateWindow(hWnd_11)

int32_t hWnd_12 = *(arg1 + 4)

if (hWnd_12 != 0 && (GetWindowLongW(hWnd_12, 0xfffffff0) & 0x10000000) s<= 0)
    ShowWindow(*(arg1 + 4), SW_SHOW)

hWnd_12.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_348)
return hWnd_12
