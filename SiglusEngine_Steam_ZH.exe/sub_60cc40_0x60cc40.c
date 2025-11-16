// 函数: sub_60cc40
// 地址: 0x60cc40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4e4
void* edi = data_bac510
*(edx + 0x174) = *(edx + 0x170)
int32_t eax_1 = *(edi + 0x10428)

if (eax_1 s> 0)
    sub_60ce30(edx + 0x170, eax_1)
    edx = data_bac4e4
    edi = data_bac510

char* esi = nullptr
int32_t result = *(edx + 0x174) - *(edx + 0x170)

if (result s> 0)
    void* edi_1 = edi + 0x1042d
    
    do
        edi_1 += 0x1c
        result.b = *(edi_1 - 0x1c)
        esi[*(edx + 0x170)] = result.b
        esi = &esi[1]
        result = *(edx + 0x174) - *(edx + 0x170)
    while (esi s< result)

return result
