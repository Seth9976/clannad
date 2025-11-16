// 函数: sub_7159b0
// 地址: 0x7159b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d1d61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
int32_t var_8_1 = 0
int32_t var_64 = 0
*(result + 0x14) = 0xf
*(result + 0x10) = 0
char* result_1 = result
*result = 0
int32_t var_8_2 = 0
int32_t var_64_1 = 1
int32_t var_60
char* eax_4 = sub_715ae0(sub_541eb0(arg3, &data_b0018c, nullptr), 0x1b, &var_60, arg2, arg4)
int32_t var_8_3 = 1
char var_48
char* eax_5 = sub_70ce80(eax_4.b, "\t$(Out.color0).rgb *= ", &var_48, eax_4)
var_8_3.b = 2
var_8_3.b = 3
char var_30
sub_6b3810(result, sub_6bdb10(eax_5.b, eax_5, &var_30, ";\n"), nullptr, 0xffffffff)
int32_t var_1c

if (var_1c u>= 0x10)
    j__free(var_30.d)

int32_t var_1c_1 = 0xf
int32_t var_20 = 0
var_30 = 0
int32_t var_34

if (var_34 u>= 0x10)
    j__free(var_48.d)

int32_t var_34_1 = 0xf
int32_t var_38 = 0
var_48 = 0
int32_t var_4c

if (var_4c u>= 0x10)
    j__free(var_60)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
