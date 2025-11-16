// 函数: reallive_dll_func_call
// 地址: 0x10001770
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_1000fdd6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t** var_cc
int32_t eax_2 = __security_cookie ^ &var_cc
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_5 = data_1001b4c8
int32_t** ecx = *(eax_5 + 0x28)
uint32_t* ebx = *(eax_5 + 0x14)
var_cc = ecx
int32_t* var_7c
char* var_6c
int32_t var_68
int32_t* var_64
char* var_54

switch (arg1)
    case 0
        if (data_1001b4bc == 0)
            ebx[0x7ce] = 0
        else
            SteamAPI_RunCallbacks(eax_4)
            ebx[0x7ce] = 1
    case 1
        void* eax_8 = data_1001b4c0
        
        if (eax_8 != 0)
            int32_t edi_1 = ecx[0x64]
            
            if (edi_1 != 0)
                if (*(eax_8 + 0x10) == 0)
                    ebx[1] = 0
                else
                    (*(*SteamUserStats(eax_4) + 0x1c))(edi_1)
                    ebx[1] = zx.d((*(*SteamUserStats() + 0x28))())
    case 2
        if (data_1001b4bc != 0)
            int32_t var_84
            (*(*SteamUser(eax_4) + 8))(&var_84)
            int32_t eax_15 = var_84
            int32_t eax_16 = SteamFriends()
            int32_t var_80
            sub_10001d10(&var_64, (*(*eax_16 + 0x1c))(var_84, var_80))
            int32_t var_c_1 = 0
            void* var_e0_5 = &var_54[1]
            int32_t* eax_20 = sub_10002ce4()
            int32_t* esi_1 = &var_64
            int32_t var_50
            
            if (var_50 u>= 0x10)
                esi_1 = var_64
            
            void var_bc
            int32_t edx_5 = _memcpy(eax_20, esi_1, *sub_10001de0(&var_64, &var_bc) - esi_1)
            *(var_54 + eax_20) = 0
            int32_t** eax_25 = var_cc
            eax_25[1] = eax_20
            sub_100015e0(eax_25, edx_5, &var_7c, eax_15, var_80)
            var_c_1.b = 1
            void* var_e8_2 = &var_6c[1]
            int32_t* eax_28 = sub_10002ce4()
            int32_t** esi_2 = &var_7c
            
            if (var_68 u>= 0x10)
                esi_2 = var_7c
            
            void var_c4
            _memcpy(eax_28, esi_2, *sub_10001de0(&var_7c, &var_c4) - esi_2)
            *(var_6c + eax_28) = 0
            var_cc[2] = eax_28
            sub_10001d70(&var_7c)
            sub_10001d70(&var_64)
    case 3
        if (data_1001b4c0 == 0)
            ebx[1] = 0
        else if (SteamUserStats(eax_4) == 0)
            ebx[1] = 1
            *ebx = 0
        else
            *ebx = zx.d(sub_100011a0())
            ebx[1] = 1
    case 4
        if (data_1001b4c0 == 0)
            ebx[1] = 0
        else
            int32_t eax_37
            
            if (SteamUserStats(eax_4) == 0)
                eax_37.b = 0
            else
                eax_37 = sub_100011a0()
            
            void* edx_6 = &ebx[0xa]
            *ebx = zx.d(eax_37.b)
            void* i = &data_10018368
            
            do
                uint32_t ecx_11 = zx.d(*i)
                edx_6 += 4
                i += 0x190
                *(edx_6 - 4) = ecx_11
            while (i s< &(*class CCallback<class CSteamAchievements, struct UserAchievementStored_t, 0> `RTTI Type Descriptor'
                .name)[0x38])
            
            ebx[1] = 1
    case 5
        if (data_1001b4bc != 0)
            sub_10001d10(&var_7c, "SAVEDATA/save")
            int32_t var_c_2 = 2
            int32_t ecx_14 = sub_10001560(&var_64)
            var_c_2.b = 3
            
            if (var_54 == 1)
                ecx_14 = sub_10001da0("00")
            else if (var_54 == 2)
                ecx_14 = sub_10001da0(U"0")
            
            int32_t var_e0_12 = ecx_14
            var_c_2.b = 4
            void var_9c
            sub_10001e10(&var_7c, sub_10002550(&var_9c, &var_64), nullptr, 0xffffffff)
            var_c_2.b = 3
            sub_10001d70(&var_9c)
            void* var_e0_13 = &var_6c[1]
            int32_t* eax_45 = sub_10002ce4()
            int32_t* esi_3 = &var_7c
            
            if (var_68 u>= 0x10)
                esi_3 = var_7c
            
            void var_b8
            _memcpy(eax_45, esi_3, *sub_10001de0(&var_7c, &var_b8) - esi_3, eax_4)
            ebx[1] = zx.d((*(*SteamRemoteStorage() + 0xc))(eax_45))
            *var_cc = eax_45
            sub_10001d70(&var_64)
            sub_10001d70(&var_7c)
    case 6
        if (data_1001b4bc != 0)
            int32_t* var_4c
            sub_10001d10(&var_4c, "SAVEDATA/save")
            int32_t var_c_3 = 5
            void var_34
            int32_t ecx_24 = sub_10001560(&var_34)
            var_c_3.b = 6
            int32_t var_24
            
            if (var_24 == 1)
                ecx_24 = sub_10001da0("00")
            else if (var_24 == 2)
                ecx_24 = sub_10001da0(U"0")
            
            int32_t var_e0_18 = ecx_24
            var_c_3.b = 7
            void var_b4
            sub_10001e10(&var_4c, sub_10002550(&var_b4, &var_34), nullptr, 0xffffffff)
            var_c_3.b = 6
            sub_10001d70(&var_b4)
            int32_t var_3c
            int32_t var_e0_19 = var_3c + 1
            int32_t* eax_60 = sub_10002ce4()
            int32_t* esi_4 = &var_4c
            int32_t var_38
            
            if (var_38 u>= 0x10)
                esi_4 = var_4c
            
            void var_c0
            _memcpy(eax_60, esi_4, *sub_10001de0(&var_4c, &var_c0) - esi_4, eax_4)
            ebx[1] = zx.d((*(*SteamRemoteStorage() + 0x28))(eax_60))
            *var_cc = eax_60
            sub_10001d70(&var_34)
            sub_10001d70(&var_4c)
    case 0x62
        nop
    default
        SteamAPI_RunCallbacks(eax_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_10002604(eax_2 ^ &var_cc)
return 1
