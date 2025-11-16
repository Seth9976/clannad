// 函数: sub_4d5720
// 地址: 0x4d5720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
BOOL result = __security_cookie ^ &__saved_ebp
BOOL result_1 = result

if (arg1 != 0)
    UpdateWindow(arg1)
    RECT rect
    GetWindowRect(arg1, &rect)
    int32_t cx = rect.right - rect.left
    int32_t cy = rect.bottom - rect.top
    int32_t eax_2 = GetSystemMetrics(SM_CXSCREEN)
    int32_t esi_2 = eax_2 - cx
    int32_t X
    
    if (eax_2 - cx s< 0)
        X = neg.d(neg.d(esi_2) s>> 1)
    else
        X = esi_2 s>> 1
    
    int32_t eax_3 = GetSystemMetrics(SM_CYSCREEN)
    int32_t eax_4 = eax_3 - cy
    int32_t Y
    
    if (eax_3 - cy s< 0)
        Y = neg.d(neg.d(eax_4) s>> 1)
    else
        Y = eax_4 s>> 1
    
    result = SetWindowPos(arg1, 0xfffffffe, X, Y, cx, cy, SWP_SHOWWINDOW)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
