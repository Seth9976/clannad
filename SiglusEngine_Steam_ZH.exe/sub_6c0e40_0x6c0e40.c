// 函数: sub_6c0e40
// 地址: 0x6c0e40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t* esi = arg3
int32_t* var_2c = esi
int32_t result
result.b = esi[4].b
RECT rect_1
rect_1.left = 0
rect_1.top = 0
rect_1.right = 0
rect_1.bottom = 0
RECT rect
int32_t* edi

if (result.b != 0)
label_6c0e8b:
    HWND hWnd = *(arg1 + 4)
    __builtin_memset(&rect, 0, 0x10)
    GetWindowRect(hWnd, &rect)
    int32_t eax_3
    int32_t edx_1
    edx_1:eax_3 = sx.q(rect.right - rect.left)
    int32_t eax_7
    int32_t edx_2
    edx_2:eax_7 = sx.q(rect.bottom - rect.top)
    int32_t eax_10 = ((eax_7 - edx_2) s>> 1) + rect.top
    sub_6c29e0(eax_10, edx_2, &rect_1, ((eax_3 - edx_1) s>> 1) + rect.left, eax_10)
    esi = var_2c
label_6c0edb:
    result = esi[2]
    
    if (result u> 3)
        edi = var_2c
    else
        switch (result)
            case 0
                edi = rect_1.left - *arg2
            case 1
                edi = rect_1.right - *arg2
            case 2
                edi = rect_1.left - arg2[2]
            case 3
                edi = rect_1.right - arg2[2]
    
    if (data_4ebe458 != 0)
        *arg2 += edi
    
    if (data_4ebe459 != 0)
        arg2[2] += edi
else
    if (*esi != 0)
        if (result.b != 0)
            goto label_6c0e8b
        
        HWND hWnd_2 = *esi
        
        if (hWnd_2 != 0)
            GetWindowRect(hWnd_2, &rect_1)
        
        goto label_6c0edb
    
    edi = var_2c

result.b = *(esi + 0x11)

if (result.b != 0)
label_6c0f3e:
    HWND hWnd_1 = *(arg1 + 4)
    __builtin_memset(&rect, 0, 0x10)
    GetWindowRect(hWnd_1, &rect)
    int32_t eax_13
    int32_t edx_3
    edx_3:eax_13 = sx.q(rect.right - rect.left)
    int32_t eax_17
    int32_t edx_4
    edx_4:eax_17 = sx.q(rect.bottom - rect.top)
    int32_t eax_20 = ((eax_17 - edx_4) s>> 1) + rect.top
    sub_6c29e0(eax_20, edx_4, &rect_1, ((eax_13 - edx_3) s>> 1) + rect.left, eax_20)
    esi = var_2c
label_6c0f86:
    result = esi[3]
    
    switch (result)
        case 0
            edi = rect_1.top - arg2[1]
        case 1
            edi = rect_1.bottom - arg2[1]
        case 2
            edi = rect_1.top - arg2[3]
        case 3
            edi = rect_1.bottom - arg2[3]
    
    if (data_4ebe45a != 0)
        arg2[1] += edi
    
    if (data_4ebe45b != 0)
        arg2[3] += edi
else if (esi[1] != 0)
    if (result.b != 0)
        goto label_6c0f3e
    
    HWND hWnd_3 = esi[1]
    
    if (hWnd_3 != 0)
        GetWindowRect(hWnd_3, &rect_1)
    
    goto label_6c0f86

sub_745f2b(var_8 ^ &__saved_ebp)
return result
