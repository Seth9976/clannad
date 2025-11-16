// 函数: __lock
// 地址: 0x5fc1ea
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*((arg1 << 3) + &data_63c740) == 0 && __mtinitlocknum(arg1) == 0)
    __amsg_exit(0x11)
    noreturn

return EnterCriticalSection(*((arg1 << 3) + &data_63c740))
