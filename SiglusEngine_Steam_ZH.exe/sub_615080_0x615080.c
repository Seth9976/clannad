// 函数: sub_615080
// 地址: 0x615080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ebx = data_bac4a4
void* esi = data_bac4e4
int32_t edi = *(esi + 0x20)
int32_t edx_2

if (edi s>= 0)
    int32_t eax_1
    int32_t edx_1
    edx_1:eax_1 = muls.dp.d(0x77280773, ebx[1] - *ebx)
    edx_2 = edx_1 s>> 9

if (edi s< 0 || (edx_2 u>> 0x1f) + edx_2 s<= edi)
    *(esi + 0x20) = 0
    *(esi + 0x28) = *(ebx[3] + 0xc)

int32_t edx_3 = *(esi + 0x28)
void* ecx_3
int32_t edi_2

if (edx_3 s>= 0)
    ecx_3 = ebx[3]
    edi_2 = *(esi + 0x20) << 4

if (edx_3 s< 0 || (*(ecx_3 + edi_2 + 4) - *(ecx_3 + edi_2)) s>> 3 s<= edx_3)
    edi_2 = *(esi + 0x20) << 4
    *(esi + 0x28) = *(edi_2 + ebx[3] + 0xc)

int32_t eax_10
int32_t edx_4
edx_4:eax_10 = muls.dp.d(0x77280773, ebx[1] - *ebx)
int32_t edx_5 = edx_4 s>> 9
*(esi + 0x1c) = (edx_5 u>> 0x1f) + edx_5
void* ecx_8 = ebx[3]
int32_t ecx_9 = *(esi + 0x28)
*(esi + 0x24) = (*(ecx_8 + edi_2 + 4) - *(ecx_8 + edi_2)) s>> 3
int32_t edx_6 = *(edi_2 + ebx[3])
*(esi + 0x2c) = *(edx_6 + (ecx_9 << 3))
int32_t result = *(edx_6 + (ecx_9 << 3) + 4)
*(esi + 0x30) = result
return result
