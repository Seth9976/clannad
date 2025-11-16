// 函数: sub_6c65c0
// 地址: 0x6c65c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc522
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4d4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 4)
HWND hWnd_1

if (hWnd != 0)
    hWnd_1 = SendMessageW(hWnd, 0x101f, 0, 0)
else
    hWnd_1 = nullptr

LRESULT wParam_3
int32_t ecx
wParam_3, ecx = SendMessageW(hWnd_1, 0x1200, 0, 0)
LRESULT wParam = wParam_3
WPARAM wParam_1 = 0
LRESULT wParam_2 = wParam

if (wParam s> 0)
    int32_t ebx = 0
    
    do
        int32_t var_418_1 = 7
        int32_t var_41c_1 = 0
        int16_t var_42c = 0
        sub_52e720(&var_42c, &data_ad7c90, nullptr)
        int32_t var_8_1 = 0
        void** eax_4 = *(arg1 + 0x90) + ebx
        int16_t var_48c
        int16_t* eax_5 = sub_548cb0(eax_4, u"header_", &var_48c, eax_4)
        var_8_1.b = 1
        int16_t var_45c
        int16_t* eax_6 = sub_532b80(eax_5, eax_5, &var_45c, u"_width")
        var_8_1.b = 2
        HWND hWnd_4 = *(arg1 + 4)
        int32_t* eax_7
        
        if (hWnd_4 != 0)
            eax_7 = SendMessageW(hWnd_4, 0x101d, wParam_1, 0)
        else
            eax_7 = nullptr
        
        int32_t* eax_8 = sub_6c2460(arg1, eax_6, eax_7, &var_42c)
        int32_t var_448
        
        if (var_448 u>= 8)
            j__free(var_45c.d)
        
        var_448 = 7
        int32_t var_44c_1 = 0
        var_45c = 0
        int32_t var_478
        
        if (var_478 u>= 8)
            j__free(var_48c.d)
        
        int32_t var_8_2 = 0xffffffff
        var_478 = 7
        int32_t var_47c_1 = 0
        var_48c = 0
        
        if (var_418_1 u>= 8)
            j__free(var_42c.d)
        
        int32_t* var_4b0_1 = eax_8
        HWND hWnd_2 = *(arg1 + 4)
        int32_t lParam = 2
        
        if (hWnd_2 != 0)
            SendMessageW(hWnd_2, 0x1060, wParam_1, &lParam)
        
        wParam_1 += 1
        ebx += 0x18
    while (wParam_1 s< wParam_2)
    
    wParam = wParam_2

int32_t* esi = nullptr
int32_t lParam_1[0x100]

if (wParam s> 0)
    int32_t ebx_1 = 0
    
    do
        int32_t var_430_1 = 7
        int32_t var_434_1 = 0
        int16_t var_444 = 0
        sub_52e720(&var_444, &data_ad7c90, nullptr)
        int32_t var_8_3 = 3
        void** eax_11 = *(arg1 + 0x90) + ebx_1
        int16_t var_4a4
        void** eax_12 = sub_548cb0(eax_11, u"header_", &var_4a4, eax_11)
        var_8_3.b = 4
        var_8_3.b = 5
        int16_t var_474
        lParam_1[esi] =
            sub_6c2460(arg1, sub_532b80(eax_12, eax_12, &var_474, _order"), esi, &var_444)
        int32_t var_460
        
        if (var_460 u>= 8)
            j__free(var_474.d)
        
        var_460 = 7
        int32_t var_464_1 = 0
        var_474 = 0
        int32_t var_490
        
        if (var_490 u>= 8)
            j__free(var_4a4.d)
        
        int32_t var_8_4 = 0xffffffff
        var_490 = 7
        int32_t var_494_1 = 0
        var_4a4 = 0
        
        if (var_430_1 u>= 8)
            j__free(var_444.d)
        
        esi += 1
        ebx_1 += 0x18
    while (esi s< wParam_2)
    
    wParam = wParam_2

HWND hWnd_3 = *(arg1 + 4)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x101f, 0, 0)

LRESULT result = SendMessageW(hWnd_3, 0x1212, wParam, &lParam_1)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
