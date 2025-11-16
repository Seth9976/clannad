// 函数: sub_714370
// 地址: 0x714370
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1789
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_30 = 0
int32_t var_8_1 = 1
void* var_50 = nullptr
*(result + 0x14) = 0xf
*(result + 0x10) = 0
void* const var_54 = &data_b0018c
*result = 0
sub_541eb0(arg3, var_54, var_50)
int32_t var_30_1 = 1
int32_t var_50_1 = 0xf
int32_t var_54_1 = 0
char var_64 = 0
void* arg_c
int32_t* eax_3 = sub_541b40(&var_64, &arg_c, 0, 0xffffffff)
int32_t var_2c
int32_t* ecx_1 = &var_2c
char* eax_4

if (arg4 != 0)
    eax_4 = sub_7145c0(eax_3, arg2, ecx_1, arg4, var_64)
    var_8_1.b = 3
else
    eax_4 = sub_7172a0(eax_3, arg2, ecx_1, var_64)
    var_8_1.b = 2

int32_t* eax_5 = sub_6b3810(result, eax_4, nullptr, 0xffffffff)
var_8_1.b = 1
int32_t var_18

if (var_18 u>= 0x10)
    eax_5 = j__free(var_2c)

if ((arg5 & 1) != 0 && arg2 != 0)
    var_8_1.b = 4
    sub_6b3810(result, sub_7155f0(eax_5, arg2, &var_2c, arg4), nullptr, 0xffffffff)
    
    if (var_18 u>= 0x10)
        j__free(var_2c)

if (arg6 u>= 0x10)
    j__free(arg_c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
