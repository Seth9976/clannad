// 函数: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
// 地址: 0x5f6e1d
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg2 + 0xc
TEB* fsbase
fsbase->NtTib.ExceptionList = fsbase->NtTib.ExceptionList->Next
*(arg2 - 4)
jump(arg1)
