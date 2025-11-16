// 函数: sub_6865c0
// 地址: 0x6865c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bc6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_60 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 7
int32_t var_18 = 0
int16_t var_28 = 0
sub_52e3c0(&var_28, arg1, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_5b0590(arg2, &var_28)
int32_t var_8_2 = 0xffffffff

if (var_14 u>= 8)
    j__free(var_28.d)

int128_t xmm0 = *(arg1 + 0x18)
int32_t esi = arg1[0x10]
var_28 = 0
int32_t var_14_1 = 7
int128_t xmm0_1 = *(arg1 + 0x28)
int32_t var_18_1 = 0
int64_t xmm0_2 = *(arg1 + 0x38)
sub_5979b0(arg2, arg2[3] + 0x2c)
int32_t eax_5 = *arg2

if (eax_5 == arg2[1])
    eax_5 = 0

int128_t* ecx_4 = arg2[3] + eax_5
*ecx_4 = xmm0
ecx_4[1] = xmm0_1
ecx_4[2].q = xmm0_2
*(ecx_4 + 0x28) = esi
int32_t eax_7 = arg2[3] + 0x2c
arg2[3] = eax_7
int32_t esi_1 = arg1[0x11]
sub_5979b0(arg2, eax_7 + 4)
int32_t* ecx_6 = *arg2

if (ecx_6 == arg2[1])
    ecx_6 = nullptr

*(ecx_6 + arg2[3]) = esi_1
int32_t eax_11 = arg2[3] + 4
arg2[3] = eax_11
int32_t esi_2 = arg1[0x12]
sub_5979b0(arg2, eax_11 + 4)
int32_t* ecx_8 = *arg2

if (ecx_8 == arg2[1])
    ecx_8 = nullptr

int32_t result = arg2[3]
*(ecx_8 + result) = esi_2
arg2[3] += 4
fsbase->NtTib.ExceptionList = ExceptionList
return result
