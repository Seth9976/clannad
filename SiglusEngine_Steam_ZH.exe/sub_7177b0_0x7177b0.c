// 函数: sub_7177b0
// 地址: 0x7177b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9d2411
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result = arg3
char* result_1 = result
int32_t var_48 = 0
int32_t var_8_1 = 1
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
sub_541eb0(arg3, &data_b0018c, nullptr)
int32_t var_48_1 = 1
int32_t var_44
void* arg_4
int32_t* eax_4 = sub_6fdbd0(&arg_4, 
    "\tfloat4 L = -g_LightWorldDir;\n\t$(Out.color0) = g_LightAmbient * g_MaterialAmbient + "
"g_LightDiffuse * g_MaterialDiffuse * max(0, dot(", 
    &var_44, &arg_4)
var_8_1.b = 2
var_8_1.b = 3
char var_2c
sub_6b3810(result, sub_6bdb10(eax_4.b, eax_4, &var_2c, ", L));\n"), nullptr, 0xffffffff)
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44)

if (arg4 u>= 0x10)
    j__free(arg_4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
