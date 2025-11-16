// 函数: sub_4283e0
// 地址: 0x4283e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
void* edi_1 = &arg2[1]

if (*arg2 != 0x7530)
    int32_t i
    
    do
        i = *edi_1
        edi_1 += 4
    while (i != 0x7530)

int32_t eax_1 = *edi_1
void* edi_2 = edi_1 + 4
*(arg3 + 0xc) = eax_1
var_8 = edi_2

if (eax_1 s<= 0)
    *arg4 = edi_2
    return 0

int32_t eax_3 = eax_1 * 0x28
sub_4d6960(eax_3, arg3 + 8, arg3 + 4, eax_3, "G00ANIME_PAT")
int32_t* ecx_1 = *(arg3 + 8)
int32_t esi = 0

if (*(arg3 + 0xc) s<= 0)
    *arg4 = edi_2
    return 0

while (true)
    ecx_1[4] = 0xffffffff
    ecx_1[5] = 0
    ecx_1[6] = 0
    ecx_1[7] = 0x50
    ecx_1[8].b = 0xff
    ecx_1[9] = 0
    *ecx_1 = 0
    ecx_1[1].b = 0
    sub_428360(&var_8, edi_2, ecx_1, &var_8)
    esi += 1
    ecx_1 = &ecx_1[0xa]
    
    if (esi s>= *(arg3 + 0xc))
        break
    
    edi_2 = var_8

*arg4 = var_8
return 0
