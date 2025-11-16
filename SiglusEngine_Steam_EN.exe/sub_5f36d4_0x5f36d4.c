// 函数: sub_5f36d4
// 地址: 0x5f36d4
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

STARTUPINFOW startupInfo
GetStartupInfoW(&startupInfo)

if ((startupInfo.dwFlags.b & 1) == 0)
    return 0xa

return zx.d(startupInfo.wShowWindow)
