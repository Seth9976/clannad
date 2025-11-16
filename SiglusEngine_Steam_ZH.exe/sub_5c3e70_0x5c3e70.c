// 函数: sub_5c3e70
// 地址: 0x5c3e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bb538
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0xb0) != 0)
    void* esi_1 = arg1 + 0xa0
    int32_t var_8_1 = 0
    void var_1c
    sub_54d190(arg1 + 0x110, sub_6281e0(result, esi_1, &var_1c, 0, 0))
    int32_t var_8_2 = 0xffffffff
    int32_t* var_18
    
    if (var_18 != 0)
        bool cond:0_1 = var_18[1] != 1
        var_18[1]
        var_18[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_18 + 4))(eax_2)
            int32_t ebx_1 = var_18[2]
            var_18[2] -= 1
            
            if (ebx_1 == 1)
                (*(*var_18 + 8))()
    
    result = arg1 + 0x110
    
    if (*result == 0)
        bool cond:1_1 = *(esi_1 + 0x14) u< 8
        *(esi_1 + 0x10) = 0
        
        if (not(cond:1_1))
            esi_1 = *esi_1
        
        result = nullptr
        *esi_1 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
