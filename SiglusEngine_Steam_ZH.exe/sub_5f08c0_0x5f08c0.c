// 函数: sub_5f08c0
// 地址: 0x5f08c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 u<= 7)
    int32_t var_1c_1 = 7
    int16_t var_30 = 0
    int32_t var_20_1 = 0
    int32_t* esi_2 = arg1 + 0xda4 + arg2 * 0x18
    sub_52e3c0(&var_30, esi_2, 0, 0xffffffff)
    int32_t var_8_1 = 0
    bool cond:0_1 = esi_2[5] u< 8
    esi_2[4] = 0
    int16_t* eax_4
    
    if (cond:0_1)
        eax_4 = esi_2
    else
        eax_4 = *esi_2
    
    *eax_4 = 0
    *(arg1 + (arg2 << 2) + 0x274) = 0
    
    if (esi_2 != arg3)
        sub_52e3c0(esi_2, arg3, 0, 0xffffffff)
    
    result = arg4
    *(arg1 + (arg2 << 2) + 0x274) = result
    
    if (var_1c_1 u>= 8)
        result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
