// 函数: sub_5e0260
// 地址: 0x5e0260
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
int32_t eax_4 = arg2[3] + 4
arg2[3] = eax_4
int128_t xmm0 = *(arg1 + 0x2c)
int128_t xmm0_1 = *(arg1 + 0x3c)
int64_t xmm0_2 = *(arg1 + 0x4c)
sub_5979b0(arg2, eax_4 + 0x28)
int32_t eax_6 = *arg2

if (eax_6 == arg2[1])
    eax_6 = 0

int128_t* ecx_3 = arg2[3]
*(ecx_3 + eax_6) = xmm0
*(ecx_3 + eax_6 + 0x10) = xmm0_1
*(ecx_3 + eax_6 + 0x20) = xmm0_2
int32_t eax_8 = arg2[3] + 0x28
arg2[3] = eax_8
int32_t esi_1 = arg1[0x1d]
sub_5979b0(arg2, eax_8 + 4)
int32_t* ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = nullptr

*(ecx_5 + arg2[3]) = esi_1
int32_t eax_12 = arg2[3] + 4
arg2[3] = eax_12
int32_t* ebx
ebx.b = arg1[0x1e].b
sub_5979b0(arg2, eax_12 + 1)
char* ecx_7 = *arg2

if (ecx_7 == arg2[1])
    ecx_7 = nullptr

ecx_7[arg2[3]] = ebx.b
int32_t edi_2 = arg2[3] + 1
arg2[3] = edi_2
int32_t ecx_9 = arg1[0x20] - arg1[0x1f]
sub_5979b0(arg2, edi_2 + 4)
int32_t* ecx_11 = *arg2

if (ecx_11 == arg2[1])
    ecx_11 = nullptr

*(ecx_11 + arg2[3]) = ecx_9 s/ 0x8c
arg2[3] += 4
int32_t edi_4 = 0
int32_t result = (arg1[0x20] - arg1[0x1f]) s/ 0x8c

if (result s> 0)
    int32_t esi_6 = 0
    
    do
        sub_5e1560(arg1[0x1f] + esi_6, arg2)
        edi_4 += 1
        esi_6 += 0x8c
        result = (arg1[0x20] - arg1[0x1f]) s/ 0x8c
    while (edi_4 s< result)

return result
