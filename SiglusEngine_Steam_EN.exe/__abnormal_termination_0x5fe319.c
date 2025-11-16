// 函数: __abnormal_termination
// 地址: 0x5fe319
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList

if (ExceptionList->Handler == __unwind_handler
        && ExceptionList->__offset(0x8).d == *(ExceptionList->__offset(0xc).d + 0xc))
    return 1

return 0
