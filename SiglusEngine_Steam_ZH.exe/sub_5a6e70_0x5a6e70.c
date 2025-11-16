// 函数: sub_5a6e70
// 地址: 0x5a6e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

SelectObject(*(arg1 + 0xfc), arg5)
SetTextColor(*(arg1 + 0xfc), 0)
SetBkMode(*(arg1 + 0xfc), 1)
arg5.w = arg2
arg5:2.w = 0
return TextOutW(*(arg1 + 0xfc), arg3, arg4, &arg5, 1)
