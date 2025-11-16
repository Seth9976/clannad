// 函数: sub_4d4fc2
// 地址: 0x4d4fc2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = *arg1[0x40]
int32_t edi
int32_t var_34 = edi
int32_t edi_2 = eax_1 & 0xfffff

if ((eax_1 & 0xfff00000) != 0x70300000)
    return 1

int32_t eax_4 = arg1[0x3f]
int32_t* ebx_1 = arg1[0x40]
void var_1c
sub_4d134f(arg1, (edi_2 & 0xfffff) | 0x20500000, ebx_1, &var_1c, 2)
int32_t* var_14

if (var_14 == 0)
    return 1

int32_t var_10_1 = 0

if (edi_2 u> 0)
    int32_t* edx_1 = var_14[4]
    int32_t* eax_9 = ebx_1[2] + (edi_2 << 3)
    
    do
        if (*eax_9 != *edx_1)
            return 1
        
        var_10_1 += 1
        eax_9 = &eax_9[1]
        edx_1 = &edx_1[1]
    while (var_10_1 u< edi_2)

int32_t* esi_2 = ebx_1[2]
int32_t* edi_3 = var_14[2]
void* edx_2 = &esi_2[edi_2]
int32_t* eax_12 = &edi_3[edi_2]

if (sub_4cf085(arg1, esi_2, edx_2, edi_3, eax_12, var_14, ebx_1, eax_4) != 0
        && sub_4cf085(arg1, edx_2, esi_2, edi_3, eax_12, var_14, ebx_1, eax_4) != 0
        && sub_4cf085(arg1, esi_2, edx_2, eax_12, edi_3, var_14, ebx_1, eax_4) != 0
        && sub_4cf085(arg1, edx_2, esi_2, eax_12, edi_3, var_14, ebx_1, eax_4) != 0
        && sub_4cf085(arg1, edi_3, eax_12, esi_2, edx_2, var_14, ebx_1, eax_4) != 0
        && sub_4cf085(arg1, eax_12, edi_3, esi_2, edx_2, var_14, ebx_1, eax_4) != 0
        && sub_4cf085(arg1, edi_3, eax_12, edx_2, esi_2, var_14, ebx_1, eax_4) != 0)
    return sub_4cf085(arg1, eax_12, edi_3, edx_2, esi_2, var_14, ebx_1, eax_4)

return 0
