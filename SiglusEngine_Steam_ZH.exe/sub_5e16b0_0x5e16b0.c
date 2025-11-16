// 函数: sub_5e16b0
// 地址: 0x5e16b0
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
int32_t ecx = *arg2
int32_t* edx_1 = arg2[3]

if (ecx == arg2[1])
    ecx = 0

arg1[1] = *(edx_1 + ecx)
arg1[2] = *(edx_1 + ecx + 4)
arg2[3] += 8
int32_t var_2c
int16_t* eax_7 = sub_5b0600(arg2, &var_2c)
int32_t var_8_1 = 0

if (&arg1[3] != eax_7)
    sub_52e3c0(&arg1[3], eax_7, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 8)
    j__free(var_2c)

int32_t* esi_1 = *arg2
int32_t edx_2 = arg2[3]

if (esi_1 == arg2[1])
    esi_1 = nullptr

var_2c.w = 0
int32_t var_18_1 = 7
int32_t var_1c = 0
arg1[9] = *(esi_1 + edx_2)
arg1[0xa] = *(esi_1 + edx_2 + 4)
arg2[3] += 8
int128_t* result = sub_5def20(arg2, &arg1[0x20])
fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
