// 函数: sub_6e3790
// 地址: 0x6e3790
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cd170
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t var_44
int16_t var_2c
int16_t* eax_4

if (arg1[0x30] == 1)
    if (arg1[0xc2] == 0)
        void** eax_5 = sub_6b9ed0(&var_44)
        int32_t var_8_2 = 2
        eax_4 = sub_548cb0(eax_5, 0xb05914, &var_2c, eax_5)
        var_8_2.b = 3
        goto label_6e37ea
    
    if (arg1[0x46] s<= 0)
        void** eax_6 = sub_6b9ed0(&var_44)
        int32_t var_8_3 = 4
        eax_4 = sub_548cb0(eax_6, 0xb059a8, &var_2c, eax_6)
        var_8_3.b = 5
        goto label_6e37ea
    
    if (arg1[0x47] s> 0)
        result.b = 1
    else
        void var_74
        void** eax_7 = sub_6b9ed0(&var_74)
        int32_t var_8_4 = 6
        void var_5c
        void** eax_8 = sub_548cb0(eax_7, 0xb0597c, &var_5c, eax_7)
        var_8_4.b = 7
        
        if (arg1 != eax_8)
            sub_52e3c0(arg1, eax_8, 0, 0xffffffff)
        
        sub_52e8a0(&var_5c)
        sub_52e8a0(&var_74)
        result.b = 0
else
    int16_t* eax_3 = sub_6b9ed0(&var_44)
    int32_t var_8_1 = 0
    eax_4 = sub_548cb0(eax_3, 0xb0594c, &var_2c, eax_3)
    var_8_1.b = 1
label_6e37ea:
    
    if (arg1 != eax_4)
        sub_52e3c0(arg1, eax_4, 0, 0xffffffff)
    
    int32_t var_18
    
    if (var_18 u>= 8)
        j__free(var_2c.d)
    
    int32_t var_18_1 = 7
    int32_t var_1c_1 = 0
    var_2c = 0
    int32_t var_30
    
    if (var_30 u>= 8)
        j__free(var_44)
    
    result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
