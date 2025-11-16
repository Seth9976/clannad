// 函数: sub_620c00
// 地址: 0x620c00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = data_bac4a0
void* eax

if (*(ecx + 0xcc) != 0 || *(data_bac484 + 0x138) != 0)
    eax.b = 1
    return eax

if (*(ecx + 0x10c) != 0)
    eax.b = 0
    return eax

void* edx = data_bac458
void* esi = data_bac4e4
int32_t eax_1 = *(edx + 0x364)

if (eax_1 == 1)
label_620c52:
    eax_1 = *(edx + 0x368)
    
    if (eax_1 == 0xffffffff)
        eax_1 = *(esi + 0x150)
    
    if (*(ecx + 0x110) s>= eax_1)
        eax_1.b = 0
        return eax_1
else if (eax_1 != 0)
    eax_1.b = *(esi + 0x14c)
    
    if (eax_1.b != 0)
        goto label_620c52

eax_1.b = *(edx + 0x38c) == 0
return eax_1
