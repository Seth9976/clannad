// 函数: sub_5dab90
// 地址: 0x5dab90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_c = arg1
int32_t esi = *arg1
sub_5979b0(arg2, arg2[3] + 4)
int32_t* ecx_1 = *arg2

if (ecx_1 == arg2[1])
    ecx_1 = nullptr

*(ecx_1 + arg2[3]) = esi
int32_t eax_4 = arg2[3] + 4
arg2[3] = eax_4
int32_t esi_1 = arg1[2]
sub_5979b0(arg2, eax_4 + 4)
int32_t* ecx_3 = *arg2

if (ecx_3 == arg2[1])
    ecx_3 = nullptr

*(ecx_3 + arg2[3]) = esi_1
int32_t eax_8 = arg2[3] + 4
arg2[3] = eax_8
int32_t esi_2 = arg1[3]
int32_t edi_1 = arg1[4]
sub_5979b0(arg2, eax_8 + 8)
int32_t ecx_5 = *arg2

if (ecx_5 == arg2[1])
    ecx_5 = 0

int32_t* result = arg2[3]
*(result + ecx_5) = esi_2
*(result + ecx_5 + 4) = edi_1
arg2[3] += 8
return result
