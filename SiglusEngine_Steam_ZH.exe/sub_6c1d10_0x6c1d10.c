// 函数: sub_6c1d10
// 地址: 0x6c1d10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

POINT point
ClientToScreen(*(data_bac454 + 4), &point)
*arg1 = point.x
arg1[1] = point.y
return arg1
