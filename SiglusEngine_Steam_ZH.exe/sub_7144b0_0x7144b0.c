// 函数: sub_7144b0
// 地址: 0x7144b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d17e1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
int32_t var_8_1 = 0
int32_t var_30 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
int32_t* eax_3 = sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_8_2 = 0
int32_t var_30_1 = 1
int32_t var_2c
int32_t* ecx = &var_2c
int32_t var_8_3
char* eax_4

if (arg4 != 0)
    eax_4 = sub_714db0(eax_3, arg2, ecx, arg4)
    var_8_3 = 2
else
    eax_4 = sub_717570(ecx, arg2)
    var_8_3 = 1

int32_t* eax_5 = sub_6b3810(result, eax_4, nullptr, 0xffffffff)
var_8_3.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    eax_5 = j__free(var_2c)

if ((arg5 & 1) != 0 && arg2 != 0)
    int32_t var_8_4 = 3
    sub_6b3810(result, sub_7159b0(eax_5, arg2, &var_2c, arg4), nullptr, 0xffffffff)
    
    if (var_18 u>= 0x10)
        j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
