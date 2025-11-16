// 函数: sub_599240
// 地址: 0x599240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = data_bac45c
int32_t esi = 0
void* result = *(ecx + 0x10)
int32_t edi = *(result + 0x50)

if (edi s> 0)
    while (true)
        int32_t var_2c
        sub_698170(ecx, &var_2c, esi)
        int32_t var_8_1 = 0
        result = *(data_bac4e0 + 0xc)
        
        if (result != 0)
            result = result(*(arg1 + 0x1dc), &var_2c, eax_2)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 8)
            result = j__free(var_2c)
        
        esi += 1
        
        if (esi s>= edi)
            break
        
        ecx = data_bac45c

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
