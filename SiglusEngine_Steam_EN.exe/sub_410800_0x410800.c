// 函数: sub_410800
// 地址: 0x410800
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const eax_4 = arg1
int32_t ebx = *(eax_4 + 0x24)

if (*(eax_4 + 0x20) s<= ebx)
    return 0

int32_t ecx_1 = *(eax_4 + 0x10)
void* ebp = ecx_1 + (ebx << 2)
int32_t ecx_2 = *(ecx_1 + (ebx << 2))

if ((ecx_2:1.b & 4) != 0)
    int32_t edx_1 = *(eax_4 + 0x158)
    *(eax_4 + 0x158) = edx_1 + 1
    int32_t ecx_4 = adc.d(*(eax_4 + 0x15c), 0, edx_1 u>= 0xffffffff)
    *(eax_4 + 0x24) = ebx + 1
    *(eax_4 + 0x15c) = ecx_4
    return 0xffffffff

if (arg2 == 0 && arg3 == 0)
    return 1

uint32_t edi_1 = zx.d(ecx_2.b)
void* const edx_5 = ecx_2 & 0x200
arg1 = edx_5

if (edi_1 == 0xff)
    uint32_t i
    
    do
        int16_t edx_6 = (*(ebp + 4)).w
        ebp += 4
        ebx += 1
        i = zx.d(edx_6.b)
        
        if ((edx_6:1.b & 2) != 0)
            arg1 = 0x200
        
        edi_1 += i
    while (i == 0xff)
    edx_5 = arg1

if (arg2 != 0)
    arg2[3] = edx_5
    arg2[2] = ecx_2 & 0x100
    *arg2 = *(eax_4 + 0xc) + *eax_4
    arg2[6] = *(eax_4 + 0x158)
    arg2[7] = *(eax_4 + 0x15c)
    int32_t edx_9 = *(eax_4 + 0x14)
    arg2[4] = *(edx_9 + (ebx << 3))
    int32_t edx_10 = *(edx_9 + (ebx << 3) + 4)
    arg2[1] = edi_1
    arg2[5] = edx_10

if (arg3 != 0)
    int32_t edx_11 = *(eax_4 + 0x158)
    *(eax_4 + 0xc) += edi_1
    *(eax_4 + 0x158) = edx_11 + 1
    int32_t ecx_13 = adc.d(*(eax_4 + 0x15c), 0, edx_11 u>= 0xffffffff)
    *(eax_4 + 0x24) = ebx + 1
    *(eax_4 + 0x15c) = ecx_13

return 1
