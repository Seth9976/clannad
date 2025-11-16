// 函数: sub_5fdf40
// 地址: 0x5fdf40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9bd6b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5ff6d0(arg1, arg2)
int32_t esi = *(arg1 + 0x18c)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
arg2[3] += 4
int32_t esi_1 = *(arg1 + 0x238)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(ecx_3 + arg2[3]) = esi_1
arg2[3] += 4
sub_5fe1e0(arg1 + 0x24c, arg2)
int32_t esi_2 = *(arg1 + 0x3a8)
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_6 = *arg2

if (ecx_6 == arg2[1])
    ecx_6 = nullptr

int32_t var_14 = 7
int32_t var_18 = 0
*(ecx_6 + arg2[3]) = esi_2
arg2[3] += 4
int16_t var_28 = 0
sub_52e3c0(&var_28, arg1 + 0x468, 0, 0xffffffff)
int32_t var_8_1 = 0
int32_t* result = sub_5b0590(arg2, &var_28)

if (var_14 u>= 8)
    result = j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
return result
