// 函数: __lock
// 地址: 0x753e15
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*((arg1 << 3) + &data_b4cd50) == 0 && __mtinitlocknum(arg1) == 0)
    __amsg_exit(0x11)
    noreturn

return EnterCriticalSection(*((arg1 << 3) + &data_b4cd50))
