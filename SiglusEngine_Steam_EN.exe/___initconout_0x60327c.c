// 函数: ___initconout
// 地址: 0x60327c
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_63c920 = result
return result
