// 函数: ___initconout
// 地址: 0x1000c3cf
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_10017ed0 = result
return result
