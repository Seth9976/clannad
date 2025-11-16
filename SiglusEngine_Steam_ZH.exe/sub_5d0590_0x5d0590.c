// 函数: sub_5d0590
// 地址: 0x5d0590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bbe80
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_68 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_34 = 7
int32_t var_38 = 0
int16_t var_48 = 0
int32_t var_8_1 = 0
int32_t var_1c = 7
int32_t var_20 = 0
int16_t var_30 = 0
var_8_1.b = 1

if (arg1 - 1 u<= 3)
    void** eax_9
    
    switch (arg1)
        case 1
            void* eax_5 = data_bac510
            
            if (&var_48 != eax_5 + 0xa47dc4)
                sub_52e3c0(&var_48, eax_5 + 0xa47dc4, 0, 0xffffffff)
                eax_5 = data_bac510
            
            eax_9 = eax_5 + 0xa47ddc
        case 2
            void* eax_6 = data_bac510
            
            if (&var_48 != eax_6 + 0xa47e1c)
                sub_52e3c0(&var_48, eax_6 + 0xa47e1c, 0, 0xffffffff)
                eax_6 = data_bac510
            
            eax_9 = eax_6 + 0xa47e34
        case 3
            void* eax_7 = data_bac510
            
            if (&var_48 != eax_7 + 0xa47e74)
                sub_52e3c0(&var_48, eax_7 + 0xa47e74, 0, 0xffffffff)
                eax_7 = data_bac510
            
            eax_9 = eax_7 + 0xa47e8c
        case 4
            void* eax_8 = data_bac510
            
            if (&var_48 != eax_8 + &data_a47ecc)
                sub_52e3c0(&var_48, eax_8 + &data_a47ecc, 0, 0xffffffff)
                eax_8 = data_bac510
            
            eax_9 = eax_8 + 0xa47ee4
    
    if (&var_30 != eax_9)
        sub_52e3c0(&var_30, eax_9, 0, 0xffffffff)
    
    if (var_38 != 0)
        int32_t eax_10 = sub_6980b0(data_bac45c, &var_48)
        int32_t eax_11 = sub_697f50(eax_10, &var_30)
        int16_t var_60
        int32_t var_4c_1
        
        if (eax_10 s>= 0)
            if (eax_11 s< 0)
                var_4c_1 = 7
                int32_t var_50_2 = 0
                var_60 = 0
                sub_52e720(&var_60, 0xaf2f30, 0x12)
                var_8_1.b = 3
                goto label_5d0736
            
            sub_65d760(eax_11, eax_11, eax_10, 0, 1, 0)
        else
            var_4c_1 = 7
            int32_t var_50_1 = 0
            var_60 = 0
            sub_52e720(&var_60, 0xaf2f0c, 0x11)
            var_8_1.b = 2
        label_5d0736:
            sub_684160(data_bac424, 9, &var_60)
            
            if (var_4c_1 u>= 8)
                j__free(var_60.d)
    
    if (var_1c u>= 8)
        j__free(var_30.d)

int32_t result = 0
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
var_30 = 0

if (var_34 u>= 8)
    result = j__free(var_48.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
