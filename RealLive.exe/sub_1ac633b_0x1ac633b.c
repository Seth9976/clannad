// 函数: sub_1ac633b
// 地址: 0x1ac633b
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (data_1c0764c == 0)
    data_1c0764c = 1
    uint32_t eax_1 = GetVersion()
    
    if (eax_1.b u>= 4 || (eax_1 & 0x80000000) == 0)
        data_1c07648 = 0
        InitializeCriticalSection(&data_1c07498)
    else
        data_1c07648 = 1

return data_1c0764c
