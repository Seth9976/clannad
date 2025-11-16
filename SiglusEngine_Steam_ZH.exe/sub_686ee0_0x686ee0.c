// 函数: sub_686ee0
// 地址: 0x686ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c8078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2[4] != 0)
    if (&arg1[3] != arg2)
        sub_52e3c0(&arg1[3], arg2, 0, 0xffffffff)
    
    void* var_30
    sub_60f510(&var_30, arg2)
    int32_t var_8_1 = 0
    var_8_1.b = 1
    void var_50
    result = sub_54d190(arg1, sub_687ac0(&var_50, &var_30))
    var_8_1.b = 0
    int32_t* var_4c
    
    if (var_4c != 0)
        bool cond:0_1 = var_4c[1] != 1
        result = var_4c[1]
        var_4c[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_4c + 4))(eax_2)
            result = &var_4c[2]
            bool cond:1_1 = *result != 1
            *result
            *result -= 1
            
            if (not(cond:1_1))
                result = (*(*var_4c + 8))()
    
    int32_t* ebx
    
    if (*arg1 != 0)
        ebx.b = 1
    else
        int32_t var_48
        int16_t* eax_6 = sub_532b80(result, arg2, &var_48, 0xafa210)
        var_8_1.b = 2
        sub_684160(data_bac424, 9, eax_6)
        int32_t var_34
        
        if (var_34 u>= 8)
            j__free(var_48)
        
        ebx.b = 0
    
    int32_t var_1c
    
    if (var_1c u>= 8)
        j__free(var_30)
    
    result.b = ebx.b
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
