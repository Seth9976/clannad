// 函数: __SEH_epilog4
// 地址: 0x10004335
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

TEB* fsbase
fsbase->NtTib.ExceptionList = arg1[-4]
*arg1
*arg1 = __return_addr
