// 函数: ??1_Pop_finalizer@_Micro_queue@details@Concurrency@@QAE@XZ
// 地址: 0x10001030
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_1000fd41
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
arg1[1] = 0
arg1[4].b = 0
arg1[6].b = 0
arg1[7] = 0
arg1[5] = &CCallback<class CSteamAchievements, struct UserStatsReceived_t, 0>::`vftable'{for `CCallbackBase'}
arg1[8] = arg1
arg1[9] = sub_100011d0
arg1[8] = arg1
arg1[9] = sub_100011d0
SteamAPI_RegisterCallback(&arg1[5], 0x44d, eax_2)
int32_t var_8_1 = 0
arg1[0xb].b = 0
arg1[0xc] = 0
arg1[0xa] = &
    CCallback<class CSteamAchievements, struct UserStatsStored_t, 0>::`vftable'{for `CCallbackBase'}
arg1[0xd] = arg1
arg1[0xe] = sub_10001240
arg1[0xd] = arg1
arg1[0xe] = sub_10001240
SteamAPI_RegisterCallback(&arg1[0xa], 0x44e, eax_2)
arg1[0x10].b = 0
arg1[0x11] = 0
arg1[0xf] = &CCallback<class CSteamAchievements, struct UserAchievementStored_t, 0>::`vftable'{for `CCallbackBase'}
arg1[0x12] = arg1
arg1[0x13] = sub_10001240
arg1[0x12] = arg1
arg1[0x13] = sub_10001240
SteamAPI_RegisterCallback(&arg1[0xf], 0x44f, eax_2)
var_8_1.b = 2
*arg1 = (*(*SteamUtils(eax_2) + 0x24))()
arg1[1] = 0
arg1[2] = 0x100181e0
arg1[3] = 0x16

if (SteamUserStats() != 0 && SteamUser() != 0 && (*(*SteamUser() + 4))() != 0)
    (**SteamUserStats())()

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
