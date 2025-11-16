// 函数: sub_10001250
// 地址: 0x10001250
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

bool cond:0 = (arg1[1].b & 1) == 0
*arg1 = &CCallback<class CSteamAchievements, struct UserStatsReceived_t, 0>::`vftable'{for `CCallbackBase'}

if (not(cond:0))
    SteamAPI_UnregisterCallback(arg1)
