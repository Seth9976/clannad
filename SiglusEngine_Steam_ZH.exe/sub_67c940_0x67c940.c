// 函数: sub_67c940
// 地址: 0x67c940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c74a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int16_t var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_esi
int32_t var_6c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0x4fa)
    sub_6664a0()
else if (arg2 == 0x4f9)
    int32_t var_4c
    sub_6c2ec0(arg1 + 0x24c, &var_4c)
    int32_t var_c_1 = 0
    int32_t var_3c
    
    if (var_3c != 0)
        var_c_1.b = 2
        sub_667e80(&var_4c, sub_6643e0(&var_64))
        int32_t var_50
        
        if (var_50 u>= 8)
            j__free(var_64.d)
    else
        int32_t var_50_1 = 7
        int32_t var_54_1 = 0
        var_64 = 0
        sub_52e720(&var_64, 0xaf9a3c, 0x16)
        int16_t* lpText = &var_64
        
        if (var_50_1 u>= 8)
            lpText = var_64.d
        
        enum MESSAGEBOX_RESULT eax_5 = MessageBoxW(data_4ebe3ac, lpText, 0xaef64c, 0x31)
        
        if (var_50_1 u>= 8)
            j__free(var_64.d)
        
        int32_t var_50_2 = 7
        int32_t var_54_2 = 0
        var_64 = 0
        
        if (eax_5 == IDOK)
            var_c_1.b = 1
            void var_34
            sub_667e80(&var_4c, sub_6643e0(&var_34))
            sub_52e8a0(&var_34)
    
    int32_t var_38
    
    if (var_38 u>= 8)
        j__free(var_4c)

int16_t result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_64)
return result
