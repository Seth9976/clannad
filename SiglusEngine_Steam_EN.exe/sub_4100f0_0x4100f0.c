// 函数: sub_4100f0
// 地址: 0x4100f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 

int32_t eax_1 = 0
*(*arg1 + 0x16) = 0
*(*arg1 + 0x17) = 0
*(*arg1 + 0x18) = 0
*(*arg1 + 0x19) = 0
int32_t edi_1 = arg1[1]
char* esi_5 = nullptr

if (edi_1 s> 0)
    do
        int32_t edx_1
        edx_1.b = esi_5[*arg1]
        eax_1 = eax_1 << 8 ^ *(((edx_1 ^ eax_1 u>> 0x18) << 2) + &data_63cbf8)
        esi_5 = &esi_5[1]
    while (esi_5 s< edi_1)

int32_t edi_2 = arg1[3]
char* esi_6 = nullptr

if (edi_2 s> 0)
    do
        int32_t edx_4
        edx_4.b = esi_6[arg1[2]]
        eax_1 = eax_1 << 8 ^ *(((edx_4 ^ eax_1 u>> 0x18) << 2) + &data_63cbf8)
        esi_6 = &esi_6[1]
    while (esi_6 s< edi_2)

*(*arg1 + 0x16) = eax_1.b
*(*arg1 + 0x17) = (eax_1 u>> 8).b
*(*arg1 + 0x18) = (eax_1 u>> 0x10).b
*(*arg1 + 0x19) = (eax_1 u>> 0x18).b
