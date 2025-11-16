// 函数: sub_64002e
// 地址: 0x64002e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg2:1.b += arg1
unimplemented  {enter 0xf8d5, 0xff}
*(arg4 - 3) = 9
sub_5cd480(arg5 + 0x5a0)
*(arg4 - 3) = 0xa
sub_5cd480(arg5 + 0x630)
TEB* fsbase
fsbase->NtTib.ExceptionList = *(arg4 - 0xb)
*(arg4 + 1)
return arg5
