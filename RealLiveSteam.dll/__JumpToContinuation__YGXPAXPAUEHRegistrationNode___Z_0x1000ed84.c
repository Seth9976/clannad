// 函数: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
// 地址: 0x1000ed84
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

void* var_8 = arg2 + 0xc
TEB* fsbase
fsbase->NtTib.ExceptionList = fsbase->NtTib.ExceptionList->Next
*(arg2 - 4)
jump(arg1)
