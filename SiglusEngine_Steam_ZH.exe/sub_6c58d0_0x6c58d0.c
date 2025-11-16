// 函数: sub_6c58d0
// 地址: 0x6c58d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b0438
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_34
int32_t eax_2 = __security_cookie ^ &var_34
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x264) = 0

if (arg2 != 0)
    HWND hWnd_2 = *(arg1 + 4)
    *(arg1 + 0x280) = hWnd_2
    *(arg1 + 0x284) = zx.d(GetWindowLongW(hWnd_2, 0xfffffff4))
    *(arg1 + 0x28c) = *(arg1 + 0x268)
    int32_t eax_8 = *(arg1 + 0x26c)
    *(arg1 + 0x288) = 0xffffff42
    *(arg1 + 0x290) = eax_8
    HWND hWnd_3 = *(arg1 + 0x1d0)
    LRESULT eax_9
    
    if (hWnd_3 != 0)
        eax_9 = SendMessageW(hWnd_3, 0x147, 0, 0)
    else
        eax_9 = 0
    
    HWND hWnd = *(arg1 + 4)
    *(arg1 + 0x2c8) = eax_9
    uint32_t wParam = zx.d(GetWindowLongW(hWnd, 0xfffffff4))
    SendMessageW(GetWindowLongW(*(arg1 + 4), 0xfffffff8), 0x4e, wParam, arg1 + 0x280)
    int16_t* eax_12 = sub_6c3430(arg1 + 0x1cc, &var_34, *(arg1 + 0x2c8))
    int32_t var_c_1 = 0
    sub_6c4d60(arg1, *(arg1 + 0x268), *(arg1 + 0x26c), eax_12)
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34)
    
    HWND hWnd_4 = *(arg1 + 4)
    *(arg1 + 0x2cc) = hWnd_4
    *(arg1 + 0x2d0) = zx.d(GetWindowLongW(hWnd_4, 0xfffffff4))
    *(arg1 + 0x2d8) = *(arg1 + 0x268)
    HWND hWnd_1 = *(arg1 + 4)
    *(arg1 + 0x2dc) = *(arg1 + 0x26c)
    int32_t eax_17 = *(arg1 + 0x2c8)
    *(arg1 + 0x2d4) = 0xffffff41
    *(arg1 + 0x314) = eax_17
    WPARAM wParam_1 = zx.d(GetWindowLongW(hWnd_1, 0xfffffff4))
    PostMessageW(GetWindowLongW(*(arg1 + 4), 0xfffffff8), 0x4e, wParam_1, arg1 + 0x2cc)

BOOL hWnd_5 = *(arg1 + 0x1d0)

if (hWnd_5 != 0)
    hWnd_5 = DestroyWindow(hWnd_5)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_34)
return hWnd_5
