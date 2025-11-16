// 函数: sub_5ff6d0
// 地址: 0x5ff6d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba8e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 7
int16_t var_2c = 0
int32_t var_1c = 0
sub_52e3c0(&var_2c, arg1 + 0xa0, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_5b0590(arg2, &var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t esi = *(arg1 + 0xb8)
var_2c = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(ecx_3 + arg2[3]) = esi
arg2[3] += 4
int32_t esi_1 = *(arg1 + 0xbc)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

*(ecx_5 + arg2[3]) = esi_1
arg2[3] += 4
void* ebx
ebx.b = *(arg1 + 0xc4)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = nullptr

ecx_7[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0xc5)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_10 = *arg2

if (ecx_10 == arg2[1])
    ecx_10 = nullptr

int32_t result = arg2[3]
ecx_10[result] = ebx.b
arg2[3] += 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
