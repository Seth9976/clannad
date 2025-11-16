// 函数: sub_4ec690
// 地址: 0x4ec690
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg3
int32_t result = arg4

if (result != 0xffffffff)
    goto label_4ec6f7

arg1 = *arg3
int32_t* ebx

if (arg1 u< 0x80)
label_4ec6f2:
    result = 1
label_4ec6f7:
    ebx = arg11
    *ebx = 0
    
    if (result == 1)
        *arg5 = zx.d(*arg3)
    else if (result != 2)
        sub_4eba80(arg1, arg2, arg3, arg5, arg6, arg7, arg8, arg9, arg10, ebx)
    else
        *arg5 = zx.d(arg3[1])
else
    if (arg1 u< 0xa0)
        if (arg1 u>= 0xfe)
            goto label_4ec6f2
    else if (arg1 u<= 0xdf || arg1 u>= 0xfe)
        goto label_4ec6f2
    
    ebx = arg11
    result = 0
    *ebx = 0
    sub_4eba80(arg1, arg2, arg3, arg5, arg6, arg7, arg8, arg9, arg10, ebx)

if (arg2 != 0)
    if (*ebx != 0)
        *arg2 = &arg3[8]
        return result
    
    if (result == 1)
        *arg2 = &arg3[1]
        return result
    
    *arg2 = &arg3[2]

return result
