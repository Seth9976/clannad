// 函数: sub_703db0
// 地址: 0x703db0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9ceff0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_80
int32_t eax_2 = __security_cookie ^ &var_80
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_80 = 0
int32_t var_c_1 = 0
char var_64
int32_t var_34
char* eax_8 = sub_6fdcc0(arg1 + 0x1c, sub_70cd30(&ExceptionList, arg1 + 0x68, &var_34, ."), 
    &var_64, arg1 + 0x1c)
var_c_1.b = 1
char var_7c
char* eax_9 = sub_6bdb10(eax_8.b, eax_8, &var_7c, U".")
var_c_1.b = 2
char var_4c
char* eax_10 = sub_6bdb10(eax_9.b, eax_9, &var_4c, &(*U"yxwzgrab")[5])
var_c_1.b = 3
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_541b40(arg2, eax_10, 0, 0xffffffff)
int32_t var_38

if (var_38 u>= 0x10)
    j__free(var_4c.d)

int32_t var_38_1 = 0xf
int32_t var_3c = 0
var_4c = 0
int32_t var_68

if (var_68 u>= 0x10)
    j__free(var_7c.d)

int32_t var_68_1 = 0xf
int32_t var_6c = 0
var_7c = 0
int32_t var_50

if (var_50 u>= 0x10)
    j__free(var_64.d)

int32_t var_50_1 = 0xf
int32_t var_54 = 0
var_64 = 0
int32_t var_20

if (var_20 u>= 0x10)
    j__free(var_34)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &var_80)
return arg2
