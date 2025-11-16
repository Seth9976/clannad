// 函数: sub_1ac63ce
// 地址: 0x1ac63ce
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (data_1c0764c == 0)
    sub_1ac633b()

if (data_1c07648 != 0)
    return 

if (*((arg1 << 2) + &data_1c07450) == 0)
    EnterCriticalSection(&data_1c07498)
    
    if (*((arg1 << 2) + &data_1c07450) == 0)
        InitializeCriticalSection(arg1 * 0x18 + &data_1c074b0)
        *((arg1 << 2) + &data_1c07450) += 1
    
    LeaveCriticalSection(&data_1c07498)

EnterCriticalSection(arg1 * 0x18 + &data_1c074b0)
