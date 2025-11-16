// 函数: sub_6e49c0
// 地址: 0x6e49c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

void* edi_1 = *arg1
int32_t eax_1 = 0
int32_t i = 0
*(edi_1 + 0x16) = 0

if (arg1[1] s> 0)
    do
        uint32_t edx_1 = zx.d(*(edi_1 + i))
        i += 1
        eax_1 = eax_1 << 8 ^ *(((edx_1 ^ eax_1 u>> 0x18) << 2) + &data_adb920)
    while (i s< arg1[1])

int32_t ecx_2 = arg1[3]
int32_t esi_1 = 0

if (ecx_2 s> 0)
    do
        uint32_t edx_3 = zx.d(*(arg1[2] + esi_1))
        esi_1 += 1
        eax_1 = eax_1 << 8 ^ *(((edx_3 ^ eax_1 u>> 0x18) << 2) + &data_adb920)
    while (esi_1 s< ecx_2)

*(edi_1 + 0x16) = eax_1.b
*(edi_1 + 0x17) = (eax_1 u>> 8).b
*(edi_1 + 0x18) = (eax_1 u>> 0x10).b
*(edi_1 + 0x19) = (eax_1 u>> 0x18).b
