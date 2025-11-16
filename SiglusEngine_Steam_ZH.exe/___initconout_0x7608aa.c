// 函数: ___initconout
// 地址: 0x7608aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HANDLE result = CreateFileW(CONOUT$", 0x40000000, FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, 
    OPEN_EXISTING, SECURITY_ANONYMOUS, nullptr)
data_b4d37c = result
return result
