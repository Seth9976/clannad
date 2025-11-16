// 函数: sub_5ae140
// 地址: 0x5ae140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9b0f88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *arg2

if (ecx == arg2[1])
    ecx = nullptr

arg1[0x2e] = *(ecx + arg2[3])
arg2[3] += 4
sub_5add90(arg1)
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

__builtin_memcpy(&arg1[0x4b], arg2[3] + eax_5, 0x70)
arg2[3] += 0x70
int32_t eax_6 = *arg2

if (eax_6 == arg2[1])
    eax_6 = 0

arg1[0x72].b = arg2[3][eax_6]
arg2[3] += 1
int32_t eax_8 = *arg2

if (eax_8 == arg2[1])
    eax_8 = 0

*(arg1 + 0x1c9) = arg2[3][eax_8]
arg2[3] += 1
int32_t eax_10 = *arg2

if (eax_10 == arg2[1])
    eax_10 = 0

*(arg1 + 0x1ca) = arg2[3][eax_10]
arg2[3] += 1
int32_t eax_12 = *arg2

if (eax_12 == arg2[1])
    eax_12 = 0

*(arg1 + 0x1cb) = arg2[3][eax_12]
arg2[3] += 1
int32_t eax_14 = *arg2

if (eax_14 == arg2[1])
    eax_14 = 0

arg1[0x73].b = arg2[3][eax_14]
arg2[3] += 1
int32_t eax_16 = *arg2

if (eax_16 == arg2[1])
    eax_16 = 0

*(arg1 + 0x1cd) = arg2[3][eax_16]
arg2[3] += 1
int16_t var_30
void** eax_18 = sub_5b0600(arg2, &var_30)
int32_t var_8_1 = 0

if (&arg1[0x74] != eax_18)
    sub_52e3c0(&arg1[0x74], eax_18, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t* edx = *arg2
bool cond:4 = edx == arg2[1]
var_30 = 0

if (cond:4)
    edx = nullptr

int32_t var_1c_1 = 7
int32_t var_20 = 0
arg1[0x7a] = *(edx + arg2[3])
arg2[3] += 4
int32_t result = sub_5b07d0(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
