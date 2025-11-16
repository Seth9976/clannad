// 函数: sub_5a6710
// 地址: 0x5a6710
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b9b28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x444) != 0)
    int32_t var_1c_1 = 7
    int32_t var_20_1 = 0
    int16_t var_30 = 0
    sub_52e720(&var_30, 0xad7a70, 7)
    int32_t var_8_1 = 0
    void* ecx_1 = *(arg1 + 0x444)
    result = sub_5a7ca0(ecx_1, *(ecx_1 + 0x58), *(ecx_1 + 0x38), *(ecx_1 + 0x4c), *(ecx_1 + 0x3c), 
        &var_30, arg2, 0)
    
    if (var_1c_1 u>= 8)
        result = j__free(var_30.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
