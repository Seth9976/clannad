// 函数: sub_6b8820
// 地址: 0x6b8820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cb5d1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_74 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_64 = 0
*(arg1 + 0x14) = 7
*(arg1 + 0x10) = 0
int16_t* var_68 = arg1
*arg1 = 0
int32_t var_8_1 = 0
int16_t* var_60 = nullptr
int32_t var_64_1 = 1

if (FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, nullptr, arg2, 
        0x400, &var_60, 0, nullptr) != 0)
    int16_t* eax_4 = var_60
    
    if (eax_4 != 0)
        int32_t var_2c
        sub_52e820(&var_2c, eax_4)
        int32_t var_8_2 = 1
        
        if (arg1 != &var_2c)
            sub_52e3c0(arg1, &var_2c, 0, 0xffffffff)
        
        var_8_2.b = 0
        int32_t var_18
        
        if (var_18 u>= 8)
            j__free(var_2c)
        
        LocalFree(var_60)
        void* eax_5 = *(arg1 + 0x10)
        
        if (eax_5 u>= 2)
            int32_t edx = *(arg1 + 0x14)
            int16_t* ecx_2
            
            if (edx u< 8)
                ecx_2 = arg1
            else
                ecx_2 = *arg1
            
            if (ecx_2[eax_5 - 1] == 0xa)
                int16_t* ecx_3
                
                if (edx u< 8)
                    ecx_3 = arg1
                else
                    ecx_3 = *arg1
                
                if (ecx_3[eax_5 - 2] == 0xd)
                    int32_t var_8_3 = 2
                    void var_5c
                    void var_44
                    sub_532840(&var_44, sub_53d730(arg1, &var_5c, 0, eax_5 - 2))
                    var_8_3.b = 3
                    
                    if (arg1 != &var_44)
                        sub_52e3c0(arg1, &var_44, 0, 0xffffffff)
                    
                    sub_52e8a0(&var_44)
                    sub_52e8a0(&var_5c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
