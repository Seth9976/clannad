// 函数: sub_4d7bd0
// 地址: 0x4d7bd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_4d1c30(arg1, arg4, &arg3[7], 0x10)
POINT point
GetCursorPos(&point)
int32_t y = point.y
int32_t x = point.x

if (*arg3 == 0 || arg3[2] != arg2 || arg3[1] != 1)
    arg3[3] = x - arg3[7]
    arg3[4] = y - arg3[8]
    arg3[5] = arg3[9] - arg3[7]
    arg3[6] = arg3[0xa] - arg3[8]

int32_t edx_1 = x - arg3[3]
int32_t ecx_1 = y - arg3[4]
arg3[9] = arg3[5] + edx_1
int32_t result = arg3[6] + ecx_1
arg3[2] = arg2
*arg3 = 2
arg3[1] = 1
arg3[7] = edx_1
arg3[8] = ecx_1
arg3[0xa] = result
return result
