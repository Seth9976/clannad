// 函数: sub_60ccc0
// 地址: 0x60ccc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4e4
void* edi = data_bac510
*(edx + 0x180) = *(edx + 0x17c)
int32_t eax_1 = *(edi + 0x1049c)

if (eax_1 s> 0)
    sub_60ce30(edx + 0x17c, eax_1)
    edx = data_bac4e4
    edi = data_bac510

char* esi = nullptr
int32_t result = *(edx + 0x180) - *(edx + 0x17c)

if (result s> 0)
    void* edi_1 = edi + 0x104a1
    
    do
        edi_1 += 0x1c
        result.b = *(edi_1 - 0x1c)
        esi[*(edx + 0x17c)] = result.b
        esi = &esi[1]
        result = *(edx + 0x180) - *(edx + 0x17c)
    while (esi s< result)

return result
