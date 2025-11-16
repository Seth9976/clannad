// 函数: sub_677ed0
// 地址: 0x677ed0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b14a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = *(arg1 + 0xa4)
int16_t* result

if (arg2 == 0xa)
    *(eax_3 + 4) = arg2
    int32_t* eax_4 = data_bac49c
    eax_4[1] -= 1
    result = *(*eax_4 + (eax_4[1] << 2))
    *(*(arg1 + 0xa4) + 8) = result
else if (arg2 != 0x14)
    *(eax_3 + 4) = arg2
    result = sub_677d60(*(arg1 + 0xa4) + 0x24)
else
    *(eax_3 + 4) = arg2
    int32_t var_2c
    result = sub_677c10(&var_2c)
    int32_t var_8_1 = 0
    int32_t* ecx_3 = *(arg1 + 0xa4) + 0xc
    
    if (ecx_3 != result)
        result = sub_52e3c0(ecx_3, result, 0, 0xffffffff)
    
    int32_t var_18
    
    if (var_18 u>= 8)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
