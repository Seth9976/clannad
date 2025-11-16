// 函数: sub_701aa0
// 地址: 0x701aa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ceb70
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_esi
int32_t var_5c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_50 = 0
int32_t var_34
int32_t* eax_6 = sub_70cd30(&ExceptionList, arg1 + 0x1c, &var_34, U".")
int32_t var_c_1 = 0
char var_4c
char* eax_7 = sub_6bdb10(eax_6.b, eax_6, &var_4c, &(*U"yxwzgrab")[1])
var_c_1.b = 1
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_541b40(arg2, eax_7, 0, 0xffffffff)
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_54)
return arg2
