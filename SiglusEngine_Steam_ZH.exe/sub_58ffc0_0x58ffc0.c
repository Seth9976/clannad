// 函数: sub_58ffc0
// 地址: 0x58ffc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9b7c60
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_54 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 4) == 0)
    int128_t var_44
    __builtin_memset(&var_44, 0, 0x12)
    int32_t var_c_1 = 0
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    int16_t var_34
    sub_52e720(&var_34, u"MS Shell Dlg", 0xc)
    var_c_1.b = 1
    int16_t* var_58_1 = &var_34
    int32_t var_6c_1 = arg1 + 0xbc
    void var_7c
    void var_78
    sub_6c3da0(&var_44, var_7c, var_78)
    var_c_1.b = 0
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    int32_t var_58_3 = sub_6c40b0(&var_44)
    sub_6c42e0(arg1, &var_44, arg1 + 0x98, *(arg1 + 0xb0), *(arg1 + 0xb1), arg2)
    result = var_44.d
    
    if (result != 0)
        result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_48)
return result
