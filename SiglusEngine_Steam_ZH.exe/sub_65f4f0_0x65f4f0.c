// 函数: sub_65f4f0
// 地址: 0x65f4f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4e78
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
        int32_t* esi_1
        
        if (SteamAPI_GetHSteamPipe() != 0)
            esi_1 = data_4ecd0bc
            
            if (esi_1 == 0)
                sub_65f9b0(0x4ecd0a8)
                esi_1 = data_4ecd0bc
        else
            esi_1 = nullptr
        
        int32_t var_2c
        char* ecx_2 = sub_6af1a0(&var_2c)
        int32_t var_8_1 = 0
        
        if (*(ecx_2 + 0x14) u>= 0x10)
            ecx_2 = *ecx_2
        
        int32_t var_8_2 = 0xffffffff
        int32_t ebx
        ebx.b = (*(*esi_1 + 0x1c))(ecx_2) == 0
        int32_t var_18
        
        if (var_18 u>= 0x10)
            j__free(var_2c)
        
        if (ebx.b != 0)
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c.w = 0
            sub_52e720(&var_2c, u"Stea", 0x16)
            int32_t var_8_3 = 1
            sub_684160(data_bac424, 2, &var_2c)
            int32_t var_8_4 = 0xffffffff
            
            if (var_18_1 u>= 8)
                j__free(var_2c)
        
        int32_t* ecx_6
        
        if (SteamAPI_GetHSteamPipe() != 0)
            ecx_6 = data_4ecd0bc
            
            if (ecx_6 == 0)
                sub_65f9b0(0x4ecd0a8)
                ecx_6 = data_4ecd0bc
        else
            ecx_6 = nullptr
        
        result = (*(*ecx_6 + 0x28))()
        
        if (result.b == 0)
            int32_t var_30_1 = 7
            int32_t var_34_1 = 0
            int16_t var_44 = 0
            sub_52e720(&var_44, u"Stea", 0x1b)
            int32_t var_8_5 = 2
            result = sub_684160(data_bac424, 2, &var_44)
            
            if (var_30_1 u>= 8)
                result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
