// 函数: sub_4ba7a0
// 地址: 0x4ba7a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s< 0 || arg1 s>= data_7031bc)
    return 

void* edi_1 = arg1 * 0xca0
int32_t eax = sub_4d0f10(edi_1 + 0x72d6c0, edi_1 + 0x72dd10)

if (eax != 0 || sub_4d1be0(eax, edi_1 + 0x72ddd4, edi_1 + 0x72d784, 0x78) != 0)
    return 

void* ecx_2 = arg1 * 0xf40
int32_t i_2 = *(ecx_2 + 0x98c72c)
int32_t i_1 = *(ecx_2 + 0x98bf8c)

if (i_2 s< i_1)
    i_1 = i_2

*(ecx_2 + 0x98c7c4) = *(ecx_2 + 0x98c024)
*(ecx_2 + 0x98c7c8) = *(ecx_2 + 0x98c028)
eax = *(ecx_2 + 0x98c734)
int32_t edx_3 = *(ecx_2 + 0x98bf94)

if (eax == 0 || i_1 s<= 0)
    return 

int32_t i

do
    sub_4d1c30(eax, edx_3, eax, 0x1b4)
    eax += 0x1b4
    edx_3 += 0x1b4
    i = i_1
    i_1 -= 1
while (i != 1)
