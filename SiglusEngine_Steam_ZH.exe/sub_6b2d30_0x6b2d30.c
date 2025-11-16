// 函数: sub_6b2d30
// 地址: 0x6b2d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cace0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg2[1]
char* edx = *arg2
void* ecx_1 = eax_3 - edx
int32_t var_48 = 0

if (edx == eax_3)
    edx = nullptr

int32_t var_44
sub_6bd550(eax_3, edx, &var_44, ecx_1)
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_541b40(&var_2c, &var_44, 0, 0xffffffff)
var_8_1.b = 1
sub_6af1e0(arg1)

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return arg1
