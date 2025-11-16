// 函数: sub_6b73d0
// 地址: 0x6b73d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cb2e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t var_3c = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg1 != 0)
    result = _fclose(arg1)

if (arg1 == 0 || result != 0xffffffff)
    result.b = 1
else
    int32_t var_20_1 = 7
    int32_t var_24_1 = 0
    int16_t var_34 = 0
    sub_52e720(&var_34, u"fclose", 6)
    int32_t var_c_1 = 0
    __get_errno(&var_38)
    sub_6b9c90(&var_34, var_38, 1, &var_34)
    
    if (var_20_1 u>= 8)
        j__free(var_34.d)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_38)
return result
