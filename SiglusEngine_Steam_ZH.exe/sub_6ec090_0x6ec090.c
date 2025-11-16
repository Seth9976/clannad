// 函数: sub_6ec090
// 地址: 0x6ec090
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = *arg2
arg1[1] = arg2[1]
int32_t esi_1 = neg.d(arg2[2])
int32_t eax_3 = (1 - arg1[1]) * esi_1
arg1[2] = esi_1
arg1[3] = eax_3 + arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
int32_t ecx_1 = neg.d(arg2[6])
int32_t eax_8 = (1 - arg1[5]) * ecx_1
arg1[6] = ecx_1
arg1[7] = eax_8 + arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
int32_t result = neg.d(arg2[0xa])
int32_t edx_1 = (1 - arg1[9]) * result
arg1[0xa] = result
arg1[0xb] = edx_1 + arg2[0xb]
return result
