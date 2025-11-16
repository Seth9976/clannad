// 函数: sub_60cd40
// 地址: 0x60cd40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4e4
void* edi = data_bac510
*(edx + 0x18c) = *(edx + 0x188)
int32_t eax_1 = *(edi + 0x10510)

if (eax_1 s> 0)
    sub_55c6f0(edx + 0x188, eax_1)
    edx = data_bac4e4
    edi = data_bac510

int32_t esi = 0
int32_t result = *(edx + 0x18c) - *(edx + 0x188)

if ((result & 0xfffffffc) s> 0)
    void* edi_1 = edi + 0x10530
    
    do
        edi_1 += 0xe4
        *(*(edx + 0x188) + (esi << 2)) = *(edi_1 - 0xe4)
        esi += 1
        result = (*(edx + 0x18c) - *(edx + 0x188)) s>> 2
    while (esi s< result)

return result
