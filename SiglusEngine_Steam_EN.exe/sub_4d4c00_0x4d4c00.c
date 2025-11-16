// 函数: sub_4d4c00
// 地址: 0x4d4c00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
enum SET_WINDOW_POS_FLAGS uFlags = 0x60
enum WINDOW_STYLE dwStyle = 0x82000000
RECT rect
rect.left = 0

if (data_1c051e8 == 0)
    dwStyle = data_1c051e4

if (arg3 == 0)
    uFlags = 0x70

rect.top = 0

if (data_1311175 == 0)
    rect.right = arg1
    rect.bottom = arg2
    BOOL bMenu_1
    
    if (data_1af476c != 0)
        bMenu_1 = 1
    else
        bMenu_1 = 0
    
    AdjustWindowRect(&rect, dwStyle, bMenu_1)
    int32_t cx = rect.right - rect.left
    int32_t cy_1 = rect.bottom - rect.top
    int32_t eax_10 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_5 = eax_10 - cx
    int32_t X_1
    
    if (eax_10 - cx s< 0)
        X_1 = neg.d(neg.d(esi_5) s>> 1)
    else
        X_1 = esi_5 s>> 1
    
    int32_t eax_11 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_12 = eax_11 - cy_1
    int32_t Y
    
    if (eax_11 - cy_1 s< 0)
        Y = neg.d(neg.d(eax_12) s>> 1)
    else
        Y = eax_12 s>> 1
    
    SetWindowPos(data_7027bc, 0xfffffffe, X_1, Y, cx, cy_1, uFlags)
    
    if (data_1af476c != 0)
        sub_4d4b10(cx, cy_1)
else
    rect.right = GetSystemMetrics(SM_CXSCREEN)
    rect.bottom = GetSystemMetrics(SM_CYSCREEN)
    BOOL bMenu
    
    if (data_1af476c == 0 || data_1c051e0 == 0)
        bMenu = 0
    else
        bMenu = 1
    
    AdjustWindowRect(&rect, dwStyle, bMenu)
    int32_t cx_1 = rect.right - rect.left
    int32_t cy = rect.bottom - rect.top
    int32_t eax_5 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_1 = eax_5 - cx_1
    int32_t X
    
    if (eax_5 - cx_1 s< 0)
        X = neg.d(neg.d(esi_1) s>> 1)
    else
        X = esi_1 s>> 1
    
    int32_t Y_1 = 0
    
    if (data_1c051e8 == 0)
        Y_1 = neg.d(GetSystemMetrics(SM_CYDLGFRAME) + GetSystemMetrics(SM_CYCAPTION))
    
    SetWindowPos(data_7027bc, 0xffffffff, X, Y_1, cx_1, cy, uFlags)

GetWindowRect(data_7027bc, &rect)
data_1c051dc = rect.right - rect.left
int32_t result = rect.bottom - rect.top
data_1c051d8 = result
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
