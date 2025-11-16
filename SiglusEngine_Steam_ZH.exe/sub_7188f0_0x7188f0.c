// 函数: sub_7188f0
// 地址: 0x7188f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d27a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_9c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_90 = 0
int32_t var_8_1 = 1
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
int32_t var_90_1 = 1
int32_t var_8c
char* eax_4 = sub_715ae0(sub_541eb0(arg3, &data_b0018c, nullptr), 0xa, &var_8c, 5, 0)
var_8_1.b = 2
char var_74
char* eax_5 = sub_70ce80(eax_4.b, 0xb09a70, &var_74, eax_4)
var_8_1.b = 3
char var_5c
char* eax_6 = sub_6bdb10(eax_5.b, eax_5, &var_5c, ".xyz = ")
var_8_1.b = 4
char var_2c
void* arg_4
char* eax_7 = sub_6fdcc0(eax_6, eax_6, &var_2c, &arg_4)
var_8_1.b = 5
var_8_1.b = 6
char var_44
sub_6b3810(result, sub_6bdb10(eax_7.b, eax_7, &var_44, ";\n"), nullptr, 0xffffffff)
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_48

if (var_48 u>= 0x10)
    j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c = 0
int32_t var_60

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64 = 0
var_74 = 0
int32_t var_78

if (var_78 u>= 0x10)
    j__free(var_8c)

if (arg4 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
