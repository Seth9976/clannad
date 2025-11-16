// 函数: sub_6c1c80
// 地址: 0x6c1c80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

POINT point
ScreenToClient(*(arg1 + 4), &point)
*arg2 = point.x
arg2[1] = point.y
return arg2
