// 函数: sub_5df750
// 地址: 0x5df750
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b8868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

*arg1 = *(edx + arg2[3])
arg2[3] += 4
sub_5df4f0(arg1)
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

int128_t* ecx = arg2[3]
*(arg1 + 0x2c) = *(ecx + eax_5)
*(arg1 + 0x3c) = *(ecx + eax_5 + 0x10)
*(arg1 + 0x4c) = *(ecx + eax_5 + 0x20)
arg2[3] += 0x28
int16_t var_2c
int16_t* eax_6 = sub_5b0600(arg2, &var_2c)
int32_t var_8_1 = 0

if (&arg1[0x18] != eax_6)
    sub_52e3c0(&arg1[0x18], eax_6, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t edx_1 = *arg2
bool cond:0 = edx_1 == arg2[1]
var_2c = 0

if (cond:0)
    edx_1 = 0

int32_t var_18_1 = 7
int32_t var_1c = 0
*(arg1 + 0x78) = *(arg2[3] + edx_1)
arg2[3] += 0x10
int128_t* result = sub_5def20(arg2, &arg1[0x22])
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
