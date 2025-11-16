// 函数: __lock
// 地址: 0x1000634b
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (*((arg1 << 3) + &data_10017320) == 0 && __mtinitlocknum(arg1) == 0)
    __amsg_exit(0x11)
    noreturn

return EnterCriticalSection(*((arg1 << 3) + &data_10017320))
