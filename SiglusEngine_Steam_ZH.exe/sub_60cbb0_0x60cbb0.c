// 函数: sub_60cbb0
// 地址: 0x60cbb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4e4
void* edi = data_bac510
*(edx + 0x164) = *(edx + 0x160)
int32_t eax_1 = *(edi + 0x103f0)

if (eax_1 s> 0)
    sub_5382a0(edx + 0x160, eax_1)
    edx = data_bac4e4
    edi = data_bac510

int32_t esi = 0
int32_t result = *(edx + 0x164) - *(edx + 0x160)

if ((result & 0xfffffff8) s> 0)
    void* edi_1 = edi + 0xbc28
    
    do
        edi_1 += 0x48
        result.b = *(edi_1 - 0x4c)
        *(*(edx + 0x160) + (esi << 3)) = result.b
        *(*(edx + 0x160) + (esi << 3) + 4) = *(edi_1 - 0x48)
        esi += 1
        result = (*(edx + 0x164) - *(edx + 0x160)) s>> 3
    while (esi s< result)

return result
