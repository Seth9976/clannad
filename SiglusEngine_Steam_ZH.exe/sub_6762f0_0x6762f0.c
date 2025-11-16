// 函数: sub_6762f0
// 地址: 0x6762f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
int32_t eax_4 = arg2[3] + 4
arg2[3] = eax_4
void var_84
__builtin_memcpy(&var_84, &arg1[1], 0x80)
sub_5979b0(arg2, eax_4 + 0x80)
int32_t eax_6 = *arg2

if (eax_6 == arg2[1])
    eax_6 = 0

__builtin_memcpy(arg2[3] + eax_6, &var_84, 0x80)
int32_t eax_8 = arg2[3] + 0x80
arg2[3] = eax_8
int32_t esi_2 = arg1[0x21]
sub_5979b0(arg2, eax_8 + 4)
int32_t* ecx_4 = *arg2

if (ecx_4 == arg2[1])
    ecx_4 = nullptr

*(ecx_4 + arg2[3]) = esi_2
arg2[3] += 4
sub_5be990(&arg1[0x22], arg2)
int32_t* ebx
ebx.b = arg1[0x50].b
sub_5979b0(arg2, arg2[3] + 1)
char* ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = nullptr

ecx_7[arg2[3]] = ebx.b
int32_t eax_15 = arg2[3] + 1
arg2[3] = eax_15
ebx.b = *(arg1 + 0x141)
sub_5979b0(arg2, eax_15 + 1)
char* ecx_9 = *arg2

if (ecx_9 == arg2[1])
    ecx_9 = nullptr

ecx_9[arg2[3]] = ebx.b
int32_t eax_19 = arg2[3] + 1
arg2[3] = eax_19
ebx.b = *(arg1 + 0x142)
sub_5979b0(arg2, eax_19 + 1)
char* ecx_11 = *arg2

if (ecx_11 == arg2[1])
    ecx_11 = nullptr

ecx_11[arg2[3]] = ebx.b
int32_t eax_23 = arg2[3] + 1
arg2[3] = eax_23
int32_t esi_4 = arg1[0x51]
sub_5979b0(arg2, eax_23 + 4)
int32_t* ecx_13 = *arg2

if (ecx_13 == arg2[1])
    ecx_13 = nullptr

int32_t result = arg2[3]
*(ecx_13 + result) = esi_4
arg2[3] += 4
return result
