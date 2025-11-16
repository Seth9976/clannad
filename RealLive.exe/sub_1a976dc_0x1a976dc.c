// 函数: sub_1a976dc
// 地址: 0x1a976dc
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (*((arg1 << 2) + &data_1bfc0d8) == 0)
    void* lpCriticalSection = sub_1a91fb2(0x18)
    
    if (lpCriticalSection == 0)
        sub_1a931cd(0x11)
    
    sub_1a976dc(0x11)
    
    if (*((arg1 << 2) + &data_1bfc0d8) != 0)
        sub_1a91ec9(lpCriticalSection)
    else
        InitializeCriticalSection(lpCriticalSection)
        *((arg1 << 2) + &data_1bfc0d8) = lpCriticalSection
    
    __unlock(0x11)

return EnterCriticalSection(*((arg1 << 2) + &data_1bfc0d8))
