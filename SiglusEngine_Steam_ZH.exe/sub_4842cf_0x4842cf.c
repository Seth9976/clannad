// 函数: sub_4842cf
// 地址: 0x4842cf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi

if (arg2 == 0)
    return 0x88760385

void* eax_1 = *(arg1 + 0x24)

if (eax_1 == 0)
    return 0x88760384

*arg2 = *(eax_1 + 8)
void* edi_2 = &arg2[1]
void* esi_2 = eax_1 + 0xc
*edi_2 = *esi_2
void* edi_3 = edi_2 + 4
void* esi_3 = esi_2 + 4
*edi_3 = *esi_3
*(edi_3 + 4) = *(esi_3 + 4)
return 0
