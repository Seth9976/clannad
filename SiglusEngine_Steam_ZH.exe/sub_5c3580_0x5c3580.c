// 函数: sub_5c3580
// 地址: 0x5c3580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0fb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_34 = arg1
int16_t* result = arg3
int32_t* edx = arg2
int32_t* var_30 = edx

if (result s< arg4)
    int32_t esi_2 = result * 0x18
    void* i_1 = arg4 - result
    void* i
    
    do
        int32_t* edi_2 = *(arg1 + 0xa4) + esi_2
        int32_t var_2c
        result = sub_5b0600(edx, &var_2c)
        int32_t var_8_1 = 0
        
        if (edi_2 != result)
            result = sub_52e3c0(edi_2, result, 0, 0xffffffff)
        
        int32_t var_8_2 = 0xffffffff
        int32_t var_18
        
        if (var_18 u>= 8)
            result = j__free(var_2c)
        
        arg1 = var_34
        esi_2 += 0x18
        edx = var_30
        i = i_1
        i_1 -= 1
    while (i != 1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
