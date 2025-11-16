// 函数: sub_655c60
// 地址: 0x655c60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c46b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_84 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 s< 0)
    result.b = 0
else
    result = data_bac510
    
    if (result[0x42e4] + result[0x42e3] + result[0x42e2] s<= arg1)
        result.b = 0
    else if (sub_6a5240(data_bac504 + 0x4b068, arg1).b == 0)
        result.b = 0
    else
        sub_6a4eb0(data_bac504 + 0x4b068, arg1)
        int32_t var_5c
        sub_651e40(&var_5c, arg1)
        int32_t var_8_1 = 0
        int16_t var_44
        sub_651f20(&var_44, arg1)
        var_8_1.b = 1
        sub_6b4390(&var_5c)
        int32_t ebx
        void var_74
        int16_t var_2c
        
        if (sub_6b4cb0(&var_5c) != 0)
            char eax_8
            
            if (*(data_bac510 + 0x10bc0) != 0)
                sub_6b4390(&var_44)
                eax_8 = sub_6b4cb0(&var_44)
            
            if (*(data_bac510 + 0x10bc0) == 0 || eax_8 != 0)
                int32_t var_18_1 = 7
                int32_t var_1c_1 = 0
                var_2c = 0
                sub_52e720(&var_2c, 0xaf7e20, 0xf)
                var_8_1.b = 6
                sub_684160(data_bac424, 5, &var_2c)
                sub_52e8a0(&var_2c)
                ebx.b = 1
            else
                int16_t* eax_9 = sub_6b9ed0(&var_2c)
                var_8_1.b = 4
                int16_t* eax_10 = sub_548cb0(eax_9, 0xaf7df4, &var_74, eax_9)
                var_8_1.b = 5
                sub_684160(data_bac424, 2, eax_10)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_2c)
                ebx.b = 0
        else
            int16_t* eax_5 = sub_6b9ed0(&var_74)
            var_8_1.b = 2
            int16_t* eax_6 = sub_548cb0(eax_5, 0xaf7dcc, &var_2c, eax_5)
            var_8_1.b = 3
            sub_684160(data_bac424, 2, eax_6)
            sub_52e8a0(&var_2c)
            sub_52e8a0(&var_74)
            ebx.b = 0
        int32_t var_30
        
        if (var_30 u>= 8)
            j__free(var_44.d)
        
        int32_t var_30_1 = 7
        int32_t var_34_1 = 0
        var_44 = 0
        int32_t var_48
        
        if (var_48 u>= 8)
            j__free(var_5c)
        
        result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
