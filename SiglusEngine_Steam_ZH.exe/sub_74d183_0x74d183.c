// 函数: sub_74d183
// 地址: 0x74d183
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

STARTUPINFOW startupInfo
GetStartupInfoW(&startupInfo)

if ((startupInfo.dwFlags.b & 1) == 0)
    return 0xa

return zx.d(startupInfo.wShowWindow)
