// 函数: sub_6c3da0
// 地址: 0x6c3da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9cc200
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = *arg1
arg1[3] = 0
sub_5979b0(arg1, 2)
int16_t* ecx = *arg1

if (ecx == arg1[1])
    ecx = nullptr

*(ecx + arg1[3]) = 1
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_2 = *arg1

if (ecx_2 == arg1[1])
    ecx_2 = nullptr

*(ecx_2 + arg1[3]) = 0xffff
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_4 = *arg1

if (ecx_4 == arg1[1])
    ecx_4 = nullptr

*(ecx_4 + arg1[3]) = 0
arg1[3] += 4
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_6 = *arg1

if (ecx_6 == arg1[1])
    ecx_6 = nullptr

*(ecx_6 + arg1[3]) = 0x80
arg1[3] += 4
sub_5979b0(arg1, arg1[3] + 4)
int32_t* ecx_8 = *arg1

if (ecx_8 == arg1[1])
    ecx_8 = nullptr

*(ecx_8 + arg1[3]) = 0x80cc0048
arg1[3] += 4
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_10 = *arg1

if (ecx_10 == arg1[1])
    ecx_10 = nullptr

*(ecx_10 + arg1[3]) = 0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_12 = *arg1

if (ecx_12 == arg1[1])
    ecx_12 = nullptr

*(ecx_12 + arg1[3]) = 0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_14 = *arg1

if (ecx_14 == arg1[1])
    ecx_14 = nullptr

*(ecx_14 + arg1[3]) = 0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_16 = *arg1

if (ecx_16 == arg1[1])
    ecx_16 = nullptr

*(ecx_16 + arg1[3]) = 0x64
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_18 = *arg1

if (ecx_18 == arg1[1])
    ecx_18 = nullptr

*(ecx_18 + arg1[3]) = 0xa0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_20 = *arg1

if (ecx_20 == arg1[1])
    ecx_20 = nullptr

*(ecx_20 + arg1[3]) = 0
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_22 = *arg1

if (ecx_22 == arg1[1])
    ecx_22 = nullptr

*(ecx_22 + arg1[3]) = 0
arg1[3] += 2
int32_t var_8_1 = 2
int32_t var_2c
sub_662840(arg1, sub_6adbd0(&var_2c, arg2))
int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_26 = *arg1

if (ecx_26 == arg1[1])
    ecx_26 = nullptr

*(ecx_26 + arg1[3]) = 8
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 2)
int16_t* ecx_28 = *arg1

if (ecx_28 == arg1[1])
    ecx_28 = nullptr

*(ecx_28 + arg1[3]) = 0x190
arg1[3] += 2
sub_5979b0(arg1, arg1[3] + 1)
char* ecx_30 = *arg1

if (ecx_30 == arg1[1])
    ecx_30 = nullptr

ecx_30[arg1[3]] = 0
arg1[3] += 1
sub_5979b0(arg1, arg1[3] + 1)
char* esi_1 = *arg1

if (esi_1 == arg1[1])
    esi_1 = nullptr

esi_1[arg1[3]] = 1
arg1[3] += 1
int32_t var_8_3 = 3
int32_t var_44
int32_t result = sub_662840(arg1, sub_6adbd0(&var_44, arg3))
int32_t var_30

if (var_30 u>= 8)
    result = j__free(var_44)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
