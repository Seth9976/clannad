// 函数: sub_6c55f0
// 地址: 0x6c55f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cc358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_64 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*(arg1 + 0x264) = 0

if (arg2 != 0)
    HWND hWnd_1 = *(arg1 + 4)
    *(arg1 + 0x280) = hWnd_1
    int16_t eax_5 = GetWindowLongW(hWnd_1, 0xfffffff4)
    bool cond:1_1 = *(arg1 + 0x270) == 0
    *(arg1 + 0x284) = zx.d(eax_5)
    *(arg1 + 0x28c) = *(arg1 + 0x268)
    int32_t eax_8 = *(arg1 + 0x26c)
    *(arg1 + 0x288) = 0xffffff42
    *(arg1 + 0x290) = eax_8
    void* esi_1
    int32_t* var_34
    int32_t var_20
    
    if (cond:1_1)
        int16_t* eax_14 = sub_6c2ec0(arg1 + 0x9c, &var_34)
        esi_1 = arg1 + 0x2ac
        int32_t var_c_3 = 2
        
        if (esi_1 != eax_14)
            sub_52e3c0(esi_1, eax_14, 0, 0xffffffff)
        
        int32_t var_c_4 = 0xffffffff
        
        if (var_20 u>= 8)
            j__free(var_34)
    else
        int32_t* var_4c
        sub_6c2ec0(arg1 + 0x9c, &var_4c)
        int32_t var_c_1 = 0
        int32_t* ecx_1 = &var_4c
        int32_t var_38
        
        if (var_38 u>= 8)
            ecx_1 = var_4c
        
        int32_t var_3c
        void* eax_10 = ecx_1 + (var_3c << 1)
        int32_t* ecx_2 = &var_4c
        
        if (var_38 u>= 8)
            ecx_2 = var_4c
        
        int32_t* var_50 = ecx_2
        sub_6af490(eax_10, &var_54, &var_50, eax_10)
        *(arg1 + 0x27c)
        *(arg1 + 0x274)
        int32_t var_68_3 = *(arg1 + 0x278)
        int16_t* eax_13 = sub_6ad9b0(&var_34)
        esi_1 = arg1 + 0x2ac
        var_c_1.b = 1
        
        if (esi_1 != eax_13)
            sub_52e3c0(esi_1, eax_13, 0, 0xffffffff)
        
        if (var_20 u>= 8)
            j__free(var_34)
        
        int32_t var_c_2 = 0xffffffff
        
        if (var_38 u>= 8)
            j__free(var_4c)
    uint32_t wParam = zx.d(GetWindowLongW(*(arg1 + 4), 0xfffffff4))
    SendMessageW(GetWindowLongW(*(arg1 + 4), 0xfffffff8), 0x4e, wParam, arg1 + 0x280)
    sub_6c4d60(arg1, *(arg1 + 0x268), *(arg1 + 0x26c), esi_1)
    HWND hWnd_2 = *(arg1 + 4)
    *(arg1 + 0x2cc) = hWnd_2
    *(arg1 + 0x2d0) = zx.d(GetWindowLongW(hWnd_2, 0xfffffff4))
    *(arg1 + 0x2d8) = *(arg1 + 0x268)
    int32_t eax_20 = *(arg1 + 0x26c)
    *(arg1 + 0x2d4) = 0xffffff41
    *(arg1 + 0x2dc) = eax_20
    
    if (arg1 + 0x2f8 != esi_1)
        sub_52e3c0(arg1 + 0x2f8, esi_1, 0, 0xffffffff)
    
    WPARAM wParam_1 = zx.d(GetWindowLongW(*(arg1 + 4), 0xfffffff4))
    PostMessageW(GetWindowLongW(*(arg1 + 4), 0xfffffff8), 0x4e, wParam_1, arg1 + 0x2cc)

HWND hWnd_3 = *(arg1 + 4)
*(arg1 + 0x31c) = hWnd_3
*(arg1 + 0x320) = zx.d(GetWindowLongW(hWnd_3, 0xfffffff4))
*(arg1 + 0x328) = *(arg1 + 0x268)
HWND hWnd = *(arg1 + 4)
*(arg1 + 0x32c) = *(arg1 + 0x26c)
*(arg1 + 0x324) = 0xffffff40
*(arg1 + 0x330) = arg3
WPARAM wParam_2 = zx.d(GetWindowLongW(hWnd, 0xfffffff4))
PostMessageW(GetWindowLongW(*(arg1 + 4), 0xfffffff8), 0x4e, wParam_2, arg1 + 0x31c)
HWND hWnd_4 = *(arg1 + 0xa0)

if (hWnd_4 != 0)
    DestroyWindow(hWnd_4)

BOOL hWnd_5 = *(arg1 + 0x138)

if (hWnd_5 != 0)
    hWnd_5 = DestroyWindow(hWnd_5)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return hWnd_5
