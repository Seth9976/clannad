// 函数: sub_6c6290
// 地址: 0x6c6290
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc4b2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4bc = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_4a8 = edi
HWND hWnd = *(edi + 4)
HWND hWnd_1

if (hWnd != 0)
    hWnd_1 = SendMessageW(hWnd, 0x101f, 0, 0)
else
    hWnd_1 = nullptr

LRESULT wParam = SendMessageW(hWnd_1, 0x1200, 0, 0)
WPARAM wParam_1 = 0

if (wParam s> 0)
    int32_t var_4ac_1 = 0
    
    do
        HWND hWnd_2 = *(edi + 4)
        LRESULT edi_1
        
        if (hWnd_2 != 0)
            edi_1 = SendMessageW(hWnd_2, 0x101d, wParam_1, 0)
        else
            edi_1 = 0
        
        int32_t var_418_1 = 7
        int32_t var_41c_1 = 0
        int16_t var_42c = 0
        sub_52e720(&var_42c, &data_ad7c90, nullptr)
        int32_t var_8_1 = 0
        void** eax_6 = *(var_4a8 + 0x90) + var_4ac_1
        int16_t var_4a4
        int16_t* eax_7 = sub_548cb0(eax_6, u"header_", &var_4a4, eax_6)
        var_8_1.b = 1
        var_8_1.b = 2
        edi = var_4a8
        int16_t var_45c
        sub_6c1f80(edi, sub_532b80(eax_7, eax_7, &var_45c, u"_width"), edi_1, &var_42c)
        int32_t var_448
        
        if (var_448 u>= 8)
            j__free(var_45c.d)
        
        var_448 = 7
        int32_t var_44c_1 = 0
        var_45c = 0
        int32_t var_490
        
        if (var_490 u>= 8)
            j__free(var_4a4.d)
        
        int32_t var_8_2 = 0xffffffff
        var_490 = 7
        int32_t var_494_1 = 0
        var_4a4 = 0
        
        if (var_418_1 u>= 8)
            j__free(var_42c.d)
        
        var_4ac_1 += 0x18
        wParam_1 += 1
    while (wParam_1 s< wParam)

HWND hWnd_3 = *(edi + 4)

if (hWnd_3 != 0)
    hWnd_3 = SendMessageW(hWnd_3, 0x101f, 0, 0)

int32_t lParam[0x100]
LRESULT result = SendMessageW(hWnd_3, 0x1211, wParam, &lParam)
int32_t esi = 0

if (wParam s> 0)
    int32_t edi_2 = 0
    
    do
        int32_t var_430_1 = 7
        int32_t var_434_1 = 0
        int16_t var_444 = 0
        sub_52e720(&var_444, &data_ad7c90, nullptr)
        int32_t var_8_3 = 3
        void** eax_11 = *(var_4a8 + 0x90) + edi_2
        int16_t var_48c
        void** eax_12 = sub_548cb0(eax_11, u"header_", &var_48c, eax_11)
        var_8_3.b = 4
        var_8_3.b = 5
        int16_t var_474
        sub_6c1f80(var_4a8, sub_532b80(eax_12, eax_12, &var_474, u"_order"), lParam[esi], &var_444)
        int32_t var_460
        
        if (var_460 u>= 8)
            j__free(var_474.d)
        
        var_460 = 7
        int32_t var_464_1 = 0
        var_474 = 0
        int32_t var_478
        
        if (var_478 u>= 8)
            j__free(var_48c.d)
        
        result = 0
        int32_t var_8_4 = 0xffffffff
        var_478 = 7
        int32_t var_47c_1 = 0
        var_48c = 0
        
        if (var_430_1 u>= 8)
            result = j__free(var_444.d)
        
        esi += 1
        edi_2 += 0x18
    while (esi s< wParam)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
