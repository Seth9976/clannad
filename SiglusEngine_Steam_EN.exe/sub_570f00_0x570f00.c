// 函数: sub_570f00
// 地址: 0x570f00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 s>= 0xa)
    return 

int32_t edi_1 = arg1 - 1

if (edi_1 s< 0)
    return 

void* edx_1 = &(&data_20f02a8)[arg1 * 9]
void* eax = &(&data_20f0284)[arg1 * 9]
int32_t temp0_1

do
    temp0_1 = edi_1
    edi_1 -= 1
    *(eax + 0x1c) = *(eax - 8)
    edx_1 -= 0x24
    int32_t ecx_1 = *(eax - 4)
    eax -= 0x24
    *(edx_1 + 0x20) = ecx_1
    *(edx_1 + 0x24) = *(eax + 0x24)
    *(edx_1 + 0x28) = *(eax + 0x28)
    *(edx_1 + 0x2c) = *(eax + 0x2c)
    *(edx_1 + 0x30) = *(eax + 0x30)
    *(edx_1 + 0x34) = *(eax + 0x34)
    *(edx_1 + 0x38) = *(eax + 0x38)
while (temp0_1 - 1 s>= 0)
