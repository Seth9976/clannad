// 函数: sub_748800
// 地址: 0x748800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[-1] = 0xfffffffe
TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = &data_74880e
*arg1
return arg2
