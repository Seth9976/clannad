// 函数: sub_643010
// 地址: 0x643010
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9c36c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = data_bac470
int32_t var_14 = 0

if (arg2 s>= 0 && arg2 s< (*(eax_3 + 0xa8) - *(eax_3 + 0xa4)) s/ 0x118)
    int32_t* var_24
    sub_642fe0(arg2 * 0x118 + *(data_bac470 + 0xa4), &var_24)
    int32_t var_8_1 = 0
    int32_t* ecx_2 = var_24
    
    if (ecx_2 != 0)
        int32_t var_1c
        sub_54d980(ecx_2, &var_1c, 0)
        int32_t eax_9 = var_1c
        
        if (eax_9 != 0)
            *arg1 = eax_9
            arg1[1] = 0
            int32_t eax_10 = arg1[1]
            int32_t var_18
            arg1[1] = var_18
            int32_t var_18_1 = eax_10
            var_1c = 0
            var_8_1.b = 0
            sub_54b010(&var_1c)
            int32_t var_8_2 = 0xffffffff
            sub_54b010(&var_24)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg1
        
        var_8_1.b = 0
        sub_54b010(&var_1c)
    
    int32_t var_8_3 = 0xffffffff
    int32_t* var_20
    
    if (var_20 != 0)
        bool cond:0_1 = var_20[1] != 1
        var_20[1]
        var_20[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_20 + 4))(eax_2)
            int32_t ebx_1 = var_20[2]
            var_20[2] -= 1
            
            if (ebx_1 == 1)
                (*(*var_20 + 8))()

*arg1 = 0
arg1[1] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
