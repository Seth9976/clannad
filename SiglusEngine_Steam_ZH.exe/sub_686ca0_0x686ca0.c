// 函数: sub_686ca0
// 地址: 0x686ca0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9afe48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_30
int16_t* eax_3 = sub_5b0600(arg2, &var_30)
int32_t var_8_1 = 0

if (&arg1[3] != eax_3)
    sub_52e3c0(&arg1[3], eax_3, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_1c

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t* ecx_2 = *arg2
bool cond:0 = ecx_2 == arg2[1]
var_30 = 0

if (cond:0)
    ecx_2 = nullptr

int32_t var_1c_1 = 7
int32_t var_20 = 0
arg1[9] = *(ecx_2 + arg2[3])
arg2[3] += 4
int32_t eax_6 = *arg2

if (eax_6 == arg2[1])
    eax_6 = 0

arg1[0xa] = *(arg2[3] + eax_6)
arg2[3] += 4
int32_t eax_8 = *arg2

if (eax_8 == arg2[1])
    eax_8 = 0

arg1[0xb] = *(arg2[3] + eax_8)
arg2[3] += 4
int32_t eax_10 = *arg2

if (eax_10 == arg2[1])
    eax_10 = 0

arg1[0xc].b = arg2[3][eax_10]
arg2[3] += 1
char* eax_12 = *arg2

if (eax_12 == arg2[1])
    eax_12 = nullptr

*(arg1 + 0x31) = eax_12[arg2[3]]
arg2[3] += 1
char* eax_14 = *arg2

if (eax_14 == arg2[1])
    eax_14 = nullptr

*(arg1 + 0x32) = eax_14[arg2[3]]
arg2[3] += 1
char* eax_16 = *arg2

if (eax_16 == arg2[1])
    eax_16 = nullptr

*(arg1 + 0x33) = eax_16[arg2[3]]
arg2[3] += 1
char* eax_18 = *arg2

if (eax_18 == arg2[1])
    eax_18 = nullptr

arg1[0xd].b = eax_18[arg2[3]]
arg2[3] += 1
char* eax_20 = *arg2

if (eax_20 == arg2[1])
    eax_20 = nullptr

*(arg1 + 0x35) = eax_20[arg2[3]]
arg2[3] += 1
char* eax_22 = *arg2

if (eax_22 == arg2[1])
    eax_22 = nullptr

*(arg1 + 0x36) = eax_22[arg2[3]]
arg2[3] += 1
struct _EXCEPTION_REGISTRATION_RECORD** result = sub_686ee0(arg1, &arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
