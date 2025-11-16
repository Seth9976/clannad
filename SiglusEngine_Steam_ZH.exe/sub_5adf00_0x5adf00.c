// 函数: sub_5adf00
// 地址: 0x5adf00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_ac = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = arg1[0x2e]
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
int32_t eax_7 = arg2[3] + 4
arg2[3] = eax_7
void var_9c
__builtin_memcpy(&var_9c, &arg1[0x4b], 0x70)
sub_5979b0(arg2, eax_7 + 0x70)
int32_t eax_9 = *arg2

if (eax_9 == arg2[1])
    eax_9 = 0

__builtin_memcpy(arg2[3] + eax_9, &var_9c, 0x70)
int32_t** edi_3 = arg2
int32_t eax_11 = &edi_3[3][0x1c]
edi_3[3] = eax_11
int32_t* ebx
ebx.b = arg1[0x72].b
sub_5979b0(edi_3, eax_11 + 1)
int32_t* ecx_4 = *edi_3

if (ecx_4 == edi_3[1])
    ecx_4 = nullptr

*(ecx_4 + edi_3[3]) = ebx.b
int32_t eax_15 = edi_3[3] + 1
edi_3[3] = eax_15
ebx.b = *(arg1 + 0x1c9)
sub_5979b0(edi_3, eax_15 + 1)
int32_t* ecx_6 = *edi_3

if (ecx_6 == edi_3[1])
    ecx_6 = nullptr

*(ecx_6 + edi_3[3]) = ebx.b
int32_t eax_19 = edi_3[3] + 1
edi_3[3] = eax_19
ebx.b = *(arg1 + 0x1ca)
sub_5979b0(edi_3, eax_19 + 1)
int32_t* ecx_8 = *edi_3

if (ecx_8 == edi_3[1])
    ecx_8 = nullptr

*(ecx_8 + edi_3[3]) = ebx.b
int32_t eax_23 = edi_3[3] + 1
edi_3[3] = eax_23
ebx.b = *(arg1 + 0x1cb)
sub_5979b0(edi_3, eax_23 + 1)
int32_t* ecx_10 = *edi_3

if (ecx_10 == edi_3[1])
    ecx_10 = nullptr

*(ecx_10 + edi_3[3]) = ebx.b
int32_t eax_27 = edi_3[3] + 1
edi_3[3] = eax_27
ebx.b = arg1[0x73].b
sub_5979b0(edi_3, eax_27 + 1)
int32_t* ecx_12 = *edi_3

if (ecx_12 == edi_3[1])
    ecx_12 = nullptr

*(ecx_12 + edi_3[3]) = ebx.b
int32_t eax_31 = edi_3[3] + 1
edi_3[3] = eax_31
ebx.b = *(arg1 + 0x1cd)
sub_5979b0(edi_3, eax_31 + 1)
char* ecx_14 = *edi_3
void* const var_b0_8 = 0xffffffff

if (ecx_14 == edi_3[1])
    ecx_14 = nullptr

int32_t var_18 = 7
int32_t var_1c = 0
ecx_14[edi_3[3]] = ebx.b
edi_3[3] += 1
int32_t var_b4 = 0
int16_t var_2c = 0
sub_52e3c0(&var_2c, &arg1[0x74], var_b4, var_b0_8)
int32_t var_8_1 = 0
sub_5b0590(edi_3, &var_2c)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 8)
    j__free(var_2c.d)

int32_t esi_3 = arg1[0x7a]
var_2c = 0
int32_t var_18_1 = 7
int32_t var_1c_1 = 0
sub_5979b0(edi_3, &edi_3[3][1])
int32_t* ecx_18 = *edi_3

if (ecx_18 == edi_3[1])
    ecx_18 = nullptr

*(ecx_18 + edi_3[3]) = esi_3
edi_3[3] = &edi_3[3][1]
int32_t result = sub_5b06f0(arg1, edi_3)
fsbase->NtTib.ExceptionList = ExceptionList
return result
