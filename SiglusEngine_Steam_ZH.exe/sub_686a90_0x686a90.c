// 函数: sub_686a90
// 地址: 0x686a90
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
sub_52e3c0(&var_2c, arg1 + 0xc, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_5b0590(arg2, &var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t esi = *(arg1 + 0x24)
var_2c = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(ecx_3 + arg2[3]) = esi
arg2[3] += 4
int32_t esi_1 = *(arg1 + 0x28)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

*(ecx_5 + arg2[3]) = esi_1
arg2[3] += 4
int32_t esi_2 = *(arg1 + 0x2c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = nullptr

*(ecx_7 + arg2[3]) = esi_2
arg2[3] += 4
void* ebx
ebx.b = *(arg1 + 0x30)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_9 = *arg2

if (ecx_9 == arg2[1])
    ecx_9 = nullptr

ecx_9[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0x31)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_11 = *arg2

if (ecx_11 == arg2[1])
    ecx_11 = nullptr

ecx_11[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0x32)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_13 = *arg2

if (ecx_13 == arg2[1])
    ecx_13 = nullptr

ecx_13[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0x33)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_15 = *arg2

if (ecx_15 == arg2[1])
    ecx_15 = nullptr

ecx_15[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0x34)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_17 = *arg2

if (ecx_17 == arg2[1])
    ecx_17 = nullptr

ecx_17[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0x35)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_19 = *arg2

if (ecx_19 == arg2[1])
    ecx_19 = nullptr

ecx_19[arg2[3]] = ebx.b
arg2[3] += 1
ebx.b = *(arg1 + 0x36)
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_21 = *arg2

if (ecx_21 == arg2[1])
    ecx_21 = nullptr

int32_t result = arg2[3]
ecx_21[result] = ebx.b
arg2[3] += 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
