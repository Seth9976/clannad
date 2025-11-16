// 函数: reallive_dll_func_init
// 地址: 0x10001720
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

SteamAPI_RunCallbacks()

if (data_1001b4c0 != 0 && SteamUserStats() != 0 && SteamUser() != 0 && (*(*SteamUser() + 4))() != 0)
    (**SteamUserStats())()

return 1
