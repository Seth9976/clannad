// 函数: sub_7049b0
// 地址: 0x7049b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9cf030
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_50
int32_t eax_2 = __security_cookie ^ &var_50
int32_t __saved_edi
int32_t var_5c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
var_50 = 0
int32_t var_c_1 = 0
char var_4c
int32_t var_34
char* eax_8 = sub_6fdcc0(arg1 + 0x1c, sub_70cd30(&ExceptionList, arg1 + 0x68, &var_34, ."), 
    &var_4c, arg1 + 0x1c)
var_c_1.b = 1
arg2[5] = 0xf
arg2[4] = 0
*arg2 = 0
sub_541b40(arg2, eax_8, 0, 0xffffffff)
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
sub_745f2b(eax_2 ^ &var_50)
return arg2
