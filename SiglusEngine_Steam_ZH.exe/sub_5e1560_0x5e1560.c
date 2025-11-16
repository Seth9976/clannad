// 函数: sub_5e1560
// 地址: 0x5e1560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_9bc868
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
arg2[3] += 4
int32_t esi_1 = arg1[1]
int32_t edi_1 = arg1[2]
sub_5979b0(arg2, arg2[3] + 8)
int32_t ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = 0

int32_t var_1c = 7
int32_t* eax_8 = arg2[3]
int32_t var_20 = 0
*(eax_8 + ecx_3) = esi_1
*(eax_8 + ecx_3 + 4) = edi_1
arg2[3] += 8
int16_t var_30 = 0
sub_52e3c0(&var_30, &arg1[3], 0, 0xffffffff)
int32_t var_c_1 = 0
sub_5b0590(arg2, &var_30)
int32_t var_c_2 = 0xffffffff

if (var_1c u>= 8)
    j__free(var_30.d)

int32_t esi_2 = arg1[9]
int32_t edi_3 = arg1[0xa]
var_30 = 0
int32_t var_1c_1 = 7
int32_t var_20_1 = 0
sub_5979b0(arg2, arg2[3] + 8)
int32_t* edx = *arg2

if (edx == arg2[1])
    edx = nullptr

int32_t eax_12 = arg2[3]
*(edx + eax_12) = esi_2
*(edx + eax_12 + 4) = edi_3
arg2[3] += 8
int32_t result = sub_5deeb0(arg2, arg1 + 0x80)
fsbase->NtTib.ExceptionList = ExceptionList
return result
