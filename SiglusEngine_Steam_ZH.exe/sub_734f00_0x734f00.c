// 函数: sub_734f00
// 地址: 0x734f00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg1
void* eax = *(ebx + 0x1b8)
int32_t ecx = *(ebx + 0x12c)
int32_t ecx_1 = *(eax + 0x10)
int32_t ecx_2 = *(eax + 0x14)
int32_t ecx_3 = *(eax + 0x18)
int32_t ecx_4 = *(eax + 0x1c)
int32_t edx = arg3 << 2
void* esi = *(edx + *arg2)
arg3 = esi
char* edi = *(edx + arg2[1])
uint32_t ecx_7 = *(ebx + 0x5c) u>> 1
int32_t* edx_1 = *(edx + arg2[2])
uint32_t eax_5 = arg4
arg2 = edx_1
arg4 = ecx_7
char* result = *eax_5

if (ecx_7 != 0)
    uint32_t i
    
    do
        uint32_t edx_2 = zx.d(*edi)
        uint32_t ecx_8 = zx.d(*arg2)
        arg2 += 1
        int32_t edi_2 = *(ecx_1 + (ecx_8 << 2))
        int32_t ebx_8 = (*(ecx_4 + (edx_2 << 2)) + *(ecx_3 + (ecx_8 << 2))) s>> 0x10
        int32_t esi_2 = *(ecx_2 + (edx_2 << 2))
        char* ecx_10 = arg3
        uint32_t edx_3 = zx.d(*ecx_10)
        *result = (edx_3 + edi_2)[ecx]
        result[1] = *(edx_3 + ebx_8 + ecx)
        result[2] = (edx_3 + esi_2)[ecx]
        uint32_t edx_5 = zx.d(ecx_10[1])
        arg3 = &ecx_10[2]
        result[3] = (edi_2 + edx_5)[ecx]
        result[4] = *(edx_5 + ebx_8 + ecx)
        edi = &edi[1]
        result[5] = (edx_5 + esi_2)[ecx]
        result = &result[6]
        i = arg4
        arg4 -= 1
    while (i != 1)
    esi = arg3
    ebx = arg1
    edx_1 = arg2

if ((*(ebx + 0x5c) & 1) != 0)
    uint32_t ecx_27 = zx.d(*edi)
    uint32_t edx_6 = zx.d(*edx_1)
    uint32_t esi_3 = zx.d(*esi)
    int32_t ebx_12 = (*(ecx_4 + (ecx_27 << 2)) + *(ecx_3 + (edx_6 << 2))) s>> 0x10
    int32_t edi_6 = *(ecx_2 + (ecx_27 << 2))
    *result = (*(ecx_1 + (edx_6 << 2)) + esi_3)[ecx]
    result[1] = *(esi_3 + ebx_12 + ecx)
    result[2] = (esi_3 + edi_6)[ecx]

return result
