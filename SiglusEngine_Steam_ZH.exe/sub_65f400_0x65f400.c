// 函数: sub_65f400
// 地址: 0x65f400
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = SteamAPI_GetHSteamPipe(eax_2)

if (result != 0)
    if (data_4ecd0bc == 0)
        sub_65f9b0(0x4ecd0a8)
        result = data_4ecd0bc
    
    if (data_4ecd0bc != 0 || result != 0)
        int32_t* ecx_1
        
        if (SteamAPI_GetHSteamPipe() != 0)
            ecx_1 = data_4ecd0bc
            
            if (ecx_1 == 0)
                sub_65f9b0(0x4ecd0a8)
                ecx_1 = data_4ecd0bc
        else
            ecx_1 = nullptr
        
        result = (**ecx_1)()
        
        if (result.b == 0)
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            int16_t var_2c = 0
            sub_52e720(&var_2c, u"Stea", 0x1b)
            int32_t var_8_1 = 0
            result = sub_684160(data_bac424, 2, &var_2c)
            
            if (var_18_1 u>= 8)
                result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
