// 函数: sub_5db2e0
// 地址: 0x5db2e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int128_t xmm0 = *arg1
int128_t xmm0_1 = arg1[1]
sub_5979b0(arg2, arg2[3] + 0x20)
int32_t ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = 0

int128_t* eax_2 = arg2[3]
*(eax_2 + ecx_1) = xmm0
*(eax_2 + ecx_1 + 0x10) = xmm0_1
int32_t eax_4 = arg2[3] + 0x20
arg2[3] = eax_4
int32_t ebx
ebx.b = arg1[2].b
sub_5979b0(arg2, eax_4 + 1)
char* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

ecx_3[arg2[3]] = ebx.b
int32_t eax_8 = arg2[3] + 1
arg2[3] = eax_8
ebx.b = *(arg1 + 0x21)
sub_5979b0(arg2, eax_8 + 1)
char* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

int32_t result = arg2[3]
ecx_5[result] = ebx.b
arg2[3] += 1
return result
