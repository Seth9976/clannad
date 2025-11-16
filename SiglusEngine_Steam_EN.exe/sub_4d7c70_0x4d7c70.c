// 函数: sub_4d7c70
// 地址: 0x4d7c70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4d1c30(arg1, arg5, &arg3[7], 0x10)
POINT point
GetCursorPos(&point)
int32_t y = point.y
int32_t x = point.x
int32_t result

if (*arg3 != 0)
    result = arg2

if (*arg3 == 0 || arg3[2] != result || arg3[1] != 2)
    if (arg4 == 1 || arg4 == 4 || arg4 == 7)
        arg3[3] = x - arg3[7]
    
    if (arg4 == 2 || arg4 == 5 || arg4 == 8)
        arg3[3] = x - arg3[9]
    
    if (arg4 == 3 || arg4 == 4 || arg4 == 5)
        arg3[4] = y - arg3[8]
    
    if (arg4 == 6 || arg4 == 7 || arg4 == 8)
        arg3[4] = y - arg3[0xa]
    
    result = arg2

*arg3 = 2
arg3[2] = result
arg3[1] = 2

if (arg4 == 1 || arg4 == 4 || arg4 == 7)
    result = x - arg3[3]
    arg3[7] = result

if (arg4 == 2 || arg4 == 5 || arg4 == 8)
    arg3[9] = x - arg3[3]

if (arg4 == 3 || arg4 == 4 || arg4 == 5)
    result = y - arg3[4]
    arg3[8] = result

if (arg4 == 6 || arg4 == 7 || arg4 == 8)
    arg3[0xa] = y - arg3[4]

return result
