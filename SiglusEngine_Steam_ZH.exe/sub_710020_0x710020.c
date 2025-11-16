// 函数: sub_710020
// 地址: 0x710020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d0ff8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** edi = *(arg1 + 8)
int32_t* edx = arg3
int32_t* var_30 = edx
struct _EXCEPTION_REGISTRATION_RECORD** i = *edi

while (i != edi)
    int32_t var_8_1 = 0
    int32_t var_2c
    result = sub_6b3810(arg2, sub_710100(&var_2c, edx, &i[0xa]), nullptr, 0xffffffff)
    int32_t var_8_2 = 0xffffffff
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)
    
    if (*(i + 0xd) == 0)
        struct _EXCEPTION_REGISTRATION_RECORD** i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            result = i[1]
            
            if (*(result + 0xd) == 0)
                while (i == result[2])
                    i = result
                    result = result[1]
                    
                    if (*(result + 0xd) != 0)
                        break
            
            i = result
        else
            i = i_1
            result = *i
            
            while (*(result + 0xd) == 0)
                i = result
                result = *i
    
    edx = var_30

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
