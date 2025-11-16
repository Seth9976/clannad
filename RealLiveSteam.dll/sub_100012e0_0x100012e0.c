// 函数: sub_100012e0
// 地址: 0x100012e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

bool cond:0 = (arg1[1].b & 1) == 0
*arg1 = &CCallback<class CSteamAchievements, struct UserAchievementStored_t, 0>::`vftable'{for `CCallbackBase'}

if (not(cond:0))
    SteamAPI_UnregisterCallback(arg1)
