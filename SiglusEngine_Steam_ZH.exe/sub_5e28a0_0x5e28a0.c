// 函数: sub_5e28a0
// 地址: 0x5e28a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc930
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

int32_t var_2c = 7
int32_t var_30 = 0
*(ecx_1 + arg2[3]) = esi
arg2[3] += 4
int16_t var_40 = 0
sub_52e3c0(&var_40, &arg1[0x28], 0, 0xffffffff)
int32_t var_8_1 = 0
sub_5b0590(arg2, &var_40)
int32_t var_8_2 = 0xffffffff

if (var_2c u>= 8)
    j__free(var_40.d)

int32_t var_14 = 7
int16_t var_28 = 0
int32_t var_18 = 0
sub_52e3c0(&var_28, &arg1[0x2e], 0, 0xffffffff)
int32_t var_8_3 = 1
sub_5b0590(arg2, &var_28)
int32_t var_8_4 = 0xffffffff

if (var_14 u>= 8)
    j__free(var_28.d)

int128_t xmm0 = *(arg1 + 0xe8)
int32_t var_14_1 = 7
var_28 = 0
int32_t var_18_1 = 0
int64_t xmm0_1 = *(arg1 + 0xf8)
sub_5979b0(arg2, arg2[3] + 0x18)
int32_t ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = 0

int128_t* eax_10 = arg2[3]
*(eax_10 + ecx_7) = xmm0
*(eax_10 + ecx_7 + 0x10) = xmm0_1
arg2[3] += 0x18
sub_5dab90(&arg1[0x40], arg2)
sub_5e4630(&arg1[0x106], arg2)
int32_t result = sub_5e4630(&arg1[0x175], arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
