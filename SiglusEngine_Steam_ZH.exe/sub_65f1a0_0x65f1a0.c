// 函数: sub_65f1a0
// 地址: 0x65f1a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c4e30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_7c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
BOOL result

if (*(data_bac4e4 + 0x1e0) != 0)
    void* eax_4
    eax_4.b = *(data_bac484 + 0x138)
    void var_9c
    void var_74
    int32_t var_5c
    int32_t var_44
    int16_t var_2c
    int32_t var_18
    
    if (eax_4.b == 0)
        int32_t ecx_11 = *(data_bac458 + 0x338)
        
        if (ecx_11 s>= 0)
            int32_t var_80_7 = ecx_11
            int32_t var_84_3 = ecx_11 s/ 0x186a0
            sub_52e820(&var_9c, u"\%04d\Z%09d.wav")
            int16_t* eax_16 = sub_6ae4c0(&var_2c, var_9c)
            int32_t var_8_2 = 5
            sub_5327a0(eax_16, data_bac4e4 + 0x1d0, &var_5c, eax_16)
            var_8_2.b = 7
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_2 = 7
            int32_t var_1c_2 = 0
            var_2c = 0
            
            if (sub_6b52f0(&var_5c).b == 0)
                int16_t* eax_17 = sub_6b9ed0(&var_44)
                var_8_2.b = 8
                int16_t* eax_18 = sub_548cb0(eax_17, 0xaf8300, &var_74, eax_17)
                var_8_2.b = 9
                sub_684160(data_bac424, 3, eax_18)
                sub_52e8a0(&var_74)
                sub_52e8a0(&var_44)
            
            int32_t var_48
            
            if (var_48 u>= 8)
                j__free(var_5c)
    else
        result = sub_6762b0()
        
        if (result s>= 0)
            BOOL result_1 = result
            int32_t var_84_1 = result s/ 0x186a0
            sub_52e820(&var_9c, u"\%04d\Z%09d.wav")
            int16_t* eax_9 = sub_6ae4c0(&var_2c, var_9c)
            int32_t var_8_1 = 0
            sub_5327a0(eax_9, data_bac4e4 + 0x1d0, &var_44, eax_9)
            var_8_1.b = 2
            
            if (var_18 u>= 8)
                j__free(var_2c.d)
            
            int32_t var_18_1 = 7
            int32_t var_1c_1 = 0
            var_2c = 0
            
            if (sub_6b52f0(&var_44).b == 0)
                int16_t* eax_10 = sub_6b9ed0(&var_74)
                var_8_1.b = 3
                int16_t* eax_11 = sub_548cb0(eax_10, 0xaf8300, &var_5c, eax_10)
                var_8_1.b = 4
                sub_684160(data_bac424, 3, eax_11)
                sub_52e8a0(&var_5c)
                sub_52e8a0(&var_74)
            
            int32_t var_30
            
            if (var_30 u>= 8)
                j__free(var_44)
else
    void* ecx = data_bac4d0
    
    if (*(ecx + 0x1dec4) == 0)
        (*(*(ecx + 0x1dec0) + 0x10))(data_4ebe3ac)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
