// 函数: sub_5df5e0
// 地址: 0x5df5e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
arg2[3] += 4
int128_t xmm0 = *(arg1 + 0x2c)
int128_t xmm0_1 = *(arg1 + 0x3c)
int64_t xmm0_2 = *(arg1 + 0x4c)
sub_5979b0(arg2, arg2[3] + 0x28)
int32_t eax_8 = *arg2

if (eax_8 == arg2[1])
    eax_8 = 0

int32_t var_14 = 7
int128_t* ecx_3 = arg2[3]
int32_t var_18 = 0
*(ecx_3 + eax_8) = xmm0
*(ecx_3 + eax_8 + 0x10) = xmm0_1
*(ecx_3 + eax_8 + 0x20) = xmm0_2
arg2[3] += 0x28
int16_t var_28 = 0
sub_52e3c0(&var_28, &arg1[0x18], 0, 0xffffffff)
int32_t var_8_1 = 0
sub_5b0590(arg2, &var_28)
int32_t var_8_2 = 0xffffffff

if (var_14 u>= 8)
    j__free(var_28.d)

int128_t xmm0_6 = *(arg1 + 0x78)
int32_t var_14_1 = 7
var_28 = 0
int32_t var_18_1 = 0
sub_5979b0(arg2, arg2[3] + 0x10)
int32_t edx = *arg2

if (edx == arg2[1])
    edx = 0

*(arg2[3] + edx) = xmm0_6
arg2[3] += 0x10
int32_t result = sub_5deeb0(arg2, &arg1[0x22])
fsbase->NtTib.ExceptionList = ExceptionList
return result
