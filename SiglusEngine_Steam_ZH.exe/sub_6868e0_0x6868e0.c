// 函数: sub_6868e0
// 地址: 0x6868e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc9e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg1

if (esi[4] != 0)
    int32_t var_8_1 = 0
    void var_18
    result = sub_54d190(&esi[0x13], sub_6281e0(result, esi, &var_18, 0, 0))
    int32_t var_8_2 = 0xffffffff
    int32_t* var_14
    
    if (var_14 != 0)
        bool cond:0_1 = var_14[1] != 1
        result = var_14[1]
        var_14[1] -= 1
        
        if (not(cond:0_1))
            (*(*var_14 + 4))(eax_2)
            result = &var_14[2]
            struct _EXCEPTION_REGISTRATION_RECORD* ebx_1 = *result
            *result -= 1
            
            if (ebx_1 == 1)
                result = (*(*var_14 + 8))()
    
    if (esi[0x13] == 0)
        bool cond:1_1 = esi[5] u< 8
        esi[4] = 0
        
        if (not(cond:1_1))
            esi = *esi
        
        result = nullptr
        *esi = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
return result
