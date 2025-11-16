// 函数: sub_65f7a0
// 地址: 0x65f7a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

arg1[1].b = 0
arg1[2] = 0
*arg1 =
    &CCallback<class C_tnm_steam, struct UserStatsReceived_t, 0>::`vftable'{for `CCallbackImpl<24>'}
arg1[3] = 0
arg1[4] = 0
arg1[3] = arg1
arg1[4] = sub_65f870
SteamAPI_RegisterCallback(arg1, 0x44d)
arg1[6].b = 0
arg1[7] = 0
arg1[5] =
    &CCallback<class C_tnm_steam, struct UserStatsStored_t, 0>::`vftable'{for `CCallbackImpl<16>'}
arg1[8] = 0
arg1[9] = 0
arg1[8] = arg1
arg1[9] = sub_52e8d0
SteamAPI_RegisterCallback(&arg1[5], 0x44e)
arg1[0xb].b = 0
arg1[0xc] = 0
arg1[0xa] = &CCallback<class C_tnm_steam, struct UserAchievementStored_t, 0>::`vftable'{for `CCallbackImpl<152>'}
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xd] = arg1
arg1[0xe] = sub_52e8d0
SteamAPI_RegisterCallback(&arg1[0xa], 0x44f)
return arg1
