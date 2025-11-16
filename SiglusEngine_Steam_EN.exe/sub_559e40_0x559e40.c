// 函数: sub_559e40
// 地址: 0x559e40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
LRESULT result = __security_cookie ^ &__saved_ebp
LRESULT result_1 = result

if (arg2 != 0)
    arg3[1] = arg6
    *arg3 = 0
    RECT rect
    GetWindowRect(arg2, &rect)
    int32_t left = rect.left
    int32_t top = rect.top
    arg3[4] = rect.right - left
    result = rect.bottom - top
    arg3[2] = left
    arg3[3] = top
    arg3[5] = result
    
    if (arg4 != 0xffffffff)
        arg3[6] = SendMessageA(GetDlgItem(arg2, arg4), 0x1027, 0, 0)
        result = sub_4c1810(arg2, arg4)
        arg3[7] = result
        
        if (arg5 != 0)
            result = sub_559de0(result, arg2, arg3, arg4)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
