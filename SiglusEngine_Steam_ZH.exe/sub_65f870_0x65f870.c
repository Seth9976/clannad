// 函数: sub_65f870
// 地址: 0x65f870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c4ea8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx

if (SteamAPI_GetHSteamPipe(__security_cookie ^ &var_40) != 0)
    ecx = data_4ecd0b4
    
    if (ecx == 0)
        sub_65f9b0(0x4ecd0a8)
        ecx = data_4ecd0b4
else
    ecx = nullptr

(*(*ecx + 0x24))()
int32_t* ecx_1

if (SteamAPI_GetHSteamPipe() != 0)
    ecx_1 = data_4ecd0b4
    
    if (ecx_1 == 0)
        sub_65f9b0(0x4ecd0a8)
        ecx_1 = data_4ecd0b4
else
    ecx_1 = nullptr

char* result = (*(*ecx_1 + 0x24))() & 0xffffff
int64_t var_3c = 0

if (*arg1 == result)
    result = arg1[1]
    
    if (result == 0 && arg1[2] != 1)
        int32_t var_20_1 = 7
        int32_t var_24_1 = 0
        int16_t var_34 = 0
        sub_52e720(&var_34, u"Stea", 0x1b)
        int32_t var_c_1 = 0
        result = sub_684160(data_bac424, 2, &var_34)
        
        if (var_20_1 u>= 8)
            result = j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_40)
return result
