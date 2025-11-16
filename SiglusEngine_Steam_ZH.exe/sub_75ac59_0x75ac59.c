// 函数: sub_75ac59
// 地址: 0x75ac59
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg2[-7] = arg1
arg2[-1] = 0xfffffffe
TEB* fsbase
fsbase->NtTib.ExceptionList = arg2[-4]
*arg2
*arg2 = &data_75ac68
*arg2
