// 函数: sub_735bb0
// 地址: 0x735bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg1
void* ebx = *(edx + 0x1a4)

if (*(ebx + 0x18) == 0)
    int32_t eax_3 = (*(*(edx + 4) + 0x1c))(edx, *(ebx + 8), *(ebx + 0x14), *(ebx + 0x10), 0)
    edx = arg1
    *(ebx + 0xc) = eax_3

int32_t edi_1 = *(ebx + 0x10) - *(ebx + 0x18)
int32_t ecx = *arg3
int32_t eax_5 = arg4 - ecx

if (edi_1 u> eax_5)
    edi_1 = eax_5

int32_t eax_7 = *(edx + 0x60) - *(ebx + 0x14)

if (edi_1 u> eax_7)
    edi_1 = eax_7

(*(*(edx + 0x1c0) + 4))(arg1, *(ebx + 0xc) + (*(ebx + 0x18) << 2), arg2 + (ecx << 2), edi_1)
*arg3 += edi_1
*(ebx + 0x18) += edi_1
int32_t result = *(ebx + 0x10)

if (*(ebx + 0x18) u>= result)
    *(ebx + 0x14) += result
    *(ebx + 0x18) = 0

return result
