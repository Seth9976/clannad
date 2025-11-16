// 函数: sub_6c1850
// 地址: 0x6c1850
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_54
int32_t eax_1 = __security_cookie ^ &var_54
HWND hWnd_2 = *(arg1 + 4)

if (hWnd_2 == 0)
    hWnd_2.b = 0
    sub_745f2b(eax_1 ^ &var_54)
    return hWnd_2

int32_t ebx
ebx.b = 0
int128_t var_1c = zx.o(0)
RECT rect
__builtin_memset(&rect, 0, 0x10)
GetWindowRect(hWnd_2, &rect)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(rect.right - rect.left)
int32_t eax_8
int32_t edx_1
edx_1:eax_8 = sx.q(rect.bottom - rect.top)
int32_t eax_11 = ((eax_8 - edx_1) s>> 1) + rect.top
sub_6c29e0(eax_11, edx_1, &var_1c, ((eax_4 - edx) s>> 1) + rect.left, eax_11)
GetSystemMetrics(SM_XVIRTUALSCREEN)
int32_t Y = GetSystemMetrics(SM_YVIRTUALSCREEN)
GetSystemMetrics(SM_CXVIRTUALSCREEN)
GetSystemMetrics(SM_CYVIRTUALSCREEN)
HWND hWnd = *(arg1 + 4)
RECT rect_1
__builtin_memset(&rect_1, 0, 0x10)
GetWindowRect(hWnd, &rect_1)
int32_t left = rect_1.left
int32_t bottom = rect_1.bottom
int32_t top = rect_1.top

if (left s> var_1c:8.d - 0x22)
label_6c195a:
    int32_t left_1 = rect_1.left
    int32_t right = rect_1.right
    
    if (left_1 s> var_1c:8.d - 0x22)
        left = var_1c:8.d - 0x22
    
    if (right s< var_1c.d + 0x22)
        left = left_1 - right + 0x22
    
    int32_t Y_1 = top
    
    if (top s> var_1c:0xc.d - 0x22)
        Y_1 = var_1c:0xc.d - 0x22
    
    if (bottom s< var_1c:4.d + 0x22)
        Y_1 = top - bottom + 0x22
    
    HWND hWnd_4 = *(arg1 + 4)
    
    if (hWnd_4 != 0)
        SetWindowPos(hWnd_4, nullptr, left, Y_1, 0, 0, 0x15)
    
    ebx.b = 1
else
    left = rect_1.left
    
    if (rect_1.right s< var_1c.d + 0x22 || top s> var_1c:0xc.d - 0x22
            || bottom s< var_1c:4.d + 0x22)
        goto label_6c195a

BOOL hWnd_3

if ((GetWindowLongW(*(arg1 + 4), 0xfffffff0) & 0xc00000) != 0)
    HWND hWnd_1 = *(arg1 + 4)
    __builtin_memset(&rect, 0, 0x10)
    GetWindowRect(hWnd_1, &rect)
    
    if (rect.top s>= Y)
        enum SYSTEM_METRICS_INDEX nIndex
        
        if (GetWindowLongW(*(arg1 + 4), 0xffffffec) s>= 0)
            nIndex = SM_CYCAPTION
        else
            nIndex = SM_CYSMCAPTION
        
        int32_t eax_21 = GetSystemMetrics(nIndex)
        hWnd_3 = var_1c:0xc.d - eax_21
        
        if (rect.top s> hWnd_3)
            rect.top = hWnd_3
            sub_6c1120(arg1, rect.left, hWnd_3)
            ebx.b = 1
    else
        hWnd_3 = *(arg1 + 4)
        rect.top = Y
        
        if (hWnd_3 != 0)
            SetWindowPos(hWnd_3, nullptr, rect.left, Y, 0, 0, 0x15)
        
        ebx.b = 1

hWnd_3.b = ebx.b
sub_745f2b(eax_1 ^ &var_54)
return hWnd_3
