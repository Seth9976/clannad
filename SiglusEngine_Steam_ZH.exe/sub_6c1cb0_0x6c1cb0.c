// 函数: sub_6c1cb0
// 地址: 0x6c1cb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

POINT point_1
point_1.x = arg3
point_1.y = arg4
ScreenToClient(*(arg1 + 4), &point_1)
POINT point
point.x = arg5
point.y = arg6
ScreenToClient(*(arg1 + 4), &point)
*arg2 = point_1.x
arg2[1] = point_1.y
arg2[2] = point.x
arg2[3] = point.y
return arg2
