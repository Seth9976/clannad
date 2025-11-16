// 函数: sub_62f0a0
// 地址: 0x62f0a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9c0fc8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_68
int32_t eax_2 = __security_cookie ^ &var_68
int32_t var_6c = __security_cookie ^ &var_68
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != 0)
    void* var_34
    sub_52e820(&var_34, arg2)
    int32_t var_c_2 = 1
    int16_t var_4c
    int16_t* eax_7 = sub_548cb0(&var_34, 0xaf5b3c, &var_4c, &var_34)
    var_c_2.b = 2
    sub_684160(data_bac424, 5, eax_7)
    int32_t var_38
    
    if (var_38 u>= 8)
        j__free(var_4c.d)
    
    int32_t var_38_1 = 7
    int32_t var_3c_1 = 0
    var_4c = 0
    int32_t var_20
    
    if (var_20 u>= 8)
        j__free(var_34)
else
    int32_t var_50_1 = 7
    int32_t var_54_1 = 0
    int16_t var_64 = 0
    sub_52e720(&var_64, ")R(u", 0x16)
    int32_t var_c_1 = 0
    sub_684160(data_bac424, 5, &var_64)
    
    if (var_50_1 u>= 8)
        j__free(var_64.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_68)
return 1
