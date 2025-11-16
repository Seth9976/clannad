// 函数: sub_6c26c0
// 地址: 0x6c26c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cc0f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_esi
int32_t var_84 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = *(arg1 + 4)

if (hWnd != 0)
    WINDOWPLACEMENT lpwndpl
    lpwndpl.length = 0x2c
    GetWindowPlacement(hWnd, &lpwndpl)
    int32_t var_4c_1 = 7
    int32_t var_50_1 = 0
    int16_t var_60 = 0
    sub_52e720(&var_60, &data_ad7c90, nullptr)
    int32_t var_c_1 = 0
    int32_t var_64_1 = 7
    int32_t var_68_1 = 0
    int16_t var_78 = 0
    sub_52e720(&var_78, u"window_rect", 0xb)
    var_c_1.b = 1
    int32_t top = lpwndpl.rcNormalPosition.top
    int32_t right = lpwndpl.rcNormalPosition.right
    int32_t bottom = lpwndpl.rcNormalPosition.bottom
    sub_6c20c0(arg1, &var_78, &var_60, lpwndpl.rcNormalPosition.left)
    
    if (var_64_1 u>= 8)
        j__free(var_78.d)
    
    hWnd = nullptr
    int32_t var_64_2 = 7
    int32_t var_68_2 = 0
    var_78 = 0
    
    if (var_4c_1 u>= 8)
        hWnd = j__free(var_60.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_7c)
return hWnd
