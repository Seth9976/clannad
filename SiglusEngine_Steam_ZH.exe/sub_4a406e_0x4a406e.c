// 函数: sub_4a406e
// 地址: 0x4a406e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = *(arg2 + 0x38)
int32_t edi
int32_t var_10 = edi
void* ebx

if (edx_1 != 0xffffffff)
    ebx = *(*(arg1 + 0x14) + (edx_1 << 2))
else
    ebx = arg2

char* eax_2 = **(*(arg1 + 0x10) + (*(arg2 + 4) << 2))
void* const var_18

if (*eax_2 == 0 || eax_2[1] != 0)
    char* var_14_1 = eax_2
    var_18 = &data_ac8b20
else
    char* var_14 = eax_2
    var_18 = &data_ab7964

int32_t eax_3 = sub_74aa1b(arg3, arg4, var_18)
int32_t ecx = *(ebx + 0xc)
int32_t result

if (ecx == 0xffffffff)
    result = sub_74aa1b(&arg3[eax_3], arg4 - eax_3, &(*U"/=?<")[2])
else
    int32_t var_14_2 = ecx
    result = sub_74aa1b(&arg3[eax_3], arg4 - eax_3, "%u")

arg3[arg4 - 1] = 0
return result
